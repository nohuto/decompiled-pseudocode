/*
 * XREFs of ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800911D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MeetNow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180091368 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MeetNow@@@wil@@CAX_NW4ReportingKind@.c)
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180096A54 (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801BB3E0 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspe.c)
 */

int __fastcall JumpViewExperienceManagerFactory::GetExperienceManager(
        JumpViewExperienceManagerFactory *this,
        const unsigned __int16 *a2,
        struct IServiceProvider *a3,
        struct IInspectable **a4)
{
  int v8; // eax
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_MeetNow>::ReportUsageToService(this);
  if ( (unsigned int)_o__wcsicmp(a2, L"Windows.Internal.ShellExperience.MeetNow") )
  {
    if ( (unsigned int)_o__wcsicmp(a2, L"Windows.Internal.ShellExperience.JumpView") )
      return -2147023728;
    else
      return JumpViewExperienceManagerFactory::GetExperienceManager(
               (JumpViewExperienceManagerFactory *)((char *)this - 8),
               a3,
               a4);
  }
  else
  {
    v8 = Microsoft::WRL::Details::MakeAndInitialize<MeetNowExperienceManager,IInspectable,IServiceProvider * &>((void **)a4);
    v9 = v8;
    if ( v8 >= 0 )
      return 0;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
