/*
 * XREFs of DeviceSlot_Initialize @ 0x1C0015CA0
 * Callers:
 *     DeviceSlot_ControllerResetPostReset @ 0x1C00159F0 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_D0Entry @ 0x1C0015B1C (DeviceSlot_D0Entry.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00161E8 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0048700 (XilCoreDeviceSlot_Initialize.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 3221225666LL;
  if ( *(_BYTE *)(a1 + 80) )
    return XilDeviceSlot_InitializeSecureResources();
  return XilCoreDeviceSlot_Initialize();
}
