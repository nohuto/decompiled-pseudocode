/*
 * XREFs of UserRtlAllocMem @ 0x1C0120660
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 */

__int64 __fastcall UserRtlAllocMem(__int64 a1)
{
  return Win32AllocPool(a1, 0x74727355u);
}
