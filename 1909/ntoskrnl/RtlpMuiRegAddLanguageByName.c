/*
 * XREFs of RtlpMuiRegAddLanguageByName @ 0x14076A810
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14018E768 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018E614 (RtlpMuiRegAddAlternateCodePage.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlpIsALicensedRegularLanguage @ 0x14076AEAC (RtlpIsALicensedRegularLanguage.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14076B334 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140787FD8 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpIsALicensedLIPLanguage @ 0x140944748 (RtlpIsALicensedLIPLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140945BB0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegInitPartialLanguage @ 0x140945E04 (_RtlpMuiRegInitPartialLanguage.c)
 */

__int64 __fastcall RtlpMuiRegAddLanguageByName(__int64 a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  _QWORD v11[3]; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+38h] [rbp-18h]

  memset(v11, 0, sizeof(v11));
  v12 = 0;
  result = RtlpMuiRegInitAnyLanguage(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = RtlpMuiRegInitLIPLanguage(a1, a2, v11);
  }
  else
  {
    if ( (v11[0] & 2) == 0 )
      goto LABEL_4;
    result = RtlpMuiRegInitPartialLanguage(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_4:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = RtlpIsALicensedLIPLanguage(a1, a3);
    else
      result = RtlpIsALicensedRegularLanguage(a1, a3);
    if ( (int)result >= 0 )
    {
      LOWORD(v11[0]) |= 0x820u;
      RtlpMuiRegAddAlternateCodePage((__int64)v11, a2);
      return RtlpMuiRegGetOrAddLangInfo(a1 + 24, v11, a6);
    }
  }
  return result;
}
