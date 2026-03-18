/*
 * XREFs of IovDeleteDevice @ 0x14096333C
 * Callers:
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140973760 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
