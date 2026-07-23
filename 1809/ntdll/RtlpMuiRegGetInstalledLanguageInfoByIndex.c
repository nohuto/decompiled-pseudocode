/*
 * XREFs of RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180100A2C
 * Callers:
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F017C (RtlpGetDefaultLanguageBaseOrParent.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180001838 (RtlStringCchCopyW.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlpMuiRegGetString @ 0x180100D78 (RtlpMuiRegGetString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageInfoByIndex(
        __int64 a1,
        __int16 a2,
        LCID *a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int16 *v9; // rdx
  __int64 v10; // rdx
  LCID v12; // ecx
  _UNICODE_STRING String; // [rsp+20h] [rbp-E8h] BYREF
  char v14; // [rsp+30h] [rbp-D8h] BYREF

  if ( !a1 || !a3 || !a4 || !a5 || !a6 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 3221226021LL;
  v8 = *(_QWORD *)(v7 + 16);
  if ( !v8 || a2 < 0 || a2 >= (int)*(unsigned __int16 *)(v7 + 6) )
    return 3221226021LL;
  v9 = (unsigned __int16 *)(v8 + 28LL * a2);
  *a3 = v9[2];
  *a6 = *v9;
  v10 = v9[3];
  if ( (__int16)v10 > 0 )
    return RtlpMuiRegGetString(a1, v10, a4, a5);
  v12 = *a3;
  String.Buffer = (wchar_t *)&v14;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v12, &String) )
    return RtlStringCchCopyW(a4, a5, (__int64)String.Buffer);
  else
    return 3221226021LL;
}
