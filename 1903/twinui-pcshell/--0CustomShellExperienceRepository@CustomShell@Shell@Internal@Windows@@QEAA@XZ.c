/*
 * XREFs of ??0CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@QEAA@XZ @ 0x1801613A4
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180161290 (--$MakeAndInitialize@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UIInsp.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *__fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::CustomShellExperienceRepository(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *)((char *)this + 8));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `IInspectable'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `IInspectable'};
  *v2 = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
  *((_QWORD *)this + 5) = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>'};
  return this;
}
