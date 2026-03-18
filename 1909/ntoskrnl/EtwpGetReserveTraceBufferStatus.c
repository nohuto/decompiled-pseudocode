/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x140331B9C
 * Callers:
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1400C8690 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x14032BE40 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C2D8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
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
