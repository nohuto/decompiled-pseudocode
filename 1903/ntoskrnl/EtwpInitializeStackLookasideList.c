/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x14076AE70
 * Callers:
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 */

__int64 EtwpInitializeStackLookasideList()
{
  __int64 result; // rax

  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  dword_14046B820 = 0;
  dword_14046B824 = 0;
  EtwpStackLookAsideList = 0uLL;
  return result;
}
