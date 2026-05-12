/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C0015AF8
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012E90 (RaidAdapterRescanBus.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BA4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C2C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStop @ 0x1C0015CAC (RaidAdapterStop.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0015EA0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0018750 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C001D470 (RaidPowerSettingCallback.c)
 *     StorPortAdapterActiveCondition @ 0x1C001F770 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C001F830 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F8C8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0022890 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0022BC8 (RaidAdapterSendPowerToMiniport.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0022CF0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C0036950 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidCoalescingCallback @ 0x1C0037660 (RaidCoalescingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C004092C (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C00409B0 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0040A34 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0040AB8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterIdleState @ 0x1C0041880 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0041AC0 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006F678 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C007035C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00745C8 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0015B64 (RaCallMiniportAdapterControl.c)
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
