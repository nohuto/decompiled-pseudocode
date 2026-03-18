/*
 * XREFs of EtwpCheckGuidAccess @ 0x140656D24
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x140656CB8 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1406579D4 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpNotifyGuid @ 0x1406588A8 (EtwpNotifyGuid.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     EtwpCheckSystemTraceAccess @ 0x140726EDC (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1408BE4EC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1408BE934 (EtwpLogFileNameRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1405C5280 (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405C5658 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405C6050 (EtwpGetSecurityDescriptorByGuid.c)
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
