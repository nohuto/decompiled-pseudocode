/*
 * XREFs of qsort_0 @ 0x1C00207D1
 * Callers:
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00C98DC (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl qsort_0(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  qsort(Base, NumOfElements, SizeOfElements, PtFuncCompare);
}
