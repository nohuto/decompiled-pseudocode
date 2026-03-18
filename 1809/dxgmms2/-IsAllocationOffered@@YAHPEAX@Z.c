/*
 * XREFs of ?IsAllocationOffered@@YAHPEAX@Z @ 0x1C0081BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsAllocationOffered(_DWORD *a1)
{
  return a1[108] != 4 && *(_WORD *)(*((_QWORD *)a1 + 63) + 4LL) == 2;
}
