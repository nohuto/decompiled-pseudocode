/*
 * XREFs of ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00AD36C
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00AED4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00109D0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FD68 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00721E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateContextAllocation(
        ADAPTER_RENDER **this,
        D3DGPU_VIRTUAL_ADDRESS a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        UINT a5)
{
  unsigned int v5; // ebx
  int i; // esi
  ADAPTER_RENDER *v11; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER v12; // [rsp+40h] [rbp-158h] BYREF

  v5 = 0;
  for ( i = -1071775743; v5 < *((_DWORD *)this + 1748); ++v5 )
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v5, a3, &v12);
    while ( i == -1071775743 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v5, 0LL, &v12);
      v11 = this[2];
      v12.Operation = DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION;
      v12.UpdateContextAllocation.ContextAllocation = a2;
      v12.Fill.FillSize = (SIZE_T)a3;
      v12.Transfer.TransferSize = a4;
      v12.Transfer.Source.SegmentId = a5;
      i = ADAPTER_RENDER::DdiBuildPagingBuffer(v11, &v12);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v5, 0LL, &v12, i, 0, 0LL);
    }
  }
}
