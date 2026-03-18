/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1406A975C
 * Callers:
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406A9564 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406A9728 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpFlushTrace @ 0x1406CAD04 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408F27C8 (EtwpIncrementTraceFile.c)
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
