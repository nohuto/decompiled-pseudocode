/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4___1_long_ @ 0x18010731C
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180112000 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004DAC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18010706C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18010706C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4___1_long_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 48),
    a2 + 32);
  v4 = (_QWORD *)(a2 + 344);
  *(_QWORD *)(a1 + 48) = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  *(_QWORD *)(a1 + 360) = 0LL;
  if ( (_QWORD *)(a1 + 360) != v4 )
  {
    *(_QWORD *)(a1 + 360) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)a1 = off_1803D0040;
  return a1;
}
