/*
 * XREFs of DbgLogRequest @ 0x1C00027C4
 * Callers:
 *     StorPortPauseDevice @ 0x1C00021B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002330 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C00024A8 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0002714 (RaidResumeUnitQueue.c)
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     RaidUnitSubmitRequest @ 0x1C0009634 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000FC60 (RaidUnitPendingDpcRoutine.c)
 *     RaidPauseAdapterQueue @ 0x1C00142F8 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C001435C (RaidResumeAdapterQueue.c)
 *     RaidStallDeviceQueue @ 0x1C00157FC (RaidStallDeviceQueue.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B438 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C003E780 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C003E8B0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C003EA70 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003EC10 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C003EE40 (StorPortPause.c)
 *     StorPortReady @ 0x1C003F0F0 (StorPortReady.c)
 *     StorPortResume @ 0x1C003F340 (StorPortResume.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0045DB8 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0049204 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C004947C (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004B2D0 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 5124) && *(_QWORD *)(a1 + 5128) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 5128)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5120)) % *(_DWORD *)(a1 + 5124));
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
