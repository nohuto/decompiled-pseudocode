/*
 * XREFs of ??1?$ComPtr@VShellExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@QEAA@XZ @ 0x180151060
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TwinUI::Cortana::ShellExperienceView_Windows::Internal::Shell::Experience::IShellExperienceView_IServiceProvider_____ptr64_HSTRING_______ptr64_HSTRING_______ptr64_HSTRING_______ptr64_enum_ZBID__::_1_::dtor$2 @ 0x180150799 (_Microsoft--WRL--Details--MakeAndInitialize_TwinUI--Cortana--ShellExperienceView_Wi_ea_180150799.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TwinUI::Cortana::ShellExperienceView>::~ComPtr<TwinUI::Cortana::ShellExperienceView>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::Release(result);
  }
  return result;
}
