/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C002BFC0
 * Callers:
 *     HmgCreate @ 0x1C0005068 (HmgCreate.c)
 *     CreateKernelSemaphore @ 0x1C0007F20 (CreateKernelSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C002BF30 (GreCreateSemaphoreInternal.c)
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RIMHidGetCaps @ 0x1C0051804 (RIMHidGetCaps.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0058808 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00588F8 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C005AAC8 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C005C870 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C005CE24 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C005CFC0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C005D148 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C005D208 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     EngAllocMem @ 0x1C005F5F0 (EngAllocMem.c)
 *     CreateKernelEvent @ 0x1C006C700 (CreateKernelEvent.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0082ED8 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     RIMGetKbdExId @ 0x1C00891A0 (RIMGetKbdExId.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C00921F0 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z.c)
 *     GreCreateFastMutex @ 0x1C009568C (GreCreateFastMutex.c)
 *     QueuePowerRequest @ 0x1C0096830 (QueuePowerRequest.c)
 *     xxxRemoteConnect @ 0x1C0098740 (xxxRemoteConnect.c)
 *     UserPostNKAPC @ 0x1C00A1F30 (UserPostNKAPC.c)
 *     UserPostNKAPCBuffer @ 0x1C00E0190 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C00E1380 (CreateKernelTimer.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0117DDC (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C011A4F0 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C011BAA0 (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 *     ?PopulateCustomDipatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C0149F90 (-PopulateCustomDipatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C021C6AC (InitializePowerRequestList.c)
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
