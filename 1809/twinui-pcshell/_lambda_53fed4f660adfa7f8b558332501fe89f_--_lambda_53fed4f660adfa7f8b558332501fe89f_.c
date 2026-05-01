/*
 * XREFs of _lambda_53fed4f660adfa7f8b558332501fe89f_::_lambda_53fed4f660adfa7f8b558332501fe89f_ @ 0x18012AED0
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x18012AB5C (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18012D0B4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

__int64 __fastcall lambda_53fed4f660adfa7f8b558332501fe89f_::_lambda_53fed4f660adfa7f8b558332501fe89f_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rcx

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 16) = *a3;
  v9 = *a4;
  *(_QWORD *)(a1 + 24) = *a4;
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(v9);
  *(_QWORD *)(a1 + 32) = a5;
  return a1;
}
