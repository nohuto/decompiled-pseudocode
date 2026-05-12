/*
 * XREFs of RaidUnitDeviceStackPowerUpCompletion @ 0x1C00100C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDeviceStackPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context)
{
  Context[160] &= ~0x80u;
}
