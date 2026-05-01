/*
 * XREFs of ?GetActivationValueSet@TabViewManager@@AEAA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18022F380
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18023F180 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x18000EB7C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800997E8 (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180224B2C (--$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIPrope.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *TabViewManager::GetActivationValueSet(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, GUID *, void **),
        ...)
{
  __int64 v5; // rax
  IUnknown *v7; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v9; // [rsp+68h] [rbp+28h] BYREF
  va_list va; // [rsp+68h] [rbp+28h]
  va_list va1; // [rsp+70h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, void *);
  v8[1] = -2LL;
  if ( v9 )
  {
    wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(a2, (void **)va);
  }
  else
  {
    (**a3)(a3, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, (void **)va);
    if ( v9
      && (v7 = 0LL,
          (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 8) + 32LL))(
            a1 + 8,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v7),
          Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(v8, v7, v9),
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7),
          (v5 = v8[0]) != 0) )
    {
      v8[0] = 0LL;
      *a2 = v5;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)va);
    }
    else
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)va);
      wil::ActivateInstance<Windows::Foundation::Collections::IPropertySet>((__int64)a2);
    }
  }
  return a2;
}
