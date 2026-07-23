/*
 * XREFs of PsGetServerSiloGlobals @ 0x1400922CC
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14012FE34 (SepRmDispatchDataToLsa.c)
 *     ExpTimeZoneDpcRoutine @ 0x140139DC0 (ExpTimeZoneDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401602C0 (ExpCenturyDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x140319AB0 (ExpNextYearDpcRoutine.c)
 *     ExShutdownSystem @ 0x14057F4C0 (ExShutdownSystem.c)
 *     PspCloseSilo @ 0x140583738 (PspCloseSilo.c)
 *     PspLatchCriticalProcessName @ 0x140583780 (PspLatchCriticalProcessName.c)
 *     ExpTimeZoneCleanupSiloState @ 0x140584938 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1405849E4 (ExpTimeZoneInitSiloState.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140586820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x140607D50 (PspCaptureUserProcessParameters.c)
 *     DbgkFlushErrorPort @ 0x140608444 (DbgkFlushErrorPort.c)
 *     ObDereferenceDeviceMap @ 0x140609F0C (ObDereferenceDeviceMap.c)
 *     SepIsNgenImage @ 0x14060B55C (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14060E770 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060F3A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ObQueryDeviceMapInformation @ 0x140672700 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140672B80 (ObfDereferenceDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140679604 (MmMapApiSetView.c)
 *     PspTerminateProcessesJobCallback @ 0x14068E5B0 (PspTerminateProcessesJobCallback.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ACD38 (ExpWnfEnumerateScopeInstances.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C6838 (EtwpUpdateGlobalGroupMasks.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C884C (ExpCheckPortableOperatingSystem.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140707F00 (DbgkpRemoveErrorPort.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407174A4 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x1407277C0 (EtwpProcessEnumCallback.c)
 *     DbgkpGetServerSiloState @ 0x14072900C (DbgkpGetServerSiloState.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x140734C1C (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x140741490 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407415E4 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x14075B090 (ObInitServerSilo.c)
 *     RtlGetHostNtSystemRoot @ 0x1407653C8 (RtlGetHostNtSystemRoot.c)
 *     DbgkInitializeServerSilo @ 0x14080F538 (DbgkInitializeServerSilo.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140887F18 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140887F70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140888334 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1408886A0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140888C7C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140888D98 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140888EB8 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140888F74 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14088C8A0 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14089CA24 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x1408CE470 (ExpTimeZoneWork.c)
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
