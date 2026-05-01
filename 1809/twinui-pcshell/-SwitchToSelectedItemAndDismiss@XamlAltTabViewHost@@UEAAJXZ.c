/*
 * XREFs of ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802822C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180263348 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18027C860 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6___ @ 0x18027CCF4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6.c)
 *     _lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_ @ 0x18027D680 (_lambda_a3ced70d1476e93ea420f346718bf2f6_--_lambda_a3ced70d1476e93ea420f346718bf2f6_.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18027D744 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18027D7F8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid_ea_18027D7F8.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E478 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180281304 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028151C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlAltTabViewHost::SwitchToSelectedItemAndDismiss(XamlAltTabViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 *v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14[41]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v15[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v16; // [rsp+2E8h] [rbp+1E0h] BYREF
  _QWORD v17[39]; // [rsp+2F0h] [rbp+1E8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = *((_QWORD *)this + 21);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"SwitchToSelectedItemAndDismiss");
  v15[0] = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::StartActivity(
    (XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)v15,
    v4 != 0);
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    v6 = __abi_winrt_ptr_ctor(v5);
    v16 = __abi_winrt_ptr_ctor(v6);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v17,
      (__int64)v15);
    v17[0] = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
    v7 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v8 = lambda_a3ced70d1476e93ea420f346718bf2f6_::_lambda_a3ced70d1476e93ea420f346718bf2f6_(v14, &v16);
    v9 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6___(
           v7,
           (_QWORD **)v8);
    v10 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 21));
    v11 = Windows::UI::Core::ICoreDispatcher::RunAsync(v10, 0LL, (__int64)v9);
    v12 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v12);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 16LL))(v9, v12);
    XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)v17);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15);
  }
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)v15);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
