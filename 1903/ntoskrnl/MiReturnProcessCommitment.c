/*
 * XREFs of MiReturnProcessCommitment @ 0x140059044
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 *     MiDecommitRegion @ 0x140606890 (MiDecommitRegion.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
}
