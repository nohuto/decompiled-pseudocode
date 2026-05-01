/*
 * XREFs of _lambda_be511633a1c3fc9433c6a1507838a6b9_::_lambda_be511633a1c3fc9433c6a1507838a6b9_ @ 0x180150374
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___ @ 0x18015008C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c33ccc33460f714f139ac7c6d94dc43a___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18012D074 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18012D074.c)
 */

__int64 *__fastcall lambda_be511633a1c3fc9433c6a1507838a6b9_::_lambda_be511633a1c3fc9433c6a1507838a6b9_(
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
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    a4 + 2);
  a1[4] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
  return a1;
}
