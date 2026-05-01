/*
 * XREFs of ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z @ 0x18008EF40
 * Callers:
 *     ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBGAEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG2@Z @ 0x18008EB1C (--$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180410474 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CBaseTrayFlyoutExperienceManager *__fastcall CBaseTrayFlyoutExperienceManager::CBaseTrayFlyoutExperienceManager(
        CBaseTrayFlyoutExperienceManager *this)
{
  CBaseTrayFlyoutExperienceManager *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CBaseTrayFlyoutExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 6) = &CBaseTrayFlyoutExperienceManager::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 72, (char *)this + 48, 1LL);
  *((_DWORD *)this + 66) = 2050;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_BYTE *)this + 288) = 0;
  *((_DWORD *)this + 73) = 56;
  *(GUID *)((char *)this + 296) = GUID_NULL;
  *((_QWORD *)this + 39) = 0LL;
  *((_BYTE *)this + 320) = 0;
  *((_DWORD *)this + 81) = 57;
  *(GUID *)((char *)this + 328) = GUID_NULL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 3;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  memset_0((char *)this + 376, 0, 0x30uLL);
  *((_QWORD *)this + 53) = 0LL;
  result = this;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_WORD *)this + 224) = 0;
  *((_BYTE *)this + 450) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 33) = 4;
  return result;
}
