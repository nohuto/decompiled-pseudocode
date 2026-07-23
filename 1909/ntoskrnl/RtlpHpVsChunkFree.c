/*
 * XREFs of RtlpHpVsChunkFree @ 0x14010B118
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x14010AFFC (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x1400615A0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x140061B60 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x1400635E0 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkDecommit @ 0x14010B20C (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14010B3C0 (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v16 )
  {
    a3 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v16);
    if ( v16 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2, v12, v13);
      return a2;
    }
    if ( v16 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, a3, a4, v5) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v14 = RtlpHpVsChunkAlignSplit(v11, a2, a3);
    if ( v14 )
      RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, a2, v14);
  }
  RtlpHpVsFreeChunkInsert((_RTL_RB_TREE *)a1, a2, a3);
  return 0LL;
}
