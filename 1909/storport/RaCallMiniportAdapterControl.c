/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C0015B64
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012E90 (RaidAdapterRescanBus.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BA4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C2C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C001D470 (RaidPowerSettingCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F8C8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0022BC8 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C0036950 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidCoalescingCallback @ 0x1C0037660 (RaidCoalescingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C00408E0 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C00409B0 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0040A34 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0040AB8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C0041AC0 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006F678 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C007035C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00745C8 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportAdapterControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
