/*
 * XREFs of MiReturnFullProcessCharges @ 0x14007FF10
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1405F2998 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140608CFC (MiDeleteVadBitmap.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x1405F29D4 (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068C750 (PspChangeJobMemoryUsageByProcess.c)
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
