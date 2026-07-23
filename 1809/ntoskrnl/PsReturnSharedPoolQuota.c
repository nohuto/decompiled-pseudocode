/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1405CBCA8
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     ObAdjustSecurityQuota @ 0x1405CA9A4 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405CAA24 (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     AlpcMessageDestroyProcedure @ 0x140699A60 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x140699B74 (PspFreeRateControl.c)
 *     RtlpFreeAtom @ 0x1406AE710 (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE910 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1405CBCF4 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1u, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
