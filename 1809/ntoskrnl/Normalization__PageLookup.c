/*
 * XREFs of Normalization__PageLookup @ 0x14089A6C0
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1402F4FF8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1402F5148 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1402F54B0 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
