/*
 * XREFs of RtlpIsALicensedLIPLanguage @ 0x18003B0DC
 * Callers:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18003B144 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003F388 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMuiRegAddLanguageByName @ 0x1800FFCE4 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x18003B314 (RtlpLangNameInMultiSzString.c)
 */

__int64 __fastcall RtlpIsALicensedLIPLanguage(__int64 a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx

  v2 = 0;
  if ( a1 )
  {
    v5 = *(wchar_t **)(a1 + 136);
    if ( v5 && (unsigned __int8)RtlpLangNameInMultiSzString(v5, a2) )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v6 = *(wchar_t **)(a1 + 152);
      if ( v6 )
        return (unsigned __int8)RtlpLangNameInMultiSzString(v6, a2) != 0 ? 0xC0000034 : 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
