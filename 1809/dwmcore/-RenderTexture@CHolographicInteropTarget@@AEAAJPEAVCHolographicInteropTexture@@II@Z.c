/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180210F20 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x18004ED70 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x18008B034 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014B5F0 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x18020D5C8 (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z.c)
 *     ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x18020D9BC (-EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x18020DA40 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x18020E99C (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x18020FC20 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18021117C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderTexture(
        struct CComposition **this,
        struct CHolographicInteropTexture *a2,
        __int64 a3,
        unsigned int a4)
{
  struct CDrawingContext *DrawingContext; // rax
  enum DXGI_FORMAT v8; // r8d
  struct CD3DDeviceLevel1 *v9; // rdx
  CDrawingContext *v10; // r15
  char v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rdx
  const struct CDirtyRegion *v16; // r14
  struct IRenderTargetBitmap *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct IRenderTarget *v20; // rbx
  CComposition *v21; // rcx
  struct CStereoscopicContentManager *StereoscopicContentManager; // rax
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int *v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v33; // [rsp+28h] [rbp-E0h]
  struct IRenderTarget *v34; // [rsp+48h] [rbp-C0h] BYREF
  const struct CDirtyRegion *v35; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v36[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+98h] [rbp-70h]
  unsigned int v38[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v39; // [rsp+E8h] [rbp-20h]
  _BYTE v40[128]; // [rsp+F8h] [rbp-10h] BYREF
  struct CVisualTree *v41; // [rsp+188h] [rbp+80h]
  char v42; // [rsp+198h] [rbp+90h]

  v34 = 0LL;
  DrawingContext = CRenderTarget::GetDrawingContext(this);
  v8 = *((_DWORD *)this + 47);
  v9 = this[22];
  v10 = DrawingContext;
  v42 = 0;
  v11 = 0;
  v35 = 0LL;
  v12 = CHolographicInteropTexture::EnsureRenderBuffers(a2, v9, v8);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x15Bu);
  }
  else
  {
    v41 = (struct CVisualTree *)*((_QWORD *)a2 + 10);
    CHolographicInteropTexture::TryGetDirtyRegion(a2, &v35);
    v16 = v35;
    if ( (*((_BYTE *)a2 + 128) & 1) == 0 )
    {
      if ( v41 )
      {
        v17 = CHolographicInteropTexture::BeginFrame((RTL_SRWLOCK *)a2, v15, a4);
        Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v34, (__int64)v17);
        v20 = v34;
        if ( v34 )
        {
          if ( v16 && !CDirtyRegion::IsEmpty(v16) || *((_BYTE *)a2 + 132) )
          {
            v21 = this[2];
            v39 = 0;
            StereoscopicContentManager = CComposition::GetStereoscopicContentManager(v21, v18, v19);
            if ( StereoscopicContentManager )
            {
              v23 = CStereoscopicContentManager::CalculateViewTransformForVisualTree(
                      (__int64)StereoscopicContentManager,
                      (__int64)v40,
                      (__int64)v41,
                      a4,
                      *((_DWORD *)a2 + 30));
              v24 = *(_OWORD *)(v23 + 16);
              v36[0] = *(_OWORD *)v23;
              v25 = *(_OWORD *)(v23 + 32);
              v36[1] = v24;
              v26 = *(_OWORD *)(v23 + 48);
              LODWORD(v23) = *(_DWORD *)(v23 + 64);
              v36[2] = v25;
              v36[3] = v26;
              v37 = v23;
              CMILMatrix::Multiply(
                (const struct CMILMatrix *)v36,
                (struct CHolographicInteropTexture *)((char *)a2 + 160),
                (struct CMILMatrix *)v38);
              v27 = v38;
            }
            else
            {
              v27 = (unsigned int *)((char *)a2 + 160);
            }
            v28 = CDrawingContext::BeginFrame(v10, v20, (_OWORD *)this + 12, 1, (__int64)v27, 0LL, 0, 0LL);
            v14 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x18Bu);
            }
            else
            {
              v42 = 1;
              v30 = CHolographicInteropTarget::RenderDirtyRegion(
                      (CHolographicInteropTarget *)this,
                      a2,
                      v41,
                      v16,
                      v33,
                      a4,
                      v20,
                      v10);
              v14 = v30;
              if ( v30 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x19Fu);
              else
                v11 = *((_BYTE *)v10 + 6354) || *((_BYTE *)v10 + 6356);
            }
          }
          CHolographicInteropTexture::EndFrame((RTL_SRWLOCK *)a2, v18, a4, v11);
          if ( v42 )
            CDrawingContext::EndFrame(v10);
        }
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(const struct CDirtyRegion *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v34);
  return v14;
}
