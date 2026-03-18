/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180004188 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180004A74 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800131D8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x180015F8C (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18005CF68 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800616E0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007FADC (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800DD204 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18016B428 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18016E314 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@XZ @ 0x18016E360 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFO.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18016F040 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x18016F12C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18016F4AC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        CDrawingContext *this,
        float *a2,
        __int64 a3,
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
  int v26; // eax
  unsigned int v27; // ecx
  char v28; // r14
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v31; // r11
  struct _LIST_ENTRY *i; // rcx
  struct CFilterEffect *v33; // rax
  int v34; // eax
  unsigned int v35; // ecx
  int updated; // eax
  unsigned int v37; // ecx
  struct CVisual *v38; // rdx
  int v39; // eax
  unsigned int v40; // ecx
  int TightBounds; // eax
  unsigned int v42; // ecx
  int v43; // edi
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  CVisual *v50; // rcx
  struct CFilterEffect *EffectInternal; // rax
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  float v56; // xmm0_4
  float v57; // xmm0_4
  int v58; // eax
  unsigned int v59; // ecx
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  struct D2D_RECT_F *v61; // rcx
  __int64 v62; // [rsp+40h] [rbp-A1h] BYREF
  __int128 v63; // [rsp+48h] [rbp-99h] BYREF
  __int64 v64; // [rsp+58h] [rbp-89h] BYREF
  float v65[4]; // [rsp+60h] [rbp-81h] BYREF
  _OWORD v66[4]; // [rsp+70h] [rbp-71h] BYREF
  __int16 v67; // [rsp+B0h] [rbp-31h]
  struct D2D_RECT_F v68; // [rsp+C0h] [rbp-21h] BYREF
  char v69[16]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = 0;
  *a7 = 0;
  v11 = a2[2];
  v64 = a6;
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
      *((_QWORD *)&v63 + 1) = *(_QWORD *)a2;
      LODWORD(v63) = 6;
      v48 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
              (unsigned int *)this + 112,
              &v63);
      v7 = v48;
      if ( v48 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x123Cu, 0LL);
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
    LOBYTE(v68.right) = 0;
    *(_QWORD *)&v68.left = 0LL;
    if ( !*((_BYTE *)a2 + 164) )
    {
LABEL_26:
      if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1) + 76) )
      {
        if ( !*(_BYTE *)(*((_QWORD *)this + 757) + 32LL) )
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(*(CVisual **)a2);
          if ( TreeDataListHead )
          {
            for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
            {
              if ( i[2].Flink == v31 )
                break;
            }
          }
        }
      }
      v26 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, (CShapePtr *)&v68, (__int64)a2, (__int64)a7);
      v7 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1257u, 0LL);
        goto LABEL_104;
      }
      if ( *a7 )
      {
LABEL_37:
        if ( LOBYTE(v68.right) && *(_QWORD *)&v68.left )
          (***(void (__fastcall ****)(_QWORD, __int64))&v68.left)(*(_QWORD *)&v68.left, 1LL);
        return v7;
      }
      v28 = 0;
      if ( *((_BYTE *)a2 + 165) )
      {
        CVisual::GetColorTransform(*(_QWORD *)a2);
        CDrawingContext::PushColorTransformLayer(this, *(struct CVisual **)a2);
        v28 = 1;
      }
      if ( *((_BYTE *)a2 + 166) )
      {
        v50 = *(CVisual **)a2;
        LOBYTE(v62) = 0;
        EffectInternal = CVisual::GetEffectInternal(v50);
        v52 = CDrawingContext::PushEffectLayer(
                (struct IRenderTarget **)this,
                *(struct CVisual **)a2,
                a3,
                COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_0_0000011920929)),
                v64,
                EffectInternal,
                (char *)&v62);
        v7 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x1276u, 0LL);
          goto LABEL_104;
        }
        v28 = 1;
        *a7 |= v62;
      }
      if ( *((_BYTE *)a2 + 167) )
      {
        v33 = (struct CFilterEffect *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 224LL))(*(_QWORD *)a2);
        LOBYTE(v62) = 0;
        if ( v33 )
          v33 = *(struct CFilterEffect **)v33;
        v34 = CDrawingContext::PushEffectLayer(
                (struct IRenderTarget **)this,
                *(struct CVisual **)a2,
                a3,
                COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_0_0000011920929)),
                v64,
                v33,
                (char *)&v62);
        v7 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x128Bu, 0LL);
          goto LABEL_104;
        }
        v28 = 1;
        *a7 |= v62;
      }
      if ( !*((_DWORD *)a2 + 4) )
      {
LABEL_35:
        if ( *((_BYTE *)a2 + 168) )
        {
          ColorSpace = CVisual::GetColorSpace(*(CVisual **)a2);
          CDrawingContext::PushColorSpaceLayer(this, *(const struct CVisual **)a2, ColorSpace);
        }
        else if ( !v28 )
        {
          goto LABEL_37;
        }
        CDrawingContext::GetWorldTransform(this, (struct CMILMatrix *)(a2 + 6));
        updated = CVisual::UpdateCpuClippingData(*(CVisual **)a2, *((const struct CVisualTree **)this + 757), 4u, 0);
        v7 = updated;
        if ( updated >= 0 )
          goto LABEL_37;
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, updated, 0x12B9u, 0LL);
        goto LABEL_104;
      }
      v54 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)&v63);
      v7 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x1294u, 0LL);
      }
      else
      {
        v66[0] = _xmm;
        v66[1] = _xmm;
        v66[2] = _xmm;
        v66[3] = _xmm;
        v67 = 32085;
        CDrawingContext::GetWorldTransform(this, (struct CMILMatrix *)v66);
        CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v66, v65, (float *)&v64);
        if ( v65[0] <= 1.0 )
          v56 = 1.0 - v65[0];
        else
          v56 = v65[0] - 1.0;
        if ( v56 <= 0.0000099999997 )
        {
          v57 = *(float *)&v64 <= 1.0 ? 1.0 - *(float *)&v64 : *(float *)&v64 - 1.0;
          if ( v57 <= 0.0000099999997 )
            goto LABEL_35;
        }
        v58 = CDrawingContext::PushResampleLayer(
                this,
                *(_QWORD *)a2,
                *((unsigned int *)a2 + 4),
                &v63,
                LODWORD(v65[0]),
                v64);
        v7 = v58;
        if ( v58 >= 0 )
        {
          v28 = 1;
          goto LABEL_35;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x12A4u, 0LL);
      }
LABEL_104:
      v61 = &v68;
LABEL_107:
      CShapePtr::Release((CShapePtr *)v61);
      return v7;
    }
    v18 = *(struct CVisual **)a2;
    *(_QWORD *)&v63 = 0LL;
    BYTE8(v63) = 0;
    ShapeData = CGeometry::GetShapeData(
                  *((CGeometry **)v18 + 31),
                  (const struct D2D_SIZE_F *)((char *)v18 + 132),
                  (struct CShapePtr *)&v63);
    v7 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, ShapeData, 0xC37u, 0LL);
    }
    else
    {
      v21 = v63;
      v7 = -2003292412;
      if ( (_QWORD)v63 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(*(_QWORD *)v63 + 32LL))(v63, v69, 0LL);
        v7 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x10Du, 0LL);
        v21 = v63;
      }
      if ( (v7 & 0x80000000) == 0 )
      {
        v24 = BYTE8(v63);
        v17 = v21;
        *(_QWORD *)&v68.left = v21;
        v25 = 0LL;
        *(_QWORD *)&v63 = 0LL;
        BYTE8(v63) = 0;
        LOBYTE(v68.right) = v24;
LABEL_20:
        if ( v7 == -2003304438 )
          v7 = 0;
        if ( BYTE8(v63) && v25 )
          (**v25)(v25, 1LL);
        if ( (v7 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v7, 0x1248u, 0LL);
          CShapePtr::Release((CShapePtr *)&v68);
          return v7;
        }
        if ( !v17 )
          *((_BYTE *)a2 + 164) = 0;
        goto LABEL_26;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v7, 0xC38u, 0LL);
    }
    v25 = (void (__fastcall ***)(_QWORD, __int64))v63;
    goto LABEL_20;
  }
  if ( *((_BYTE *)a2 + 164) )
  {
    v38 = *(struct CVisual **)a2;
    *(_QWORD *)&v63 = 0LL;
    BYTE8(v63) = 0;
    v39 = CDrawingContext::ShapeDataFromGeometry(
            (const struct D2D_SIZE_F *)((char *)v38 + 132),
            *((struct CGeometry **)v38 + 31),
            (struct CShapePtr *)&v63);
    v7 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x12C2u, 0LL);
    }
    else
    {
      if ( !(_QWORD)v63 )
        goto LABEL_72;
      TightBounds = CShapePtr::GetTightBounds((__int64 *)&v63);
      v43 = TightBounds;
      if ( TightBounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, TightBounds, 0x12CBu, 0LL);
      if ( v43 == -2003304438 )
        goto LABEL_75;
      if ( v43 < 0 )
      {
LABEL_72:
        CShapePtr::Release((CShapePtr *)&v63);
        goto LABEL_73;
      }
      if ( IsEmpty(&v68) )
      {
LABEL_75:
        *a7 = 1;
        goto LABEL_72;
      }
      v44 = CDrawingContext::PushGpuClipRectInternal(
              (_DWORD)this,
              *(_QWORD *)a2,
              (unsigned int)&v68,
              *((_DWORD *)this + 63) != 0,
              0);
      v7 = v44;
      if ( v44 >= 0 )
      {
        CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)&v68);
        if ( !IsEmpty(&v68) )
          goto LABEL_72;
        goto LABEL_75;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x12D9u, 0LL);
    }
    v61 = (struct D2D_RECT_F *)&v63;
    goto LABEL_107;
  }
LABEL_73:
  *((_QWORD *)&v63 + 1) = *(_QWORD *)a2;
  LODWORD(v63) = 6;
  v46 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 112, &v63);
  v7 = v46;
  if ( v46 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x12EBu, 0LL);
  return v7;
}
