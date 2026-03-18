/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1405EC7EC
 * Callers:
 *     MiReturnFullProcessCharges @ 0x14001F9A0 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x140064C70 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 2u, a2);
  return result;
}
