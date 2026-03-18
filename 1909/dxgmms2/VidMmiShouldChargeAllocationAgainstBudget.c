/*
 * XREFs of VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0063AA4
 * Callers:
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006345C (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0063700 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0085A50 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmiShouldChargeAllocationAgainstBudget(__int64 **a1)
{
  __int64 v1; // r8

  v1 = **a1;
  return (*(_DWORD *)(v1 + 76) & 0x40) == 0 || *(_QWORD *)(a1[1][1] + 264) == **(_QWORD **)(v1 + 488);
}
