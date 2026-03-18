/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x140177FB4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DFAA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400E00CC (LdrpResSearchResourceMappedFile.c)
 *     LdrpGetParentLangId @ 0x14016AA7C (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1406764C0 (LdrResSearchResource.c)
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 *     RtlLCIDToCultureName @ 0x1408D4620 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13ADC (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14018016C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1401824D8 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1401A0BC0 (bsearch.c)
 */

__int64 __fastcall DownLevelLangIDToLanguageName(__int16 a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bl
  const struct CultureDataType *v7; // rcx
  const unsigned __int16 *v9; // r8
  __int64 v10; // rbx
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( a3 < 0 || !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = (const struct CultureDataType *)bsearch(
                                         &Key,
                                         &off_140371C40,
                                         0x1B3uLL,
                                         0x10uLL,
                                         (int (__cdecl *)(const void *, const void *))CompareLangIDs);
  if ( !v7 || (v5 & 2) == 0 && (unsigned int)IsNeutralLanguageItem(v7) )
    return 0LL;
  v9 = *(const unsigned __int16 **)v7;
  v10 = -1LL;
  do
    ++v10;
  while ( v9[v10] );
  if ( a2 && (int)StringCchCopyNW(a2, v4, v9, v10 + 1) < 0 )
    return 0LL;
  else
    return (unsigned int)(v10 + 1);
}
