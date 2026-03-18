/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C013D2F0
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1C013CEE8 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C013D8EC (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  a2[4] = 2;
  RIMGetContainerId(a1, a2, a2 + 4);
  return RIMGetPanelId(a1, a2 + 6, a2 + 8);
}
