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
  _WORD *Heap; // rbx
  ULONG *v1; // r9
  unsigned int *v2; // rdx
  char *v3; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER DefaultCasingTableSize; // [rsp+38h] [rbp+10h] BYREF

  if ( pTblPtrs )
    return 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x38uLL);
  if ( Heap )
  {
    if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &gSystemLocale, &DefaultCasingTableSize, v1) >= 0 )
    {
      v2 = (unsigned int *)((char *)BaseAddress + *((unsigned int *)BaseAddress + 4));
      v3 = (char *)v2 + *v2;
      *Heap = *((_WORD *)v3 + 12);
      Heap[2] = *((_WORD *)v3 + 11);
      Heap[1] = *((_WORD *)v3 + 16);
      Heap[24] = *((_WORD *)v3 + 13);
      *((_QWORD *)Heap + 1) = (char *)v2 + *((unsigned int *)v3 + 7);
      *((_QWORD *)Heap + 2) = (char *)v2 + *((unsigned int *)v3 + 9);
      *((_QWORD *)Heap + 3) = (char *)v2 + *((unsigned int *)v3 + 10);
      *((_QWORD *)Heap + 4) = (char *)v2 + *((unsigned int *)v3 + 14);
      if ( _InterlockedCompareExchange64(&pTblPtrs, (signed __int64)Heap, 0LL) )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
