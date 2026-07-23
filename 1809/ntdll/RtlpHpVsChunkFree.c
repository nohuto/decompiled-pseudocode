/*
 * XREFs of RtlpHpVsChunkFree @ 0x18001F6B0
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x18009FBFC (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x18001E2D8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkCoalesce @ 0x18001F778 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkDecommit @ 0x18001FE60 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180065688 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010E170 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  __int64 v13; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, a3, a4, v5) )
      break;
  }
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v13 = RtlpHpVsChunkAlignSplit(v11, a2, a3);
    if ( v13 )
      RtlpHpVsFreeChunkInsert(a1, a2, v13);
  }
  RtlpHpVsFreeChunkInsert(a1, a2, a3);
  return 0LL;
}
