/*
 * XREFs of IoRequestDeviceEject @ 0x140287EE0
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406FE8C4 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x140842A80 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x140287F00 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
