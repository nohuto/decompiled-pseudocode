/*
 * XREFs of ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800C6934
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5418 (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800C6820 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800C6F84 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 *     ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x1800D259C (-IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAE@Z @ 0x1800D2ACC (-PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellFeedsAvailabilityHelpers::CheckFeedsEnablementOnServer(
        ShellFeedsAvailabilityHelpers *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  int IsFeedsEnabledAtEndPoint; // eax
  __int64 v7; // rdx
  CHAR MultiByteStr[16]; // [rsp+30h] [rbp-21h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h]
  __int64 v11; // [rsp+48h] [rbp-9h]
  _QWORD v12[2]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  _QWORD v15[4]; // [rsp+70h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  ShellFeedsAvailabilityHelpers::GetCurrentLanguage(v15);
  if ( v15[2] )
  {
    v13 = 0LL;
    v14 = 7LL;
    LOWORD(v12[0]) = 0;
    v5 = ShellFeedsAvailabilityHelpers::GetEnablementCheckURL(v15, v12);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DC,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
        (const char *)(unsigned int)v5);
LABEL_17:
      std::wstring::_Tidy_deallocate(v12);
      goto LABEL_18;
    }
    if ( !v13 )
    {
      v4 = 1;
      goto LABEL_17;
    }
    v10 = 0LL;
    v11 = 15LL;
    MultiByteStr[0] = 0;
    IsFeedsEnabledAtEndPoint = ShellFeedsAvailabilityHelpers::PingFeedsEnablementEndpoint(v12, MultiByteStr, a2);
    v4 = IsFeedsEnabledAtEndPoint;
    if ( IsFeedsEnabledAtEndPoint >= 0 )
    {
      if ( !v10 || *a2 )
      {
        v4 = 1;
        *a2 = 1;
        goto LABEL_16;
      }
      IsFeedsEnabledAtEndPoint = ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint(MultiByteStr);
      v4 = IsFeedsEnabledAtEndPoint;
      if ( IsFeedsEnabledAtEndPoint >= 0 )
      {
        v4 = 0;
        goto LABEL_16;
      }
      v7 = 494LL;
    }
    else
    {
      v7 = 483LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)IsFeedsEnabledAtEndPoint);
LABEL_16:
    std::string::~string((__int64)MultiByteStr);
    goto LABEL_17;
  }
  v4 = 1;
LABEL_18:
  std::wstring::_Tidy_deallocate(v15);
  return v4;
}
