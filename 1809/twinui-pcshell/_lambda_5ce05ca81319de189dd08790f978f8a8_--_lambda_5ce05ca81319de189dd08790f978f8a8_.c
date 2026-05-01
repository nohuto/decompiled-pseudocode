/*
 * XREFs of _lambda_5ce05ca81319de189dd08790f978f8a8_::_lambda_5ce05ca81319de189dd08790f978f8a8_ @ 0x180126C60
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___ @ 0x180126AC8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c95d809369eb2a01accf8ae73ccd45ab___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18010709C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18010709C.c)
 */

__int64 *__fastcall lambda_5ce05ca81319de189dd08790f978f8a8_::_lambda_5ce05ca81319de189dd08790f978f8a8_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = a3;
  a1[2] = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  a1[3] = a4[1];
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    a4 + 2);
  a1[4] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
  return a1;
}
