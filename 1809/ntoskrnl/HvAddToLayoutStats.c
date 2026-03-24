/*
 * XREFs of HvAddToLayoutStats @ 0x1406B9918
 * Callers:
 *     HvCheckBin @ 0x1405F2100 (HvCheckBin.c)
 *     HvCheckHive @ 0x1405F991C (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
