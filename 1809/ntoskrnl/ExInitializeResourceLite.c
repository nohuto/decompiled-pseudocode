/*
 * XREFs of ExInitializeResourceLite @ 0x1400CC570
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1400CC398 (CcAllocateInitializeBcb.c)
 *     NtCreateJobObject @ 0x140606F80 (NtCreateJobObject.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     PnpInitializeNotifyEntry @ 0x140704864 (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     MUIInitializeResourceLock @ 0x1407106FC (MUIInitializeResourceLock.c)
 *     PiDmObjectManagerInit @ 0x14072DC18 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     PiDqObjectManagerInit @ 0x14073AF34 (PiDqObjectManagerInit.c)
 *     PiPnpRtlInit @ 0x14073B710 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x14073C388 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073C5D8 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x14073C8BC (_PnpCtxOpenMachine.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x14075401C (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x140759108 (FsRtlInitializeTieringHeat.c)
 *     TtmInit @ 0x140763590 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x14088353C (TtmiCreateEventQueue.c)
 *     SepInitializeWorkList @ 0x1409AF8B8 (SepInitializeWorkList.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x1409C5288 (ExInitializeTimeRefresh.c)
 *     PiDeviceDependencyInit @ 0x1409C8100 (PiDeviceDependencyInit.c)
 *     PiSwInit @ 0x1409C8524 (PiSwInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1409C942C (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseOne @ 0x1409C950C (PipDmgInitPhaseOne.c)
 *     MiInitializeLoadedModuleList @ 0x1409D0350 (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x1409D61A0 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x1409D9F90 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x1409DED80 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x1409DEDD4 (PpInitSystem.c)
 *     PopInitializeDripsWatchdog @ 0x1409DFB00 (PopInitializeDripsWatchdog.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x1409DFF00 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlStdLogStackTrace @ 0x1402ED2A8 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1402ED300 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402ED6AC (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140313780 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  v5 = (struct _LIST_ENTRY *)qword_140408118;
  if ( *(__int64 **)qword_140408118 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v5;
  v5->Flink = &Resource->SystemResourcesList;
  qword_140408118 = (__int64)Resource;
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
