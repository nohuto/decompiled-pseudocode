/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C0015A68
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012DF4 (RaidAdapterRescanBus.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BD8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C60 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStop @ 0x1C0015CE0 (RaidAdapterStop.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0015EE0 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0016380 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0016690 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidPowerSettingCallback @ 0x1C0018FC0 (RaidPowerSettingCallback.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     StorPortAdapterActiveCondition @ 0x1C001E920 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001E9E0 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001EA78 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0022760 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0022A98 (RaidAdapterSendPowerToMiniport.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0022BA0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C0035558 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidCoalescingCallback @ 0x1C0036270 (RaidCoalescingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C003F53C (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003F5C0 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003F644 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003F6C8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterIdleState @ 0x1C0040490 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C00406D0 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006E418 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006F31C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 296;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 544) & 0x10) == 0 )
  {
    *(_QWORD *)(a1 + 564) = 0LL;
    *(_QWORD *)(a1 + 572) = 0LL;
    *(_QWORD *)(a1 + 580) = 0LL;
    *(_DWORD *)(a1 + 564) = 19;
    v6 = RaCallMiniportAdapterControl(a1 + 296, 0LL, a1 + 564);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 272);
}
