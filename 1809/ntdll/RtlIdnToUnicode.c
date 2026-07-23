/*
 * XREFs of RtlIdnToUnicode @ 0x1800474D0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800464A0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpIdnToUnicodeWorker @ 0x180047580 (RtlpIdnToUnicodeWorker.c)
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
  v11 = RtlpIdnToUnicodeWorker(
          Flags,
          SourceString,
          (unsigned int)SourceStringLength,
          DestinationString,
          DestinationStringLength,
          Heap);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return v11;
}
