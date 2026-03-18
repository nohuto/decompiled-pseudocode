/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x1400E6EE0
 * Callers:
 *     EtwpTraceMessageVa @ 0x14008BFF0 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     EtwWriteKMSecurityEvent @ 0x140132A1C (EtwWriteKMSecurityEvent.c)
 *     EtwSendTraceBuffer @ 0x14032C280 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14032C3F0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C888 (EtwTraceRaw.c)
 *     WmiGetClock @ 0x14032CAA0 (WmiGetClock.c)
 *     EtwpGetCurrentSiloState @ 0x140330954 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x140333C40 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403340FC (EtwpSetCompressionSettings.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1405BAEF0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlIsMultiSessionSku @ 0x1405BD790 (RtlIsMultiSessionSku.c)
 *     ObpReferenceDeviceMap @ 0x1405D0BD0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1405D0D60 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063C7F0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140644900 (ExpWnfGenerateStateName.c)
 *     ExpWnfDeleteScopeById @ 0x140671AC8 (ExpWnfDeleteScopeById.c)
 *     NtCreatePrivateNamespace @ 0x140680690 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1406808DC (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140681830 (NtOpenPrivateNamespace.c)
 *     EtwpExpandFileName @ 0x1406B9A58 (EtwpExpandFileName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C42EC (ObSetCurrentProcessDeviceMap.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406C7D04 (ObpDeleteSymbolicLinkName.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406D987C (ObpRemoveNamespaceFromTable.c)
 *     RtlGetSuiteMask @ 0x1406D9C50 (RtlGetSuiteMask.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E5900 (ObpCreateSymbolicLinkName.c)
 *     RtlGetNtSystemRoot @ 0x1406E8730 (RtlGetNtSystemRoot.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EBF60 (ExpWnfEnumerateScopeInstances.c)
 *     PsQueryCurrentApiSetSchema @ 0x14070F570 (PsQueryCurrentApiSetSchema.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071674C (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x140716B20 (WmiQueryTraceInformation.c)
 *     EtwEnableTrace @ 0x140717540 (EtwEnableTrace.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     EtwShutdown @ 0x140724868 (EtwShutdown.c)
 *     ExpRaiseHardError @ 0x14072CFA8 (ExpRaiseHardError.c)
 *     MmIsSessionLeaderProcess @ 0x14073AF50 (MmIsSessionLeaderProcess.c)
 *     MiInitializeSessionGlobals @ 0x140740B00 (MiInitializeSessionGlobals.c)
 *     RtlSetActiveConsoleId @ 0x140747D00 (RtlSetActiveConsoleId.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 *     SepSetSystemPaths @ 0x140780E34 (SepSetSystemPaths.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140785110 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x1407889A0 (NtSetDefaultHardErrorPort.c)
 *     ObpGetShadowDirectory @ 0x14089D604 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x1408C4AA0 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408CE7D0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x1408D1FD0 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1408E1560 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwRegisterEventCallback @ 0x1408FA9B0 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408FCA50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408FCB1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FCC40 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FD174 (EtwpUpdatePeriodicCaptureState.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140919050 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140946C90 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
 */

void *PsGetCurrentServerSiloGlobals()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    EffectiveServerSilo = CurrentThread->Process[2].ActiveProcessors.Bitmap[3];
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(Blink);
  if ( EffectiveServerSilo )
    return *(void **)(EffectiveServerSilo + 1256);
  else
    return &PspHostSiloGlobals;
}
