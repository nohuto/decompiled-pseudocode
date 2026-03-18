/*
 * XREFs of EtwpCheckGuidAccess @ 0x1406651FC
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x140665190 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140665B8C (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x14077F60C (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1408FB1E4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1408FB650 (EtwpLogFileNameRundown.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1409001D4 (EtwpCheckCurrentUserGuidAccess.c)
 * Callees:
 *     EtwpFreeSecurityDescriptor @ 0x1405C561C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C5658 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
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
