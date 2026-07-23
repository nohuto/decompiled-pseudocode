/*
 * XREFs of RtlCreateServiceSid @ 0x18000B430
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CC690 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x18000C4D0 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000C640 (A_SHAUpdate.c)
 *     RtlUpcaseUnicodeString @ 0x18000E4A0 (RtlUpcaseUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v4; // eax
  NTSTATUS result; // eax
  int v6; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v8[64]; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+74h] [rbp+1Bh]
  int v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+7Ch] [rbp+23h]
  int v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+84h] [rbp+2Bh]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+94h] [rbp+3Bh]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]
  int v20; // [rsp+A0h] [rbp+47h]

  if ( !ServiceName || !ServiceSidLength )
    return -1073741811;
  v4 = *ServiceSidLength;
  *ServiceSidLength = 32;
  if ( v4 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, ServiceName, 1u);
  if ( result >= 0 )
  {
    v14 = 0;
    v15 = 0;
    v9 = 1732584193;
    v10 = -271733879;
    v11 = -1732584194;
    v12 = 271733878;
    v13 = -1009589776;
    A_SHAUpdate(v8, DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v8);
    RtlFreeUnicodeString(&DestinationString);
    RtlInitializeSid(ServiceSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 6u);
    v6 = v16;
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v6;
    *((_DWORD *)ServiceSid + 4) = v17;
    *((_DWORD *)ServiceSid + 5) = v18;
    *((_DWORD *)ServiceSid + 6) = v19;
    *((_DWORD *)ServiceSid + 7) = v20;
    return 0;
  }
  return result;
}
