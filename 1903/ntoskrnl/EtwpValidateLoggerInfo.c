/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1406B5F70
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406B5DAC (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406CBED4 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408F2E5C (EtwpIncrementTraceFile.c)
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
