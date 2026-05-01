/*
 * XREFs of ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800D2A7C
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromWin32Bool@@YAJH@Z @ 0x1801518C0 (-ResultFromWin32Bool@@YAJH@Z.c)
 */

unsigned __int8 __fastcall ShellFeedsAvailabilityHelpers::IsTempProfile(ShellFeedsAvailabilityHelpers *this)
{
  BOOL ProfileType; // eax
  int v2; // eax
  unsigned __int8 result; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwFlags; // [rsp+30h] [rbp+8h] BYREF

  dwFlags = 0;
  ProfileType = GetProfileType(&dwFlags);
  v2 = ResultFromWin32Bool(ProfileType);
  if ( v2 >= 0 )
  {
    result = 1;
    if ( (dwFlags & 1) != 0 )
      return result;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)v2);
  }
  return 0;
}
