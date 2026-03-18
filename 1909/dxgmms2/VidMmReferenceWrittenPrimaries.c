/*
 * XREFs of VidMmReferenceWrittenPrimaries @ 0x1C0002AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C0073C40 (-VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REF.c)
 */

__int64 __fastcall VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct _VIDMM_PRIMARIES_REFERENCES *a6,
        struct VIDSCH_HW_QUEUE *a7,
        struct DXGCONTEXT **a8)
{
  return VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(a1, a2, a3, a4, a5, a6, a7, a8);
}
