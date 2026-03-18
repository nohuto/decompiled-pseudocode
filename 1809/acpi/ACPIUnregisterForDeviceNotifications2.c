/*
 * XREFs of ACPIUnregisterForDeviceNotifications2 @ 0x1C005A570
 * Callers:
 *     <none>
 * Callees:
 *     ACPIUnregisterForDeviceNotifications @ 0x1C005A510 (ACPIUnregisterForDeviceNotifications.c)
 */

void __fastcall ACPIUnregisterForDeviceNotifications2(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720));
}
