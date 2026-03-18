/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x1406F6920
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406F4444 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14070CED8 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14082D1C0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x1408316F4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140831A64 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408321A0 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F696C (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  return PiPnpRtlSetDeviceRegProperty(
           *(_QWORD *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           (*(_DWORD *)a2 & 1u) << 17);
}
