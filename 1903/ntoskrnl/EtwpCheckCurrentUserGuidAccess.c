/*
 * XREFs of EtwpCheckCurrentUserGuidAccess @ 0x1409001D4
 * Callers:
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F6580 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406651FC (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckCurrentUserGuidAccess(unsigned int *a1, ACCESS_MASK a2)
{
  return EtwpCheckGuidAccess(a1, a2, 0LL);
}
