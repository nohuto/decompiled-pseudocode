/*
 * XREFs of RtlIdnToUnicode @ 0x18002BF10
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     sub_18002BFC0 @ 0x18002BFC0 (sub_18002BFC0.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  PVOID Heap; // rax
  void *v10; // rdi
  NTSTATUS v11; // ebx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v10 = Heap;
  if ( !Heap )
    return -1073741801;
  v11 = sub_18002BFC0(
          Flags,
          SourceString,
          (unsigned int)SourceStringLength,
          DestinationString,
          DestinationStringLength,
          Heap);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return v11;
}
