/*
 * XREFs of MiWalkVaCheckCommon @ 0x140157484
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x140157348 (MiEmptyWorkingSetHelper.c)
 *     MiSimpleAgePte @ 0x1402C8AF0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1402C9170 (MiUpdateOldPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPageTableLocked @ 0x14012B620 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v5; // r10
  __int64 v7; // r11
  __int64 v8; // r8

  v5 = a3;
  v7 = a1;
  if ( !a4 && ((*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(a1, a2)) )
    return 0LL;
  v8 = *(_QWORD *)(v5 + 8);
  if ( v8 >= 0 && (unsigned int)MiDemoteCombinedPte(v7, a2, v8 | 0x8000000000000000uLL) == 1 )
    *a5 = MI_READ_PTE_LOCK_FREE(a2);
  return 1LL;
}
