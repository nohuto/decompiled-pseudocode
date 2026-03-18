/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x14065888C
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x14063F6C4 (ExpWnfLookupPermanentName.c)
 *     NtCreateWnfStateName @ 0x140658540 (NtCreateWnfStateName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400C9B30 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x1405DBCE0 (RtlpApplyAclToObject.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140658920 (RtlGetSaclSecurityDescriptor.c)
 */

void __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN SaclPresent; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN SaclDefaulted; // [rsp+40h] [rbp+18h] BYREF
  PACL Sacl; // [rsp+48h] [rbp+20h] BYREF

  Sacl = 0LL;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted) >= 0 && SaclPresent && Sacl )
    RtlpApplyAclToObject((__int64)Sacl, &ExpWnfNotificationMapping);
  if ( RtlGetSaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted) >= 0 && SaclPresent )
  {
    if ( Sacl )
      RtlpApplyAclToObject((__int64)Sacl, &ExpWnfNotificationMapping);
  }
}
