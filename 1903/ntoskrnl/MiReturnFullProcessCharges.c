/*
 * XREFs of MiReturnFullProcessCharges @ 0x14001F9A0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiReturnFullProcessCommitment @ 0x1405EC7B0 (MiReturnFullProcessCommitment.c)
 *     MiRemoveVadCharges @ 0x140605D80 (MiRemoveVadCharges.c)
 *     MiDeleteVadBitmap @ 0x1406708B8 (MiDeleteVadBitmap.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x1405EC7EC (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 776) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, v2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
