/*
 * XREFs of RtlpDynamicLookasideAllocate @ 0x1401B7AC0
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA170 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C53D0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall RtlpDynamicLookasideAllocate(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  PSLIST_ENTRY result; // rax

  v2 = a1 + ((a2 + 1LL) << 6);
  ++*(_DWORD *)(v2 + 20);
  if ( !*(_WORD *)v2 || (result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + ((a2 + 1LL) << 6)))) == 0LL )
  {
    ++*(_DWORD *)(v2 + 24);
    return 0LL;
  }
  return result;
}
