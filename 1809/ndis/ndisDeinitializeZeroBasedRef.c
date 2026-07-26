/*
 * XREFs of ndisDeinitializeZeroBasedRef @ 0x1C00FC18C
 * Callers:
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

void __fastcall ndisDeinitializeZeroBasedRef(__int64 a1)
{
  NdisFreeRefCount(*(struct NDIS_REFCOUNT_HANDLE__ **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 1LL;
}
