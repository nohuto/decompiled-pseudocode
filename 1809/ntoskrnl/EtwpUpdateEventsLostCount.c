/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x1401138B4
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71B0 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x1400C75E0 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x1401130FC (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C6D8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x140314998 (EtwpCompressBuffer.c)
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
