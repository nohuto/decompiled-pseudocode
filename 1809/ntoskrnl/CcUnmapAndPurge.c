/*
 * XREFs of CcUnmapAndPurge @ 0x14007CA84
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007DF5C (CcReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     CcPurgeCacheSection @ 0x1400E7B20 (CcPurgeCacheSection.c)
 */

void __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v4 = CcReferenceSharedCacheMapFileObject(a1);
  CcUnmapVacbArray(a1, 0LL, 0, a2, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), 0LL, 0, 2u);
  _m_prefetchw((const void *)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 96);
  while ( (v4 ^ v5) < 0xF )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v5 + 1, v5);
    if ( v6 == v5 )
      return;
  }
  ObDereferenceObjectDeferDelete((PVOID)v4);
}
