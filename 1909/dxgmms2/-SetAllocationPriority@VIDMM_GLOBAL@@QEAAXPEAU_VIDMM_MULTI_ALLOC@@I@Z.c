/*
 * XREFs of ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00AF3A8
 * Callers:
 *     VidMmSetAllocationPriority @ 0x1C0024C50 (VidMmSetAllocationPriority.c)
 * Callees:
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C00AF47C (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetAllocationPriority(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetOneAllocationPriority(this, a2, a3);
}
