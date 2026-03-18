/*
 * XREFs of UserReAllocPoolZInit @ 0x1C007FC10
 * Callers:
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01541CC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 * Callees:
 *     UserReAllocPool @ 0x1C007FC70 (UserReAllocPool.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall UserReAllocPoolZInit(void *a1, size_t a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi

  v5 = UserReAllocPool(a1, a2);
  v6 = v5;
  if ( v5 && a3 > a2 )
    memset((void *)(v5 + a2), 0, a3 - a2);
  return v6;
}
