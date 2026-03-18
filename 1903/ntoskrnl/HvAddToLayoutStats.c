/*
 * XREFs of HvAddToLayoutStats @ 0x1405D4E84
 * Callers:
 *     HvCheckBin @ 0x1405D4C20 (HvCheckBin.c)
 *     HvCheckHive @ 0x14062E570 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
