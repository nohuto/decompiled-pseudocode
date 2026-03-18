/*
 * XREFs of MiGetCrossPartitionCombineCharges @ 0x1402E6530
 * Callers:
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiIncrementCombinedPte @ 0x1402E65D4 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA810 (MiGetCrossPartitionCharges.c)
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
