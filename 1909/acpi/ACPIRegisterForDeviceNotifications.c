/*
 * XREFs of ACPIRegisterForDeviceNotifications @ 0x1C0007D20
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0007290 (ACPICMButtonStartWorker.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00BB190 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C0007D64 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = ACPIInternalGetDeviceExtension(a1) + 328;
  if ( v5 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v5, a2, a3);
  else
    return 3221225486LL;
}
