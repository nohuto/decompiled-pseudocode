/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x140109DC0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14008F590 (EtwpAdjustTraceBuffers.c)
 *     NtTraceEvent @ 0x1400CB590 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1401132B0 (EtwpTraceMessageVa.c)
 *     ExSystemTimeToLocalTime @ 0x14013B0A0 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x140160CF0 (ExLocalTimeToSystemTime.c)
 *     EtwWriteKMSecurityEvent @ 0x140188E40 (EtwWriteKMSecurityEvent.c)
 *     RtlSetSystemGlobalData @ 0x1401B5F44 (RtlSetSystemGlobalData.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     EtwSendTraceBuffer @ 0x14030E860 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14030E9CC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EE00 (EtwTraceRaw.c)
 *     WmiGetClock @ 0x14030F000 (WmiGetClock.c)
 *     EtwpGetCurrentSiloState @ 0x1403128F4 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1403155DC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140315A9C (EtwpSetCompressionSettings.c)
 *     ExpWriteTimeZoneBias @ 0x140584B28 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x140584B78 (ExpWriteTimeZoneBiasStartEnd.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405ABB0C (ExpWnfGetNameStoreRegistryRoot.c)
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     ExpWnfDeleteScopeById @ 0x140609860 (ExpWnfDeleteScopeById.c)
 *     ExpWnfGenerateStateName @ 0x14060F3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     NtCreatePrivateNamespace @ 0x140655520 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14065576C (ObpRegisterPrivateNamespace.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     ObQueryDeviceMapInformation @ 0x140672700 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140672C70 (ObpReferenceDeviceMap.c)
 *     RtlGetNtSystemRoot @ 0x1406835D0 (RtlGetNtSystemRoot.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068F354 (ObpDeleteSymbolicLinkName.c)
 *     EtwpExpandFileName @ 0x14069C128 (EtwpExpandFileName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A3F44 (ObSetCurrentProcessDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ACD38 (ExpWnfEnumerateScopeInstances.c)
 *     RtlIsMultiSessionSku @ 0x1406AEC60 (RtlIsMultiSessionSku.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406B2CE4 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlGetSuiteMask @ 0x1406B5A90 (RtlGetSuiteMask.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406B776C (ObpRemoveNamespaceFromTable.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406C23F0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     NtOpenPrivateNamespace @ 0x1406C3870 (NtOpenPrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x1406C3D98 (EtwpRealtimeConnect.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C56E0 (ObpCreateSymbolicLinkName.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CC6D8 (PsQueryCurrentApiSetSchema.c)
 *     EtwShutdown @ 0x1406DE4E0 (EtwShutdown.c)
 *     MiInitializeSessionGlobals @ 0x1407174A4 (MiInitializeSessionGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x1407175E0 (MmIsSessionLeaderProcess.c)
 *     WmiQueryTraceInformation @ 0x140717EB0 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140718C1C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwEnableTrace @ 0x140719030 (EtwEnableTrace.c)
 *     RtlSetActiveConsoleId @ 0x140720160 (RtlSetActiveConsoleId.c)
 *     ExpRefreshSystemTime @ 0x140735390 (ExpRefreshSystemTime.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 *     SepSetSystemPaths @ 0x14075B100 (SepSetSystemPaths.c)
 *     ObIsDosDeviceLocallyMapped @ 0x14075F360 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x140762BF0 (NtSetDefaultHardErrorPort.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140765168 (ExInitializeUtcTimeZoneBias.c)
 *     ObpGetShadowDirectory @ 0x140861DE0 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x140887940 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140891730 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x140895090 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1408A3EB0 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BF070 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408C0EF0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408C0FBC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408C10E4 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C160C (EtwpUpdatePeriodicCaptureState.c)
 *     ExpSetTimeZoneInformation @ 0x1408CDC34 (ExpSetTimeZoneInformation.c)
 *     ExpRaiseHardError @ 0x1408D7BA0 (ExpRaiseHardError.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DC560 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140909890 (EtwpEventTracingCounterSetCallback.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x1409D2C24 (GetBootSystemTime.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
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
