/*
 * XREFs of PowerIrpComplete @ 0x1C00021D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PowerIrpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  KeSetEvent((PRKEVENT)(Context + 544), 0, 0);
  KeReleaseSemaphore((PRKSEMAPHORE)(Context + 656), 0, 1, 0);
}
