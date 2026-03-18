/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x1402E5014
 * Callers:
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402E3984 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402E4ECC (MiReferenceCloneProto.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x1402EB2BC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r10

  v1 = a1;
  v2 = 1LL;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(1uLL);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), 1uLL);
  return MiReturnCrossPartitionCharges(v1, 6LL, 0LL, v2);
}
