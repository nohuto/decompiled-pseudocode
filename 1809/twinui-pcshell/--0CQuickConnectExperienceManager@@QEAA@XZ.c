/*
 * XREFs of ??0CQuickConnectExperienceManager@@QEAA@XZ @ 0x180171208
 * Callers:
 *     ??$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180170C98 (--$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1803AE1F4 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CQuickConnectExperienceManager *__fastcall CQuickConnectExperienceManager::CQuickConnectExperienceManager(
        CQuickConnectExperienceManager *this)
{
  CQuickConnectExperienceManager *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CQuickConnectExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CQuickConnectExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>'};
  *((_QWORD *)this + 2) = &CQuickConnectExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CQuickConnectExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>'};
  *((_QWORD *)this + 6) = &CQuickConnectExperienceManager::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 72, (char *)this + 48, 1LL);
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((GUID *)this + 18) = GUID_NULL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_BYTE *)this + 348) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_WORD *)this + 186) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  result = this;
  *((_QWORD *)this + 49) = 0LL;
  *((_BYTE *)this + 400) = 0;
  return result;
}
