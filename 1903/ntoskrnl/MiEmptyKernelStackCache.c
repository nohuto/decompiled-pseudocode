/*
 * XREFs of MiEmptyKernelStackCache @ 0x1402D1990
 * Callers:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiScrubNode @ 0x1402ECAC0 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x1400045F0 (MiDeleteCachedKernelStack.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 MiEmptyKernelStackCache()
{
  __int64 result; // rax
  ULONG i; // ebx
  __int64 v2; // rcx
  unsigned int j; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  _SLIST_HEADER *v6; // rbp
  PSLIST_ENTRY v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( (MiFlags & 0x800) != 0 )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      result = KeGetPrcb(i);
      if ( *(_QWORD *)(result + 23560) )
      {
        v2 = _InterlockedExchange64((volatile __int64 *)(result + 23560), 0LL);
        if ( v2 )
          result = MiDeleteCachedKernelStack(v2);
      }
    }
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      v4 = 2LL;
      v5 = 11LL * j;
      do
      {
        v6 = &qword_140465A58[v5];
        while ( 1 )
        {
          v7 = RtlpInterlockedPopEntrySList(v6);
          if ( !v7 )
            break;
          MiDeleteCachedKernelStack((__int64)v7);
        }
        v5 += 2LL;
        --v4;
      }
      while ( v4 );
      result = (unsigned __int16)KeNumberNodes;
    }
  }
  return result;
}
