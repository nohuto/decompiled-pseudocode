/*
 * XREFs of VidMmCreateCrossAdapterAllocation @ 0x1C0024960
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAX_K@Z @ 0x1C00AA950 (-CreateCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAX_K@Z.c)
 */

int __fastcall VidMmCreateCrossAdapterAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_CROSSADAPTER_ALLOC **a2,
        void *a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::CreateCrossAdapterAllocation(a1, a2, a3, a4);
}
