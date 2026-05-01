/*
 * XREFs of ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x18031173C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_64453e8f1d1795856607ef361707b1d3___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x180312950 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180312950.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x180312A00 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180312A00.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncher::AllowAutoAppRestartOnCrash(XamlLauncher *this)
{
  char v1; // bl
  XamlLauncher *v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = this;
  v5 = 4;
  v4 = 0;
  v1 = 1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
          L"AllowAutoAppRestartOnCrash",
          0x10000012u,
          &v4,
          &v3,
          &v5) )
  {
    if ( v4 == 4 )
    {
      if ( (unsigned int)v3 <= 1 )
        return (_DWORD)v3 == 1;
    }
    else if ( v5 == 4 && (unsigned __int16)((_WORD)v3 - 48) <= 1u )
    {
      return (_WORD)v3 == 49;
    }
  }
  return v1;
}
