/*
 * XREFs of ?TrySetViewForeground@TabViewManager@@AEAA_NPEAUIApplicationView@@PEA_N@Z @ 0x1801EE5F4
 * Callers:
 *     ?SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E503C (-SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TabViewManager::TrySetViewForeground(TabViewManager *this, struct IUnknown *a2, bool *a3)
{
  __int64 v4; // rbx
  bool v5; // bl
  struct IUnknown *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = *((_QWORD *)this + 143);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v7);
  (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v4 + 72LL))(v4, &v7);
  v5 = v7 && (unsigned int)SHIsSameObject(v7, a2)
    || ((int (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].AddRef)(a2) >= 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v7);
  return v5;
}
