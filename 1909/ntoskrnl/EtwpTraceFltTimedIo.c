/*
 * XREFs of EtwpTraceFltTimedIo @ 0x14032F6D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTimedEvent @ 0x14011D1F0 (EtwTraceTimedEvent.c)
 */

void __fastcall EtwpTraceFltTimedIo(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  EtwTraceTimedEvent(a4, a3, a1, a2, 0x401803u, a5);
}
