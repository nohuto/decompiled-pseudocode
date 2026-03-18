/*
 * XREFs of ExInitializeResourceLite @ 0x140047770
 * Callers:
 *     CcAllocateInitializeBcb @ 0x14007B4B4 (CcAllocateInitializeBcb.c)
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     PnpInitializeNotifyEntry @ 0x140722BE8 (PnpInitializeNotifyEntry.c)
 *     PiDqObjectManagerInit @ 0x140755494 (PiDqObjectManagerInit.c)
 *     _PnpCtxOpenMachine @ 0x140755AC0 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x140756290 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     PiPnpRtlInit @ 0x1407569B8 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     PiDmObjectManagerInit @ 0x1407578A8 (PiDmObjectManagerInit.c)
 *     TtmInit @ 0x14075FB60 (TtmInit.c)
 *     AdtpObjsInitialize @ 0x140778CF4 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x14077BB90 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x140780188 (FsRtlInitializeTieringHeat.c)
 *     MUIInitializeResourceLock @ 0x140788CAC (MUIInitializeResourceLock.c)
 *     IopInitializeBootLogging @ 0x140853614 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1408BF914 (TtmiCreateEventQueue.c)
 *     PiDeviceDependencyInit @ 0x1409F7C44 (PiDeviceDependencyInit.c)
 *     PiSwInit @ 0x1409F80AC (PiSwInit.c)
 *     PipDmgInitPhaseOne @ 0x1409F83CC (PipDmgInitPhaseOne.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1409F9208 (PpInitializeBootDDB.c)
 *     SepInitializeWorkList @ 0x140A02560 (SepInitializeWorkList.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A0EFD4 (ExInitializeTimeRefresh.c)
 *     MiInitializeLoadedModuleList @ 0x140A14554 (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x140A18510 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140A1A600 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140A1CA48 (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140A213E0 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140A216DC (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A22A28 (WmipGetSMBiosFromLoaderBlock.c)
 *     PopDripsWatchdogInitialize @ 0x140A22E48 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x140047890 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlStdLogStackTrace @ 0x14030B2C8 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x14030B340 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14030B6EC (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140331248 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  KSPIN_LOCK *v8; // rsi
  unsigned __int16 v9; // di
  __int64 v10; // rbp
  int RecordedStackTraceIndex; // eax
  int v12; // eax
  struct _KPRCB *v13; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  v2 = 0LL;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v8 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v10 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v10 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v8);
        v9 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v8, v10);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = 0;
    }
    v2 = v9;
  }
  Resource->CreatorBackTraceIndex = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&ExpResourceSpinLock, CurrentIrql);
  v4 = (struct _LIST_ENTRY *)qword_14042F5B8;
  if ( *(__int64 **)qword_14042F5B8 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_14042F5B8 = (__int64)Resource;
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
      v12 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v12;
      if ( !v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x6358u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
