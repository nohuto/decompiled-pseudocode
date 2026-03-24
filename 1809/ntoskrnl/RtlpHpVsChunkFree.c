/*
 * XREFs of RtlpHpVsChunkFree @ 0x1400BD390
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x1401B6A1C (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x1400BD480 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkCoalesce @ 0x1400BDBE0 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkDecommit @ 0x1400BE800 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkAlignSplit @ 0x140109910 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140154948 (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 v16; // rax
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v15 )
  {
    v11 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v18);
    v15 = v18;
    a3 = v11;
    if ( v18 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2, v13, v14);
      return a2;
    }
    if ( v18 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, v11, a4, v5) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v16 = RtlpHpVsChunkAlignSplit(v12, a2, a3);
    if ( v16 )
      RtlpHpVsFreeChunkInsert(a1, a2, v16);
  }
  RtlpHpVsFreeChunkInsert(a1, a2, a3);
  return 0LL;
}
