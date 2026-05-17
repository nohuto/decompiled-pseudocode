/*
 * XREFs of RtlCreateServiceSid @ 0x18004B3A0
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CDEE0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x18003AFF0 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1800487A0 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x180048940 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x1800497A0 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateServiceSid(unsigned __int16 *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v8[24]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v9[6]; // [rsp+90h] [rbp+37h] BYREF

  if ( !a1 || !a3 )
    return 3221225485LL;
  v4 = *a3;
  *a3 = 32;
  if ( v4 < 0x20 )
    return 3221225507LL;
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v8[21] = 0;
    v8[22] = 0;
    v8[16] = 1732584193;
    v8[17] = -271733879;
    v8[18] = -1732584194;
    v8[19] = 271733878;
    v8[20] = -1009589776;
    A_SHAUpdate((__int64)v8, (char *)UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v8, (__int64)v9);
    RtlFreeAnsiString(&UnicodeString);
    RtlInitializeSid((__int64)a2, (__int64)&RtlpNtAuthority, 6u);
    v6 = v9[0];
    a2[2] = 80;
    a2[3] = v6;
    a2[4] = v9[1];
    a2[5] = v9[2];
    a2[6] = v9[3];
    a2[7] = v9[4];
    return 0LL;
  }
  return result;
}
