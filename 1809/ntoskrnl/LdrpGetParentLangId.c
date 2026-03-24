/*
 * XREFs of LdrpGetParentLangId @ 0x140160FC0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x14067AEF0 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x14068B2E0 (LdrResFallbackLangList.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140161030 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140182F00 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     DownLevelGetParentLanguageName @ 0x140321C90 (DownLevelGetParentLanguageName.c)
 */

__int64 __fastcall LdrpGetParentLangId(__int64 a1, _WORD *a2)
{
  __int16 v2; // bx
  _BYTE v5[176]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v6[176]; // [rsp+D0h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !a2 || !(unsigned int)DownLevelLangIDToLanguageName(a1, v5, 85LL) )
    return 3221225485LL;
  if ( (int)DownLevelGetParentLanguageName(v5, v6) >= 2 )
    v2 = DownLevelLanguageNameToLangID(v6, 2LL);
  *a2 = v2;
  return 0LL;
}
