/*
 * XREFs of ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800941AC
 * Callers:
 *     ??0PenWorkspaceAppInstallBroker@@QEAA@XZ @ 0x1800944A4 (--0PenWorkspaceAppInstallBroker@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     WINRT_WindowsCreateStringReference @ 0x1800882FA (WINRT_WindowsCreateStringReference.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18008BBA5 (WINRT_InterlockedPushEntrySList.c)
 *     ??$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@?$consume_IActivationFactory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@XZ @ 0x180093E10 (--$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800943C0 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094690 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ @ 0x18009718C (-get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x180097300 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_f42f65653c13c4ca9c04beaf1720b2f0_ &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  bool v4; // di
  winrt::impl *v5; // rcx
  union _SLIST_HEADER *factory_cache; // rax
  __int64 *v7; // rcx
  winrt::impl *v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-48h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF

  v10[1] = -2LL;
  v10[0] = a2;
  v10[2] = &qword_1805999F8;
  _InterlockedIncrement64(&qword_1805999F8);
  if ( winrt::impl::factory_storage<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>::factory )
  {
    winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>(
      (__int64)&qword_1805999F8,
      a2);
    _InterlockedDecrement64(&qword_1805999F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805999F8);
    if ( WINRT_WindowsCreateStringReference(
           L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
           0x47u,
           &hstringHeader,
           &string) )
    {
      _o_terminate();
      __debugbreak();
    }
    winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v9, &string);
    v3 = 0LL;
    v10[0] = 0LL;
    if ( v9 )
    {
      (**(void (__fastcall ***)(winrt::impl *, void *, _QWORD *))v9)(
        v9,
        &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value,
        v10);
      v3 = v10[0];
    }
    v4 = v3 != 0;
    if ( v3 )
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(v10);
    if ( v4 )
    {
      v10[3] = &qword_1805999F8;
      _InterlockedIncrement64(&qword_1805999F8);
      v5 = v9;
      if ( _InterlockedCompareExchange64(
             &winrt::impl::factory_storage<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>::factory,
             (signed __int64)v9,
             0LL) )
      {
        v7 = v10;
      }
      else
      {
        v9 = 0LL;
        factory_cache = (union _SLIST_HEADER *)winrt::impl::get_factory_cache(v5);
        WINRT_InterlockedPushEntrySList(factory_cache, &ListEntry);
        v7 = &qword_1805999F8;
      }
      winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>(
        (__int64)v7,
        a2);
      _InterlockedDecrement64(&qword_1805999F8);
    }
    else
    {
      winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>(
        (__int64)v10,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  }
  return a2;
}
