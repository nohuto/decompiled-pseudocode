/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1405C3EE0
 * Callers:
 *     EtwTraceRaw @ 0x14032C888 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x1405C4170 (EtwpUpdateEnableMask.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406B5DAC (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406CBED4 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x14077F60C (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F6580 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FB33C (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x140907338 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140908100 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1405C3F34 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1405C3F88 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
