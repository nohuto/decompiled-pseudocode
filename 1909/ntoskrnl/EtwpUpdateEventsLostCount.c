/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x14013BB30
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x14013BA44 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x14014753C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x140332A00 (EtwpCompressBuffer.c)
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
