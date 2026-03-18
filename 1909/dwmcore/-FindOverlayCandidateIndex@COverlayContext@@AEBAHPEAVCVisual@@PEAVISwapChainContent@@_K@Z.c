/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180184AC8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800816B4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800E777C (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x180184E80 (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r8

  v4 = -1;
  v5 = 0LL;
  if ( a3 )
    v5 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a3 + 208LL))(a3);
  v9 = *((_QWORD *)this + 24);
  v10 = 0;
  v11 = (*((_QWORD *)this + 25) - v9) >> 8;
  if ( (_DWORD)v11 )
  {
    while ( a2 && *(struct CVisual **)(((unsigned __int64)v10 << 8) + v9 + 8) != a2
         || v5 && *(_QWORD *)(((unsigned __int64)v10 << 8) + v9 + 24) != v5
         || a4 && *(_QWORD *)(((unsigned __int64)v10 << 8) + v9 + 32) != a4 )
    {
      if ( ++v10 >= (unsigned int)v11 )
        return v4;
    }
    return v10;
  }
  return v4;
}
