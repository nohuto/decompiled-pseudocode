/*
 * XREFs of MiGetCrossPartitionCloneCharges @ 0x1402E43EC
 * Callers:
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402E4ECC (MiReferenceCloneProto.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA810 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCloneCharges(__int64 a1)
{
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL, 0LL) )
    return 0LL;
  if ( (int)MiGetCrossPartitionCharges(a1, 6LL, 0LL, 1LL) < 0 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), 1uLL);
    return 0LL;
  }
  return 1LL;
}
