/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C00068B0
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C00071A0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0007330 (StorPortUnitIdleCondition.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00108BC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0010C34 (RaidUnitSendPowerToMiniport.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0013398 (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0016284 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0019D8C (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021B10 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C004136C (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C00413F8 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C0041484 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C0041560 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0041BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0042110 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00424A0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0044E20 (RaUnitAdapterRemove.c)
 *     RaUnitStartDeviceIrp @ 0x1C006CC50 (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D74C (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006EDD0 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C00152A4 (RaCallMiniportUnitControl.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v4; // rsi

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24) + 296LL;
  v4 = a2;
  if ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 528LL) == 208 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 544LL) & 8) == 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 548LL) = 0LL;
      *(_QWORD *)(v3 + 260) = 0LL;
      *(_DWORD *)(v3 + 252) = 12;
      if ( (int)RaCallMiniportUnitControl(v3, 0LL) < 0 )
        return v2;
      *(_BYTE *)(v3 + 248) |= 8u;
    }
    return *(_BYTE *)(v4 + v3 + 256);
  }
  return v2;
}
