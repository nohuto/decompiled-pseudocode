/*
 * XREFs of RtlpCreateTraverseNodes @ 0x1800344AC
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x1800342E0 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EE89C (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     LdrpCalcAllocSize @ 0x18003586C (LdrpCalcAllocSize.c)
 */

__int64 __fastcall RtlpCreateTraverseNodes(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = LdrpCalcAllocSize(42LL, 8LL);
    if ( v3 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v4, v3);
      if ( Heap )
        *a1 = Heap;
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
