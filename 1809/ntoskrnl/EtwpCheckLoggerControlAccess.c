/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1405C1E98
 * Callers:
 *     EtwTraceRaw @ 0x14030EC10 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x1405C209C (EtwpUpdateEnableMask.c)
 *     EtwpStopTrace @ 0x140658F90 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x140659D80 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C2940 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C2AF8 (EtwpRealtimeConnect.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140726EBC (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9360 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BE614 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1408C9E64 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CA9E4 (EtwpSetSoftRestartInformation.c)
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
