/*
 * XREFs of HamIpcChannelAllocateState @ 0x1800089C4
 * Callers:
 *     RmpClientConnectionAllocateState @ 0x1800086CC (RmpClientConnectionAllocateState.c)
 * Callees:
 *     RmpClientWnfCreateSubscription @ 0x1800089F4 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HamIpcChannelAllocateState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = RmpClientWnfCreateSubscription(a2, HampIpcChannelWnfCallback, a1, a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
