/*
 * XREFs of ndisInterruptDpc @ 0x1C0006B20
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00172B0 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0065C7C (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r11
  unsigned int v5; // edi
  unsigned int CurrentCpu; // ecx
  unsigned int PcwDatapathEventMask; // edx
  unsigned int PcwDatapathCycleMask; // eax
  __int64 v13; // r8
  __int64 v14; // rsi
  KSPIN_LOCK *v15; // r10
  int v16; // r14d
  void (__fastcall *v17)(__int64, _QWORD, PVOID, __int64 *, _QWORD); // r12
  char v18; // r15
  char DatapathCyclesMask; // di
  __int64 v20; // rcx
  PVOID v21; // r12
  __int64 v22; // rdi
  unsigned int Number; // eax
  bool v24; // zf
  __int64 v25; // rdx
  KIRQL v26; // al
  struct _NDIS_REFCOUNT_BLOCK *v27; // rcx
  KSPIN_LOCK *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  char *v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  LARGE_INTEGER v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 Clock; // rax
  __int64 v39; // rax
  KIRQL v40; // [rsp+30h] [rbp-99h]
  char Type_high; // [rsp+31h] [rbp-98h]
  unsigned int v43; // [rsp+38h] [rbp-91h]
  PKSPIN_LOCK SpinLock; // [rsp+40h] [rbp-89h]
  __int64 v45; // [rsp+48h] [rbp-81h] BYREF
  __int64 v46; // [rsp+50h] [rbp-79h]
  struct NDIS_PCW_CONTEXT v47; // [rsp+58h] [rbp-71h] BYREF
  struct NDIS_PCW_CONTEXT v48; // [rsp+70h] [rbp-59h] BYREF
  struct _KDPC *v49; // [rsp+88h] [rbp-41h]
  __int64 v50; // [rsp+90h] [rbp-39h]
  _QWORD WnodeEventItem[6]; // [rsp+98h] [rbp-31h] BYREF
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+C8h] [rbp-1h] BYREF

  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)DeferredContext + 12);
  v5 = -1;
  v49 = Dpc;
  CurrentCpu = -1;
  PcwDatapathEventMask = v4->PcwDatapathEventMask;
  v47.PcwBlock = v4->PcwDataBlock;
  PcwDatapathCycleMask = v4->PcwDatapathCycleMask;
  v47.DatapathEventsMask = PcwDatapathEventMask;
  v47.DatapathCyclesMask = PcwDatapathCycleMask;
  v47.CurrentCpu = -1;
  if ( (PcwDatapathCycleMask & 0x1000) != 0 )
  {
    ndisPcwEndCycleCounter(&v47, 0xCu, 0x23uLL);
    LOBYTE(PcwDatapathEventMask) = v47.DatapathEventsMask;
    CurrentCpu = v47.CurrentCpu;
  }
  if ( (PcwDatapathEventMask & 1) != 0 )
  {
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      v47.CurrentCpu = CurrentCpu;
    }
    ++*(_QWORD *)((char *)v47.PcwBlock->DatapathEventReferences
                + ndisPcwPerCpuDataStride * CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) != -1 && MiniportSupportsReceiveThrottle(v4)
    || KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
    && ndisDpcWatchdogLimit
    && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit )
  {
    ndisQueueDpcWorkItem(Dpc, DeferredContext, SystemArgument1, SystemArgument2, SHIBYTE(WPP_MAIN_CB.DeviceQueue.Type));
    return;
  }
  v14 = *((_QWORD *)DeferredContext + 12);
  v15 = (KSPIN_LOCK *)*((_QWORD *)DeferredContext + 3);
  v16 = 0;
  v45 = 0LL;
  v48.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v14 + 40);
  v17 = (void (__fastcall *)(__int64, _QWORD, PVOID, __int64 *, _QWORD))*((_QWORD *)DeferredContext + 23);
  v48.DatapathEventsMask = *(_DWORD *)(v14 + 48);
  v48.DatapathCyclesMask = *(_DWORD *)(v14 + 80);
  SpinLock = v15;
  v46 = 0LL;
  v48.CurrentCpu = -1;
  if ( HIBYTE(dword_1C00A2098) )
  {
    v18 = 1;
    ndisTraceDpcStart(v14, 1LL);
    Clock = WmiGetClock(0LL, 0LL, v37);
    v15 = SpinLock;
    v46 = Clock;
  }
  else
  {
    v18 = 0;
  }
  if ( DeferredContext[4] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) != 1 )
      goto LABEL_24;
    goto LABEL_58;
  }
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    {
      v5 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
    }
    else
    {
      v5 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(v14 + 3320))];
      if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v5 )
        v5 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
    }
  }
  LODWORD(v45) = v5;
  DatapathCyclesMask = v48.DatapathCyclesMask;
  if ( (v48.DatapathCyclesMask & 1) != 0 )
  {
    ndisPcwStartCycleCounter(&v48, 0);
    DatapathCyclesMask = v48.DatapathCyclesMask;
  }
  v20 = *((_QWORD *)DeferredContext + 1);
  if ( DeferredContext[193] == 1 )
  {
    v17(v20, (unsigned int)SystemArgument1, SystemArgument2, &v45, 0LL);
    v21 = SystemArgument2;
  }
  else
  {
    v21 = SystemArgument2;
    ((void (__fastcall *)(__int64, PVOID, __int64 *, _QWORD))v15)(v20, SystemArgument2, &v45, 0LL);
  }
  if ( (DatapathCyclesMask & 1) != 0 )
    ndisPcwEndCycleCounter(&v48, 0, 0xDuLL);
  if ( (v45 & 0x100000000LL) != 0 )
  {
    v22 = *((_QWORD *)DeferredContext + 12);
    Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
    Number = KeGetPcr()->Prcb.Number;
    v24 = (*(_DWORD *)(v22 + 48) & 0x800000) == 0;
    v25 = *(_QWORD *)(v22 + 40);
    v50 = v22;
    v43 = Number;
    if ( !v24 )
    {
      v36 = v25 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v36 + 288);
    }
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 4472));
    v27 = *(struct _NDIS_REFCOUNT_BLOCK **)(v22 + 4928);
    v40 = v26;
    if ( v27 )
      NdisReferenceWithTag(v27);
    v28 = (KSPIN_LOCK *)(v22 + 4472);
    ++*(_DWORD *)(v22 + 4480);
    if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    {
      WPP_SF_qD(13LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v22, *(unsigned int *)(v22 + 4480));
      v28 = (KSPIN_LOCK *)(v22 + 4472);
    }
    KeReleaseSpinLock(v28, v40);
    if ( DeferredContext[193] )
      v16 = (int)SystemArgument1;
    v29 = *((_QWORD *)DeferredContext + 27) + 80LL * (v43 + ndisMaxNumberOfProcessors * v16);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v29 + 72));
    if ( (*(_DWORD *)(v29 + 68) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 26);
      LOBYTE(v30) = 77;
      ndisDereferenceMiniport(v50, v30);
    }
    else
    {
      *(_QWORD *)(v29 + 32) = v49;
      *(_DWORD *)(v29 + 64) = v43;
      *(_QWORD *)(v29 + 40) = DeferredContext;
      *(_QWORD *)(v29 + 48) = SystemArgument1;
      *(_QWORD *)(v29 + 56) = v21;
      *(_DWORD *)(v29 + 68) = 1;
      if ( Type_high )
      {
        v31 = 1;
        if ( HIBYTE(word_1C00A209C) )
        {
          memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
          HIDWORD(WnodeEventItem[5]) = 0x20000;
          LOWORD(WnodeEventItem[0]) = 48;
          WnodeEventItem[1] = qword_1C00A2090;
          *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
          BYTE4(WnodeEventItem[0]) = 24;
          IoWMIWriteEvent(WnodeEventItem);
          v31 = *(_DWORD *)(v29 + 68);
        }
        *(_DWORD *)(v29 + 68) = v31 | 2;
        v32 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v32 + 2);
        v33 = (__int64 *)*((_QWORD *)v32 + 1);
        if ( (char *)*v33 != v32 )
          __fastfail(3u);
        *(_QWORD *)v29 = v32;
        *(_QWORD *)(v29 + 8) = v33;
        *v33 = v29;
        *((_QWORD *)v32 + 1) = v29;
        ++*((_DWORD *)v32 + 6);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v32 + 2);
        KeReleaseSemaphore((PRKSEMAPHORE)v32 + 1, 0, 1, 0);
        v34 = KeGetPcr()->Prcb.Number;
        if ( !_InterlockedExchange((volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4 * v34), 1) )
        {
          v35 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
          if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
            v35.QuadPart = -1LL;
          LODWORD(v34) = KeGetPcr()->Prcb.Number;
          KeSetTimer(
            (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v34],
            v35,
            (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v34 + 8]);
        }
      }
      else
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v29, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v29 + 72));
    goto LABEL_24;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeferredContext + 26, 0xFFFFFFFF) == 1 && DeferredContext[4] )
LABEL_58:
    KeSetEvent((PRKEVENT)(DeferredContext + 128), 0, 0);
LABEL_24:
  if ( v18 )
  {
    v39 = WmiGetClock(0LL, 0LL, v13);
    ndisTraceDpcEnd(v14, 1LL, v39 - v46);
  }
}
