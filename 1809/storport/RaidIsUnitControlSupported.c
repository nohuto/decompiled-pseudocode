/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C0007578
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00072D0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0007450 (StorPortUnitIdleCondition.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012874 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0012BE4 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C001652C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0017D34 (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001E400 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0023448 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C002537C (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C00432DC (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0043368 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C0043400 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C00434E8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0043E00 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0044330 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00446C0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0046570 (RaUnitAdapterRemove.c)
 *     RaUnitStartDeviceIrp @ 0x1C006D6C8 (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006E138 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006E2BC (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C00272FC (RaMiniportIsFeatureSupported.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _DWORD *v6; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24) + 312LL;
  v4 = a2;
  if ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 544LL) == 208 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 560LL) & 8) != 0 )
      return *(_BYTE *)(v4 + v3 + 256);
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 564LL) = 0LL;
    *(_QWORD *)(v3 + 260) = 0LL;
    *(_DWORD *)(v3 + 268) = 0;
    *(_DWORD *)(v3 + 252) = 12;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v3) )
      *v6 = 13;
    if ( (int)RaCallMiniportUnitControl(v5, 0LL) >= 0 )
    {
      *(_BYTE *)(v3 + 248) |= 8u;
      return *(_BYTE *)(v4 + v3 + 256);
    }
  }
  return v2;
}
