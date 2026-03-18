/*
 * XREFs of ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00ACDE8
 * Callers:
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C00ACD9C (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00BA2E0 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00109D0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FD68 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00721E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        DXGFASTMUTEX **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  char v9; // r12
  SIZE_T v13; // rax
  DXGFASTMUTEX *v14; // rax
  struct _KTHREAD **v15; // rcx
  int v16; // edi
  struct _DXGKARG_BUILDPAGINGBUFFER v17; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v17);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v17);
    v17.Operation = DXGK_OPERATION_UNMAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v14 = a3[5];
      if ( v14 )
        v13 = *((_QWORD *)v14 + 2);
      else
        v13 = (SIZE_T)a3[6];
    }
    else
    {
      v13 = 0LL;
    }
    v17.UpdateContextAllocation.ContextAllocation = 0LL;
    v17.Fill.FillSize = v13;
    v17.MapApertureSegment.OffsetInPages = a6;
    v17.Transfer.Source.SegmentAddress.QuadPart = a5;
    v17.Fill.FillPattern = a4;
    v17.UnmapApertureSegment.DummyPage = a7;
    if ( a3 && a3[13] && (*(_DWORD *)a3[63] & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[40]);
      v15 = (struct _KTHREAD **)a3[40];
      v17.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3[13] + 5) - 32LL)
                                                                            + 24LL)
                                                                + 472LL);
      DXGFASTMUTEX::Release(v15);
    }
    v16 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v17);
    v9 |= VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
            (VIDMM_GLOBAL *)this,
            a2,
            (struct _VIDMM_GLOBAL_ALLOC *)a3,
            &v17,
            v16,
            a8,
            0LL);
  }
  while ( v16 == -1071775743 );
  if ( v9 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, a2);
}
