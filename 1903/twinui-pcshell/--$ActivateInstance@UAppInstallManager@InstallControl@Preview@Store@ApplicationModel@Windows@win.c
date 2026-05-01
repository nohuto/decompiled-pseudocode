/*
 * XREFs of ??$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@?$consume_IActivationFactory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@XZ @ 0x180093E10
 * Callers:
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800941AC (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094690 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::consume_IActivationFactory<winrt::Windows::Foundation::IActivationFactory>::ActivateInstance<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  void (__fastcall ***v6)(_QWORD, void *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = *(_QWORD *)((a1 - 8) & -(__int64)(a1 != 0));
  v4 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, void *, _QWORD *)))(*(_QWORD *)v3 + 48LL))(
         v3,
         &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = 0LL;
  if ( v6 )
    (**v6)(
      v6,
      &winrt::impl::guid_storage<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::value,
      a2);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
  return a2;
}
