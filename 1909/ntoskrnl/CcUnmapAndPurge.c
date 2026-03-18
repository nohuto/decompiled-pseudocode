/*
 * XREFs of CcUnmapAndPurge @ 0x14008027C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007FBC8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400802F4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 */

__int64 __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  ULONG_PTR v4; // rsi

  v4 = CcReferenceSharedCacheMapFileObject(a1);
  CcUnmapVacbArray(a1, 0LL, 0, a2, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), 0LL, 0, 2u);
  return CcDereferenceSharedCacheMapFileObject(a1, v4);
}
