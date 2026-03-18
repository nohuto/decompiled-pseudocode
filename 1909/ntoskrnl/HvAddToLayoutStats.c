/*
 * XREFs of HvAddToLayoutStats @ 0x1405D5644
 * Callers:
 *     HvCheckBin @ 0x1405D53E0 (HvCheckBin.c)
 *     HvCheckHive @ 0x1406323F0 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
