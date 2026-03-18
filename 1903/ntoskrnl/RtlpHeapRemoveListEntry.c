/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x14031ACA0
 * Callers:
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14030F31C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14030F704 (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x14031AD94 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x1408D3EC0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x14031AC28 (RtlpHeapListCompare.c)
 */

__int64 *__fastcall RtlpHeapRemoveListEntry(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 *result; // rax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // rbp

  v7 = *(_QWORD *)(a2 + 48);
  v8 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = v8;
  v11 = (unsigned int)v10;
  result = *(__int64 **)(v7 + 8 * v10);
  --*(_DWORD *)(a2 + 16);
  v13 = *(_DWORD *)(a2 + 8);
  v14 = v13 - 1;
  if ( a5 == v13 - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( result == a4 )
  {
    v15 = *a4;
    result = *(__int64 **)(a2 + 32);
    if ( *(_QWORD *)a2 )
      v14 = v13;
    if ( a5 >= v14 )
    {
      if ( (__int64 *)v15 != result )
      {
        *(_QWORD *)(v7 + 8 * v11) = v15;
        return result;
      }
      *(_QWORD *)(v7 + 8 * v11) = 0LL;
    }
    else
    {
      if ( (__int64 *)v15 != result && !(unsigned int)RtlpHeapListCompare(a1, v15, a6, 1) )
      {
        result = *(__int64 **)(a2 + 48);
        result[v11] = v15;
        return result;
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) = 0LL;
    }
    result = *(__int64 **)(a2 + 40);
    *((_DWORD *)result + ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
