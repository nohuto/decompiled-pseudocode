/*
 * XREFs of ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00243F0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0028960 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C0028A80 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0028B40 (DestroyThreadsObjects.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BBC4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMValidateHandle @ 0x1C002D628 (HMValidateHandle.c)
 *     HandleInputDestDestruction @ 0x1C002FD60 (HandleInputDestDestruction.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C004C0B4 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C004C184 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0062340 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C00623F0 (HMCreateHandleForObject.c)
 *     HMDereferenceObject @ 0x1C006259C (HMDereferenceObject.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0073198 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00732C0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C00733C0 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C0073400 (HMDestroyObject.c)
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0073634 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C00742F0 (xxxActivateKeyboardLayout.c)
 *     IsHandleEntrySecure @ 0x1C0086760 (IsHandleEntrySecure.c)
 *     HMChangeOwnerThread @ 0x1C0086840 (HMChangeOwnerThread.c)
 *     HMChangeOwnerProcess @ 0x1C0086A80 (HMChangeOwnerProcess.c)
 *     CleanupInputDelegation @ 0x1C0087630 (CleanupInputDelegation.c)
 *     _HMPkheFromObject @ 0x1C0099E00 (_HMPkheFromObject.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A56B8 (HMValidateSharedHandleNoRip.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A8980 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A8AC0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C00B05A0 (HMDestroyUnlockedObject.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B3464 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyMonitor @ 0x1C00B4610 (DestroyMonitor.c)
 *     DestroyKF @ 0x1C00B73C0 (DestroyKF.c)
 *     HMChangeOwnerPheProcess @ 0x1C0102D30 (HMChangeOwnerPheProcess.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0102FF0 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ValidateHbwnd @ 0x1C01035E0 (ValidateHbwnd.c)
 *     ValidateHwndMinuser @ 0x1C01036B0 (ValidateHwndMinuser.c)
 *     lookForMatchingMinuserHwnd @ 0x1C0103780 (lookForMatchingMinuserHwnd.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01073C0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0107470 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C011D014 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C011D2F0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C011D4C4 (UserFindBaseWindowHandle.c)
 *     UserFindBaseWindowHandleLocked @ 0x1C011DA80 (UserFindBaseWindowHandleLocked.c)
 *     HMInitHandleTable @ 0x1C02650FC (HMInitHandleTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(14LL, a2, a3);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
