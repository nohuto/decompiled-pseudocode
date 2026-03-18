/*
 * XREFs of DeviceSlot_Initialize @ 0x1C0013228
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0012FE0 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C00136F4 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0042D08 (XilCoreDeviceSlot_Initialize.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 3221225666LL;
  if ( *(_BYTE *)(a1 + 80) )
    return XilDeviceSlot_InitializeSecureResources();
  return XilCoreDeviceSlot_Initialize();
}
