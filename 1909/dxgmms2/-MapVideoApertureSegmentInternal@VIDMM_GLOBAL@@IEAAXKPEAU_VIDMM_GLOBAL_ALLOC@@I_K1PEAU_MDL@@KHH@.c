/*
 * XREFs of ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0084DC0
 * Callers:
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C0084D5C (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00BCE70 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002868 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B998 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005BD2C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005BEE8 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 */

void __fastcall VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        DXGFASTMUTEX **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        struct _MDL *a7,
        unsigned int a8,
        char a9,
        int a10)
{
  struct _VIDMM_GLOBAL_ALLOC *v14; // r8
  DXGFASTMUTEX *v15; // rax
  SIZE_T v16; // rax
  struct _KTHREAD **v17; // rcx
  int v18; // ebx
  struct _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v19, 0, sizeof(v19));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, v14, &v19);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v19);
    v19.Operation = DXGK_OPERATION_MAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v15 = a3[5];
      if ( v15 )
        v16 = *((_QWORD *)v15 + 2);
      else
        v16 = (SIZE_T)a3[6];
    }
    else
    {
      v16 = 0LL;
    }
    v19.UpdateContextAllocation.ContextAllocation = 0LL;
    v19.Fill.FillSize = v16;
    v19.MapApertureSegment.OffsetInPages = a6;
    v19.Transfer.Source.SegmentAddress.QuadPart = a5;
    v19.Fill.FillPattern = a4;
    v19.UnmapApertureSegment.DummyPage.QuadPart = (LONGLONG)a7;
    v19.Transfer.Destination.SegmentAddress.QuadPart = a9 & 1 | (unsigned __int64)(v19.Transfer.Destination.SegmentAddress.LowPart & 0xFFFFFFFE);
    if ( a3 && a3[13] && (*(_DWORD *)a3[63] & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[40]);
      v17 = (struct _KTHREAD **)a3[40];
      v19.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3[13] + 5) - 32LL)
                                                                            + 24LL)
                                                                + 472LL);
      DXGFASTMUTEX::Release(v17);
    }
    v18 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v19);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      a2,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      &v19,
      v18,
      a10,
      0LL);
  }
  while ( v18 == -1071775743 );
}
