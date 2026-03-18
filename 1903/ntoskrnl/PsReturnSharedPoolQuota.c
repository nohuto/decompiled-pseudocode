/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1405C866C
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     ObAdjustSecurityQuota @ 0x1405C752C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405D693C (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspFreeRateControl @ 0x1406988D4 (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BDDB0 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x1406C779C (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x140064C70 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1405C86B8 (PspDereferenceQuotaBlock.c)
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
