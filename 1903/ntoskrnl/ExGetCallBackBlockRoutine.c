/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x14013D1D0
 * Callers:
 *     MiComputeAweCharges @ 0x1408961D0 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x140896244 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14089646C (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x14089687C (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408968D4 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x140896CF8 (MiScrubProcessPhysicalPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140897C30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897F10 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
