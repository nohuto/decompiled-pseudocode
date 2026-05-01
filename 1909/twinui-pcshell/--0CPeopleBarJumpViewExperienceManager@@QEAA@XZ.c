/*
 * XREFs of ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x1801B10F8
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801B0F00 (--$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvide.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x18042FAB4 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CPeopleBarJumpViewExperienceManager *__fastcall CPeopleBarJumpViewExperienceManager::CPeopleBarJumpViewExperienceManager(
        CPeopleBarJumpViewExperienceManager *this)
{
  CPeopleBarJumpViewExperienceManager *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 3) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 6) = &CPeopleBarJumpViewExperienceManager::`vftable';
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 56, (char *)this + 48, 2LL);
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 72) = 2050;
  *((_DWORD *)this + 73) = 3;
  *((_QWORD *)this + 37) = 0LL;
  memset_0((char *)this + 304, 0, 0x28uLL);
  *((_QWORD *)this + 43) = 0LL;
  result = this;
  *((_BYTE *)this + 352) = 0;
  *((_DWORD *)this + 89) = 56;
  *(GUID *)((char *)this + 360) = GUID_NULL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 384) = 0;
  *((_DWORD *)this + 97) = 57;
  *(GUID *)((char *)this + 392) = GUID_NULL;
  *((_QWORD *)this + 51) = 0LL;
  return result;
}
