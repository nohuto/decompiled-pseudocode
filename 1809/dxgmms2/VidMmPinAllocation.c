/*
 * XREFs of VidMmPinAllocation @ 0x1C0017A90
 * Callers:
 *     <none>
 * Callees:
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00814CC (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VidMmPinAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4)
{
  return VIDMM_GLOBAL::PinAllocation(a1, a2, a3, a4);
}
