/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x1C00136D0
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x1C005B3F0 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
