/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x14018E754
 * Callers:
 *     LdrpGetParentLangId @ 0x14016A38C (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14067B1D0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140766B70 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1408CFE20 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13344 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140181DE8 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1401A04A0 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140370EC0, 0x1B3uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140371C60)[2 * word_140389070[(v3 - (_BYTE *)&off_140370EC0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
