/*
 * XREFs of IoRequestDeviceEject @ 0x140287CF0
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406FD624 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x140841820 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x140287D10 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
