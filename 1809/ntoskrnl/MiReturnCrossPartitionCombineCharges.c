/*
 * XREFs of MiReturnCrossPartitionCombineCharges @ 0x1402CC0F0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiDecrementCombinedPte @ 0x14011F9F4 (MiDecrementCombinedPte.c)
 *     MiConvertStandbyToProto @ 0x14013EA50 (MiConvertStandbyToProto.c)
 *     MiIncrementCombinedPte @ 0x1402CBFEC (MiIncrementCombinedPte.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D24BC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCombineCharges(__int64 a1, int a2)
{
  if ( a2 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), 1uLL);
    MiReturnCommit(a1, 1uLL);
  }
  return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
}
