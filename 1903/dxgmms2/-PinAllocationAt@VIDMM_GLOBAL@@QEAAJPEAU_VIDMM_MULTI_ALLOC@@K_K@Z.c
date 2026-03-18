/*
 * XREFs of ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@K_K@Z @ 0x1C00AE3DC
 * Callers:
 *     VidMmPinAllocationAt @ 0x1C0024AD0 (VidMmPinAllocationAt.c)
 * Callees:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z @ 0x1C0084618 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinAllocationAt(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2, int a3, __int64 a4)
{
  return VIDMM_GLOBAL::PinOneAllocation(this, a2, a3, a4);
}
