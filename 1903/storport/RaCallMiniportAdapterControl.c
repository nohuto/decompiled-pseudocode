/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C0015B98
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012DF4 (RaidAdapterRescanBus.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BD8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C60 (RaidAdapterRestartAdapter.c)
 *     RaidPowerSettingCallback @ 0x1C0018FC0 (RaidPowerSettingCallback.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001EA78 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0022A98 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C0035558 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidCoalescingCallback @ 0x1C0036270 (RaidCoalescingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C003F4F0 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003F5C0 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003F644 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003F6C8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C00406D0 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006E418 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006F31C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00736F4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
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
