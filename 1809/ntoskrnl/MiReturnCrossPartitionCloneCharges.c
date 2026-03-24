/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x1402CABB8
 * Callers:
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9630 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1402CA118 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402CAA70 (MiReferenceCloneProto.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D24BC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1)
{
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(1uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), 1uLL);
  return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
}
