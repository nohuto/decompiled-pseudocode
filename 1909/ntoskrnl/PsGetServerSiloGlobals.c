/*
 * XREFs of PsGetServerSiloGlobals @ 0x1400C9B10
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14013335C (SepRmDispatchDataToLsa.c)
 *     ExShutdownSystem @ 0x1405AE3A8 (ExShutdownSystem.c)
 *     ObQueryDeviceMapInformation @ 0x1405D1260 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1405D16F0 (ObfDereferenceDeviceMap.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     SepIsMinTCB @ 0x14061A0E0 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x14061A834 (SepIsNgenImage.c)
 *     RtlGetHostNtSystemRoot @ 0x140623C90 (RtlGetHostNtSystemRoot.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140623CC0 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ObDereferenceDeviceMap @ 0x140652C88 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x140652D10 (DbgkFlushErrorPort.c)
 *     ExpWnfResolveScopeInstance @ 0x140655E08 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140658450 (ExpWnfGenerateStateName.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x14067FFE0 (MmMapApiSetView.c)
 *     PspTerminateProcessesJobCallback @ 0x140689FE0 (PspTerminateProcessesJobCallback.c)
 *     PspCaptureUserProcessParameters @ 0x1406B2990 (PspCaptureUserProcessParameters.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E8248 (EtwpUpdateGlobalGroupMasks.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E94CC (ExpCheckPortableOperatingSystem.c)
 *     ObpSetDeviceMap @ 0x1406EB608 (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ED220 (ExpWnfEnumerateScopeInstances.c)
 *     EtwpProcessEnumCallback @ 0x140709B90 (EtwpProcessEnumCallback.c)
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140742A00 (MiInitializeSessionGlobals.c)
 *     DbgkpGetServerSiloState @ 0x14075D89C (DbgkpGetServerSiloState.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1407639C8 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14076854C (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140782F9C (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140847298 (DbgkInitializeServerSilo.c)
 *     DbgkpRemoveErrorPort @ 0x140849BC4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x1408C4958 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C49B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C4D74 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C56C4 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C57F4 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1408C5914 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C59D0 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1408C9410 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1408D9844 (SeInitServerSilo.c)
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
