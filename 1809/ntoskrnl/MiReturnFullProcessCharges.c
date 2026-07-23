/*
 * XREFs of MiReturnFullProcessCharges @ 0x14007FF00
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1405ED380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x1405ED820 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140609CFC (MiDeleteVadBitmap.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x1405F39D4 (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068D8F0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, v2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
