/*
 * XREFs of CmpFindSecurityCellCacheIndex @ 0x140716F08
 * Callers:
 *     CmpCopyKeyPartial @ 0x140716C74 (CmpCopyKeyPartial.c)
 *     CmpCreateEmptyKey @ 0x14082BCC0 (CmpCreateEmptyKey.c)
 *     CmpSyncKeyValues @ 0x140836F84 (CmpSyncKeyValues.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401BE8F0 (CmpFindSecurityCellCacheIndexNew.c)
 */

char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, unsigned int a2, _DWORD *a3)
{
  return CmpFindSecurityCellCacheIndexNew(a1, a2, a3);
}
