/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x1403394C0
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x14015D550 (ExAllocateCacheAwarePushLock.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreeCacheAwarePushLock(ULONG_PTR *BugCheckParameter2)
{
  ULONG_PTR *v2; // rsi
  unsigned __int64 v3; // rbx

  if ( *BugCheckParameter2 )
  {
    v2 = BugCheckParameter2;
    v3 = (-(__int64)(*(_BYTE *)(*BugCheckParameter2 + 8) != 0) & 0xFFFFFFFFFFFFFFE1uLL) + 32;
    do
    {
      if ( *v2 )
        ExFreeHeapPool(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return ExFreeHeapPool((ULONG_PTR)BugCheckParameter2);
}
