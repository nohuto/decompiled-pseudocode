/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x140109D40
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14008F670 (EtwpAdjustTraceBuffers.c)
 *     NtTraceEvent @ 0x1400CB4B0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140113240 (EtwpTraceMessageVa.c)
 *     ExSystemTimeToLocalTime @ 0x14013AFA0 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x140160BF0 (ExLocalTimeToSystemTime.c)
 *     EtwWriteKMSecurityEvent @ 0x140188D00 (EtwWriteKMSecurityEvent.c)
 *     RtlSetSystemGlobalData @ 0x1401B5DDC (RtlSetSystemGlobalData.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     EtwSendTraceBuffer @ 0x14030E670 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14030E7DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EC10 (EtwTraceRaw.c)
 *     WmiGetClock @ 0x14030EE10 (WmiGetClock.c)
 *     EtwpGetCurrentSiloState @ 0x140312704 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1403153EC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403158AC (EtwpSetCompressionSettings.c)
 *     ExpWriteTimeZoneBias @ 0x140583B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140583B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405AAB0C (ExpWnfGetNameStoreRegistryRoot.c)
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     ExpWnfDeleteScopeById @ 0x140608860 (ExpWnfDeleteScopeById.c)
 *     ExpWnfGenerateStateName @ 0x14060E3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtCreatePrivateNamespace @ 0x140654360 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406545AC (ObpRegisterPrivateNamespace.c)
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     ObQueryDeviceMapInformation @ 0x140671540 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140671AB0 (ObpReferenceDeviceMap.c)
 *     RtlGetNtSystemRoot @ 0x140682410 (RtlGetNtSystemRoot.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068E194 (ObpDeleteSymbolicLinkName.c)
 *     EtwpExpandFileName @ 0x14069AF68 (EtwpExpandFileName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A2CA4 (ObSetCurrentProcessDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ABA98 (ExpWnfEnumerateScopeInstances.c)
 *     RtlIsMultiSessionSku @ 0x1406AD9C0 (RtlIsMultiSessionSku.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406B1A44 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlGetSuiteMask @ 0x1406B47F0 (RtlGetSuiteMask.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406B64CC (ObpRemoveNamespaceFromTable.c)
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406C1150 (RtlSetConsoleSessionForegroundProcessId.c)
 *     NtOpenPrivateNamespace @ 0x1406C25D0 (NtOpenPrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x1406C2AF8 (EtwpRealtimeConnect.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C4440 (ObpCreateSymbolicLinkName.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CB438 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x1406DD240 (EtwShutdown.c)
 *     MiInitializeSessionGlobals @ 0x140716204 (MiInitializeSessionGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x140716340 (MmIsSessionLeaderProcess.c)
 *     WmiQueryTraceInformation @ 0x140716C10 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071797C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwEnableTrace @ 0x140717D90 (EtwEnableTrace.c)
 *     RtlSetActiveConsoleId @ 0x14071EEC0 (RtlSetActiveConsoleId.c)
 *     ExpRefreshSystemTime @ 0x1407341A0 (ExpRefreshSystemTime.c)
 *     EtwStartAutoLogger @ 0x140741E68 (EtwStartAutoLogger.c)
 *     SepSetSystemPaths @ 0x140759F10 (SepSetSystemPaths.c)
 *     ObIsDosDeviceLocallyMapped @ 0x14075E170 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x140761A00 (NtSetDefaultHardErrorPort.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140763F78 (ExInitializeUtcTimeZoneBias.c)
 *     ObpGetShadowDirectory @ 0x140860B80 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x1408866E0 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408904D0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x140893E30 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1408A2C50 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9360 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BDDB0 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408BFC30 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408BFCFC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408BFE24 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C034C (EtwpUpdatePeriodicCaptureState.c)
 *     ExpSetTimeZoneInformation @ 0x1408CC974 (ExpSetTimeZoneInformation.c)
 *     ExpRaiseHardError @ 0x1408D68E0 (ExpRaiseHardError.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DB2A0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409085D0 (EtwpEventTracingCounterSetCallback.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x1409D1C24 (GetBootSystemTime.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FD30 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42EC (KeIsExecutingInArbitraryThreadContext.c)
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
