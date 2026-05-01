/*
 * XREFs of ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@@Z @ 0x1802E76EC
 * Callers:
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802D9020 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802C18B0 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_1802C18B0.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1802EC678 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall XamlAltTabViewController::XamlAltTabViewController(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall ***a5)(_QWORD, GUID *, __int64),
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController(a1 + 1);
  *a1 = (__int64)&XamlAltTabViewController::`vftable';
  a1[1] = (__int64)&XamlAltTabViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[2] = (__int64)&XamlAltTabViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[3] = (__int64)&XamlAltTabViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[4] = (__int64)&XamlAltTabViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  a1[5] = (__int64)&XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  a1[6] = (__int64)&XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  a1[18] = (__int64)&XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[19] = (__int64)&XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  memset_0(a1 + 21, 0, 0x38uLL);
  a1[28] = 0LL;
  a1[31] = 0LL;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (__int64)"ShowAltTab");
  a1[32] = (__int64)&XamlSwitcherTelemetry::ShowAltTab::`vftable';
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 8, a3);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 9, a4);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 7, a2);
  v11 = a1[10];
  a1[10] = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (**a5)(a5, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, (__int64)(a1 + 10));
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      27LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 13, a6);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(a1 + 12, a7);
  return a1;
}
