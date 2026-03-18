/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x140182EE0
 * Callers:
 *     LdrpGetParentLangId @ 0x140160FA0 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14068AD50 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x14073EF20 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x140891BB0 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140178544 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x140195CB0 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140350BB0, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140351950)[2 * word_1403691E0[(v3 - (_BYTE *)&off_140350BB0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
