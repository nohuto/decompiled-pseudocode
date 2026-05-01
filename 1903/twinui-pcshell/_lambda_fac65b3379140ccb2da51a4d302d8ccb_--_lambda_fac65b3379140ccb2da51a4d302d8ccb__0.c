/*
 * XREFs of _lambda_fac65b3379140ccb2da51a4d302d8ccb_::_lambda_fac65b3379140ccb2da51a4d302d8ccb__0 @ 0x1802D6FA4
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802D9F50 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802B41B8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802B41B8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_fac65b3379140ccb2da51a4d302d8ccb_::_lambda_fac65b3379140ccb2da51a4d302d8ccb__0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _OWORD *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        __int64 a9)
{
  __int64 v10; // rax

  *(_QWORD *)a1 = a2;
  v10 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 132));
  *(_OWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 32) = __abi_winrt_ptr_ctor(*a5);
  *(_QWORD *)(a1 + 40) = __abi_winrt_ptr_ctor(*a6);
  *(_QWORD *)(a1 + 48) = __abi_winrt_ptr_ctor(*a7);
  *(_DWORD *)(a1 + 56) = *a8;
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 64),
    a9);
  *(_QWORD *)(a1 + 64) = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  return a1;
}
