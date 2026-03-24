/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140088BB0
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1405F4C14 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405F4F90 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1405F50F0 (PsCallImageNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x140747FE0 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140748460 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140811B40 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140811BEC (DbgkpLkmdFireCallbacks.c)
 *     MiComputeAweCharges @ 0x14084F850 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8C4 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14084FAEC (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x14084FD38 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x14084FF04 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14084FF3C (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x140850350 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x1408504B0 (MmSetGraphicsPtes.c)
 *     NtAllocateUserPhysicalPages @ 0x140850690 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140850F10 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408513C0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516B0 (NtMapUserPhysicalPagesScatter.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088C810 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088C910 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
