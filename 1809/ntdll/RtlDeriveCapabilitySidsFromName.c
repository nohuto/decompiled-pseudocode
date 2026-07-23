/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1800480C0
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x18003AFF0 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1800487A0 (RtlInitializeSid.c)
 *     SHA256Final @ 0x180048A4C (SHA256Final.c)
 *     SHA256Update @ 0x180048B98 (SHA256Update.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int128 v10; // xmm0
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v12[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v13; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v14; // [rsp+B0h] [rbp+27h]

  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  memset(CapabilitySid, 0, 0x30uLL);
  memset(CapabilityGroupSid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    v12[8] = 0;
    v12[9] = 0;
    v12[0] = 1779033703;
    v12[1] = -1150833019;
    v12[2] = 1013904242;
    v12[3] = -1521486534;
    v12[4] = 1359893119;
    v12[5] = -1694144372;
    v12[6] = 528734635;
    v12[7] = 1541459225;
    SHA256Update(v12, DestinationString.Buffer, DestinationString.Length);
    SHA256Final(v12, &v13);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v13;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v14;
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames + v8, 0) )
        break;
      ++v8;
      if ( v9 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v9;
LABEL_8:
    RtlFreeAnsiString(&DestinationString);
    if ( v8 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v10 = v13;
      *((_DWORD *)CapabilitySid + 2) = 3;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v10;
      *((_OWORD *)CapabilitySid + 2) = v14;
    }
    return 0;
  }
  return result;
}
