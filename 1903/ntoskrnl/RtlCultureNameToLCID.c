/*
 * XREFs of RtlCultureNameToLCID @ 0x140766B70
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x14018E308 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140764A6C (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x140766834 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140944D50 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14094507C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1409454B8 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1409456E0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140945820 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x140945BE4 (_RtlMuiRegAddLIPParent.c)
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x14018E754 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     __report_rangecheckfailure @ 0x14027BD8C (__report_rangecheckfailure.c)
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
