/*
 * XREFs of HvlpUpdateLpcbIndex @ 0x1401B3C60
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017EBD0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpSetLogicalProcessorProperty @ 0x140272F38 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlpUpdateLpcbIndex(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _DWORD v6[818]; // [rsp+20h] [rbp-CC8h] BYREF

  result = 0LL;
  v4 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v4 != a2 )
  {
    v6[0] = a2;
    result = HvlpSetLogicalProcessorProperty(v4, 6LL, v6);
    if ( (int)result >= 0 )
      *(_DWORD *)(a1 + 4) = a2;
  }
  return result;
}
