/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140088BA0
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1405F5C14 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405F5F90 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1405F60F0 (PsCallImageNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x1407491D0 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140749650 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140812D40 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140812DEC (DbgkpLkmdFireCallbacks.c)
 *     MiComputeAweCharges @ 0x140850AB0 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x140850B24 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140850D4C (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140850F98 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x140851164 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14085119C (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408515B0 (MiScrubProcessPhysicalPages.c)
 *     MmSetGraphicsPtes @ 0x140851710 (MmSetGraphicsPtes.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140852170 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088DA70 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088DB70 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
