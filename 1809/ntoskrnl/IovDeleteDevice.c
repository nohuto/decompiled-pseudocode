/*
 * XREFs of IovDeleteDevice @ 0x1409241B8
 * Callers:
 *     IoDeleteDevice @ 0x1400DAAE0 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140934128 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
