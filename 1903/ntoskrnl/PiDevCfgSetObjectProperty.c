/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x140705E2C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406F952C (PiDevCfgProcessDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140715C44 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14071B85C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1408690C0 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140869208 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14086C408 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x1409F78FC (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11)
{
  int v11; // eax

  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v11 = a11 | 0x20000;
  else
    v11 = a11;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v11);
}
