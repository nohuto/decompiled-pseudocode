/*
 * XREFs of Normalization__PageLookup @ 0x1408D7C94
 * Callers:
 *     NormBuffer__GetLastChar @ 0x140313988 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x140313AD8 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x140313E40 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
