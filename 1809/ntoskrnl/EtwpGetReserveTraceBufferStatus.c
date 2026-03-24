/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14013F690
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x140113240 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x14030E7DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EC10 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
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
