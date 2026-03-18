/*
 * XREFs of VidMmBeginCPUAccess @ 0x1C0001740
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0061074 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 */

int __fastcall VidMmBeginCPUAccess(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        void **a7)
{
  unsigned int v8; // [rsp+20h] [rbp-28h]
  struct _VIDMM_REGION *v9; // [rsp+28h] [rbp-20h]

  return VIDMM_GLOBAL::BeginCPUAccess(a1, a2, a3, a4, v8, v9, a7);
}
