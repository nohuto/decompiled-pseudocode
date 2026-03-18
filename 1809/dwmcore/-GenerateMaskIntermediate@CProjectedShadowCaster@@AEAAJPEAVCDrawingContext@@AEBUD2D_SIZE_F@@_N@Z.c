/*
 * XREFs of ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AE4D4 (-UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180030128 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x180066AD0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180165A60 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180166050 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x180166F9C (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x1801AC638 (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AD478 (-GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AD988 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CProjectedShadowCaster::GenerateMaskIntermediate(
        CProjectedShadowCaster *this,
        struct IRenderTarget **a2,
        struct D2D_SIZE_F *a3,
        char a4)
{
  char v6; // si
  char v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct IRenderTarget *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  struct CSpriteVisualContent *EffectiveMaskBrush; // r12
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int ShapeData; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct D2D_SIZE_F *v28; // r13
  int v29; // eax
  __int64 v30; // rcx
  CDrawingContext *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int WhiteColorIntermediate; // eax
  __int64 v35; // rcx
  _BYTE v37[8]; // [rsp+30h] [rbp-39h] BYREF
  struct CRenderTargetImageSource *v38; // [rsp+38h] [rbp-31h] BYREF
  struct IRenderTarget *v39; // [rsp+40h] [rbp-29h] BYREF
  __int64 v40; // [rsp+48h] [rbp-21h] BYREF
  const struct CShape *v41; // [rsp+50h] [rbp-19h] BYREF
  char v42; // [rsp+58h] [rbp-11h]
  struct D2D_SIZE_F *v43; // [rsp+60h] [rbp-9h]
  const char *v44; // [rsp+68h] [rbp-1h] BYREF
  int v45; // [rsp+70h] [rbp+7h]
  __int128 v46; // [rsp+78h] [rbp+Fh] BYREF

  v39 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v6 = 0;
  v46 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v43 = a3;
  v37[0] = 0;
  v9 = 0;
  v42 = 0;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v39);
  v45 = 24;
  v44 = "DWM ProjectedShadow Mask";
  v10 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&v44, a3, 0, &v39);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x21Fu);
    goto LABEL_29;
  }
  v13 = v39;
  v9 = 1;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v39 + 128LL))(v39, 1LL);
  (*(void (__fastcall **)(struct IRenderTarget *, _QWORD))(*(_QWORD *)v13 + 240LL))(v13, DisplayId::None);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v38);
  v14 = CRenderTargetImageSource::Create(v13, 0, &v38);
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x228u);
LABEL_33:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_34;
  }
  EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
  v17 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)a2,
          0LL,
          (const struct CMILMatrix *)&CMILMatrix::Identity,
          0,
          1);
  v12 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x22Cu);
    goto LABEL_33;
  }
  v19 = CDrawingContext::CDisableCPUClipScope::Enter(
          (CDrawingContext::CDisableCPUClipScope *)&v40,
          (struct CDrawingContext *)a2);
  v12 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x22Fu);
LABEL_32:
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
    goto LABEL_33;
  }
  if ( !a4 || (v21 = *((_QWORD *)this + 7)) == 0 || !*(_QWORD *)(v21 + 248) )
  {
LABEL_16:
    v28 = v43;
    v29 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct IRenderTarget **, struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)EffectiveMaskBrush + 160LL))(
            EffectiveMaskBrush,
            a2,
            v43,
            v37,
            &v46);
    v12 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x240u);
    }
    else
    {
      if ( v6 )
        CDrawingContext::RestoreStateToLastMark((CDrawingContext *)a2);
      v6 = 0;
      CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
      v9 = 0;
      v32 = CDrawingContext::PopLayer(v31);
      v12 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x24Du);
      }
      else
      {
        Microsoft::WRL::ComPtr<IImageSource>::operator=<CRenderTargetImageSource>((__int64 *)this + 16, (__int64 *)&v38);
        WhiteColorIntermediate = CProjectedShadowCaster::GenerateWhiteColorIntermediate(
                                   this,
                                   (struct CDrawingContext *)a2,
                                   v28);
        v12 = WhiteColorIntermediate;
        if ( WhiteColorIntermediate < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, WhiteColorIntermediate, 0x252u);
      }
    }
LABEL_29:
    if ( !v6 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v22 = CDrawingContext::MarkCurrentState((CDrawingContext *)a2);
  v12 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x235u);
    goto LABEL_32;
  }
  v6 = 1;
  ShapeData = CGeometry::GetShapeData(
                *(CGeometry **)(*((_QWORD *)this + 7) + 248LL),
                (const struct D2D_SIZE_F *)(*((_QWORD *)this + 7) + 132LL),
                (struct CShapePtr *)&v41);
  v12 = ShapeData;
  if ( ShapeData >= 0 )
  {
    v26 = CDrawingContext::PushClipShape((CDrawingContext *)a2, &v41);
    v12 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x23Au);
      goto LABEL_30;
    }
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, ShapeData, 0x238u);
LABEL_30:
  CDrawingContext::RestoreStateToLastMark((CDrawingContext *)a2);
LABEL_31:
  if ( v9 )
    goto LABEL_32;
LABEL_34:
  CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v40);
  CShapePtr::Release((CShapePtr *)&v41);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v38);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v39);
  return v12;
}
