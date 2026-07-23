/*
 * XREFs of RtlpFreeTraverseNodes @ 0x1800343BC
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x1800342E0 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EE89C (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(PVOID BaseAddress)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  else
    return (unsigned int)-1073741811;
  return v1;
}
