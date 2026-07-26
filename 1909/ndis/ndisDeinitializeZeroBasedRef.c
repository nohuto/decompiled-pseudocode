/*
 * XREFs of ndisDeinitializeZeroBasedRef @ 0x1C01284D4
 * Callers:
 *     ndisDereferenceFilter @ 0x1C008E22C (ndisDereferenceFilter.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 */

void __fastcall ndisDeinitializeZeroBasedRef(__int64 a1)
{
  NdisFreeRefCount(*(struct NDIS_REFCOUNT_HANDLE__ **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 1LL;
}
