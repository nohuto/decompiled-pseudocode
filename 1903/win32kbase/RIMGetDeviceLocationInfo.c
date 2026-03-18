/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C013F960
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1C013F558 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C013FF5C (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  a2[4] = 2;
  RIMGetContainerId(a1, a2, a2 + 4);
  return RIMGetPanelId(a1, a2 + 6, a2 + 8);
}
