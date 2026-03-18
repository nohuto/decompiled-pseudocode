/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C00346A0
 * Callers:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C000A618 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C0010D30 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     CreateKernelEvent @ 0x1C00141F0 (CreateKernelEvent.c)
 *     GreCreateSemaphoreInternal @ 0x1C0034614 (GreCreateSemaphoreInternal.c)
 *     EngAllocMem @ 0x1C005AC20 (EngAllocMem.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C005BEC8 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0061F90 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0062074 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     UserPostNKAPC @ 0x1C006B010 (UserPostNKAPC.c)
 *     QueuePowerRequest @ 0x1C006DA70 (QueuePowerRequest.c)
 *     UserPostNKAPCBuffer @ 0x1C009FE80 (UserPostNKAPCBuffer.c)
 *     CreateKernelSemaphore @ 0x1C00A0C50 (CreateKernelSemaphore.c)
 *     CreateKernelTimer @ 0x1C00A0CB0 (CreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 *     HmgCreate @ 0x1C00C2B84 (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C00D8DA0 (GreCreateFastMutex.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C00ECAA4 (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C00EE0A4 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C00EFC5C (RIMHidGetCaps.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00F0344 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C00F05C8 (RIMSetDeviceIdleTimeout.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMGetKbdExId @ 0x1C00F7C9C (RIMGetKbdExId.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C01036C0 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C01039A0 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C0103EB4 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01045DC (rimValidateCustomHidKeyboardUsages.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C0122F20 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z.c)
 *     ?PopulateCustomDipatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C0123AE0 (-PopulateCustomDipatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C014502C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C014522C (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C014583C (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     InitializePowerRequestList @ 0x1C01F1078 (InitializePowerRequestList.c)
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
