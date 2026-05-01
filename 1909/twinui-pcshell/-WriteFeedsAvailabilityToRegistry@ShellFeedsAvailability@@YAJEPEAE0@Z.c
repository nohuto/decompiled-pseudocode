/*
 * XREFs of ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180094650 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CAX_NW4R.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800965BC (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA_NW4Rep.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@SA_NXZ @ 0x1800C4894 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@SA_NXZ.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5418 (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z @ 0x1800C5E2C (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x1800C5F00 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691@@@wil@@SA_NXZ @ 0x1800C6220 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_323.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108980@@@wil@@SA_NXZ @ 0x1800C6248 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800C76A0 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x1800C7868 (-IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
        ShellFeedsAvailability *this,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  char v6; // si
  char IsEnabled; // al
  __int64 v8; // rcx
  bool v9; // r9
  ShellFeedsAvailabilityHelpers *v10; // rcx
  bool IsCTAEnabled; // al
  ShellFeedsExperienceHelpers *v12; // rcx
  unsigned int *v13; // r8
  unsigned __int8 v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  const unsigned __int16 *v25; // r8
  BYTE *v26; // rdx
  BYTE *v27; // rdx
  bool v29[4]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v30[2]; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v31; // [rsp+28h] [rbp-38h]
  BYTE *lpData[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  unsigned __int64 v34; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v31 = -2LL;
  v6 = (char)this;
  *a3 = 0;
  IsEnabled = wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691>::__private_IsEnabled(
                this,
                a2,
                a3,
                a4);
  v9 = v29[0];
  if ( IsEnabled )
    v9 = 0;
  v29[0] = v9;
  v33 = 0LL;
  v34 = 7LL;
  LOWORD(lpData[0]) = 0;
  if ( !wil::Feature<__WilFeatureTraits_Feature_FeedsCTACompliance>::__private_IsEnabled(v8) )
  {
    if ( !v6 )
    {
      v19 = ShellFeedsAvailability::CheckFeedsAvailability((char *)v29, (char *)lpData);
      v20 = v19;
      if ( v19 < 0 )
      {
        v21 = 211LL;
        goto LABEL_39;
      }
    }
    v19 = ShellFeedsAvailability::CheckFeedsServerAvailability(v6, v29, a2, (char *)lpData);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = 213LL;
      goto LABEL_39;
    }
    goto LABEL_18;
  }
  IsCTAEnabled = ShellFeedsAvailabilityHelpers::IsCTAEnabled(v10);
  v14 = IsCTAEnabled;
  if ( v6 )
    goto LABEL_11;
  if ( IsCTAEnabled )
  {
    *(_DWORD *)v30 = 0;
    if ( ShellFeedsExperienceHelpers::GetShellFeedsRegKey(v12, v30, v13) < 0 || *(_DWORD *)v30 != 1 )
    {
      *a3 = v14;
      goto LABEL_20;
    }
  }
  v19 = ShellFeedsAvailability::CheckFeedsAvailability((char *)v29, (char *)lpData);
  v20 = v19;
  if ( v19 >= 0 )
  {
LABEL_11:
    v19 = ShellFeedsAvailability::CheckFeedsServerAvailability(v6, v29, a2, (char *)lpData);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = 194LL;
      goto LABEL_39;
    }
LABEL_18:
    v14 = v29[0];
    if ( v29[0] )
    {
      LOBYTE(v22) = wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_IsEnabled(v16);
      wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::ReportUsageToService(v22, 1u, v23);
    }
LABEL_20:
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691>::__private_IsEnabled(
                            v16,
                            v15,
                            v17,
                            v18) )
    {
      if ( v14 || !*a2 )
      {
        v19 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"IsFeedsAvailable", (const unsigned __int16 *)v14, v24);
        v20 = v19;
        if ( v19 < 0 )
        {
          v21 = 229LL;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v19 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"IsFeedsAvailable", (const unsigned __int16 *)v14, v24);
      v20 = v19;
      if ( v19 < 0 )
      {
        v21 = 234LL;
        goto LABEL_39;
      }
    }
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108980>::__private_IsEnabled() )
    {
      if ( !v14 && v33 )
      {
        v26 = (BYTE *)lpData;
        if ( v34 >= 8 )
          v26 = lpData[0];
        v19 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"DisabledReason", v26, v25);
        v20 = v19;
        if ( v19 < 0 )
        {
          v21 = 241LL;
          goto LABEL_39;
        }
      }
    }
    else if ( !v14 )
    {
      v27 = (BYTE *)lpData;
      if ( v34 >= 8 )
        v27 = lpData[0];
      v19 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"DisabledReason", v27, v25);
      v20 = v19;
      if ( v19 < 0 )
      {
        v21 = 248LL;
        goto LABEL_39;
      }
    }
    v20 = 0;
    goto LABEL_41;
  }
  v21 = 192LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v19);
LABEL_41:
  std::wstring::_Tidy_deallocate(lpData);
  return v20;
}
