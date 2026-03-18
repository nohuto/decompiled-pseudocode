/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x140726EDC
 * Callers:
 *     EtwpUpdateTrace @ 0x140725AFC (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckLoggerControlAccess @ 0x1405C1E98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x140656D24 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 832) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess((unsigned int *)&SystemTraceControlGuid, a2, 0LL);
}
