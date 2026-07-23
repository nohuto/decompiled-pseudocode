/*
 * XREFs of RtlpHpCheckAllocationSizeLimit @ 0x1400097E0
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1400098C4 (RtlpHpAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x14011F024 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpCheckAllocationSizeLimit(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v7; // r9

  v3 = *(_QWORD *)(a3 + 16);
  v4 = 0;
  v5 = v3;
  if ( (v3 || (v5 = qword_14040F108) != 0) && a1 > v5 )
  {
    v7 = *(_QWORD *)(a3 + 24);
    if ( v7 )
      RtlpLogHeapFailure(20, a2, 0, v7, a1, v3);
  }
  else
  {
    return 1;
  }
  return v4;
}
