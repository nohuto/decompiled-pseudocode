/*
 * XREFs of RtlpLoadNlsData @ 0x18007BA38
 * Callers:
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18006AE08 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800F6C10 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007BB10 (RtlGetLocaleFileMappingAddress.c)
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
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 56LL);
  if ( Heap )
  {
    if ( (int)RtlGetLocaleFileMappingAddress(&v4, &gSystemLocale, &v5) >= 0 )
    {
      v1 = (unsigned int *)(v4 + *(unsigned int *)(v4 + 16));
      v2 = (char *)v1 + *v1;
      *(_WORD *)Heap = *((_WORD *)v2 + 12);
      *(_WORD *)(Heap + 4) = *((_WORD *)v2 + 11);
      *(_WORD *)(Heap + 2) = *((_WORD *)v2 + 16);
      *(_WORD *)(Heap + 48) = *((_WORD *)v2 + 13);
      *(_QWORD *)(Heap + 8) = (char *)v1 + *((unsigned int *)v2 + 7);
      *(_QWORD *)(Heap + 16) = (char *)v1 + *((unsigned int *)v2 + 9);
      *(_QWORD *)(Heap + 24) = (char *)v1 + *((unsigned int *)v2 + 10);
      *(_QWORD *)(Heap + 32) = (char *)v1 + *((unsigned int *)v2 + 14);
      if ( _InterlockedCompareExchange64(&pTblPtrs, Heap, 0LL) )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
