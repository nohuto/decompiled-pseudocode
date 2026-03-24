/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140741150
 * Callers:
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 */

__int64 EtwpInitializeStackLookasideList()
{
  __int64 result; // rax

  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  dword_14043F9E0 = 0;
  dword_14043F9E4 = 0;
  EtwpStackLookAsideList = 0uLL;
  return result;
}
