/*
 * XREFs of UserRtlAllocMem @ 0x1C011DCF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 */

__int64 __fastcall UserRtlAllocMem(__int64 a1)
{
  return Win32AllocPool(a1, 0x74727355u);
}
