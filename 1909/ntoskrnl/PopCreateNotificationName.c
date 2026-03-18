/*
 * XREFs of PopCreateNotificationName @ 0x1406A1344
 * Callers:
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400F0D30 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401C2530 (ZwCreateWnfStateName.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 */

NTSTATUS __fastcall PopCreateNotificationName(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 Src[48]; // [rsp+80h] [rbp-88h] BYREF
  char Sid[56]; // [rsp+B0h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E8h] [rbp-20h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_QWORD *)&SourceString.Length = 2752552LL;
  SourceString.Buffer = L"lpacPnpNotifications";
  RtlCreateAcl(&Acl, 0x148u, 2u);
  RtlpAddKnownAce(&Acl, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
  result = RtlDeriveCapabilitySidsFromName(&SourceString, Sid, Src);
  if ( result >= 0 )
  {
    RtlpAddKnownAce(&Acl, 2u, 0, 1179649, Src, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    return ZwCreateWnfStateName(a1, 3LL, 4LL);
  }
  return result;
}
