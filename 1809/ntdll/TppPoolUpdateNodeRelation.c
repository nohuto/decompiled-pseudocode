/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x180030CB0
 * Callers:
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 *     TppAdjustRunningThreadGoal @ 0x180110414 (TppAdjustRunningThreadGoal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQuerySystemInformationEx @ 0x1800A2E10 (NtQuerySystemInformationEx.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  unsigned __int64 Heap; // rbx
  int v3; // edi
  unsigned __int64 i; // rdx
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 1;
  v6 = 80 * TppNumberNodes;
  Heap = RtlAllocateHeap(
           (__int64)NtCurrentPeb()->ProcessHeap,
           (TppHeapTag + 786432) | 8u,
           (unsigned int)(80 * TppNumberNodes));
  if ( Heap )
  {
    v3 = NtQuerySystemInformationEx(107LL, &v7, 4LL, Heap, v6, &v6);
    if ( v3 >= 0 )
    {
      memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)TppNumberNodes);
      for ( i = Heap; i < Heap + v6; i += *(unsigned int *)(i + 4) )
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(i + 8)) = *(_OWORD *)(i + 32);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
