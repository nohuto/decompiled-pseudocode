/*
 * XREFs of ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00814CC
 * Callers:
 *     VidMmPinAllocation @ 0x1C0017A90 (VidMmPinAllocation.c)
 * Callees:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00814F8 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4)
{
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    a4->QuadPart = 0LL;
  return VIDMM_GLOBAL::PinOneAllocation(this, a2);
}
