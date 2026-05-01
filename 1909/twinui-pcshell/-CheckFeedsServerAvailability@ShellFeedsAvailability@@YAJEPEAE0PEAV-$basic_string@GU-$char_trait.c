/*
 * XREFs of ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5418
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z @ 0x1800C5E2C (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647@@@wil@@SA_NXZ @ 0x1800C6270 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfF.c)
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800C6934 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800C6F84 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800D29AC (-IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailability::CheckFeedsServerAvailability(char a1, bool *a2, _BYTE *a3, char *a4)
{
  const unsigned __int16 *v8; // r8
  unsigned int v9; // r9d
  BYTE *v10; // rdx
  int v11; // eax
  ShellFeedsAvailabilityHelpers *v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int8 IsNetworkConnectivityAvailable; // al
  unsigned __int8 *v16; // r8
  unsigned __int8 v17; // al
  bool v18; // al
  bool v19; // zf
  bool v20; // dl
  bool v21; // cl
  unsigned __int8 v23; // [rsp+20h] [rbp-40h] BYREF
  bool v24[7]; // [rsp+21h] [rbp-3Fh] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h]
  BYTE *lpData[4]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v25 = -2LL;
  ShellFeedsAvailabilityHelpers::GetCurrentLanguage(lpData);
  v10 = (BYTE *)lpData;
  if ( lpData[3] >= (BYTE *)8 )
    v10 = lpData[0];
  v11 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"osLocale", v10, v8, v9);
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( !*a2 && !a1 )
      goto LABEL_21;
    IsNetworkConnectivityAvailable = ShellFeedsAvailabilityHelpers::IsNetworkConnectivityAvailable(v12);
    *a3 = IsNetworkConnectivityAvailable == 0;
    if ( !IsNetworkConnectivityAvailable )
      goto LABEL_21;
    v23 = 0;
    v24[0] = 0;
    v11 = ShellFeedsAvailabilityHelpers::CheckFeedsEnablementOnServer((ShellFeedsAvailabilityHelpers *)v24, &v23, v16);
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = 143LL;
      goto LABEL_10;
    }
    v19 = (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647>::__private_IsEnabled() == 0;
    v17 = v23;
    if ( v19 )
    {
      v20 = v24[0];
      v21 = v24[0] || !v23;
      *a2 = v21;
      *a3 = v17;
      v19 = !v20;
    }
    else
    {
      *a3 = v23;
      if ( v17 )
      {
LABEL_21:
        v13 = 0;
        goto LABEL_22;
      }
      v18 = v24[0];
      *a2 = v24[0];
      v19 = !v18;
    }
    if ( v19 )
      std::wstring::assign(a4, L"FeedsNotPresentOnServer", 0x17uLL);
    goto LABEL_21;
  }
  v14 = 129LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v11);
LABEL_22:
  std::wstring::_Tidy_deallocate(lpData);
  return v13;
}
