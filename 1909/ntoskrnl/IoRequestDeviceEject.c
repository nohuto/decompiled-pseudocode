/*
 * XREFs of IoRequestDeviceEject @ 0x14029DB50
 * Callers:
 *     PipProcessStartPhase2 @ 0x14071A17C (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14087C93C (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14029DB70 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
