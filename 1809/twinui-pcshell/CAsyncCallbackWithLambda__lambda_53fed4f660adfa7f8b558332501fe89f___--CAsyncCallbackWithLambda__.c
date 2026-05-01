/*
 * XREFs of CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___::CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___ @ 0x18012AF44
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___ @ 0x180129B3C (CreateAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18002947C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18012D0B4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___::CAsyncCallbackWithLambda__lambda_53fed4f660adfa7f8b558332501fe89f___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 72) = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(v4);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_1803D14C0;
  *(_QWORD *)(a1 + 8) = off_1803D0F10;
  return a1;
}
