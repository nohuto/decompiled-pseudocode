/*
 * XREFs of ?IsJavawExe@@YA_NPEBG@Z @ 0x1800AFDF4
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1800AF218 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1800AFE2C (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800821F4 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 */

bool __fastcall IsJavawExe(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  const WCHAR *last_path_segment; // rax

  last_path_segment = wil::find_last_path_segment(a1, a2);
  return CompareStringOrdinal(last_path_segment, -1, L"javaw.exe", -1, 1) == 2;
}
