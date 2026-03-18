/*
 * XREFs of ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00B03B0
 * Callers:
 *     VidMmUnpinAllocation @ 0x1C0024D50 (VidMmUnpinAllocation.c)
 * Callees:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0084468 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnpinAllocation(struct VIDMM_ALLOC **this, struct _VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL::UnpinOneAllocation(this, (__int64)a2, (const GUID *)3, 0);
}
