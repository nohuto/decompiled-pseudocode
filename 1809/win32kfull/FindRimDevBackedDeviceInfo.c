/*
 * XREFs of FindRimDevBackedDeviceInfo @ 0x1C01C0590
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01C0510 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     <none>
 */

struct DEVICEINFO *__fastcall FindRimDevBackedDeviceInfo(void *a1, int a2)
{
  return CBaseInput::FindDeviceInfo(gpHidInput, a1, a2);
}
