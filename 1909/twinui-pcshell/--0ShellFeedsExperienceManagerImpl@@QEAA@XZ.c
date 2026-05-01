/*
 * XREFs of ??0ShellFeedsExperienceManagerImpl@@QEAA@XZ @ 0x180092788
 * Callers:
 *     ??$MakeAndInitialize@VShellFeedsExperienceManagerImpl@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180091C38 (--$MakeAndInitialize@VShellFeedsExperienceManagerImpl@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

ShellFeedsExperienceManagerImpl *__fastcall ShellFeedsExperienceManagerImpl::ShellFeedsExperienceManagerImpl(
        ShellFeedsExperienceManagerImpl *this)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::`vftable'{for `Windows::Internal::Shell::Experience::IShellFeedsExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ShellFeedsExperienceManagerImpl::`vftable'{for `Windows::Internal::Shell::Experience::IShellFeedsExperienceManager'};
  *((_QWORD *)this + 1) = &ShellFeedsExperienceManagerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &ShellFeedsExperienceManagerImpl::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 3) = &ShellFeedsExperienceManagerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_BYTE *)this + 156) = 1;
  return this;
}
