/*
 * XREFs of CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___::CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___ @ 0x18017376C
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___ @ 0x18017249C (CreateAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003FA9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180175994 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$SnapAss.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___::CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 72) = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>>::InternalAddRef(v4);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_180456BF0;
  *(_QWORD *)(a1 + 8) = off_180456618;
  return a1;
}
