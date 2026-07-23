/*
 * XREFs of sub_18007B398 @ 0x18007B398
 * Callers:
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     sub_18006ABB8 @ 0x18006ABB8 (sub_18006ABB8.c)
 *     RtlIsValidLocaleName @ 0x1800F6B30 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007B470 (RtlGetLocaleFileMappingAddress.c)
 */

char sub_18007B398()
{
  _WORD *Heap; // rbx
  ULONG *v1; // r9
  unsigned int *v2; // rdx
  char *v3; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER DefaultCasingTableSize; // [rsp+38h] [rbp+10h] BYREF

  if ( qword_180166368 )
    return 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x38uLL);
  if ( Heap )
  {
    if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &DefaultLocaleId, &DefaultCasingTableSize, v1) >= 0 )
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
      if ( _InterlockedCompareExchange64(&qword_180166368, (signed __int64)Heap, 0LL) )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
