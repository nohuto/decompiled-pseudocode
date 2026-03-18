/*
 * XREFs of FsRtlTruncateBaseMcb @ 0x14010B570
 * Callers:
 *     FsRtlTruncateLargeMcb @ 0x14010B530 (FsRtlTruncateLargeMcb.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlFindLargeIndex @ 0x14010BFC0 (FsRtlFindLargeIndex.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTruncateBaseMcb(PBASE_MCB Mcb, LONGLONG Vbn)
{
  ULONG PairCount; // edi
  unsigned int v4; // r11d
  __int64 v5; // rax
  _DWORD *Mapping; // r8
  ULONG v7; // edi
  PVOID PoolWithTag; // rax
  void *v9; // rsi
  ULONG v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (_DWORD)Vbn )
  {
    if ( Mcb->PairCount && (unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)(Vbn - 1), &v10) )
    {
      v5 = v10;
      Mapping = Mcb->Mapping;
      if ( Mapping[2 * v10 + 1] == -1 )
      {
        Mcb->PairCount = v10;
      }
      else
      {
        Mcb->PairCount = v10 + 1;
        if ( (unsigned int)v5 < (int)v5 + 1 && (_DWORD)v5 != -1 && Mapping[2 * v5] > v4 )
          Mapping[2 * v5] = v4;
      }
    }
  }
  else
  {
    Mcb->PairCount = 0;
  }
  PairCount = Mcb->PairCount;
  if ( PairCount < Mcb->MaximumPairCount >> 2 && Mcb->MaximumPairCount > 0xF )
  {
    v7 = 2 * PairCount;
    if ( v7 < 0xF )
      v7 = 15;
    if ( v7 == 15 && Mcb->PoolType == 1 )
      PoolWithTag = ExAllocateFromNPagedLookasideList(&FsRtlFirstMappingLookasideList);
    else
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)Mcb->PoolType, 8LL * v7, 0x74725346u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, Mcb->Mapping, 8LL * Mcb->PairCount);
      ExFreePoolWithTag(Mcb->Mapping, 0);
      Mcb->Mapping = v9;
      Mcb->MaximumPairCount = v7;
    }
  }
}
