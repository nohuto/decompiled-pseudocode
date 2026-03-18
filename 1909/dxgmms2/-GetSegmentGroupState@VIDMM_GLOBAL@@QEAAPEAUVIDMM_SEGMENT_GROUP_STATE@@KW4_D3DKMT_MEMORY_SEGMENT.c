/*
 * XREFs of ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00801E8
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005D130 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C0063AD8 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C007FE94 (-GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0080098 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00B4E58 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00B5674 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C1088 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00C3874 (-BucketizeBudgetStateProcesses@VIDMM_GLOBAL@@IEAAXKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00C3B40 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00C47A4 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT_GROUP_STATE *__fastcall VIDMM_GLOBAL::GetSegmentGroupState(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PARTITION *a4)
{
  __int64 v4; // r11
  __int64 v5; // r8

  v4 = a3;
  v5 = *((_QWORD *)this + 5023);
  if ( (*(_BYTE *)(v5 + 24 * (v4 + 65LL * a2) + 512) & 1) != 0 )
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL)
                                                          + *((_QWORD *)a4 + 5)
                                                          + 24)
                                              + 328LL * a2);
  else
    return (struct VIDMM_SEGMENT_GROUP_STATE *)(328 * v4 + 544 + v5 + 1560LL * a2);
}
