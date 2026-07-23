/*
 * XREFs of RtlpHpVsChunkFree @ 0x18010C024
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x18010C14C (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsChunkCoalesce @ 0x180039500 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1800514F0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180068684 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010BD38 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x18010BE5C (RtlpHpVsChunkDecommit.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = RtlpHpVsChunkCoalesce((__int64)SRWLock, a2, a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup((__int64)SRWLock, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)RtlpHpVsChunkDecommit(SRWLock, a2, a3, a4, v5) )
      break;
  }
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v12 = RtlpHpVsChunkAlignSplit(v11, a2, a3);
    if ( v12 )
      RtlpHpVsFreeChunkInsert((__int64)SRWLock, a2, v12);
  }
  RtlpHpVsFreeChunkInsert((__int64)SRWLock, a2, a3);
  return 0LL;
}
