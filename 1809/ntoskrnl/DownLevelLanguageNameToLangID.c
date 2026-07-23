/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x140183040
 * Callers:
 *     LdrpGetParentLangId @ 0x1401610C0 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14068BEF0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x1407400F0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x140892DF0 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CE3F0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140178664 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x140195E10 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140351BB0, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140352950)[2 * word_14036A280[(v3 - (_BYTE *)&off_140351BB0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
