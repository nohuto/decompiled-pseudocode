/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x1401138D4
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71D0 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x1400C7600 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x14011311C (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C6F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x140314A98 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 256));
  result = *(unsigned int *)(a1 + 832);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 464) = 1;
  return result;
}
