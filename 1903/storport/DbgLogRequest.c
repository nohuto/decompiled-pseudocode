/*
 * XREFs of DbgLogRequest @ 0x1C000216C
 * Callers:
 *     StorPortPauseDevice @ 0x1C0001D50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001EC0 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C0002030 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C00020C4 (RaidResumeUnitQueue.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004650 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 *     RaidUnitSubmitRequest @ 0x1C0007BC8 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0009540 (RaidUnitCompleteRequest.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000F310 (RaidUnitPendingDpcRoutine.c)
 *     RaidStallDeviceQueue @ 0x1C00116AC (RaidStallDeviceQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C0016638 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0017310 (RaidPauseAdapterQueue.c)
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C00372B4 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C003AEB0 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C003AFE0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C003B1A0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003B330 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C003B570 (StorPortPause.c)
 *     StorPortReady @ 0x1C003B820 (StorPortReady.c)
 *     StorPortResume @ 0x1C003BA80 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x1C003DA18 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0043050 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0046970 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0046BE8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0048B18 (RaidUnitSubmitResetRequest.c)
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
