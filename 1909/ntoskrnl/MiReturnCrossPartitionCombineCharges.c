/*
 * XREFs of MiReturnCrossPartitionCombineCharges @ 0x1402E6438
 * Callers:
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiIncrementCombinedPte @ 0x1402E6334 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB01C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCombineCharges(__int64 a1, int a2)
{
  if ( a2 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), 1uLL);
    MiReturnCommit(a1, 1uLL);
  }
  return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
}
