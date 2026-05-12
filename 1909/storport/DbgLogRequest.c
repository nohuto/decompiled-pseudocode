/*
 * XREFs of DbgLogRequest @ 0x1C000211C
 * Callers:
 *     StorPortPauseDevice @ 0x1C0001D00 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001E70 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C0001FE0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0002074 (RaidResumeUnitQueue.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C00052A0 (StorPortNotification.c)
 *     RaidUnitSubmitRequest @ 0x1C0007C18 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000F040 (RaidUnitPendingDpcRoutine.c)
 *     RaidStallDeviceQueue @ 0x1C001184C (RaidStallDeviceQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C0016230 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0017260 (RaidPauseAdapterQueue.c)
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C00386A4 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C003C2A0 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C003C3D0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C003C590 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003C720 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C003C960 (StorPortPause.c)
 *     StorPortReady @ 0x1C003CC10 (StorPortReady.c)
 *     StorPortResume @ 0x1C003CE70 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x1C003EE08 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0044440 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0047D60 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0047FD8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0049C88 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 4996) && *(_QWORD *)(a1 + 5000) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 5000)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4992)) % *(_DWORD *)(a1 + 4996));
    *(_DWORD *)v8 = a2;
    if ( !a7 )
      v7 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v8 + 40) = v7;
    *(_QWORD *)(v8 + 24) = a5;
    *(_QWORD *)(v8 + 32) = a6;
    *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a4;
  }
}
