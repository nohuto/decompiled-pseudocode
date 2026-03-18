/*
 * XREFs of VidMmDestroyContextAllocation @ 0x1C00147B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0081BFC (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 */

__int64 __fastcall VidMmDestroyContextAllocation(VIDMM_GLOBAL *a1, struct _VIDMM_CONTEXT_ALLOC *a2)
{
  return VIDMM_GLOBAL::DestroyContextAllocation(a1, a2);
}
