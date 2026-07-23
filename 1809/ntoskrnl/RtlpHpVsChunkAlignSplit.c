/*
 * XREFs of RtlpHpVsChunkAlignSplit @ 0x140109990
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1400BD2D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAddSubsegment @ 0x1401098E4 (RtlpHpVsContextAddSubsegment.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkAlignSplit(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  unsigned __int64 result; // rax

  v3 = (a3 + 4111) & 0xFFFFFFFFFFFFF000uLL;
  if ( v3 - a3 >= 16 * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2)) )
    return 0LL;
  v5 = v3 - 32;
  v6 = (__int64)(v3 - 32 - a3) >> 4;
  v7 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2)) - v6;
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ v6;
  memset((void *)(v3 - 32), 0, 0x20uLL);
  *(_WORD *)(v5 + 4) = v6;
  *(_WORD *)(v5 + 2) = v7;
  *(_QWORD *)v5 ^= v5 ^ RtlpHpHeapGlobals;
  v8 = v5 + 16LL * v7;
  result = v5;
  if ( v8 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v8 + 4) = WORD2(v8) ^ v7 ^ WORD2(RtlpHpHeapGlobals);
  return result;
}
