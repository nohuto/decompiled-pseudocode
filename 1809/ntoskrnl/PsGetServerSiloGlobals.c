/*
 * XREFs of PsGetServerSiloGlobals @ 0x14009238C
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FD44 (SepRmDispatchDataToLsa.c)
 *     ExpTimeZoneDpcRoutine @ 0x140139CA0 (ExpTimeZoneDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401601A0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1403197C0 (ExpNextYearDpcRoutine.c)
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
 *     ObQueryDeviceMapInformation @ 0x140671560 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1406719E0 (ObfDereferenceDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F8C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140678464 (MmMapApiSetView.c)
 *     PspTerminateProcessesJobCallback @ 0x14068D410 (PspTerminateProcessesJobCallback.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ABAB8 (ExpWnfEnumerateScopeInstances.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C55B8 (EtwpUpdateGlobalGroupMasks.c)
 *     ObpSetDeviceMap @ 0x1406C699C (ObpSetDeviceMap.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75CC (ExpCheckPortableOperatingSystem.c)
 *     DbgkRegisterErrorPort @ 0x1407024C0 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140706C80 (DbgkpRemoveErrorPort.c)
 *     MiSessionCreateInternal @ 0x140715C88 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140716224 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x140726540 (EtwpProcessEnumCallback.c)
 *     DbgkpGetServerSiloState @ 0x140727D8C (DbgkpGetServerSiloState.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x140733A4C (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407402C0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140740414 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140759EC0 (ObInitServerSilo.c)
 *     RtlGetHostNtSystemRoot @ 0x1407641F8 (RtlGetHostNtSystemRoot.c)
 *     DbgkInitializeServerSilo @ 0x14080E358 (DbgkInitializeServerSilo.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140886CD8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140886D30 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870F4 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x140887460 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A3C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140887B58 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140887C78 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140887D34 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14088AFC4 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14088B660 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14089B7E4 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x1408CD1D0 (ExpTimeZoneWork.c)
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
