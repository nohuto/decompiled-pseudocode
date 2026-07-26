/*
 * XREFs of ?ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C001EC30
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C007E9D0 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007EAB8 (ndisTraceDpcStart.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(_QWORD *a1)
{
  int v2; // r15d
  unsigned int Number; // ecx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  char v7; // r12
  char v8; // r12
  ULONG v9; // eax
  __int64 v10; // r14
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rbx
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  void (__fastcall *v15)(__int64, _QWORD, __int64, __int64 *, _QWORD); // rdi
  unsigned int v16; // eax
  unsigned int v17; // ecx
  char DatapathCyclesMask; // bl
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // eax
  KIRQL v23; // al
  int v24; // edx
  struct _NDIS_REFCOUNT_BLOCK *v25; // rcx
  __int64 v26; // rdi
  int v27; // eax
  char *v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rcx
  LARGE_INTEGER v31; // rax
  char v32; // di
  KIRQL v33; // al
  __int64 v34; // rdx
  ULONG_PTR v35; // r8
  KIRQL v36; // si
  int v37; // ecx
  unsigned __int8 v38; // r10
  char v39; // r9
  int v41; // edx
  __int64 Clock; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  ULONG_PTR v45; // r15
  unsigned int v46; // edx
  int v47; // ecx
  struct _KEVENT *v48; // rcx
  char v49; // [rsp+40h] [rbp-79h]
  KIRQL v50; // [rsp+41h] [rbp-78h]
  KIRQL v51; // [rsp+42h] [rbp-77h]
  char Type_high; // [rsp+43h] [rbp-76h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-75h] BYREF
  __int64 v54; // [rsp+48h] [rbp-71h]
  void (__fastcall *v55)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-69h]
  __int64 v56; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-59h]
  ULONG v58; // [rsp+64h] [rbp-55h]
  __int64 v59; // [rsp+68h] [rbp-51h]
  __int64 v60; // [rsp+70h] [rbp-49h]
  struct NDIS_PCW_CONTEXT v61; // [rsp+78h] [rbp-41h] BYREF
  __int64 v62; // [rsp+90h] [rbp-29h]
  _QWORD WnodeEventItem[6]; // [rsp+98h] [rbp-21h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+C8h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+D8h] [rbp+1Fh] BYREF

  v50 = 0;
  v2 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v4 = a1[4];
  v5 = a1[6];
  v6 = a1[5];
  v7 = *((_BYTE *)a1 + 68);
  ++ndisWorkitemDpcs;
  v8 = v7 & 2;
  v62 = v4;
  v9 = *((_DWORD *)a1 + 16);
  v10 = *(_QWORD *)(v6 + 96);
  v59 = v5;
  v60 = a1[7];
  v57 = Number;
  v58 = v9;
  if ( Number != v9 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v9, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v8 )
    v50 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel(a1 + 9);
  *((_DWORD *)a1 + 17) &= ~1u;
  KeReleaseSpinLockFromDpcLevel(a1 + 9);
  v12 = *(_QWORD *)(v6 + 96);
  v13 = 0LL;
  v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 24);
  v15 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *, _QWORD))(v6 + 184);
  v56 = 0LL;
  v16 = *(_DWORD *)(v12 + 48);
  v55 = v14;
  v54 = 0LL;
  v61.PcwBlock = 0LL;
  *(_QWORD *)&v61.DatapathEventsMask = 0LL;
  v61.CurrentCpu = -1;
  if ( v16 || *(_DWORD *)(v12 + 80) )
  {
    v61.DatapathEventsMask = v16;
    v61.DatapathCyclesMask = *(_DWORD *)(v12 + 80);
    v61.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v12 + 40);
    if ( !v61.PcwBlock )
      v61.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v12 + 40);
  }
  if ( HIBYTE(dword_1C00E8098) )
  {
    v49 = 1;
    ndisTraceDpcStart(v12, 1LL);
    Clock = WmiGetClock(0LL, 0LL);
    v14 = v55;
    v13 = Clock;
    v54 = Clock;
  }
  else
  {
    v49 = 0;
  }
  if ( *(_BYTE *)(v6 + 4) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v6 + 104)) )
      KeSetEvent((PRKEVENT)(v6 + 128), 0, 0);
  }
  else
  {
    if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
    {
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        v17 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
      else
      {
        v17 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(v12 + 3296))];
        if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v17 )
          v17 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
      }
    }
    else
    {
      v17 = -1;
    }
    DatapathCyclesMask = v61.DatapathCyclesMask;
    LODWORD(v56) = v17;
    if ( (v61.DatapathCyclesMask & 1) != 0 )
    {
      ndisPcwStartCycleCounter(&v61, 0);
      DatapathCyclesMask = v61.DatapathCyclesMask;
    }
    v19 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v6 + 193) == 1 )
      v15(v19, (unsigned int)v59, v60, &v56, 0LL);
    else
      v14(v19, v60, &v56, 0LL);
    if ( (DatapathCyclesMask & 1) != 0 )
      ndisPcwEndCycleCounter(&v61, 0, 0xDuLL);
    if ( (v56 & 0x100000000LL) != 0 )
    {
      v20 = 0LL;
      v21 = *(_QWORD *)(v6 + 96);
      Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
      LODWORD(v55) = KeGetPcr()->Prcb.Number;
      v22 = 0;
      if ( *(_DWORD *)(v21 + 48) || *(_DWORD *)(v21 + 80) )
      {
        v20 = *(_QWORD *)(v21 + 40);
        v22 = *(_DWORD *)(v21 + 48);
        if ( !v20 )
          v20 = *(_QWORD *)(v21 + 40);
      }
      if ( (v22 & 0x800000) != 0 )
      {
        v43 = v20 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v43 + 288);
      }
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 4432));
      v25 = *(struct _NDIS_REFCOUNT_BLOCK **)(v21 + 4888);
      v51 = v23;
      if ( v25 )
        NdisReferenceWithTag(v25, 0x4Du);
      ++*(_DWORD *)(v21 + 4440);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          20,
          13,
          (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
          v21,
          *(_DWORD *)(v21 + 4440));
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 4432), v51);
      if ( *(_BYTE *)(v6 + 193) )
        v2 = v59;
      v26 = *(_QWORD *)(v6 + 216) + 80LL * ((unsigned int)v55 + ndisMaxNumberOfProcessors * v2);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v26 + 72));
      if ( (*(_DWORD *)(v26 + 68) & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 104));
        ndisDereferenceMiniport(v21, 0x4Du);
      }
      else
      {
        *(_QWORD *)(v26 + 32) = v62;
        *(_QWORD *)(v26 + 48) = v59;
        *(_QWORD *)(v26 + 56) = v60;
        *(_DWORD *)(v26 + 64) = (_DWORD)v55;
        *(_QWORD *)(v26 + 40) = v6;
        *(_DWORD *)(v26 + 68) = 1;
        if ( Type_high )
        {
          v27 = 1;
          if ( HIBYTE(word_1C00E809C) )
          {
            memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
            HIDWORD(WnodeEventItem[5]) = 0x20000;
            LOWORD(WnodeEventItem[0]) = 48;
            WnodeEventItem[1] = qword_1C00E8090;
            *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
            BYTE4(WnodeEventItem[0]) = 24;
            IoWMIWriteEvent(WnodeEventItem);
            v27 = *(_DWORD *)(v26 + 68);
          }
          *(_DWORD *)(v26 + 68) = v27 | 2;
          v28 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v28 + 2);
          v29 = (__int64 *)*((_QWORD *)v28 + 1);
          if ( (char *)*v29 != v28 )
            __fastfail(3u);
          *(_QWORD *)v26 = v28;
          *(_QWORD *)(v26 + 8) = v29;
          *v29 = v26;
          *((_QWORD *)v28 + 1) = v26;
          ++*((_DWORD *)v28 + 6);
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v28 + 2);
          KeReleaseSemaphore((PRKSEMAPHORE)v28 + 1, 0, 1, 0);
          v30 = KeGetPcr()->Prcb.Number;
          if ( !_InterlockedExchange((volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4 * v30), 1) )
          {
            v31 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
            if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
              v31.QuadPart = -1LL;
            LODWORD(v30) = KeGetPcr()->Prcb.Number;
            KeSetTimer(
              (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v30],
              v31,
              (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v30 + 8]);
          }
        }
        else
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v26, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v26 + 72));
    }
    else if ( !_InterlockedDecrement((volatile signed __int32 *)(v6 + 104)) && *(_BYTE *)(v6 + 4) )
    {
      KeSetEvent((PRKEVENT)(v6 + 128), 0, 0);
    }
    v13 = v54;
  }
  if ( v49 )
  {
    v44 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v12, 1LL, v44 - v13);
  }
  if ( !v8 && v50 != 2 )
    KeLowerIrql(v50);
  if ( v57 != v58 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      20,
      25,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      v10);
  }
  v32 = 0;
  v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 4432));
  v35 = *(_QWORD *)(v10 + 4888);
  v36 = v33;
  if ( !v35 || v35 - 2 <= 1 )
    goto LABEL_62;
  if ( v35 == 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  if ( *(_BYTE *)(v35 + 2) <= 0x4Du )
    ndisBugCheckEx(0x1EuLL, 2uLL, v35, 0x4DuLL);
  v37 = *(unsigned __int8 *)(v35 + 1);
  if ( *(_BYTE *)(v35 + 1) )
  {
    if ( v37 != 1 )
      goto LABEL_62;
    v45 = v35 + 4936;
    v46 = *(_DWORD *)(v35 + 4992);
    v47 = (unsigned __int16)v46 >> 1;
    if ( v46 >> 17 < 0x3FFE && v47 == (v46 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v35 + 4936));
      *(_DWORD *)(v45 + 56) &= 0x10001u;
      goto LABEL_62;
    }
    if ( v47 != 0 || (v46 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v35 + 4936), 0);
      goto LABEL_62;
    }
    goto LABEL_96;
  }
  v34 = *(_QWORD *)(v35 + 8);
  if ( !v34 || (v38 = *(_BYTE *)(v35 + 3)) == 0 )
  {
LABEL_58:
    if ( _bittestandreset((signed __int32 *)(v35 + 24), 0xDu) )
      goto LABEL_62;
LABEL_96:
    ndisBugCheckEx(0x1EuLL, 0LL, v35, 0x4DuLL);
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v34 + 2LL * (unsigned __int8)v37) == 77 )
    {
      v39 = *(_BYTE *)(v34 + 2LL * (unsigned __int8)v37 + 1);
      if ( v39 )
        break;
    }
    LOBYTE(v37) = v37 + 1;
    if ( (unsigned __int8)v37 >= v38 )
      goto LABEL_58;
  }
  *(_BYTE *)(v34 + 2LL * (unsigned __int8)v37 + 1) = v39 - 1;
LABEL_62:
  if ( (*(_DWORD *)(v10 + 4440))-- == 1 )
    v32 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v34) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v34,
      20,
      14,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      v10,
      *(_DWORD *)(v10 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 4432), v36);
  if ( v32 )
  {
    v48 = *(struct _KEVENT **)(v10 + 1608);
    if ( v48 )
      KeSetEvent(v48, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v41) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v41,
      20,
      26,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      v10);
  }
}
