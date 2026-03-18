/*
 * XREFs of QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C036F4C0
 * Callers:
 *     <none>
 * Callees:
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C0281C30 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 */

__int64 __fastcall QueryRegistryFontMapperFamilyFallbackListRoutine(
        WCHAR *a1,
        __int64 a2,
        WCHAR *a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  WCHAR v9[32]; // [rsp+20h] [rbp-98h] BYREF
  WCHAR v10[32]; // [rsp+60h] [rbp-58h] BYREF

  cCapString(v10, a3, 32);
  cCapString(v9, a1, 32);
  return AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(v7, v6, a5, v9);
}
