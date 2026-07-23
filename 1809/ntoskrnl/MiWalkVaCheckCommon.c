/*
 * XREFs of MiWalkVaCheckCommon @ 0x140087E0C
 * Callers:
 *     MiTrimPte @ 0x140087BC0 (MiTrimPte.c)
 *     MiEmptyWorkingSetHelper @ 0x1401400E8 (MiEmptyWorkingSetHelper.c)
 *     MiSimpleAgePte @ 0x1402B3B20 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1402B4160 (MiUpdateOldPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiIsPageTableLocked @ 0x14012DAEC (MiIsPageTableLocked.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v8; // r8

  if ( !a4 && ((*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(a1, a2)) )
    return 0LL;
  v8 = *(_QWORD *)(a3 + 8);
  if ( v8 >= 0 && (unsigned int)MiDemoteCombinedPte(a1, a2, v8 | 0x8000000000000000uLL) == 1 )
    *a5 = MI_READ_PTE_LOCK_FREE(a2);
  return 1LL;
}
