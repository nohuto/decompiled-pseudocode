/*
 * XREFs of RtlpLoadNlsData @ 0x180080B14
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18003AB74 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18003B4B0 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180041310 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F8FC0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x180080BF0 (RtlGetLocaleFileMappingAddress.c)
 */

char RtlpLoadNlsData()
{
  __int64 Heap; // rbx
  unsigned int *v1; // rdx
  char *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( pTblPtrs )
    return 1;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 64LL);
  if ( Heap )
  {
    if ( (int)RtlGetLocaleFileMappingAddress(&v4, &gSystemLocale, &v5) >= 0 )
    {
      v1 = (unsigned int *)(v4 + *(unsigned int *)(v4 + 16));
      v2 = (char *)v1 + *v1;
      *(_WORD *)(Heap + 8) = *((_WORD *)v2 + 12);
      *(_WORD *)(Heap + 12) = *((_WORD *)v2 + 11);
      *(_WORD *)(Heap + 10) = *((_WORD *)v2 + 16);
      *(_WORD *)(Heap + 56) = *((_WORD *)v2 + 13);
      *(_QWORD *)(Heap + 16) = (char *)v1 + *((unsigned int *)v2 + 7);
      *(_QWORD *)(Heap + 24) = (char *)v1 + *((unsigned int *)v2 + 9);
      *(_QWORD *)(Heap + 32) = (char *)v1 + *((unsigned int *)v2 + 10);
      *(_QWORD *)(Heap + 40) = (char *)v1 + *((unsigned int *)v2 + 14);
      if ( _InterlockedCompareExchange64(&pTblPtrs, Heap, 0LL) )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
