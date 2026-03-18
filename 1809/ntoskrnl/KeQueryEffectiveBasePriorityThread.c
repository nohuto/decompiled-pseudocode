/*
 * XREFs of KeQueryEffectiveBasePriorityThread @ 0x1400EEEFC
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1400EEDAC (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400D1460 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KeQueryEffectiveBasePriorityThread(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  v2 = !KiIsThreadRankNonZero(a1, 0LL);
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 563);
  return result;
}
