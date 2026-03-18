/*
 * XREFs of NtGdiPtInRegion @ 0x1C0122D30
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x1C007ED00 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1, LONG a2, LONG a3)
{
  return GrePtInRegion(a1, a2, a3);
}
