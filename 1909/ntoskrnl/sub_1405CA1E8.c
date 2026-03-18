/*
 * XREFs of sub_1405CA1E8 @ 0x1405CA1E8
 * Callers:
 *     sub_1405CA150 @ 0x1405CA150 (sub_1405CA150.c)
 *     sub_1405CAAE8 @ 0x1405CAAE8 (sub_1405CAAE8.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406B1090 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406B11A0 (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405CA1E8(__int64 a1)
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
