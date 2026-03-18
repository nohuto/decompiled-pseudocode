/*
 * XREFs of MiReturnProcessCommitment @ 0x140065D24
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1405E0510 (MiChargeFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x1405EC220 (MiDecommitRegion.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140850F30 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
}
