/*
 * XREFs of ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18017D640
 * Callers:
 *     ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x18017D8D0 (--_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18041063C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall TwinUI::Cortana::ShellExperienceView::~ShellExperienceView(TwinUI::Cortana::ShellExperienceView *this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    *((_QWORD *)this + 33) = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 30);
  if ( v3 )
  {
    *((_QWORD *)this + 30) = 0LL;
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((TwinUI::Cortana::ShellExperienceView *)((char *)this + 48));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>((__int64)this);
}
