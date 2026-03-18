/*
 * XREFs of EtwpCheckGuidAccess @ 0x140692610
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x1406925A4 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140692FA0 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x14078202C (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1408FABC4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1408FB030 (EtwpLogFileNameRundown.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1408FFB34 (EtwpCheckCurrentUserGuidAccess.c)
 * Callees:
 *     EtwpFreeSecurityDescriptor @ 0x1405C5B1C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C5B58 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x1405D0FFC (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(unsigned int *a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
