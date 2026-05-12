/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C00152A4
 * Callers:
 *     RaidIsUnitControlSupported @ 0x1C00068B0 (RaidIsUnitControlSupported.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0010C34 (RaidUnitSendPowerToMiniport.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0013398 (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0016284 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0019D8C (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021B10 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C004136C (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C00413F8 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C0041484 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C0041560 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaUnitAdapterRemove @ 0x1C0044E20 (RaUnitAdapterRemove.c)
 *     RaUnitStartDeviceIrp @ 0x1C006CC50 (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D74C (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006EDD0 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
