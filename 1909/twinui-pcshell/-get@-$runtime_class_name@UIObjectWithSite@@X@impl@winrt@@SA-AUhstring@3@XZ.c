/*
 * XREFs of ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1800C4B3C
 * Callers:
 *     ?GetRuntimeClassName@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800C0D30 (-GetRuntimeClassName@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceP.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A17C0 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

HSTRING *__fastcall winrt::impl::runtime_class_name<IObjectWithSite,void>::get(HSTRING *a1)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 37LL;
  v3[0] = L"{fc4801a3-2ba9-11cf-a229-00aa003d7352}";
  winrt::hstring::hstring(a1, (__int64)v3);
  return a1;
}
