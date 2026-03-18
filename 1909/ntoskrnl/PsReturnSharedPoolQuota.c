/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1405C8B6C
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     ObAdjustSecurityQuota @ 0x1405C7A2C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405D70FC (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspFreeRateControl @ 0x1406BD29C (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BD860 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x1406C607C (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x140064D10 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1405C8BB8 (PspDereferenceQuotaBlock.c)
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
