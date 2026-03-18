/*
 * XREFs of ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0010B70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C007851C (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 */

int __fastcall VidMmBeginCPUAccess(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        struct DXGPROCESSVIDMMLOCK *a7,
        void **a8)
{
  unsigned int v9; // [rsp+20h] [rbp-28h]
  struct _VIDMM_REGION *v10; // [rsp+28h] [rbp-20h]

  return VIDMM_GLOBAL::BeginCPUAccess(a1, a2, a3, a4, v9, v10, a7, a8);
}
