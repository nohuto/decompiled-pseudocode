/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800966F8
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x180093C60 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x180092708 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::to_wstring(char *a1, signed int a2)
{
  _WORD *v3; // rax
  __int64 v4; // r10
  _WORD v6[3]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v6, a2);
  }
  else
  {
    v3 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v6, -a2) - 1;
    *v3 = v4 + 45;
  }
  *((_QWORD *)a1 + 2) = v4;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = v4;
  if ( v3 != v6 )
    std::wstring::assign(a1, v3, v6 - v3);
  return a1;
}
