/*
 * XREFs of MiEndDpcGang @ 0x1402E8488
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MiDecommitRegion @ 0x1406083A0 (MiDecommitRegion.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiEndDpcGang(__int64 a1)
{
  void *v2; // rcx

  if ( (*(_DWORD *)(a1 + 108) & 1) == 0 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 != (void *)(a1 + 24) )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}
