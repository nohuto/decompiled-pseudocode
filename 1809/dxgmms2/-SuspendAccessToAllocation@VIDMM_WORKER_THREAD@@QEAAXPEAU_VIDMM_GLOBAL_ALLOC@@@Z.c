/*
 * XREFs of ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1968
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C007C4D0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00A9D10 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00BB3B4 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0076CC0 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B03D8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendAccessToAllocation(VIDMM_GLOBAL **this, DXGFASTMUTEX **a2)
{
  struct _VIDMM_GLOBAL_ALLOC *i; // rbx
  VIDMM_DEVICE **j; // rdi

  DXGFASTMUTEX::Acquire(a2[40]);
  for ( i = a2[37]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 37); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    for ( j = (VIDMM_DEVICE **)*((_QWORD *)i - 2); j != (VIDMM_DEVICE **)((char *)i - 16); j = (VIDMM_DEVICE **)*j )
    {
      if ( (*((_DWORD *)j - 3) & 3) == 2 )
      {
        if ( !*((_QWORD *)*(j - 4) + 22) )
        {
          DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
          VIDMM_DEVICE::PartiallySuspend((VIDMM_GLOBAL **)*(j - 4));
          DXGFASTMUTEX::Acquire(a2[40]);
        }
        VIDMM_GLOBAL::FaultOneAllocation(*this, j - 5);
      }
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
}
