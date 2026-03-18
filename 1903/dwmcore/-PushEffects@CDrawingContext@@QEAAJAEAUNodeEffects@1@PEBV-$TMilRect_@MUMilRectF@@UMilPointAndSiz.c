/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18005AC60
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x18000414C (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180004818 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180014828 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800176BC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180059670 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18006E36C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180079BAC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800DC594 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18016CB0C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18016F9F4 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@XZ @ 0x18016FA40 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFO.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180170720 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x18017080C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x180170B8C (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        CDrawingContext *this,
        float *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  unsigned int v7; // edi
  double v11; // xmm0_8
  float v12; // xmm1_4
  float v13; // xmm4_4
  unsigned int v14; // r8d
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  __int64 v17; // r14
  struct CVisual *v18; // rax
  int ShapeData; // eax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  char v24; // al
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  CVisual *v26; // rcx
  struct _LIST_ENTRY *v27; // r10
  __int64 v28; // r8
  int v29; // eax
  unsigned int v30; // ecx
  char v31; // r14
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v34; // r11
  struct _LIST_ENTRY *Flink; // rcx
  struct CFilterEffect *v36; // rax
  int v37; // eax
  unsigned int v38; // ecx
  int updated; // eax
  unsigned int v40; // ecx
  struct CVisual *v41; // rdx
  int v42; // eax
  unsigned int v43; // ecx
  int TightBounds; // eax
  unsigned int v45; // ecx
  int v46; // edi
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // eax
  unsigned int v52; // ecx
  CVisual *v53; // rcx
  struct CFilterEffect *EffectInternal; // rax
  int v55; // eax
  unsigned int v56; // ecx
  int v57; // eax
  unsigned int v58; // ecx
  float v59; // xmm0_4
  float v60; // xmm0_4
  int v61; // eax
  unsigned int v62; // ecx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  struct D2D_RECT_F *v64; // rcx
  __int64 v65; // [rsp+40h] [rbp-A1h] BYREF
  void (__fastcall ***v66)(_QWORD, __int64); // [rsp+48h] [rbp-99h] BYREF
  struct CVisual *v67; // [rsp+50h] [rbp-91h]
  __int64 v68; // [rsp+58h] [rbp-89h] BYREF
  float v69[4]; // [rsp+60h] [rbp-81h] BYREF
  _OWORD v70[4]; // [rsp+70h] [rbp-71h] BYREF
  __int16 v71; // [rsp+B0h] [rbp-31h]
  struct D2D_RECT_F v72; // [rsp+C0h] [rbp-21h] BYREF
  char v73[16]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = 0;
  *a7 = 0;
  v11 = a2[2];
  v68 = a6;
  v12 = COERCE_DOUBLE(*(_QWORD *)&v11 & _xmm);
  if ( v12 < 0.0000011920929 || (v13 = a2[5], (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm) < 0.0000011920929) )
  {
    *a7 = 1;
    return v7;
  }
  if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 787) )
  {
    if ( !*((_BYTE *)a2 + 164)
      && !*((_BYTE *)a2 + 165)
      && !*((_BYTE *)a2 + 166)
      && !*((_BYTE *)a2 + 167)
      && !*((_BYTE *)a2 + 168)
      && !*((_DWORD *)a2 + 3)
      && !*((_DWORD *)a2 + 4)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm) < 0.0000011920929 )
    {
      v67 = *(struct CVisual **)a2;
      LODWORD(v66) = 6;
      v51 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, &v66);
      v7 = v51;
      if ( v51 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x123Cu, 0LL);
      return v7;
    }
    if ( g_DisplayManager )
    {
      v14 = *((_DWORD *)g_DisplayManager + 18);
      v15 = 0LL;
      if ( v14 )
      {
        while ( 1 )
        {
          v16 = *(_BYTE **)(*((_QWORD *)g_DisplayManager + 6) + 8 * v15);
          if ( v16[320] || v16[319] || v16[312] )
            break;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v14 )
            goto LABEL_12;
        }
        CVisual::ClearAllMoveTransformsInSubtree(*(struct CVisual **)a2);
      }
    }
LABEL_12:
    v17 = 0LL;
    LOBYTE(v72.right) = 0;
    *(_QWORD *)&v72.left = 0LL;
    if ( !*((_BYTE *)a2 + 164) )
    {
LABEL_26:
      if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1) + 76) )
      {
        v26 = *(CVisual **)a2;
        if ( *(_BYTE *)(*((_QWORD *)this + 757) + 32LL) )
        {
          v27 = (struct _LIST_ENTRY *)((char *)v26 + 328);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v26);
          if ( TreeDataListHead )
          {
            Flink = TreeDataListHead->Flink;
            if ( TreeDataListHead->Flink != TreeDataListHead )
            {
              while ( Flink[2].Flink != v34 )
              {
                Flink = Flink->Flink;
                if ( Flink == TreeDataListHead )
                  goto LABEL_29;
              }
              v27 = Flink - 14;
            }
          }
        }
LABEL_29:
        v28 = (__int64)v27[10].Flink;
      }
      else
      {
        v28 = (__int64)(a2 + 23);
      }
      v29 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
              this,
              (struct ID2D1Geometry **)&v72,
              v28,
              a3,
              (__int64)a2,
              a7);
      v7 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1257u, 0LL);
        goto LABEL_106;
      }
      if ( *a7 )
      {
LABEL_39:
        if ( LOBYTE(v72.right) && *(_QWORD *)&v72.left )
          (***(void (__fastcall ****)(_QWORD, __int64))&v72.left)(*(_QWORD *)&v72.left, 1LL);
        return v7;
      }
      v31 = 0;
      if ( *((_BYTE *)a2 + 165) )
      {
        CVisual::GetColorTransform(*(_QWORD *)a2);
        CDrawingContext::PushColorTransformLayer(this, *(struct CVisual **)a2);
        v31 = 1;
      }
      if ( *((_BYTE *)a2 + 166) )
      {
        v53 = *(CVisual **)a2;
        LOBYTE(v65) = 0;
        EffectInternal = CVisual::GetEffectInternal(v53);
        v55 = CDrawingContext::PushEffectLayer(
                (struct IRenderTarget **)this,
                *(struct CVisual **)a2,
                (__int64)a3,
                COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_0_0000011920929)),
                v68,
                EffectInternal,
                (char *)&v65);
        v7 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x1276u, 0LL);
          goto LABEL_106;
        }
        v31 = 1;
        *a7 |= v65;
      }
      if ( *((_BYTE *)a2 + 167) )
      {
        v36 = (struct CFilterEffect *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 224LL))(*(_QWORD *)a2);
        LOBYTE(v65) = 0;
        if ( v36 )
          v36 = *(struct CFilterEffect **)v36;
        v37 = CDrawingContext::PushEffectLayer(
                (struct IRenderTarget **)this,
                *(struct CVisual **)a2,
                (__int64)a3,
                COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_0_0000011920929)),
                v68,
                v36,
                (char *)&v65);
        v7 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x128Bu, 0LL);
          goto LABEL_106;
        }
        v31 = 1;
        *a7 |= v65;
      }
      if ( !*((_DWORD *)a2 + 4) )
      {
LABEL_37:
        if ( *((_BYTE *)a2 + 168) )
        {
          ColorSpace = CVisual::GetColorSpace(*(CVisual **)a2);
          CDrawingContext::PushColorSpaceLayer(this, *(const struct CVisual **)a2, ColorSpace);
        }
        else if ( !v31 )
        {
          goto LABEL_39;
        }
        CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)(a2 + 6));
        updated = CVisual::UpdateCpuClippingData(*(CVisual **)a2, *((const struct CVisualTree **)this + 757), 4u, 0);
        v7 = updated;
        if ( updated >= 0 )
          goto LABEL_39;
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, updated, 0x12B9u, 0LL);
        goto LABEL_106;
      }
      v57 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)&v66);
      v7 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x1294u, 0LL);
      }
      else
      {
        v70[0] = _xmm;
        v70[1] = _xmm;
        v70[2] = _xmm;
        v70[3] = _xmm;
        v71 = 32085;
        CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v70);
        CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v70, v69, (float *)&v68);
        if ( v69[0] <= 1.0 )
          v59 = 1.0 - v69[0];
        else
          v59 = v69[0] - 1.0;
        if ( v59 <= 0.0000099999997 )
        {
          v60 = *(float *)&v68 <= 1.0 ? 1.0 - *(float *)&v68 : *(float *)&v68 - 1.0;
          if ( v60 <= 0.0000099999997 )
            goto LABEL_37;
        }
        v61 = CDrawingContext::PushResampleLayer(
                this,
                *(_QWORD *)a2,
                *((unsigned int *)a2 + 4),
                &v66,
                LODWORD(v69[0]),
                v68);
        v7 = v61;
        if ( v61 >= 0 )
        {
          v31 = 1;
          goto LABEL_37;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x12A4u, 0LL);
      }
LABEL_106:
      v64 = &v72;
LABEL_109:
      CShapePtr::Release((CShapePtr *)v64);
      return v7;
    }
    v18 = *(struct CVisual **)a2;
    v66 = 0LL;
    LOBYTE(v67) = 0;
    ShapeData = CGeometry::GetShapeData(
                  *((CGeometry **)v18 + 31),
                  (const struct D2D_SIZE_F *)((char *)v18 + 132),
                  (struct CShapePtr *)&v66);
    v7 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, ShapeData, 0xC37u, 0LL);
    }
    else
    {
      v21 = (__int64)v66;
      v7 = -2003292412;
      if ( v66 )
      {
        v22 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), char *, _QWORD))(*v66)[4])(v66, v73, 0LL);
        v7 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x10Du, 0LL);
        v21 = (__int64)v66;
      }
      if ( (v7 & 0x80000000) == 0 )
      {
        v24 = (char)v67;
        v17 = v21;
        *(_QWORD *)&v72.left = v21;
        v25 = 0LL;
        v66 = 0LL;
        LOBYTE(v67) = 0;
        LOBYTE(v72.right) = v24;
LABEL_20:
        if ( v7 == -2003304438 )
          v7 = 0;
        if ( (_BYTE)v67 && v25 )
          (**v25)(v25, 1LL);
        if ( (v7 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v7, 0x1248u, 0LL);
          CShapePtr::Release((CShapePtr *)&v72);
          return v7;
        }
        if ( !v17 )
          *((_BYTE *)a2 + 164) = 0;
        goto LABEL_26;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v7, 0xC38u, 0LL);
    }
    v25 = v66;
    goto LABEL_20;
  }
  if ( *((_BYTE *)a2 + 164) )
  {
    v41 = *(struct CVisual **)a2;
    v66 = 0LL;
    LOBYTE(v67) = 0;
    v42 = CDrawingContext::ShapeDataFromGeometry(
            (const struct D2D_SIZE_F *)((char *)v41 + 132),
            *((struct CGeometry **)v41 + 31),
            (struct CShapePtr *)&v66);
    v7 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x12C2u, 0LL);
    }
    else
    {
      if ( !v66 )
        goto LABEL_74;
      TightBounds = CShapePtr::GetTightBounds((__int64 *)&v66);
      v46 = TightBounds;
      if ( TightBounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, TightBounds, 0x12CBu, 0LL);
      if ( v46 == -2003304438 )
        goto LABEL_77;
      if ( v46 < 0 )
      {
LABEL_74:
        CShapePtr::Release((CShapePtr *)&v66);
        goto LABEL_75;
      }
      if ( IsEmpty(&v72) )
      {
LABEL_77:
        *a7 = 1;
        goto LABEL_74;
      }
      v47 = CDrawingContext::PushGpuClipRectInternal(
              (__int64)this,
              *(_QWORD *)a2,
              &v72.left,
              *((_DWORD *)this + 63) != 0,
              0);
      v7 = v47;
      if ( v47 >= 0 )
      {
        CScopedClipStack::GetClipBoundsWorld((char *)this + 1008, &v72);
        if ( !IsEmpty(&v72) )
          goto LABEL_74;
        goto LABEL_77;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x12D9u, 0LL);
    }
    v64 = (struct D2D_RECT_F *)&v66;
    goto LABEL_109;
  }
LABEL_75:
  v67 = *(struct CVisual **)a2;
  LODWORD(v66) = 6;
  v49 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, &v66);
  v7 = v49;
  if ( v49 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x12EBu, 0LL);
  return v7;
}
