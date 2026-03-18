/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570
 * Callers:
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x18000414C (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800046EC (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180004788 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180015F60 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18005050C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18005AC60 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D110 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z @ 0x18005FBE0 (-GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18006DFA0 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800873F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800B5430 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BED68 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C27D0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1800C3A34 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801BF130 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801CF560 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D6350 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801ECA40 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F29AC (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801F4950 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801FAB4C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801FAC24 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1802194D8 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180219530 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180219560 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800CDE8C (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801C53F8 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  char v3; // al
  unsigned int v4; // r14d
  const struct D2D_SIZE_F *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  CShape *v12; // rcx
  int v13; // eax
  __int64 v15; // rbx
  char v16; // bl
  __int64 v17; // rbx
  __int64 v18; // rbx
  int ShapeDataWorker; // eax
  unsigned int v20; // ecx
  int TrimmedShapeData; // eax
  unsigned int v22; // ecx
  __int64 v23; // r15
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  struct CShape *v28; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h]
  int v31; // [rsp+50h] [rbp-29h]
  int v32; // [rsp+54h] [rbp-25h]
  __int64 v33; // [rsp+58h] [rbp-21h]
  __int128 v34; // [rsp+60h] [rbp-19h]
  int v35; // [rsp+70h] [rbp-9h]
  int v36; // [rsp+74h] [rbp-5h]
  int v37; // [rsp+78h] [rbp-1h]
  int v38; // [rsp+7Ch] [rbp+3h]
  int v39; // [rsp+80h] [rbp+7h]
  _DWORD v40[6]; // [rsp+90h] [rbp+17h] BYREF

  v3 = *((_BYTE *)this + 128);
  v4 = 0;
  if ( v3 )
    goto LABEL_2;
  v15 = *((_QWORD *)this + 2);
  if ( GetCurrentThreadId() == *(_DWORD *)(v15 + 576) )
  {
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      v16 = 1;
      ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 96));
      v4 = ShapeDataWorker;
      if ( ShapeDataWorker < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, ShapeDataWorker, 0xAAu, 0LL);
        return v4;
      }
      *((_DWORD *)this + 8) &= ~1u;
    }
    else
    {
      v16 = 0;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( v16 || *((_BYTE *)this + 130) || (v17 = *((_QWORD *)this + 14)) == 0 )
      {
        TrimmedShapeData = CGeometry::GetTrimmedShapeData(
                             this,
                             *((const struct CShape **)this + 12),
                             (CGeometry *)((char *)this + 112));
        v4 = TrimmedShapeData;
        if ( TrimmedShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, TrimmedShapeData, 0xB2u, 0LL);
          return v4;
        }
        v17 = *((_QWORD *)this + 14);
        *((_BYTE *)this + 130) = 0;
      }
      CShapePtr::Release(a3);
    }
    else
    {
      v17 = *((_QWORD *)this + 12);
      if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
        (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
    }
    *(_QWORD *)a3 = v17;
    *((_BYTE *)a3 + 8) = 0;
  }
  else
  {
    v3 = *((_BYTE *)this + 128);
    if ( v3 || (*((_BYTE *)this + 32) & 1) != 0 || (v18 = *((_QWORD *)this + 12)) == 0 )
    {
LABEL_2:
      v8 = 0LL;
      if ( v3 )
        v8 = a2;
      v9 = (*(__int64 (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this
                                                                                                 + 216LL))(
             this,
             v8,
             a3);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xFAu, 0LL);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 232LL))(this) && *(_QWORD *)a3 )
      {
        (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, _DWORD *))(*(_QWORD *)this + 224LL))(
          this,
          v8,
          v40);
        v12 = *(CShape **)a3;
        v29[0] = v40[0];
        v29[1] = v40[1];
        v31 = v40[2];
        v32 = v40[3];
        v35 = v40[4];
        v34 = _xmm;
        v36 = v40[5];
        v38 = (int)FLOAT_1_0;
        v39 = 0;
        v30 = 0LL;
        v33 = 0LL;
        v37 = 0;
        v13 = CShape::CopyShape(v12, (const struct CMILMatrix *)v29, &v28);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v13, 0x108u, 0LL);
        }
        else
        {
          if ( *((_BYTE *)a3 + 8) )
          {
            v11 = *(void (__fastcall ****)(_QWORD, __int64))a3;
            if ( *(_QWORD *)a3 )
              (**v11)(v11, 1LL);
          }
          *(_QWORD *)a3 = v28;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, v4, 0xC6u, 0LL);
      }
      else if ( *((_BYTE *)this + 129) )
      {
        v26 = CGeometry::GetTrimmedShapeData(this, *(const struct CShape **)a3, a3);
        v4 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xCAu, 0LL);
      }
      return v4;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( *((_BYTE *)this + 130) || (v23 = *((_QWORD *)this + 14)) == 0 )
      {
        v24 = CGeometry::GetTrimmedShapeData(this, *((const struct CShape **)this + 12), a3);
        v4 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xD3u, 0LL);
      }
      else
      {
        CShapePtr::Release(a3);
        *(_QWORD *)a3 = v23;
        *((_BYTE *)a3 + 8) = 0;
      }
    }
    else
    {
      if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
        (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
      *(_QWORD *)a3 = v18;
      *((_BYTE *)a3 + 8) = 0;
    }
  }
  return v4;
}
