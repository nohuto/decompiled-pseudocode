/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0010990
 * Callers:
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C000DD20 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C000FB00 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C000FB88 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C0010864 (GreCreateSemaphoreInternal.c)
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C005CC80 (RIMHidGetCaps.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     RIMGetKbdExId @ 0x1C005D58C (RIMGetKbdExId.c)
 *     CreateKernelEvent @ 0x1C005EAA0 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x1C005EB90 (CreateKernelSemaphore.c)
 *     xxxRemoteConnect @ 0x1C0063E60 (xxxRemoteConnect.c)
 *     QueuePowerRequest @ 0x1C0065410 (QueuePowerRequest.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C006CDA8 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C006CE68 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C006CF40 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C006D034 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C006FF08 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     EngAllocMem @ 0x1C0071CC0 (EngAllocMem.c)
 *     HmgCreate @ 0x1C008E07C (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C0090940 (GreCreateFastMutex.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0093ED0 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00A20E0 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     UserPostNKAPC @ 0x1C00AFF20 (UserPostNKAPC.c)
 *     UserPostNKAPCBuffer @ 0x1C0103500 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C0104530 (CreateKernelTimer.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013D458 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C013DE8C (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0140670 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0141A94 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0141D9C (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01423CC (RIMVirtCreateHidDesc.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C0176EF0 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C0265DFC (InitializePowerRequestList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AllocPoolNonPaged(__int64 a1, unsigned int a2)
{
  if ( (int)IsWin32AllocPoolImplSupported() < 0 )
    return 0LL;
  else
    return Win32AllocPoolImpl(544LL, a1, a2);
}
