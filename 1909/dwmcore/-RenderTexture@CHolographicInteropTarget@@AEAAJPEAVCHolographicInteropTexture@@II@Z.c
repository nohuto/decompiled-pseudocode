/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180244270 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800120C8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800259E8 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180058DE4 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180175FE4 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x180241B70 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802444CC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x180245218 (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z.c)
 *     ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x180245578 (-EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1802455F0 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x18024651C (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
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
  bool v11; // r12
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // esi
  unsigned int v15; // edx
  const struct CDirtyRegion *v16; // r14
  struct IRenderTargetBitmap *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct IRenderTarget *v20; // rbx
  CComposition *v21; // rcx
  struct IStereoscopicContentManager *StereoscopicContentManager; // rax
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int *v27; // rax
  signed int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  struct IRenderTargetBitmap *v33; // [rsp+48h] [rbp-C0h] BYREF
  const struct CDirtyRegion *v34; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+98h] [rbp-70h]
  unsigned int v37[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+E8h] [rbp-20h]
  _BYTE v39[128]; // [rsp+F8h] [rbp-10h] BYREF
  struct CVisualTree *v40; // [rsp+188h] [rbp+80h]
  char v41; // [rsp+198h] [rbp+90h]

  v33 = 0LL;
  DrawingContext = CRenderTarget::GetDrawingContext(this);
  v8 = *((_DWORD *)this + 47);
  v9 = this[22];
  v10 = DrawingContext;
  v41 = 0;
  v11 = 0;
  v34 = 0LL;
  v12 = CHolographicInteropTexture::EnsureRenderBuffers(a2, v9, v8);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x157u, 0LL);
  }
  else
  {
    v40 = (struct CVisualTree *)*((_QWORD *)a2 + 10);
    CHolographicInteropTexture::TryGetDirtyRegion(a2, &v34);
    v16 = v34;
    if ( (*((_BYTE *)a2 + 128) & 1) == 0 )
    {
      if ( v40 )
      {
        v17 = CHolographicInteropTexture::BeginFrame(a2, v15, a4);
        Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((__int64 *)&v33, (__int64)v17);
        v20 = v33;
        if ( v33 )
        {
          if ( v16 && !CDirtyRegion::IsEmpty(v16) || *((_BYTE *)a2 + 132) )
          {
            v21 = this[2];
            v38 = 0;
            StereoscopicContentManager = CComposition::GetStereoscopicContentManager(v21, v18, v19);
            if ( StereoscopicContentManager )
            {
              v23 = CStereoscopicContentManager::CalculateViewTransformForVisualTree(
                      (__int64)StereoscopicContentManager,
                      (__int64)v39,
                      (__int64)v40,
                      a4,
                      *((_DWORD *)a2 + 30));
              v24 = *(_OWORD *)(v23 + 16);
              v35[0] = *(_OWORD *)v23;
              v25 = *(_OWORD *)(v23 + 32);
              v35[1] = v24;
              v26 = *(_OWORD *)(v23 + 48);
              LODWORD(v23) = *(_DWORD *)(v23 + 64);
              v35[2] = v25;
              v35[3] = v26;
              v36 = v23;
              CMILMatrix::Multiply(
                (const struct CMILMatrix *)v35,
                (struct CHolographicInteropTexture *)((char *)a2 + 160),
                (struct CMILMatrix *)v37);
              v27 = v37;
            }
            else
            {
              v27 = (unsigned int *)((char *)a2 + 160);
            }
            v28 = CDrawingContext::BeginFrame(v10, v20, (_OWORD *)this + 12, 1, (__int64)v27, 0LL, 0, 0LL);
            v14 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x187u, 0LL);
            }
            else
            {
              v41 = 1;
              v14 = CHolographicInteropTarget::RenderDirtyRegion(
                      (CHolographicInteropTarget *)this,
                      a2,
                      v40,
                      v16,
                      v32,
                      a4,
                      v20,
                      v10);
              if ( v14 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v14, 0x19Bu, 0LL);
              else
                v11 = *((_BYTE *)v10 + 6354) || *((_BYTE *)v10 + 6356);
            }
          }
          CHolographicInteropTexture::EndFrame(a2, v18, a4, v11);
          if ( v41 )
            CDrawingContext::EndFrame(v10);
        }
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(const struct CDirtyRegion *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
  return (unsigned int)v14;
}
