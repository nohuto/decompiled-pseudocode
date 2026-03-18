/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x1C001C640
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001B700 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C002BF70 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C002C060 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C004E8C0 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C004FCB0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001C68C (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc(v4, v3);
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
