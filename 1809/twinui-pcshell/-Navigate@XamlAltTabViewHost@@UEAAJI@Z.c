/*
 * XREFs of ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180280340
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180263348 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18027C860 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224___ @ 0x18027CE24 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224.c)
 *     _lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_ @ 0x18027D6E0 (_lambda_bb329e9869818a924204dbfd8ac58224_--_lambda_bb329e9869818a924204dbfd8ac58224_.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18027D744 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18027D7F8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid_ea_18027D7F8.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E420 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180281124 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028151C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlAltTabViewHost::Navigate(XamlAltTabViewHost *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  _BYTE v16[328]; // [rsp+60h] [rbp-A8h] BYREF
  int v17; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v18; // [rsp+1B0h] [rbp+A8h]
  _QWORD v19[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v20[40]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = *((_QWORD *)this + 21);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"NavigateAltTab");
  v20[0] = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  XamlSwitcherTelemetry::NavigateAltTab::StartActivity((XamlSwitcherTelemetry::NavigateAltTab *)v20, v6 != 0);
  v7 = *((_QWORD *)this + 21);
  if ( v7 && (unsigned int)(a2 - 5) <= 1 )
  {
    v8 = __abi_winrt_ptr_ctor(v7);
    v17 = a2;
    v18 = __abi_winrt_ptr_ctor(v8);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v19,
      (__int64)v20);
    v19[0] = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
    v9 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v10 = lambda_bb329e9869818a924204dbfd8ac58224_::_lambda_bb329e9869818a924204dbfd8ac58224_(
            (__int64)v16,
            (__int64)&v17);
    v11 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224___(v9, v10);
    v12 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 21));
    v13 = Windows::UI::Core::ICoreDispatcher::RunAsync(v12, 0LL, (__int64)v11);
    v14 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v14);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 16LL))(v11, v14);
    XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
  }
  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v20);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
