/*
 * XREFs of ??0PenWorkspaceAppInstallBroker@@QEAA@XZ @ 0x1800944A4
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceAppInstallBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800940D0 (--$MakeAndInitialize@VPenWorkspaceAppInstallBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     WINRT_WindowsCreateString @ 0x1800883C1 (WINRT_WindowsCreateString.c)
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800941AC (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
PenWorkspaceAppInstallBroker *__fastcall PenWorkspaceAppInstallBroker::PenWorkspaceAppInstallBroker(
        PenWorkspaceAppInstallBroker *this)
{
  _QWORD *v2; // rdi
  HRESULT v3; // eax
  __int64 v4; // rcx
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF
  char *v7; // [rsp+50h] [rbp+18h]

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
  string = 0LL;
  v3 = WINRT_WindowsCreateString(L"9MSPC6MP8FM4", 0xCu, &string);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  *((_QWORD *)this + 9) = string;
  v7 = (char *)this + 80;
  winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_f42f65653c13c4ca9c04beaf1720b2f0_ &>(
    v4,
    (_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
