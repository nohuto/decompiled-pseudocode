/*
 * XREFs of MiEndDpcGang @ 0x1402E8728
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     MiDecommitRegion @ 0x140606890 (MiDecommitRegion.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
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
