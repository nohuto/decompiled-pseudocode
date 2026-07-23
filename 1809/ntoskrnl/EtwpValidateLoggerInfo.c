/*
 * XREFs of EtwpValidateLoggerInfo @ 0x14065B0F8
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14065AF40 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C3BE0 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408B77D0 (EtwpIncrementTraceFile.c)
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
