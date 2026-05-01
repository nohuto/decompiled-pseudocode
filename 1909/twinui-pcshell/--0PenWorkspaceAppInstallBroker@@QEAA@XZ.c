/*
 * XREFs of ??0PenWorkspaceAppInstallBroker@@QEAA@XZ @ 0x1800A16CC
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceAppInstallBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A13B0 (--$MakeAndInitialize@VPenWorkspaceAppInstallBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800A148C (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800A1808 (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
PenWorkspaceAppInstallBroker *__fastcall PenWorkspaceAppInstallBroker::PenWorkspaceAppInstallBroker(
        PenWorkspaceAppInstallBroker *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((PenWorkspaceAppInstallBroker *)((char *)this + 8));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>::`vftable'{for `IInspectable'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IPenWorkspaceAppInstallBroker>'};
  *((_QWORD *)this + 5) = &PenWorkspaceAppInstallBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPenWorkspaceAppInstallBroker>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &PenWorkspaceAppInstallBroker::`vftable'{for `IInspectable'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IPenWorkspaceAppInstallBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,IPenWorkspaceAppInstallBroker>'};
  *((_QWORD *)this + 5) = &PenWorkspaceAppInstallBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &PenWorkspaceAppInstallBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPenWorkspaceAppInstallBroker>'};
  winrt::hstring::hstring((PenWorkspaceAppInstallBroker *)((char *)this + 72), L"9MSPC6MP8FM4");
  winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_f42f65653c13c4ca9c04beaf1720b2f0_ &>(
    v3,
    (_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
