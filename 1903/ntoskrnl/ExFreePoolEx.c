/*
 * XREFs of ExFreePoolEx @ 0x14012F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
