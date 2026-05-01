/*
 * XREFs of _lambda_33af26c9d846f3b9c507d9b825ceee74_::_lambda_33af26c9d846f3b9c507d9b825ceee74_ @ 0x18027D5C4
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802809C0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180103D2C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecu.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_33af26c9d846f3b9c507d9b825ceee74_::_lambda_33af26c9d846f3b9c507d9b825ceee74_(
        __int64 a1,
        volatile int *a2,
        __int64 *a3,
        _OWORD *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8)
{
  _OWORD *v8; // r10
  __int64 v10; // rcx

  v8 = a4;
  *(_QWORD *)a1 = a2;
  v10 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::InternalAddRef(
      v10,
      a2);
  *(_OWORD *)(a1 + 16) = *v8;
  *(_QWORD *)(a1 + 32) = __abi_winrt_ptr_ctor(*a5);
  *(_QWORD *)(a1 + 40) = __abi_winrt_ptr_ctor(*a6);
  *(_QWORD *)(a1 + 48) = __abi_winrt_ptr_ctor(*a7);
  *(_DWORD *)(a1 + 56) = *a8;
  return a1;
}
