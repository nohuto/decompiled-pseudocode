/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x1800829B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x18000C4D0 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000C640 (A_SHAUpdate.c)
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateVirtualAccountSid(unsigned __int16 *a1, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v6; // eax
  __int64 result; // rax
  int v8; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v10[24]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v11[6]; // [rsp+90h] [rbp+27h] BYREF

  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return 3221225485LL;
  v6 = *a4;
  *a4 = 32;
  if ( v6 < 0x20 )
    return 3221225507LL;
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v10[21] = 0;
    v10[22] = 0;
    v10[16] = 1732584193;
    v10[17] = -271733879;
    v10[18] = -1732584194;
    v10[19] = 271733878;
    v10[20] = -1009589776;
    A_SHAUpdate((__int64)v10, (char *)UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v10, (__int64)v11);
    RtlFreeUnicodeString(&UnicodeString);
    RtlInitializeSid((__int64)a3, (__int64)&unk_18011CA20, 6u);
    v8 = v11[0];
    a3[2] = a2;
    a3[3] = v8;
    a3[4] = v11[1];
    a3[5] = v11[2];
    a3[6] = v11[3];
    a3[7] = v11[4];
    return 0LL;
  }
  return result;
}
