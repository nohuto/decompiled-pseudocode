/*
 * XREFs of EtwpValidateLoggerInfo @ 0x140659F58
 * Callers:
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 *     EtwpStopTrace @ 0x140658FB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x140659DA0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C2960 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140725AFC (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408B6530 (EtwpIncrementTraceFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 < 0xB0u )
      return 3221225990LL;
    if ( (a1[11] & 0x20000) != 0 )
      return 0LL;
  }
  return 3221225485LL;
}
