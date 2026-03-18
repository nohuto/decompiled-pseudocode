/*
 * XREFs of RtlCultureNameToLCID @ 0x14073EF20
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x140182AC0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14073C9E4 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14073EBF0 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140906718 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140906A38 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x140906E58 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x140907078 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1409071B0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x140907578 (_RtlMuiRegAddLIPParent.c)
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x140182EE0 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     __report_rangecheckfailure @ 0x140268CCC (__report_rangecheckfailure.c)
 */

bool __fastcall RtlCultureNameToLCID(unsigned __int16 *a1, _DWORD *a2)
{
  char v2; // di
  unsigned __int16 v4; // r8
  const void *v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int16 v8; // ax
  _WORD v10[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = *a1;
      if ( *a1 )
      {
        v5 = (const void *)*((_QWORD *)a1 + 1);
        if ( v5 )
        {
          if ( (unsigned int)v4 + 2 <= 0x55 )
          {
            v6 = v4;
            memmove(v10, v5, v4);
            v7 = v6 >> 1;
            if ( v7 >= 85 )
              _report_rangecheckfailure();
            v10[v7] = 0;
            v8 = DownLevelLanguageNameToLangID(v10, 2);
            *a2 = v8;
            return v8 != 0;
          }
        }
      }
    }
  }
  return v2;
}
