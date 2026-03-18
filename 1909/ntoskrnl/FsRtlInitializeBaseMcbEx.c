/*
 * XREFs of FsRtlInitializeBaseMcbEx @ 0x1400CA3E0
 * Callers:
 *     FsRtlInitializeBaseMcb @ 0x1400CA3C0 (FsRtlInitializeBaseMcb.c)
 *     FsRtlInitializeLargeMcb @ 0x1400EE670 (FsRtlInitializeLargeMcb.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __stdcall FsRtlInitializeBaseMcbEx(PBASE_MCB Mcb, POOL_TYPE PoolType, USHORT Flags)
{
  char v3; // di
  PVOID PoolWithTag; // rax

  Mcb->PairCount = 0;
  v3 = Flags;
  Mcb->PoolType = PoolType;
  Mcb->Flags = Flags;
  if ( PoolType == PagedPool )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&FsRtlFirstMappingLookasideList);
  else
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(unsigned __int16)PoolType, 0x78uLL, 0x74725346u);
  Mcb->Mapping = PoolWithTag;
  if ( PoolWithTag )
  {
    Mcb->MaximumPairCount = 15;
    return 1;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0;
  }
}
