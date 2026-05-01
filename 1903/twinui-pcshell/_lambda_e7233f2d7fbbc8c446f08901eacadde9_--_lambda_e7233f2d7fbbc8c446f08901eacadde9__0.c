/*
 * XREFs of _lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9__0 @ 0x1802C1614
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802C773C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802B41B8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802B41B8.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9__0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        _OWORD *a5,
        _OWORD *a6,
        __int64 *a7,
        __int64 *a8,
        _QWORD *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 a12)
{
  __int64 v14; // rax
  __int64 *v15; // rcx

  v14 = *a2;
  *(_QWORD *)a1 = *a2;
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 156));
  v15 = (__int64 *)(a1 + 8);
  *v15 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
  *(_QWORD *)(a1 + 16) = __abi_winrt_ptr_ctor(*a4);
  *(_OWORD *)(a1 + 24) = *a5;
  *(_OWORD *)(a1 + 40) = *a6;
  *(_QWORD *)(a1 + 56) = __abi_winrt_ptr_ctor(*a7);
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*a8);
  *(_QWORD *)(a1 + 72) = *a9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  *(_QWORD *)(a1 + 80) = __abi_winrt_ptr_ctor(*a10);
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*a11);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 96),
    a12);
  *(_QWORD *)(a1 + 96) = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  return a1;
}
