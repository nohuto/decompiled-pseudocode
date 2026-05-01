/*
 * XREFs of ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180233A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD68 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x18021D7A0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?StartActivity@OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@QEAAXK_N@Z @ 0x180236300 (-StartActivity@OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@QEAAXK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestBeginPresentView(
        RTL_SRWLOCK **this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v3; // esi
  __int64 v6; // r8
  _QWORD v8[40]; // [rsp+30h] [rbp-168h] BYREF

  v3 = a3;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"OnRequestBeginPresentView");
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  ViewManagerInteropTraceLogging::OnRequestBeginPresentView::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestBeginPresentView *)v8,
    a2,
    v3);
  ViewEventDispatcher::ViewVisibilityChanged(this[6], 0, a2, v3);
  LOBYTE(v6) = v3;
  (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64))this[9]->Ptr + 17))(this[9], a2, v6);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, 0);
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return 0LL;
}
