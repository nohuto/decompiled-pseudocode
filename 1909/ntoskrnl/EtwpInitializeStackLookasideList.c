/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x14076DCC4
 * Callers:
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 */

__int64 EtwpInitializeStackLookasideList()
{
  __int64 result; // rax

  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  dword_14046B560 = 0;
  dword_14046B564 = 0;
  EtwpStackLookAsideList = 0uLL;
  return result;
}
