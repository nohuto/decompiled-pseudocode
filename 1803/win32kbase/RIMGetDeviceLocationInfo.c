/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C00EC48C
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1C0054960 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C0054A08 (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId(a1, (void *)a2, (_DWORD *)(a2 + 16));
  return RIMGetPanelId(a1, (_QWORD *)(a2 + 24), (ULONG *)(a2 + 32));
}
