/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x1400EBE80
 * Callers:
 *     EtwpTraceMessageVa @ 0x1400C8690 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     EtwWriteKMSecurityEvent @ 0x14013350C (EtwWriteKMSecurityEvent.c)
 *     EtwSendTraceBuffer @ 0x14032BCD0 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14032BE40 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C2D8 (EtwTraceRaw.c)
 *     WmiGetClock @ 0x14032C4F0 (WmiGetClock.c)
 *     EtwpGetCurrentSiloState @ 0x1403303B4 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1403336A0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140333B5C (EtwpSetCompressionSettings.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1405BB2D0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlIsMultiSessionSku @ 0x1405BDB70 (RtlIsMultiSessionSku.c)
 *     ObpReferenceDeviceMap @ 0x1405D10D0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1405D1260 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063F8A0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfDeleteScopeById @ 0x1406528F8 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140658450 (ExpWnfGenerateStateName.c)
 *     NtCreatePrivateNamespace @ 0x14069EBF0 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14069EE3C (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x14069FD90 (NtOpenPrivateNamespace.c)
 *     EtwpExpandFileName @ 0x1406AF148 (EtwpExpandFileName.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B3964 (ObpDeleteSymbolicLinkName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C344C (ObSetCurrentProcessDeviceMap.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406D94EC (ObpRemoveNamespaceFromTable.c)
 *     RtlGetSuiteMask @ 0x1406D9D40 (RtlGetSuiteMask.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E67F0 (ObpCreateSymbolicLinkName.c)
 *     RtlGetNtSystemRoot @ 0x1406E97D0 (RtlGetNtSystemRoot.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ED220 (ExpWnfEnumerateScopeInstances.c)
 *     PsQueryCurrentApiSetSchema @ 0x140711350 (PsQueryCurrentApiSetSchema.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071853C (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x140718910 (WmiQueryTraceInformation.c)
 *     EtwEnableTrace @ 0x140719330 (EtwEnableTrace.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     EtwShutdown @ 0x140726708 (EtwShutdown.c)
 *     ExpRaiseHardError @ 0x14072EE70 (ExpRaiseHardError.c)
 *     MmIsSessionLeaderProcess @ 0x14073CEB0 (MmIsSessionLeaderProcess.c)
 *     MiInitializeSessionGlobals @ 0x140742A00 (MiInitializeSessionGlobals.c)
 *     RtlSetActiveConsoleId @ 0x140749C00 (RtlSetActiveConsoleId.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     SepSetSystemPaths @ 0x140783194 (SepSetSystemPaths.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140787470 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x14078AE00 (NtSetDefaultHardErrorPort.c)
 *     ObpGetShadowDirectory @ 0x14089CE24 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x1408C4370 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1408CE0B0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x1408D18D0 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1408E0E60 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwRegisterEventCallback @ 0x1408FA390 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408FC430 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408FC4FC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1408FC620 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FCB54 (EtwpUpdatePeriodicCaptureState.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140918AB0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140946700 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400EAEE0 (PsGetEffectiveServerSilo.c)
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
