/*
 * XREFs of RtlpHpMetadataFree @ 0x14010DA2C
 * Callers:
 *     RtlpHpLargeFree @ 0x14010D6C0 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14010F9B4 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x140166214 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14031BC4C (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x14011018C (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  __int128 **v2; // rax
  __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (__int128 **)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000);
}
