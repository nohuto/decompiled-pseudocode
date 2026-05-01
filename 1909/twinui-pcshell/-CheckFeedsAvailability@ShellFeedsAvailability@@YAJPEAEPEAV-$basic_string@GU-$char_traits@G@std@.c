/*
 * XREFs of ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ @ 0x18009FDA8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NXZ.c)
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x1800C5A94 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 *     ?IsAuditMode@@YA_NXZ @ 0x1800C5B54 (-IsAuditMode@@YA_NXZ.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x1800C5F00 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800C61F8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@SA_NW4Repor.c)
 *     ?IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800C79A0 (-IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800C7A1C (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsFeedsAppInstalled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800D246C (-IsFeedsAppInstalled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800D2A7C (-IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18019520C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1801E0240 (-IsUserOOBE@@YA_NXZ.c)
 */

__int64 __fastcall ShellFeedsAvailability::CheckFeedsAvailability(char *a1, char *a2)
{
  __int64 v4; // rcx
  unsigned __int8 *v5; // rdx
  unsigned __int8 *v6; // rdx
  int IsFeedsAppInstalled; // esi
  __int64 v8; // rdx
  char v10; // al
  unsigned __int8 *v11; // rdx
  char v12; // al
  char v13; // al
  char v14; // cl
  bool v15; // al
  unsigned __int8 v16; // si
  char v17; // al
  char v18; // cl
  bool v19; // al
  char v20; // cl
  bool v21; // al
  ShellFeedsAvailabilityHelpers *v22; // rcx
  unsigned __int8 IsTempProfile; // al
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  int v26; // eax
  unsigned int v27; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v29; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0;
  std::wstring::assign(a2, &szAgent, 0LL);
  if ( wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(v4) )
  {
    v29 = 0;
    IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsFeedsAppInstalled((ShellFeedsAvailabilityHelpers *)&v29, v5);
    if ( IsFeedsAppInstalled < 0 )
    {
      v8 = 30LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
        (const char *)(unsigned int)IsFeedsAppInstalled);
      return (unsigned int)IsFeedsAppInstalled;
    }
    v10 = v29;
    *a1 = v29;
    if ( !v10 )
      std::wstring::assign(a2, L"AppNotInstalled", 0xFuLL);
    if ( *a1 )
    {
      v29 = 0;
      IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsFeedsAllowedOnSKU(
                              (ShellFeedsAvailabilityHelpers *)&v29,
                              v6);
      if ( IsFeedsAppInstalled < 0 )
      {
        v8 = 40LL;
        goto LABEL_4;
      }
      v12 = v29;
      *a1 = v29;
      if ( !v12 )
        std::wstring::assign(a2, L"NotAllowedOnSKU", 0xFuLL);
      if ( *a1 )
      {
        v29 = 0;
        IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsEnterprisePolicyEnabled(
                                (ShellFeedsAvailabilityHelpers *)&v29,
                                v11);
        if ( IsFeedsAppInstalled < 0 )
        {
          v8 = 51LL;
          goto LABEL_4;
        }
        v13 = v29;
        *a1 = v29;
        if ( !v13 )
          std::wstring::assign(a2, L"DisabledByPolicy", 0x10uLL);
      }
    }
    v14 = *a1;
    if ( *a1 )
    {
      v15 = IsShellLauncherEnabledForCurrentUser();
      v14 = !v15;
      *a1 = !v15;
      if ( v15 )
      {
        std::wstring::assign(a2, L"ShellLauncherDisabledForCurrentUser", 0x23uLL);
        v14 = *a1;
      }
    }
    v16 = 1;
    if ( v14 )
    {
      if ( GetSystemMetrics(67) )
      {
        v17 = 1;
        v18 = 0;
      }
      else
      {
        v17 = 0;
        v18 = 1;
      }
      *a1 = v18;
      if ( v17 )
      {
        std::wstring::assign(a2, L"DisabledInSafeMode", 0x12uLL);
        v18 = *a1;
      }
      if ( v18 )
      {
        v19 = IsAuditMode();
        v20 = !v19;
        *a1 = !v19;
        if ( v19 )
        {
          std::wstring::assign(a2, L"DisabledInAuditMode", 0x13uLL);
          v20 = *a1;
        }
        if ( v20 )
        {
          v21 = IsUserOOBE();
          LOBYTE(v22) = !v21;
          *a1 = !v21;
          if ( v21 )
          {
            std::wstring::assign(a2, L"DisabledForOOBE", 0xFuLL);
            LOBYTE(v22) = *a1;
          }
          if ( (_BYTE)v22 )
          {
            IsTempProfile = ShellFeedsAvailabilityHelpers::IsTempProfile(v22);
            *a1 = IsTempProfile == 0;
            if ( IsTempProfile )
              std::wstring::assign(a2, L"DisabledForTempUserProfile", 0x1AuLL);
          }
        }
      }
    }
    if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::__private_IsEnabled()
      || !(unsigned __int8)GetInstalledBrowserChannelInfo() )
    {
      v16 = 0;
    }
    v26 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
            L"IsAnaheimEdgeInstalled",
            (const unsigned __int16 *)v16,
            v24,
            v25);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
        (const char *)(unsigned int)v26);
      return v27;
    }
    if ( *a1 )
    {
      *a1 = v16;
      if ( !v16 )
        std::wstring::assign(a2, L"AnaheimEdgeNotInstalled", 0x17uLL);
    }
  }
  return 0LL;
}
