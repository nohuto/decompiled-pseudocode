/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x140109D20
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14008F670 (EtwpAdjustTraceBuffers.c)
 *     NtTraceEvent @ 0x1400CB490 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140113220 (EtwpTraceMessageVa.c)
 *     ExSystemTimeToLocalTime @ 0x14013AF80 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x140160BD0 (ExLocalTimeToSystemTime.c)
 *     EtwWriteKMSecurityEvent @ 0x140188CE0 (EtwWriteKMSecurityEvent.c)
 *     RtlSetSystemGlobalData @ 0x1401B5DBC (RtlSetSystemGlobalData.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     EtwSendTraceBuffer @ 0x14030E570 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14030E6DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EB10 (EtwTraceRaw.c)
 *     WmiGetClock @ 0x14030ED10 (WmiGetClock.c)
 *     EtwpGetCurrentSiloState @ 0x140312604 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1403152EC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403157AC (EtwpSetCompressionSettings.c)
 *     ExpWriteTimeZoneBias @ 0x140583B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140583B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405AAB0C (ExpWnfGetNameStoreRegistryRoot.c)
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     ExpWnfDeleteScopeById @ 0x140608860 (ExpWnfDeleteScopeById.c)
 *     ExpWnfGenerateStateName @ 0x14060E3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtCreatePrivateNamespace @ 0x140654380 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406545CC (ObpRegisterPrivateNamespace.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     ObQueryDeviceMapInformation @ 0x140671560 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140671AD0 (ObpReferenceDeviceMap.c)
 *     RtlGetNtSystemRoot @ 0x140682430 (RtlGetNtSystemRoot.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068E1B4 (ObpDeleteSymbolicLinkName.c)
 *     EtwpExpandFileName @ 0x14069AF88 (EtwpExpandFileName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A2CC4 (ObSetCurrentProcessDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ABAB8 (ExpWnfEnumerateScopeInstances.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9E0 (RtlIsMultiSessionSku.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406B1A64 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlGetSuiteMask @ 0x1406B4810 (RtlGetSuiteMask.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406B64EC (ObpRemoveNamespaceFromTable.c)
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406C1170 (RtlSetConsoleSessionForegroundProcessId.c)
 *     NtOpenPrivateNamespace @ 0x1406C25F0 (NtOpenPrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x1406C2B18 (EtwpRealtimeConnect.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C4460 (ObpCreateSymbolicLinkName.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CB458 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x1406DD260 (EtwShutdown.c)
 *     MiInitializeSessionGlobals @ 0x140716224 (MiInitializeSessionGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x140716360 (MmIsSessionLeaderProcess.c)
 *     WmiQueryTraceInformation @ 0x140716C30 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071799C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwEnableTrace @ 0x140717DB0 (EtwEnableTrace.c)
 *     RtlSetActiveConsoleId @ 0x14071EEE0 (RtlSetActiveConsoleId.c)
 *     ExpRefreshSystemTime @ 0x1407341C0 (ExpRefreshSystemTime.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     SepSetSystemPaths @ 0x140759F30 (SepSetSystemPaths.c)
 *     ObIsDosDeviceLocallyMapped @ 0x14075E190 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x140761A20 (NtSetDefaultHardErrorPort.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140763F98 (ExInitializeUtcTimeZoneBias.c)
 *     ObpGetShadowDirectory @ 0x140860BA0 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x140886700 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408904F0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x140893E50 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1408A2C70 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BDDD0 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408BFC50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408BFD1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE44 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C036C (EtwpUpdatePeriodicCaptureState.c)
 *     ExpSetTimeZoneInformation @ 0x1408CC994 (ExpSetTimeZoneInformation.c)
 *     ExpRaiseHardError @ 0x1408D6900 (ExpRaiseHardError.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DB2C0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409085F0 (EtwpEventTracingCounterSetCallback.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x1409D1C24 (GetBootSystemTime.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FD30 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42CC (KeIsExecutingInArbitraryThreadContext.c)
 */

void *PsGetCurrentServerSiloGlobals()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 v2; // rax

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    return &PspHostSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  v2 = Blink == -3 ? *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count : PsGetEffectiveServerSilo(Blink);
  if ( !v2 )
    return &PspHostSiloGlobals;
  else
    return *(void **)(v2 + 1256);
}
