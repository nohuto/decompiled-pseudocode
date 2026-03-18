/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1405F29D4
 * Callers:
 *     MiReturnFullProcessCharges @ 0x14007FF10 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1405E0510 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE9B0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 2u, a2);
  return result;
}
