/*
 * XREFs of RtlCompareMemoryUlong @ 0x1800A4AE0
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800214E4 (RtlpGrowBlockInPlace.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 *     RtlpHpParametersVerify @ 0x180109E18 (RtlpHpParametersVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareMemoryUlong(_DWORD *a1, unsigned __int64 a2, int a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v5 = a2 >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *a1++ == a3;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
