/*
 * XREFs of ACPIUnregisterForDeviceNotifications2 @ 0x1C005C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIUnregisterForDeviceNotifications @ 0x1C005C260 (ACPIUnregisterForDeviceNotifications.c)
 */

void __fastcall ACPIUnregisterForDeviceNotifications2(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720));
}
