/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C0117140
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1C0116D44 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C011777C (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  a2[4] = 2;
  RIMGetContainerId(a1, a2, a2 + 4);
  return RIMGetPanelId(a1, a2 + 6, a2 + 8);
}
