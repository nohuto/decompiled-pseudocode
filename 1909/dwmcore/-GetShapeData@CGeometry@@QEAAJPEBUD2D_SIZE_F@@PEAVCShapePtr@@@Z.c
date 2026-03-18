/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0
 * Callers:
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180004188 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180004728 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800047C4 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800049E4 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180035D18 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x180061AC0 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007EC10 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180085890 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z @ 0x180089C20 (-GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C2450 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1800C3790 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800D04E0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801BD990 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801CDDC0 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D4C20 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB2D0 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F121C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801F3240 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801F945C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801F9534 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180217DE8 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180217E40 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180217E70 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802524C8 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800CDEFC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801C3C58 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  char v3; // al
  unsigned int v4; // r14d
  const struct D2D_SIZE_F *v8; // rbx
  signed int v9; // eax
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  CShape *v12; // rcx
  signed int v13; // eax
  __int64 v15; // rbx
  char v16; // bl
  __int64 v17; // rbx
  __int64 v18; // rbx
  signed int ShapeDataWorker; // eax
  __int64 v20; // rcx
  signed int TrimmedShapeData; // eax
  __int64 v22; // rcx
  __int64 v23; // r15
  signed int v24; // eax
  __int64 v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
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
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v13, 0x108u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, v4, 0xC6u, 0LL);
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
