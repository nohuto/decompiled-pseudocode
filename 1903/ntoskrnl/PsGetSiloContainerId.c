/*
 * XREFs of PsGetSiloContainerId @ 0x1408C4B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloContainerId(__int64 a1)
{
  return (a1 + 1224) & -(__int64)(a1 != 0);
}
