/*
 * XREFs of ExFreePoolEx @ 0x14012FDC0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreePoolEx(ULONG_PTR a1)
{
  return ExFreeHeapPool(a1);
}
