/*
 * XREFs of ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00AD130
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C00775F0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00601F4 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B4A10 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInAperture(
        VIDMM_WORKER_THREAD **this,
        struct _VIDMM_GLOBAL_ALLOC ***a2,
        GUID *a3,
        struct VIDMM_ALLOC **a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v8; // rbx

  v8 = **a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q((__int64)this, &EventPerformanceWarning, a3, 22);
  if ( *((_QWORD *)v8 + 17) )
  {
    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*this, v8);
    VIDMM_GLOBAL::EvictOneAllocation(this, (struct VIDMM_ALLOC *)a2, 0LL);
  }
  return VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)a2, 2, 0, a3, a4, 0, -1LL);
}
