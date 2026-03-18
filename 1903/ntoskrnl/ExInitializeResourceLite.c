/*
 * XREFs of ExInitializeResourceLite @ 0x1400476D0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x14007B0B4 (CcAllocateInitializeBcb.c)
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     NtCreateJobObject @ 0x140696550 (NtCreateJobObject.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 *     PnpInitializeNotifyEntry @ 0x140720D48 (PnpInitializeNotifyEntry.c)
 *     PiDqObjectManagerInit @ 0x140754A04 (PiDqObjectManagerInit.c)
 *     _PnpCtxOpenMachine @ 0x140755030 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x140755800 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140755A50 (DrvDbCreateDatabaseNode.c)
 *     PiPnpRtlInit @ 0x140755F28 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 *     PiDmObjectManagerInit @ 0x140756E18 (PiDmObjectManagerInit.c)
 *     TtmInit @ 0x14075B2D0 (TtmInit.c)
 *     AdtpObjsInitialize @ 0x140775714 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407785B0 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x14077D768 (FsRtlInitializeTieringHeat.c)
 *     MUIInitializeResourceLock @ 0x14078694C (MUIInitializeResourceLock.c)
 *     IopInitializeBootLogging @ 0x140853F14 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1408C0044 (TtmiCreateEventQueue.c)
 *     PiDeviceDependencyInit @ 0x1409F7D34 (PiDeviceDependencyInit.c)
 *     PiSwInit @ 0x1409F819C (PiSwInit.c)
 *     PipDmgInitPhaseOne @ 0x1409F84BC (PipDmgInitPhaseOne.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1409F92F8 (PpInitializeBootDDB.c)
 *     SepInitializeWorkList @ 0x140A02044 (SepInitializeWorkList.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140A0E83C (ExInitializeTimeRefresh.c)
 *     MiInitializeLoadedModuleList @ 0x140A13DBC (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x140A18050 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140A1A388 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x140A1C86C (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x140A21200 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x140A215F8 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A22948 (WmipGetSMBiosFromLoaderBlock.c)
 *     PopDripsWatchdogInitialize @ 0x140A22D68 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlStdLogStackTrace @ 0x14030B818 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x14030B890 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14030BC3C (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1403317E8 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  v4 = (struct _LIST_ENTRY *)qword_14042F618;
  if ( *(__int64 **)qword_14042F618 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_14042F618 = (__int64)Resource;
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
