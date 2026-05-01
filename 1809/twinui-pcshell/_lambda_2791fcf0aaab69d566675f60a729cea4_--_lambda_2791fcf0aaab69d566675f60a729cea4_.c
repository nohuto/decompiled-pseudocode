/*
 * XREFs of _lambda_2791fcf0aaab69d566675f60a729cea4_::_lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x180106F00
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180112000 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18010709C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18010709C.c)
 */

__int64 __fastcall lambda_2791fcf0aaab69d566675f60a729cea4_::_lambda_2791fcf0aaab69d566675f60a729cea4_(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        __int64 a6,
        _QWORD *a7)
{
  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_DWORD *)(a1 + 24) = *a5;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  *(_QWORD *)(a1 + 344) = 0LL;
  if ( (_QWORD *)(a1 + 344) != a7 )
  {
    *(_QWORD *)(a1 + 344) = *a7;
    *a7 = 0LL;
  }
  return a1;
}
