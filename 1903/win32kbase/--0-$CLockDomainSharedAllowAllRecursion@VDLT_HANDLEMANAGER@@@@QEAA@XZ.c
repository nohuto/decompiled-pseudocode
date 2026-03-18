/*
 * XREFs of ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0023ED0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0027FC0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C00280E0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C00281A0 (DestroyThreadsObjects.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BC44 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMValidateHandle @ 0x1C002E8E4 (HMValidateHandle.c)
 *     HandleInputDestDestruction @ 0x1C0030B70 (HandleInputDestDestruction.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     xxxEnumDisplayMonitors @ 0x1C003E730 (xxxEnumDisplayMonitors.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C00419B4 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0041A84 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C006F0A8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F1D0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F4E0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x1C006F600 (HMCreateHandleForObject.c)
 *     HMDereferenceObject @ 0x1C006F7AC (HMDereferenceObject.c)
 *     HMUnlockDestroyObject @ 0x1C006F800 (HMUnlockDestroyObject.c)
 *     HMDestroyObject @ 0x1C006F840 (HMDestroyObject.c)
 *     HMRemoveHandleForObject @ 0x1C006F8C0 (HMRemoveHandleForObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C006F964 (HMRemoveHandleForObjectWorker.c)
 *     _HMPkheFromObject @ 0x1C006FA80 (_HMPkheFromObject.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C006FBA4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0070860 (xxxActivateKeyboardLayout.c)
 *     IsHandleEntrySecure @ 0x1C008AB40 (IsHandleEntrySecure.c)
 *     HMChangeOwnerThread @ 0x1C008AC20 (HMChangeOwnerThread.c)
 *     HMChangeOwnerProcess @ 0x1C008AE60 (HMChangeOwnerProcess.c)
 *     CleanupInputDelegation @ 0x1C008BA10 (CleanupInputDelegation.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A6720 (HMValidateSharedHandleNoRip.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A9840 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A99D0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMDestroyUnlockedObject @ 0x1C00B34D0 (HMDestroyUnlockedObject.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B5F44 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     DestroyMonitor @ 0x1C00B70F0 (DestroyMonitor.c)
 *     DestroyKF @ 0x1C00BA480 (DestroyKF.c)
 *     HMChangeOwnerPheProcess @ 0x1C0105760 (HMChangeOwnerPheProcess.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0105960 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ValidateHbwnd @ 0x1C0105F50 (ValidateHbwnd.c)
 *     ValidateHwndMinuser @ 0x1C0106020 (ValidateHwndMinuser.c)
 *     lookForMatchingMinuserHwnd @ 0x1C01060F0 (lookForMatchingMinuserHwnd.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0109D30 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0109DE0 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C011F984 (LookForMatchingBaseWindowPHE.c)
 *     UserDeleteBaseWindowHandle @ 0x1C011FC60 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C011FE34 (UserFindBaseWindowHandle.c)
 *     UserFindBaseWindowHandleLocked @ 0x1C01203F0 (UserFindBaseWindowHandleLocked.c)
 *     HMInitHandleTable @ 0x1C0267308 (HMInitHandleTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
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
