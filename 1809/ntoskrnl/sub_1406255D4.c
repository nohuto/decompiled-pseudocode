/*
 * XREFs of sub_1406255D4 @ 0x1406255D4
 * Callers:
 *     sub_1406254F4 @ 0x1406254F4 (sub_1406254F4.c)
 *     sub_140625D8C @ 0x140625D8C (sub_140625D8C.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069272C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14069283C (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406255D4(__int64 a1)
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
