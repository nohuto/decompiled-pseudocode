/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1405CACA8
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     ObAdjustSecurityQuota @ 0x1405C99A4 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405C9A24 (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x1405E35F0 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     AlpcMessageDestroyProcedure @ 0x1406988A0 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x1406989B4 (PspFreeRateControl.c)
 *     RtlpFreeAtom @ 0x1406AD470 (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE9D0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1405CACF4 (PspDereferenceQuotaBlock.c)
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
