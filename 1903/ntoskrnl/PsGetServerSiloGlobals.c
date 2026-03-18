/*
 * XREFs of PsGetServerSiloGlobals @ 0x14008D470
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14013286C (SepRmDispatchDataToLsa.c)
 *     ExShutdownSystem @ 0x1405AE3C8 (ExShutdownSystem.c)
 *     ObQueryDeviceMapInformation @ 0x1405D0D60 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1405D11F0 (ObfDereferenceDeviceMap.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     SepIsMinTCB @ 0x1406185D0 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x140618D24 (SepIsNgenImage.c)
 *     ExpWnfResolveScopeInstance @ 0x1406422B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140644900 (ExpWnfGenerateStateName.c)
 *     ObDereferenceDeviceMap @ 0x140671E58 (ObDereferenceDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x140679F2C (MmMapApiSetView.c)
 *     PspTerminateProcessesJobCallback @ 0x140696A70 (PspTerminateProcessesJobCallback.c)
 *     PspCaptureUserProcessParameters @ 0x1406B0910 (PspCaptureUserProcessParameters.c)
 *     DbgkFlushErrorPort @ 0x1406E404C (DbgkFlushErrorPort.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E7148 (EtwpUpdateGlobalGroupMasks.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E842C (ExpCheckPortableOperatingSystem.c)
 *     ObpSetDeviceMap @ 0x1406EA410 (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EBF60 (ExpWnfEnumerateScopeInstances.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x1406EFB10 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EFC5C (RtlGetHostNtSystemRoot.c)
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 *     DbgkRegisterErrorPort @ 0x1407287E4 (DbgkRegisterErrorPort.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140740B00 (MiInitializeSessionGlobals.c)
 *     DbgkpGetServerSiloState @ 0x14075900C (DbgkpGetServerSiloState.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x14075F0A4 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140763B3C (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140780C34 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140847B90 (DbgkInitializeServerSilo.c)
 *     DbgkpRemoveErrorPort @ 0x14084A4C4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x1408C5088 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C50E0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C5494 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C5DE4 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C5F14 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1408C6034 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1408C60F0 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1408C9B30 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1408D9F44 (SeInitServerSilo.c)
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
