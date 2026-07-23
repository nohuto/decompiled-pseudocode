/*
 * XREFs of PopCreateNotificationName @ 0x1406ED6F4
 * Callers:
 *     PopGetSettingNotificationName @ 0x1406A0760 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400B3D10 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401C19B0 (ZwCreateWnfStateName.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 */

int __fastcall PopCreateNotificationName(PWNF_STATE_NAME StateName)
{
  int result; // eax
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE CapabilityGroupSid[56]; // [rsp+B0h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E8h] [rbp-20h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_QWORD *)&UnicodeString.Length = 2752552LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  RtlCreateAcl(&Acl, 0x148u, 2u);
  RtlpAddKnownAce(&Acl, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
  RtlpAddKnownAce(&Acl, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    RtlpAddKnownAce(&Acl, 2u, 0, 1179649, CapabilitySid, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    return ZwCreateWnfStateName(
             StateName,
             WnfTemporaryStateName,
             WnfDataScopeMachine,
             0,
             0LL,
             0x24u,
             SecurityDescriptor);
  }
  return result;
}
