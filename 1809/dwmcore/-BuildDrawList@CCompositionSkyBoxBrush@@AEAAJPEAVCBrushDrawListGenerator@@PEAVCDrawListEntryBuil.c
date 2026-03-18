/*
 * XREFs of ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4
 * Callers:
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180191100 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800289AC (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800289EC (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180028EF0 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800D8FC8 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180187778 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18018E598 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018E7DC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180190A38 (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180190B84 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x18022A354 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::BuildDrawList(
        CCompositionSkyBoxBrush *this,
        struct CBrushDrawListGenerator *a2,
        __int64 **a3)
{
  _DWORD *v3; // r14
  struct CRenderingEffect *v5; // rbx
  CCompositionCubeMap *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  LPVOID v15; // rax
  volatile signed __int32 *v16; // rax
  struct CMILMatrix *v17; // rdx
  __int64 v18; // rcx
  int CpuClip; // eax
  __int64 v20; // rcx
  bool v21; // zf
  CCompositionSkyBoxBrush *v22; // rcx
  int DummyRect; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct CDrawListPrimitive *v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // rcx
  __int128 v32; // [rsp+30h] [rbp-99h] BYREF
  char v33; // [rsp+40h] [rbp-89h]
  struct CDrawListPrimitive **v34; // [rsp+48h] [rbp-81h] BYREF
  struct CDrawListPrimitive *v35; // [rsp+50h] [rbp-79h] BYREF
  __int128 *v36; // [rsp+58h] [rbp-71h]
  char v37; // [rsp+64h] [rbp-65h]
  struct CRenderingEffect *v38; // [rsp+68h] [rbp-61h] BYREF
  __int128 v39; // [rsp+70h] [rbp-59h] BYREF
  __int64 v40; // [rsp+80h] [rbp-49h] BYREF
  char v41; // [rsp+88h] [rbp-41h]
  char v42; // [rsp+90h] [rbp-39h]
  _BYTE v43[64]; // [rsp+A0h] [rbp-29h] BYREF
  int v44; // [rsp+E0h] [rbp+17h]
  __int64 (__fastcall ***v45)(_QWORD, __int64); // [rsp+130h] [rbp+67h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, __int64); // [rsp+138h] [rbp+6Fh] BYREF
  struct ID3D11ShaderResourceView *v47; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = *(_DWORD **)a2;
  v47 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  CBrushDrawListGenerator::Reset(a2);
  *((_BYTE *)a2 + 76) = 0;
  *(_OWORD *)((char *)a2 + 20) = 0LL;
  v8 = (CCompositionCubeMap *)*((_QWORD *)this + 9);
  if ( !v8 )
  {
LABEL_22:
    v11 = 0;
    goto LABEL_23;
  }
  v33 = 0;
  v32 = 0LL;
  v9 = CCompositionCubeMap::GetOrCreateD3DCubeMap(
         v8,
         (struct ID2DContextOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)),
         &v47);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xEDu);
    goto LABEL_36;
  }
  CCompositionCubeMap::FlushToD3DCubeMap(
    *((CCompositionCubeMap **)this + 9),
    (struct ID2DContextOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)));
  v12 = *(_QWORD *)(32LL * *(unsigned int *)(*((_QWORD *)this + 9) + 112LL)
                  + *(_QWORD *)(*((_QWORD *)this + 9) + 80LL)
                  + 8);
  v13 = CDrawListBitmap::FromImageSource(
          (struct IImageSource **)&v32,
          (struct IImageSource *)((v12 + 64) & -(__int64)(v12 != 0)),
          (const struct CDrawingContext *)v3,
          0);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xF1u);
    goto LABEL_36;
  }
  if ( !(_QWORD)v32 )
  {
LABEL_36:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
LABEL_23:
    if ( v11 >= 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  LOWORD(v45) = 513;
  v15 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  if ( v15 )
  {
    BYTE2(v45) = 2;
    v16 = (volatile signed __int32 *)CCubeMapRenderingEffect::CCubeMapRenderingEffect(v15, &v32, &v45, v47);
  }
  else
  {
    v16 = 0LL;
  }
  Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v38, v16);
  v5 = v38;
  if ( v38 )
  {
    v40 = 0LL;
    v41 = 0;
    v42 = 0;
    v39 = 0LL;
    CpuClip = CDrawingContext::GetCpuClip((CDrawingContext *)v3, v17, (struct CCpuClip *)&v39);
    v11 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, CpuClip, 0x104u);
    }
    else
    {
      v44 = 0;
      CMatrixStack::Top((CMatrixStack *)(v3 + 120), (struct CMILMatrix *)v43);
      memset_0(&v34, 0, 0x20uLL);
      v21 = v3[63] == 0;
      LODWORD(v34) = 2;
      v37 = 1;
      HIDWORD(v35) = !v21;
      v36 = &v39;
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v43, (float *)&v34 + 1, (float *)&v35);
      CDrawListEntryBuilder::Begin(
        (CDrawListEntryBuilder *)a3,
        (const struct DrawListEntryBuilderSetupParams *)&v34,
        v5);
      DummyRect = CCompositionSkyBoxBrush::CreateDummyRect(v22, (struct CDrawListEntryBuilder *)a3);
      v11 = DummyRect;
      if ( DummyRect < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, DummyRect, 0x111u);
      }
      else
      {
        v25 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)a3);
        v11 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x112u);
        }
        else
        {
          v46 = 0LL;
          v34 = (struct CDrawListPrimitive **)&v46;
          v35 = 0LL;
          LOBYTE(v36) = 1;
          v11 = CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(this, a2, &v35);
          if ( (_BYTE)v36 )
          {
            v27 = (__int64)v34;
            v28 = *v34;
            *v34 = v35;
            if ( v28 )
              std::default_delete<CShape>::operator()(v27, (__int64 (__fastcall ***)(_QWORD, __int64))v28);
          }
          if ( v11 >= 0 )
          {
            CHWDrawListEntry::ReplacePrimitive(*a3[5], (__int64 *)&v45, (__int64 *)&v46, (__int64)&CMILMatrix::Identity);
            if ( v45 )
              std::default_delete<CShape>::operator()(v29, v45);
            if ( v46 )
              std::default_delete<CShape>::operator()(v29, v46);
            CShapePtr::Release((CShapePtr *)&v40);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32 + 1);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
            goto LABEL_22;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v11, 0x117u);
          if ( v46 )
            std::default_delete<CShape>::operator()(v31, v46);
        }
      }
    }
    CShapePtr::Release((CShapePtr *)&v40);
    goto LABEL_36;
  }
  v11 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x101u);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
LABEL_24:
  CBrushDrawListGenerator::Reset(a2);
LABEL_25:
  if ( v5 )
    CMILRefCountBase::Release(v5);
  return (unsigned int)v11;
}
