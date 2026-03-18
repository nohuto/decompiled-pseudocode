/*
 * XREFs of IoRequestDeviceEject @ 0x140287BF0
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406FD644 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x140841840 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x140287C10 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
