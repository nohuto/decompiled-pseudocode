/*
 * XREFs of RtlpLangNameInMultiSzString @ 0x1800129A4
 * Callers:
 *     RtlpIsALicensedLIPLanguage @ 0x18000EF6C (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18001292C (RtlpIsALicensedRegularLanguage.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBF8C (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1800FF7B0 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18010066C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 * Callees:
 *     _wcsicmp @ 0x18008E870 (_wcsicmp.c)
 */

char __fastcall RtlpLangNameInMultiSzString(wchar_t *String1, wchar_t *String2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  v4 = String1;
  if ( String1 && String2 )
  {
    while ( *v4 )
    {
      if ( !wcsicmp(v4, String2) )
        return 1;
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v4 += v5 + 1;
      if ( !v4 )
        return v2;
    }
  }
  return v2;
}
