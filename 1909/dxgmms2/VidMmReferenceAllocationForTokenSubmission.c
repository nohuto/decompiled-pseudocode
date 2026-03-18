/*
 * XREFs of VidMmReferenceAllocationForTokenSubmission @ 0x1C0016C00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0084534 (-ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALL.c)
 */

__int64 __fastcall VidMmReferenceAllocationForTokenSubmission(
        struct VIDMM_DEVICE *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_ALLOC **a3)
{
  return VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(a1, a1, a2, a3);
}
