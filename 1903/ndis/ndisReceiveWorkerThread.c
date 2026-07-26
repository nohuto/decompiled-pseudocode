/*
 * XREFs of ndisReceiveWorkerThread @ 0x1C0034270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C007C038 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

_UNKNOWN **__fastcall ndisReceiveWorkerThread(ULONG a1)
{
  int v2; // edx
  KSPIN_LOCK *v3; // rbx
  KSPIN_LOCK v4; // rdi
  KIRQL v5; // si
  KSPIN_LOCK *v6; // rax
  KSPIN_LOCK v7; // rax
  struct _WORK_QUEUE_ITEM *v8; // rdx
  LARGE_INTEGER v9; // rdx
  _UNKNOWN **result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+40h] [rbp-31h] BYREF
  _WORD v13[27]; // [rsp+42h] [rbp-2Fh] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+17h] BYREF

  ProcNumber = 0;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      12,
      11,
      (struct _GUID *)&WPP_20761223a8353ee4634577064cfecc97_Traceguids,
      a1);
  }
  Affinity.Mask = 1LL << ProcNumber.Number;
  v3 = (KSPIN_LOCK *)((char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    KeWaitForSingleObject(v3 + 4, Executive, 0, 0, 0LL);
    v4 = 0LL;
    v5 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel(v3 + 2);
    v6 = (KSPIN_LOCK *)*v3;
    if ( (KSPIN_LOCK *)*v3 == v3 )
      goto LABEL_5;
    v4 = *v3;
    if ( (KSPIN_LOCK *)v6[1] != v3 || (v7 = *v6, *(_QWORD *)(v7 + 8) != v4) )
      __fastfail(3u);
    *v3 = v7;
    *(_QWORD *)(v7 + 8) = v3;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)v4 = 0LL;
    --*((_DWORD *)v3 + 6);
    if ( (KSPIN_LOCK *)*v3 == v3 )
    {
LABEL_5:
      *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * a1) = 0;
      KeCancelTimer((PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)a1]);
    }
    else
    {
      v9 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
      if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
        v9.QuadPart = -1LL;
      KeSetTimer(
        (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)a1],
        v9,
        (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)a1 + 8]);
    }
    KeReleaseSpinLockFromDpcLevel(v3 + 2);
    if ( v4 )
      break;
LABEL_7:
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
  v8 = (struct _WORK_QUEUE_ITEM *)((char *)ndisPerCpuPoisonPills + 32 * a1);
  if ( (struct _WORK_QUEUE_ITEM *)v4 != v8 )
  {
    if ( (_BYTE)word_1C00E805C )
    {
      memset(v13, 0, sizeof(v13));
      *(_DWORD *)&v13[21] = 0x20000;
      WnodeEventItem = 56;
      *(_QWORD *)&v13[3] = qword_1C00E8050;
      *(GUID *)&v13[11] = EtwGuidNdisReceive;
      LOBYTE(v13[1]) = 22;
      LOBYTE(v13[23]) = 0;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    (*(void (__fastcall **)(_QWORD))(v4 + 16))(*(_QWORD *)(v4 + 24));
    if ( (_BYTE)word_1C00E805C )
    {
      memset(v13, 0, 0x2EuLL);
      *(_DWORD *)&v13[21] = 0x20000;
      WnodeEventItem = 48;
      *(_QWORD *)&v13[3] = qword_1C00E8050;
      *(GUID *)&v13[11] = EtwGuidNdisReceive;
      LOBYTE(v13[1]) = 23;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    goto LABEL_7;
  }
  if ( (KSPIN_LOCK *)*v3 != v3 )
  {
    ndisInsertInWorkQueue((struct _NDIS_WORK_QUEUE *)v3, v8, 1u);
    goto LABEL_7;
  }
  if ( v5 != 2 )
    KeLowerIrql(v5);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_D(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          (int)v8,
                          12,
                          12,
                          (struct _GUID *)&WPP_20761223a8353ee4634577064cfecc97_Traceguids,
                          a1);
  }
  return result;
}
