/*
 * XREFs of ??1?$ComPtr@VShellFeedsShellExperienceView@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAA@XZ @ 0x180092A10
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TwinUI::ShellFeeds::ShellFeedsShellExperienceView_Windows::Internal::Shell::Experience::IShellExperienceView_IServiceProvider___HSTRING_____HSTRING_____HSTRING_____enum_ZBID__::_1_::dtor$2 @ 0x180091E3D (_Microsoft--WRL--Details--MakeAndInitialize_TwinUI--ShellFeeds--ShellFeedsShellExpe_ea_180091E3D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TwinUI::Cortana::ShellExperienceView_Windows::Internal::Shell::Experience::IShellExperienceView_IServiceProvider___HSTRING_____HSTRING_____HSTRING_____enum_ZBID__::_1_::dtor$2 @ 0x18019BA1A (_Microsoft--WRL--Details--MakeAndInitialize_TwinUI--Cortana--ShellExperienceView_Wi_ea_18019BA1A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellFeedsShellExperienceViewLifetime@ShellFeeds@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::ShellFeedsShellExperienceView>::~ComPtr<TwinUI::ShellFeeds::ShellFeedsShellExperienceView>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::ShellFeeds::IShellFeedsShellExperienceViewLifetime>::Release(result);
  }
  return result;
}
