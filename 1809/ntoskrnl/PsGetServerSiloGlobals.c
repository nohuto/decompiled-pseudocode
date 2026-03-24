/*
 * XREFs of PsGetServerSiloGlobals @ 0x14009238C
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FD64 (SepRmDispatchDataToLsa.c)
 *     ExpTimeZoneDpcRoutine @ 0x140139CC0 (ExpTimeZoneDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401601C0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1403198C0 (ExpNextYearDpcRoutine.c)
 *     ExShutdownSystem @ 0x14057E4C0 (ExShutdownSystem.c)
 *     PspCloseSilo @ 0x140582738 (PspCloseSilo.c)
 *     PspLatchCriticalProcessName @ 0x140582780 (PspLatchCriticalProcessName.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140583938 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140585820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x140606D50 (PspCaptureUserProcessParameters.c)
 *     DbgkFlushErrorPort @ 0x140607444 (DbgkFlushErrorPort.c)
 *     ObDereferenceDeviceMap @ 0x140608F0C (ObDereferenceDeviceMap.c)
 *     SepIsNgenImage @ 0x14060A55C (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14060D770 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060E3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ObQueryDeviceMapInformation @ 0x140671540 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1406719C0 (ObfDereferenceDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F6C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140678444 (MmMapApiSetView.c)
 *     PspTerminateProcessesJobCallback @ 0x14068D3F0 (PspTerminateProcessesJobCallback.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ABA98 (ExpWnfEnumerateScopeInstances.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C5598 (EtwpUpdateGlobalGroupMasks.c)
 *     ObpSetDeviceMap @ 0x1406C697C (ObpSetDeviceMap.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75AC (ExpCheckPortableOperatingSystem.c)
 *     DbgkRegisterErrorPort @ 0x1407024A0 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140706C60 (DbgkpRemoveErrorPort.c)
 *     MiSessionCreateInternal @ 0x140715C68 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140716204 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x140726520 (EtwpProcessEnumCallback.c)
 *     DbgkpGetServerSiloState @ 0x140727D6C (DbgkpGetServerSiloState.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x140733A2C (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 *     CmpMountPreloadedHives @ 0x1407357E0 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407402A0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407403F4 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140759EA0 (ObInitServerSilo.c)
 *     RtlGetHostNtSystemRoot @ 0x1407641D8 (RtlGetHostNtSystemRoot.c)
 *     DbgkInitializeServerSilo @ 0x14080E338 (DbgkInitializeServerSilo.c)
 *     DbgkpSendErrorMessage @ 0x140810DCC (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140886CB8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140886D10 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870D4 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x140887440 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140887B38 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140887C58 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140887D14 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14088AFA4 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14088B640 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14089B7C4 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x1408CD1B0 (ExpTimeZoneWork.c)
 * Callees:
 *     <none>
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  void *result; // rax

  result = &PspHostSiloGlobals;
  if ( a1 )
    return *(void **)(a1 + 1256);
  return result;
}
