/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18001727C
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x1800132E8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x1800171C0 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 * Callees:
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18016C5F0 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3,
        bool *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  __int64 v6; // rdi
  char v7; // bl
  unsigned int v8; // eax
  COverlayContext *v9; // r10
  __int64 v10; // r11
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // al
  bool *v15; // r9

  v6 = *((_QWORD *)this + 1054);
  v7 = 0;
  v8 = 0;
  v9 = this;
  v10 = (*((_QWORD *)this + 1055) - v6) >> 8;
  if ( (_DWORD)v10 )
  {
    while ( 1 )
    {
      v12 = (unsigned __int64)v8 << 8;
      if ( *(const struct CVisual **)(v12 + v6 + 8) == a2 && *(struct ISwapChainContent **)(v12 + v6 + 16) == a3 )
        break;
      if ( ++v8 >= (unsigned int)v10 )
        return v7;
    }
    if ( v8 != -1 )
    {
      v13 = (int)v8;
      v7 = 1;
      if ( a4 )
      {
        v14 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane((COverlayContext::OverlayPlaneInfo *)(v6 + ((__int64)(int)v8 << 8)));
        *v15 = v14;
      }
      if ( a5 )
        *a5 = *(struct tagRECT *)((v13 << 8) + *((_QWORD *)v9 + 1054) + 76);
      if ( a6 )
        *a6 = *(struct tagRECT *)((v13 << 8) + *((_QWORD *)v9 + 1054) + 60);
    }
  }
  return v7;
}
