/*
 * XREFs of ACPIRegisterForDeviceNotifications2 @ 0x1C005A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x1C005A4E4 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications2(__int64 a1, __int64 a2, __int64 a3)
{
  return ACPIRegisterForDeviceNotificationsByDeviceExtension(a1, a2, a3);
}
