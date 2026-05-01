/*
 * XREFs of ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800C6F84
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5418 (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800C6934 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005CFC4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?GetCurrentUILanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800C7090 (-GetCurrentUILanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ShellFeedsAvailabilityHelpers::GetCurrentLanguage(_QWORD *a1)
{
  LANGID ThreadUILanguage; // ax
  int LocaleInfoW; // eax
  WCHAR *v4; // rdx
  void *CurrentUILanguage; // rax
  _QWORD v7[5]; // [rsp+38h] [rbp-F0h] BYREF
  WCHAR LCData[88]; // [rsp+60h] [rbp-C8h] BYREF

  memset_0(LCData, 0, 0xAAuLL);
  ThreadUILanguage = GetThreadUILanguage();
  LocaleInfoW = GetLocaleInfoW(ThreadUILanguage, 0x5Cu, LCData, 85);
  v4 = (WCHAR *)&szAgent;
  if ( LocaleInfoW )
    v4 = LCData;
  std::wstring::wstring((__int64)a1, v4);
  if ( !a1[2] )
  {
    CurrentUILanguage = (void *)ShellFeedsAvailabilityHelpers::GetCurrentUILanguage(v7);
    std::wstring::operator=(a1, CurrentUILanguage);
    std::wstring::_Tidy_deallocate(v7);
  }
  return a1;
}
