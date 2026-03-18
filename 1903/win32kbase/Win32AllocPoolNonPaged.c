/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C0056D40
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C005497C (RIMHidGetCaps.c)
 *     CreateKernelEvent @ 0x1C0054B10 (CreateKernelEvent.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C0054CC8 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0055D9C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C0056820 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00569B0 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0056A38 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C0056C14 (GreCreateSemaphoreInternal.c)
 *     QueuePowerRequest @ 0x1C00588A0 (QueuePowerRequest.c)
 *     CreateKernelSemaphore @ 0x1C0058A60 (CreateKernelSemaphore.c)
 *     EngAllocMem @ 0x1C0059980 (EngAllocMem.c)
 *     HmgCreate @ 0x1C005D050 (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C005FB68 (GreCreateFastMutex.c)
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetKbdExId @ 0x1C00728B0 (RIMGetKbdExId.c)
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C00A10C8 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C00A1188 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00A1260 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00A1354 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00A3320 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     UserPostNKAPC @ 0x1C00B2E50 (UserPostNKAPC.c)
 *     UserPostNKAPCBuffer @ 0x1C0105E70 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C0106EA0 (CreateKernelTimer.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013FAC8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C01404FC (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0142CE0 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0144104 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C014440C (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0144A3C (RIMVirtCreateHidDesc.c)
 *     RIMVirtCreateDev @ 0x1C014DED4 (RIMVirtCreateDev.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01790E0 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C02694C8 (InitializePowerRequestList.c)
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
