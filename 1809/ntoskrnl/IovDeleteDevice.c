/*
 * XREFs of IovDeleteDevice @ 0x1409251B8
 * Callers:
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140935128 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
