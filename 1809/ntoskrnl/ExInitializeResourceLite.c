/*
 * XREFs of ExInitializeResourceLite @ 0x1400CC4D0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1400CC2F8 (CcAllocateInitializeBcb.c)
 *     NtCreateJobObject @ 0x140605F80 (NtCreateJobObject.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     PnpInitializeNotifyEntry @ 0x1407035E4 (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x14070AF40 (RtlCreateHeap.c)
 *     MUIInitializeResourceLock @ 0x14070F47C (MUIInitializeResourceLock.c)
 *     PiDmObjectManagerInit @ 0x14072CA48 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x140737248 (AdtpObjsInitialize.c)
 *     PiDqObjectManagerInit @ 0x140739D64 (PiDqObjectManagerInit.c)
 *     PiPnpRtlInit @ 0x14073A540 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14073AB68 (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x14073B1B8 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073B408 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x14073B6EC (_PnpCtxOpenMachine.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140752E4C (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x140757F38 (FsRtlInitializeTieringHeat.c)
 *     TtmInit @ 0x1407623C0 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x14081A034 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1408822FC (TtmiCreateEventQueue.c)
 *     SepInitializeWorkList @ 0x1409AE8B8 (SepInitializeWorkList.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x1409C4288 (ExInitializeTimeRefresh.c)
 *     PiDeviceDependencyInit @ 0x1409C7100 (PiDeviceDependencyInit.c)
 *     PiSwInit @ 0x1409C7524 (PiSwInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1409C842C (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseOne @ 0x1409C850C (PipDmgInitPhaseOne.c)
 *     MiInitializeLoadedModuleList @ 0x1409CF350 (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x1409D51A0 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x1409D7714 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x1409D8F90 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x1409DDD80 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x1409DDDD4 (PpInitSystem.c)
 *     PopInitializeDripsWatchdog @ 0x1409DEB00 (PopInitializeDripsWatchdog.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x1409DEF00 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400BC680 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     RtlStdLogStackTrace @ 0x1402ECFB8 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1402ED010 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402ED3BC (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140313490 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031BFB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C178 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  __int64 v2; // r8
  ULONG_PTR v3; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v5; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  KSPIN_LOCK *v9; // rsi
  unsigned __int16 v10; // di
  __int64 v11; // rbp
  int RecordedStackTraceIndex; // eax
  int v13; // eax
  struct _KPRCB *v14; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  v3 = 0LL;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v9 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v11 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v11 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v9);
        v10 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v9, v11);
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      v10 = 0;
    }
    v3 = v10;
  }
  Resource->CreatorBackTraceIndex = v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&ExpResourceSpinLock, CurrentIrql, v2);
  v5 = (struct _LIST_ENTRY *)qword_140407108;
  if ( *(__int64 **)qword_140407108 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v5;
  v5->Flink = &Resource->SystemResourcesList;
  qword_140407108 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v14);
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x6358u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
