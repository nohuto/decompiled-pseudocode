/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x1402CADA8
 * Callers:
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9820 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402CAC60 (MiReferenceCloneProto.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D26AC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1)
{
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(1uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), 1uLL);
  return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
}
