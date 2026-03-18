/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140088BB0
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1405F4C14 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405F4F90 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1405F50F0 (PsCallImageNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x140748000 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140748480 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140811B60 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140811C0C (DbgkpLkmdFireCallbacks.c)
 *     MiComputeAweCharges @ 0x14084F870 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8E4 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14084FB0C (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x14084FD58 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x14084FF24 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14084FF5C (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x140850370 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x1408504D0 (MmSetGraphicsPtes.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140850F30 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408513E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516D0 (NtMapUserPhysicalPagesScatter.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088C830 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088C930 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
