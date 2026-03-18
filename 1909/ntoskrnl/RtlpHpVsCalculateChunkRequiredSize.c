/*
 * XREFs of RtlpHpVsCalculateChunkRequiredSize @ 0x1401C05A8
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsCalculateChunkRequiredSize(int a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  if ( a1 != *a2 )
  {
    v2 += 2;
    *a2 = v2;
  }
  return ((unsigned int)(v2 + 15) >> 4) + 1;
}
