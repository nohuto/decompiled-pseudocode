/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x14013D6E0
 * Callers:
 *     MiComputeAweCharges @ 0x1408959F0 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x140895A64 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140895C8C (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x14089609C (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408960F4 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x140896518 (MiScrubProcessPhysicalPages.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140896F50 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140897450 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897730 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
