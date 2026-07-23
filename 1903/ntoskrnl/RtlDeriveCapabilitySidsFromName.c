/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1400B3D10
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1406819F8 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1406ED6F4 (PopCreateNotificationName.c)
 *     DbgkpCreateNotificationEvent @ 0x140758D38 (DbgkpCreateNotificationEvent.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14075EBF8 (CmpHiveRootSecurityDescriptor.c)
 *     RtlCapabilityCheck @ 0x1408D1A90 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x1409FEA90 (SepVariableInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     SymCryptSha256 @ 0x1401BA44C (SymCryptSha256.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140657A70 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1406810A0 (RtlInitializeSid.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  memset(CapabilitySid, 0, 0x30uLL);
  memset(CapabilityGroupSid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v14);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v14;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    v8 = v15;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v8;
    v9 = 0;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * v9], 0) )
        break;
      ++v9;
      if ( v10 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v10;
LABEL_8:
    RtlFreeAnsiString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v11 = v14;
      *((_DWORD *)CapabilitySid + 2) = 3;
      v12 = v15;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v11;
      *((_OWORD *)CapabilitySid + 2) = v12;
    }
    return 0;
  }
  return result;
}
