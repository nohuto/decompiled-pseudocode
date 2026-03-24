/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1400DCE20
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1406558F8 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1406CE5A0 (PopCreateNotificationName.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AB8 (DbgkpCreateNotificationEvent.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140733580 (CmpHiveRootSecurityDescriptor.c)
 *     RtlCapabilityCheck @ 0x1408938C0 (RtlCapabilityCheck.c)
 *     SepVariableInitialization @ 0x1409AB3EC (SepVariableInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     SymCryptSha256 @ 0x1401AF318 (SymCryptSha256.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14064B0A0 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x140655670 (RtlInitializeSid.c)
 */

NTSTATUS __fastcall RtlDeriveCapabilitySidsFromName(PCUNICODE_STRING SourceString, char *Sid, PSID a3)
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

  if ( !SourceString || !Sid || !a3 )
    __fastfail(5u);
  memset(a3, 0, 0x30uLL);
  memset(Sid, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString(&DestinationString, SourceString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v14);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v14;
    *((_DWORD *)Sid + 2) = 32;
    v8 = v15;
    *(_OWORD *)(Sid + 12) = v7;
    *(_OWORD *)(Sid + 28) = v8;
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
    RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)a3 + 2) = 3;
    *((_DWORD *)a3 + 3) = v10;
LABEL_8:
    RtlFreeAnsiString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      v11 = v14;
      *((_DWORD *)a3 + 2) = 3;
      v12 = v15;
      *((_DWORD *)a3 + 3) = 1024;
      *((_OWORD *)a3 + 1) = v11;
      *((_OWORD *)a3 + 2) = v12;
    }
    return 0;
  }
  return result;
}
