/*
 * XREFs of MiReleaseReadListResources @ 0x140647BD8
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x1400921A8 (MmWaitForCacheManagerPrefetch.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MmPrefetchPagesEx @ 0x140647408 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406475F8 (MmPrefetchForCacheManager.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiPrefetchControlArea @ 0x1406E7830 (MiPrefetchControlArea.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x140094B04 (MiRemoveViewsFromSectionWithPfn.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x140647C68 (MiFreeReadListPages.c)
 */

void __fastcall MiReleaseReadListResources(__int64 a1)
{
  __int64 v1; // rbx
  void **v3; // rdi
  void ***v4; // rbx
  void **v5; // rax
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  MiFreeReadListPages(a1);
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 )
  {
    v3 = (void **)(a1 + 24);
    while ( 1 )
    {
      v4 = (void ***)*v3;
      if ( *v3 == v3 )
        break;
      if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
        __fastfail(3u);
      *v3 = v5;
      v6 = 0LL;
      for ( v5[1] = v3; (unsigned int)v6 < *((_DWORD *)v4 + 4); v6 = (unsigned int)(v6 + 1) )
        MiRemoveViewsFromSectionWithPfn((__int64 *)v4[v6 + 3], *((unsigned int *)v4[v6 + 3] + 11), 4u);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
