/*
 * XREFs of sub_1405C9CE8 @ 0x1405C9CE8
 * Callers:
 *     sub_1405C9C50 @ 0x1405C9C50 (sub_1405C9C50.c)
 *     sub_1405CA5E8 @ 0x1405CA5E8 (sub_1405CA5E8.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406AF160 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406AF270 (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C9CE8(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
