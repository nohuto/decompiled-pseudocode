/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C0016F40
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterRestartAdapter @ 0x1C0012D80 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013050 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0016AD0 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterStop @ 0x1C0016C60 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0016CB0 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRescanBus @ 0x1C0017760 (RaidAdapterRescanBus.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C001F240 (RaidPowerSettingCallback.c)
 *     StorPortAdapterActiveCondition @ 0x1C00212A0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C0021360 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C00213F8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0025950 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0025D8C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C00398DC (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidCoalescingCallback @ 0x1C003A550 (RaidCoalescingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C004288C (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0042910 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C00429A0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0042A24 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterIdleState @ 0x1C0043800 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0043B20 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0043C20 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00704AC (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0070B50 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0074244 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 312;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 560) & 0x10) == 0 )
  {
    *(_QWORD *)(a1 + 584) = 0LL;
    *(_QWORD *)(a1 + 592) = 0LL;
    *(_QWORD *)(a1 + 600) = 0LL;
    *(_DWORD *)(a1 + 584) = 19;
    v6 = RaCallMiniportAdapterControl(a1 + 312);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 276);
}
