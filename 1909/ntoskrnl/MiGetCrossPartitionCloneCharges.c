/*
 * XREFs of MiGetCrossPartitionCloneCharges @ 0x1402E414C
 * Callers:
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402E4C2C (MiReferenceCloneProto.c)
 * Callees:
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiGetCrossPartitionCharges @ 0x1402EA570 (MiGetCrossPartitionCharges.c)
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
