/*
 * XREFs of PopSystemIrpCompletion @ 0x14056D720
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140170D80 (PoFxReportDevicePoweredOn.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140155E00 (PopFxIncrementDeviceSleepCount.c)
 *     IoFindDeviceThatFailedIrp @ 0x14016C298 (IoFindDeviceThatFailedIrp.c)
 *     PopFreeIrp @ 0x140171080 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140171184 (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceIrpPended @ 0x1402E1BC0 (PopDiagTraceIrpPended.c)
 *     PopPrepChildWake @ 0x14056DBD0 (PopPrepChildWake.c)
 *     PopReadyParentSleep @ 0x14056DC30 (PopReadyParentSleep.c)
 *     PopReadyChildWake @ 0x14056DCC8 (PopReadyChildWake.c)
 *     PopDiagTraceDriverVeto @ 0x14057EA94 (PopDiagTraceDriverVeto.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 *v5; // rdi
  int v6; // ebx
  NTSTATUS Status; // eax
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  int v14; // r12d
  IRP *v15; // rbx
  LONG v16; // r14d
  _QWORD *v17; // rsi
  char *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rcx
  __int64 **v24; // rax
  __int64 v25; // rax
  __int64 **v26; // rcx
  __int64 *j; // rsi
  __int64 v28; // rax
  __int64 **v29; // rcx
  __int64 *v30; // rbp
  __int64 *v31; // r10
  __int64 *i; // r9
  __int64 *v33; // r9
  char v34; // [rsp+30h] [rbp-88h]
  bool v35; // [rsp+34h] [rbp-84h]
  __int64 DeviceThatFailedIrp; // [rsp+38h] [rbp-80h]
  IRP *v37; // [rsp+40h] [rbp-78h] BYREF
  NTSTATUS v38; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v40[2]; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0LL;
  v5 = *(__int64 **)(a3 + 216);
  v6 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v37 = a2;
    v38 = Status;
    v40[1] = 16LL;
    v40[0] = &v37;
    EtwTraceKernelEvent((__int64)v40, 1u, 0x80008000, 0x1227u, 0x401802u);
  }
  if ( v6 == 1 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5 - 14);
    v9 = *(v5 - 8);
    v10 = v8;
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 136) )
      {
        _m_prefetchw((const void *)(v9 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v9 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v9 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5 - 14);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(v10);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5 - 14);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
    __writecr8(v10);
  }
  v14 = a2->IoStatus.Status;
  if ( v14 >= 0 )
    DeviceThatFailedIrp = 0LL;
  else
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v15 = (IRP *)qword_140418730;
  v16 = 0;
  v17 = (_QWORD *)*(v5 - 17);
  v34 = 0;
  v35 = (PopCurrentBroadcast & 0x80000000000000LL) != 0;
  v18 = (char *)qword_140418730 + 48;
  v19 = *(v5 - 16);
  v37 = (IRP *)qword_140418730;
  if ( v19 != IopRootDeviceNode )
    v3 = v19;
  v40[0] = v17;
  if ( (unsigned __int8)(*(_BYTE *)qword_140418730 - 2) <= 1u && *((int *)qword_140418730 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v5 - 14));
    ObfDereferenceObjectWithTag((PVOID)*(v5 - 14), 0x72496F50u);
  }
  v20 = 9LL * *((unsigned __int8 *)v5 + 56);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140418730 + 1, &LockHandle);
  v23 = (__int64 *)*v5;
  v24 = (__int64 **)v5[1];
  if ( *(__int64 **)(*v5 + 8) != v5 || *v24 != v5 )
    goto LABEL_72;
  *v24 = v23;
  v23[1] = (__int64)v24;
  if ( !LOBYTE(v15[2].IoStatus.Status) )
  {
    v28 = (__int64)&v18[8 * v20 + 56];
    v29 = *(__int64 ***)(v28 + 8);
    if ( *v29 == (__int64 *)v28 )
    {
      *v5 = v28;
      v5[1] = (__int64)v29;
      *v29 = v5;
      *(_QWORD *)(v28 + 8) = v5;
      --*(_DWORD *)&v18[8 * v20 + 20];
      if ( v3 )
      {
        LOBYTE(v22) = v35;
        LOBYTE(v21) = *((_BYTE *)v5 + 56);
        if ( (unsigned __int8)PopReadyParentSleep(v3 + 144, v18, v21, v22) )
          v16 = 1;
      }
      v30 = (__int64 *)v5[4];
      if ( v30 != v5 + 4 )
      {
        do
        {
          LOBYTE(v21) = *((_BYTE *)v5 + 56);
          LOBYTE(v22) = v35;
          if ( (unsigned __int8)PopReadyParentSleep(v30[5], v18, v21, v22) )
            ++v16;
          v30 = (__int64 *)*v30;
        }
        while ( v30 != v5 + 4 );
        v15 = v37;
        v17 = (_QWORD *)v40[0];
      }
      if ( v14 < 0 && DeviceThatFailedIrp && LOBYTE(v15->Type) == 3 )
        PopDiagTraceDriverVeto(DeviceThatFailedIrp, v5);
      while ( v17 )
      {
        PopPrepChildWake(v17 + 18, v18);
        v17 = (_QWORD *)*v17;
      }
      v31 = v5 + 2;
      for ( i = (__int64 *)v5[2]; i != v31; i = (__int64 *)*v33 )
        PopPrepChildWake(*(i - 1), v18);
      if ( v14 < 0
        && !BYTE2(v15[2].IoStatus.Pointer)
        && (v14 != -1073741637 || !BYTE3(v15[2].IoStatus.Pointer))
        && SLODWORD(v15[2].ThreadListEntry.Flink) >= 0 )
      {
        LODWORD(v15[2].ThreadListEntry.Flink) = v14;
        v15[2].ThreadListEntry.Blink = (struct _LIST_ENTRY *)v5[8];
        v34 = 1;
      }
      goto LABEL_67;
    }
LABEL_72:
    __fastfail(3u);
  }
  v25 = (__int64)&v18[8 * v20 + 24];
  v26 = *(__int64 ***)(v25 + 8);
  if ( *v26 != (__int64 *)v25 )
    goto LABEL_72;
  *v5 = v25;
  v5[1] = (__int64)v26;
  *v26 = v5;
  *(_QWORD *)(v25 + 8) = v5;
  ++*(_DWORD *)&v18[8 * v20 + 20];
  while ( v17 )
  {
    LOBYTE(v21) = *((_BYTE *)v5 + 56);
    if ( (unsigned __int8)PopReadyChildWake(v17 + 18, v18, v21) )
      ++v16;
    v17 = (_QWORD *)*v17;
  }
  for ( j = (__int64 *)v5[2]; j != v5 + 2; j = (__int64 *)*j )
  {
    LOBYTE(v21) = *((_BYTE *)v5 + 56);
    if ( (unsigned __int8)PopReadyChildWake(*(j - 1), v18, v21) )
      ++v16;
  }
LABEL_67:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v34 )
  {
    KeSetEvent((PRKEVENT)v15->AssociatedIrp.MasterIrp, 0, 0);
  }
  else if ( v16 > 0 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)v15->ThreadListEntry.Flink, 0, v16, 0);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)v15->ThreadListEntry.Blink, 0, 1, 0);
  return 3221225494LL;
}
