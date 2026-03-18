/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1405C1E98
 * Callers:
 *     EtwTraceRaw @ 0x14030EB10 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x1405C209C (EtwpUpdateEnableMask.c)
 *     EtwpStopTrace @ 0x140658FB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x140659DA0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C2960 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C2B18 (EtwpRealtimeConnect.c)
 *     EtwpUpdateTrace @ 0x140725AFC (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140726EDC (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BE634 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1408C9E84 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CAA04 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1405C1EEC (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x1405C5280 (EtwpAccessCheck.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1405C5324 (EtwpReferenceLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess, 0LL);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
