/*
 * XREFs of ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x18017D014
 * Callers:
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x18017C7A8 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180410474 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

RTL_SRWLOCK *__fastcall TwinUI::Cortana::ShellExperienceView::ShellExperienceView(RTL_SRWLOCK *this)
{
  this[4].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::`vftable';
  this[1].Ptr = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::IShellExperienceViewLifetime>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>'};
  this[1].Ptr = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::IShellExperienceViewLifetime>'};
  this[5].Ptr = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience(&this[6], &this[5], 4LL);
  this[30].Ptr = 0LL;
  InitializeSRWLock(this + 31);
  InitializeSRWLock(this + 32);
  this[33].Ptr = 0LL;
  InitializeSRWLock(this + 34);
  InitializeSRWLock(this + 35);
  return this;
}
