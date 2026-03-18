/*
 * XREFs of RIMAllocKernelMem @ 0x1C0111C60
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 */

__int64 __fastcall RIMAllocKernelMem(__int64 a1, unsigned int a2)
{
  return Win32AllocPool(a1, a2);
}
