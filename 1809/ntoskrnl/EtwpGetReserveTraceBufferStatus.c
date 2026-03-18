/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14013F670
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x140113220 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x14030E6DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EB10 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  else
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
}
