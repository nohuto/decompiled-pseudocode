/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180175994
 * Callers:
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18004E0C0 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18004EDF0 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     _lambda_d724fd238306415e4865b10bdd74c2f1_::operator() @ 0x180063F90 (_lambda_d724fd238306415e4865b10bdd74c2f1_--operator().c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180067B30 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x180172B48 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x180173204 (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180173390 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 *     _lambda_ad49911410aee6c70adeeb780ccd34e3_::_lambda_ad49911410aee6c70adeeb780ccd34e3_ @ 0x1801736F8 (_lambda_ad49911410aee6c70adeeb780ccd34e3_--_lambda_ad49911410aee6c70adeeb780ccd34e3_.c)
 *     CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___::CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___ @ 0x18017376C (CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___--CAsyncCallbackWithLambda__.c)
 *     CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___::CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___ @ 0x1801737D4 (CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___--CAsyncCallbackWithLambda__.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180174D40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMul_ea_180174D40.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180179560 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18017DD5C (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x18017E000 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 236), a2);
}
