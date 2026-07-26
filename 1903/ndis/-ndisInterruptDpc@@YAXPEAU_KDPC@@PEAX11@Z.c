/*
 * XREFs of ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C784 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisTraceDpcEnd @ 0x1C007E800 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007E8E8 (ndisTraceDpcStart.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00A09BC (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF4B8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF64C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        KSPIN_LOCK *SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r11
  int v5; // edi
  unsigned int v6; // esi
  char *v7; // rbx
  unsigned int PcwDatapathEventMask; // eax
  unsigned int CurrentCpu; // ecx
  __int64 v13; // r14
  void (__fastcall *v14)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r12
  unsigned int v15; // eax
  void (__fastcall *v16)(__int64, PVOID, __int64 *, _QWORD); // r13
  char v17; // r15
  char DatapathCyclesMask; // si
  __int64 v19; // rcx
  PKSPIN_LOCK v20; // r13
  PVOID v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // eax
  KIRQL v25; // al
  int v26; // edx
  struct _NDIS_REFCOUNT_BLOCK *v27; // rcx
  KSPIN_LOCK *v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  char *v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rcx
  LARGE_INTEGER v34; // rax
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  KIRQL v38; // [rsp+40h] [rbp-89h]
  char Type_high; // [rsp+41h] [rbp-88h]
  unsigned int Number; // [rsp+48h] [rbp-81h]
  __int64 v42; // [rsp+50h] [rbp-79h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-71h]
  struct NDIS_PCW_CONTEXT v44; // [rsp+60h] [rbp-69h] BYREF
  struct NDIS_PCW_CONTEXT v45; // [rsp+78h] [rbp-51h] BYREF
  __int64 Clock; // [rsp+90h] [rbp-39h]
  struct _KDPC *v47; // [rsp+98h] [rbp-31h]
  _QWORD WnodeEventItem[6]; // [rsp+A0h] [rbp-29h] BYREF
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+D0h] [rbp+7h] BYREF

  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
  v5 = 0;
  v6 = -1;
  v47 = Dpc;
  v7 = DeferredContext;
  SpinLock = SystemArgument1;
  PcwDatapathEventMask = v4->PcwDatapathEventMask;
  LOWORD(DeferredContext) = 0;
  v44.PcwBlock = 0LL;
  CurrentCpu = -1;
  v44.DatapathEventsMask = 0;
  v44.DatapathCyclesMask = 0;
  v44.CurrentCpu = -1;
  if ( PcwDatapathEventMask || v4->PcwDatapathCycleMask )
  {
    LODWORD(DeferredContext) = v4->PcwDatapathCycleMask;
    v44.DatapathEventsMask = PcwDatapathEventMask;
    PcwDataBlock = v4->PcwDataBlock;
    v44.DatapathCyclesMask = (unsigned int)DeferredContext;
    v44.PcwBlock = PcwDataBlock;
    if ( !PcwDataBlock )
    {
      CurrentCpu = v44.CurrentCpu;
      LOWORD(DeferredContext) = v44.DatapathCyclesMask;
      v44.PcwBlock = v4->PcwDataBlock;
    }
  }
  if ( ((unsigned __int16)DeferredContext & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v44, 0xCu, 0x23uLL);
    CurrentCpu = v44.CurrentCpu;
  }
  if ( (v44.DatapathEventsMask & 1) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v44.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)v44.PcwBlock->DatapathEventReferences
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) != -1 && MiniportSupportsReceiveThrottle(v4)
    || (memset(&WatchdogInformation, 0, sizeof(WatchdogInformation)),
        KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0)
    && ndisDpcWatchdogLimit
    && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit )
  {
    ndisQueueDpcWorkItem(Dpc, v7, SystemArgument1, SystemArgument2, SHIBYTE(WPP_MAIN_CB.DeviceQueue.Type));
    return;
  }
  v13 = *((_QWORD *)v7 + 12);
  v14 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))*((_QWORD *)v7 + 23);
  v42 = 0LL;
  v15 = *(_DWORD *)(v13 + 48);
  v16 = (void (__fastcall *)(__int64, PVOID, __int64 *, _QWORD))*((_QWORD *)v7 + 3);
  Clock = 0LL;
  v45.PcwBlock = 0LL;
  *(_QWORD *)&v45.DatapathEventsMask = 0LL;
  v45.CurrentCpu = -1;
  if ( v15 || *(_DWORD *)(v13 + 80) )
  {
    v45.DatapathEventsMask = v15;
    v45.DatapathCyclesMask = *(_DWORD *)(v13 + 80);
    v45.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v13 + 40);
    if ( !v45.PcwBlock )
      v45.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v13 + 40);
  }
  if ( HIBYTE(dword_1C00E8058) )
  {
    v17 = 1;
    ndisTraceDpcStart(v13, 1LL);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v17 = 0;
  }
  if ( v7[4] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 26, 0xFFFFFFFF) != 1 )
      goto LABEL_27;
    goto LABEL_63;
  }
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    {
      v6 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
    }
    else
    {
      v6 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(v13 + 3296))];
      if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v6 )
        v6 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
    }
  }
  LODWORD(v42) = v6;
  DatapathCyclesMask = v45.DatapathCyclesMask;
  if ( (v45.DatapathCyclesMask & 1) != 0 )
  {
    ndisPcwStartCycleCounter(&v45, 0);
    DatapathCyclesMask = v45.DatapathCyclesMask;
  }
  v19 = *((_QWORD *)v7 + 1);
  if ( v7[193] == 1 )
  {
    v20 = SpinLock;
    v14(v19, (unsigned int)SpinLock, SystemArgument2, &v42, 0LL);
    v21 = SystemArgument2;
  }
  else
  {
    v21 = SystemArgument2;
    v16(v19, SystemArgument2, &v42, 0LL);
    v20 = SpinLock;
  }
  if ( (DatapathCyclesMask & 1) != 0 )
    ndisPcwEndCycleCounter(&v45, 0, 0xDuLL);
  if ( (v42 & 0x100000000LL) != 0 )
  {
    v22 = 0LL;
    v23 = *((_QWORD *)v7 + 12);
    Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
    Number = KeGetPcr()->Prcb.Number;
    v24 = 0;
    if ( *(_DWORD *)(v23 + 48) || *(_DWORD *)(v23 + 80) )
    {
      v22 = *(_QWORD *)(v23 + 40);
      v24 = *(_DWORD *)(v23 + 48);
      if ( !v22 )
        v22 = *(_QWORD *)(v23 + 40);
    }
    if ( (v24 & 0x800000) != 0 )
    {
      v36 = v22 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v36 + 288);
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 4432));
    v27 = *(struct _NDIS_REFCOUNT_BLOCK **)(v23 + 4888);
    v38 = v25;
    if ( v27 )
      NdisReferenceWithTag(v27, 0x4Du);
    v28 = (KSPIN_LOCK *)(v23 + 4432);
    ++*(_DWORD *)(v23 + 4440);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v26,
        20,
        13,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v23,
        *(_DWORD *)(v23 + 4440));
      v28 = (KSPIN_LOCK *)(v23 + 4432);
    }
    KeReleaseSpinLock(v28, v38);
    if ( v7[193] )
      v5 = (int)v20;
    v29 = *((_QWORD *)v7 + 27) + 80LL * (Number + ndisMaxNumberOfProcessors * v5);
    SpinLock = (PKSPIN_LOCK)(v29 + 72);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v29 + 72));
    if ( (*(_DWORD *)(v29 + 68) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v7 + 26);
      ndisDereferenceMiniport(v23, 0x4Du);
    }
    else
    {
      *(_QWORD *)(v29 + 32) = v47;
      *(_DWORD *)(v29 + 64) = Number;
      *(_QWORD *)(v29 + 40) = v7;
      *(_QWORD *)(v29 + 48) = v20;
      *(_QWORD *)(v29 + 56) = v21;
      *(_DWORD *)(v29 + 68) = 1;
      if ( Type_high )
      {
        v30 = 1;
        if ( HIBYTE(word_1C00E805C) )
        {
          memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
          HIDWORD(WnodeEventItem[5]) = 0x20000;
          LOWORD(WnodeEventItem[0]) = 48;
          WnodeEventItem[1] = qword_1C00E8050;
          *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
          BYTE4(WnodeEventItem[0]) = 24;
          IoWMIWriteEvent(WnodeEventItem);
          v30 = *(_DWORD *)(v29 + 68);
        }
        *(_DWORD *)(v29 + 68) = v30 | 2;
        v31 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v31 + 2);
        v32 = (__int64 *)*((_QWORD *)v31 + 1);
        if ( (char *)*v32 != v31 )
          __fastfail(3u);
        *(_QWORD *)v29 = v31;
        *(_QWORD *)(v29 + 8) = v32;
        *v32 = v29;
        *((_QWORD *)v31 + 1) = v29;
        ++*((_DWORD *)v31 + 6);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v31 + 2);
        KeReleaseSemaphore((PRKSEMAPHORE)v31 + 1, 0, 1, 0);
        v33 = KeGetPcr()->Prcb.Number;
        if ( !_InterlockedExchange((volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4 * v33), 1) )
        {
          v34 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
          if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
            v34.QuadPart = -1LL;
          LODWORD(v33) = KeGetPcr()->Prcb.Number;
          KeSetTimer(
            (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v33],
            v34,
            (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v33 + 8]);
        }
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v29, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
      }
    }
    KeReleaseSpinLockFromDpcLevel(SpinLock);
    goto LABEL_27;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 26, 0xFFFFFFFF) == 1 && v7[4] )
LABEL_63:
    KeSetEvent((PRKEVENT)(v7 + 128), 0, 0);
LABEL_27:
  if ( v17 )
  {
    v37 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v13, 1LL, v37 - Clock);
  }
}
