/*
 * XREFs of MiGetCrossPartitionCombineCharges @ 0x1402E6290
 * Callers:
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiIncrementCombinedPte @ 0x1402E6334 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA570 (MiGetCrossPartitionCharges.c)
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
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), 1uLL);
    goto LABEL_4;
  }
  return 1LL;
}
