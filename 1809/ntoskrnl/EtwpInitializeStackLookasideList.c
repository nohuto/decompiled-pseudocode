/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140742340
 * Callers:
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

__int64 EtwpInitializeStackLookasideList()
{
  __int64 result; // rax

  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  dword_140440AA0 = 0;
  dword_140440AA4 = 0;
  EtwpStackLookAsideList = 0uLL;
  return result;
}
