/*
 * XREFs of RtlpHpEnvFreeVA @ 0x14010E478
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x140022550 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x14010DE74 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeFree @ 0x14010E37C (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpFreeVA @ 0x14010E3E4 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010E80C (RtlpHpVaMgrCtxFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14010ECFC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrAlloc @ 0x14010F224 (RtlpHpVaMgrAlloc.c)
 *     RtlCSparseBitmapCleanup @ 0x1401696A4 (RtlCSparseBitmapCleanup.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14010E4BC (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  if ( (_DWORD)a3 != 0x8000 )
    return MmFreePoolMemory(a1, a2, a3);
  v4 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v5 = *a1 + *a2 - v4;
  *a1 = v4;
  *a2 = v5;
  if ( v5 )
    return MmFreePoolMemory(a1, a2, a3);
  else
    return 0LL;
}
