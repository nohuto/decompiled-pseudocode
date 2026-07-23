/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x180083050
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x18000C4D0 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000C640 (A_SHAUpdate.c)
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateVirtualAccountSid(PUNICODE_STRING Name, ULONG BaseSubAuthority, PSID Sid, PULONG SidLength)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  int v8; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v10[24]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v11[6]; // [rsp+90h] [rbp+27h] BYREF

  if ( !Name || !SidLength || BaseSubAuthority - 80 > 0x1F )
    return -1073741811;
  v6 = *SidLength;
  *SidLength = 32;
  if ( v6 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, Name, 1u);
  if ( result >= 0 )
  {
    v10[21] = 0;
    v10[22] = 0;
    v10[16] = 1732584193;
    v10[17] = -271733879;
    v10[18] = -1732584194;
    v10[19] = 271733878;
    v10[20] = -1009589776;
    A_SHAUpdate((__int64)v10, (char *)DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v10, (__int64)v11);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v8 = v11[0];
    *((_DWORD *)Sid + 2) = BaseSubAuthority;
    *((_DWORD *)Sid + 3) = v8;
    *((_DWORD *)Sid + 4) = v11[1];
    *((_DWORD *)Sid + 5) = v11[2];
    *((_DWORD *)Sid + 6) = v11[3];
    *((_DWORD *)Sid + 7) = v11[4];
    return 0;
  }
  return result;
}
