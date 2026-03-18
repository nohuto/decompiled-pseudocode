/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14033213C
 * Callers:
 *     EtwpTraceMessageVa @ 0x14008BFF0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x14032C3F0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C888 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 <= 0xFFF8 )
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
  else
    return 3221225621LL;
}
