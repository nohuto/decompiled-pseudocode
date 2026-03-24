/*
 * XREFs of sub_1406245B4 @ 0x1406245B4
 * Callers:
 *     sub_1406244D4 @ 0x1406244D4 (sub_1406244D4.c)
 *     sub_140624D6C @ 0x140624D6C (sub_140624D6C.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069156C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14069167C (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406245B4(__int64 a1)
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
