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
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v4; // eax
  NTSTATUS result; // eax
  int v6; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v8[24]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v9[6]; // [rsp+90h] [rbp+37h] BYREF

  if ( !ServiceName || !ServiceSidLength )
    return -1073741811;
  v4 = *ServiceSidLength;
  *ServiceSidLength = 32;
  if ( v4 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, ServiceName, 1u);
  if ( result >= 0 )
  {
    v8[21] = 0;
    v8[22] = 0;
    v8[16] = 1732584193;
    v8[17] = -271733879;
    v8[18] = -1732584194;
    v8[19] = 271733878;
    v8[20] = -1009589776;
    A_SHAUpdate((__int64)v8, (char *)DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v8, (__int64)v9);
    RtlFreeAnsiString(&DestinationString);
    RtlInitializeSid(ServiceSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v6 = v9[0];
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v6;
    *((_DWORD *)ServiceSid + 4) = v9[1];
    *((_DWORD *)ServiceSid + 5) = v9[2];
    *((_DWORD *)ServiceSid + 6) = v9[3];
    *((_DWORD *)ServiceSid + 7) = v9[4];
    return 0;
  }
  return result;
}
