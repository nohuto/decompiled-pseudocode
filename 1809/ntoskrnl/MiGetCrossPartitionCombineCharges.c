/*
 * XREFs of MiGetCrossPartitionCombineCharges @ 0x1402CC104
 * Callers:
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     MiIncrementCombinedPte @ 0x1402CC1DC (MiIncrementCombinedPte.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x1402D1C6C (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCombineCharges(__int64 a1, int a2)
{
  if ( a2 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, 1uLL, 0) )
      return 0LL;
    if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL, 0LL) )
    {
LABEL_4:
      MiReturnCommit(a1, 1uLL);
      return 0LL;
    }
  }
  if ( (int)MiGetCrossPartitionCharges(a1, 2LL, 1LL, 1LL) < 0 )
  {
    if ( !a2 )
      return 0LL;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), 1uLL);
    goto LABEL_4;
  }
  return 1LL;
}
