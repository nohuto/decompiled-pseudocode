/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800140C0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x18001DCD8 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180029AB0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B3EC (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18002D790 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800328F4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003C7C0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180068040 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18008D4E0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BC560 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180199D8C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B1AB0 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801B31D0 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801B32A8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801B9788 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801B97E0 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B9810 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801BF9F4 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C1C00 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C27D0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureSpawner@CParticleEmitter@@AEAAJXZ @ 0x1801C58F8 (-EnsureSpawner@CParticleEmitter@@AEAAJXZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18007022C (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x180199AB0 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  char v3; // al
  unsigned int v4; // esi
  const struct D2D_SIZE_F *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v13; // rbx
  char v14; // bl
  __int64 v15; // rbx
  __int64 v16; // rbx
  CShape *v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  int ShapeDataWorker; // eax
  unsigned int v21; // ecx
  int TrimmedShapeData; // eax
  unsigned int v23; // ecx
  __int64 v24; // r15
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  struct CShape *v29; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v30[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v31; // [rsp+48h] [rbp-31h]
  int v32; // [rsp+50h] [rbp-29h]
  int v33; // [rsp+54h] [rbp-25h]
  __int64 v34; // [rsp+58h] [rbp-21h]
  __int128 v35; // [rsp+60h] [rbp-19h]
  int v36; // [rsp+70h] [rbp-9h]
  int v37; // [rsp+74h] [rbp-5h]
  int v38; // [rsp+78h] [rbp-1h]
  float v39; // [rsp+7Ch] [rbp+3h]
  int v40; // [rsp+80h] [rbp+7h]
  _DWORD v41[6]; // [rsp+90h] [rbp+17h] BYREF

  v3 = *((_BYTE *)this + 128);
  v4 = 0;
  if ( v3 )
    goto LABEL_2;
  v13 = *((_QWORD *)this + 2);
  if ( GetCurrentThreadId() == *(_DWORD *)(v13 + 560) )
  {
    v14 = *((_BYTE *)this + 32) & 1;
    if ( v14 )
    {
      ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 96));
      v4 = ShapeDataWorker;
      if ( ShapeDataWorker < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, ShapeDataWorker, 0xAAu);
        return v4;
      }
      *((_DWORD *)this + 8) &= ~1u;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( v14 || *((_BYTE *)this + 130) || (v15 = *((_QWORD *)this + 14)) == 0 )
      {
        TrimmedShapeData = CGeometry::GetTrimmedShapeData(
                             this,
                             *((const struct CShape **)this + 12),
                             (CGeometry *)((char *)this + 112));
        v4 = TrimmedShapeData;
        if ( TrimmedShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, TrimmedShapeData, 0xB2u);
          return v4;
        }
        v15 = *((_QWORD *)this + 14);
        *((_BYTE *)this + 130) = 0;
      }
      CShapePtr::Release(a3);
    }
    else
    {
      v15 = *((_QWORD *)this + 12);
      if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
        (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
      *(_QWORD *)a3 = 0LL;
      *((_BYTE *)a3 + 8) = 0;
    }
    *(_QWORD *)a3 = v15;
    *((_BYTE *)a3 + 8) = 0;
  }
  else
  {
    v3 = *((_BYTE *)this + 128);
    if ( v3 || (*((_BYTE *)this + 32) & 1) != 0 || (v16 = *((_QWORD *)this + 12)) == 0 )
    {
LABEL_2:
      v8 = 0LL;
      if ( v3 )
        v8 = a2;
      v9 = (*(__int64 (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this
                                                                                                 + 176LL))(
             this,
             v8,
             a3);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xFAu);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 192LL))(this) && *(_QWORD *)a3 )
      {
        (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, _DWORD *))(*(_QWORD *)this + 184LL))(
          this,
          v8,
          v41);
        v17 = *(CShape **)a3;
        v30[0] = v41[0];
        v30[1] = v41[1];
        v32 = v41[2];
        v33 = v41[3];
        v36 = v41[4];
        v35 = _xmm;
        v37 = v41[5];
        v39 = FLOAT_1_0;
        v40 = 0;
        v31 = 0LL;
        v34 = 0LL;
        v38 = 0;
        v18 = CShape::CopyShape(v17, (const struct CMILMatrix *)v30, &v29);
        v4 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x108u);
        }
        else
        {
          CShapePtr::Release(a3);
          *(_QWORD *)a3 = v29;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v4, 0xC6u);
      }
      else if ( *((_BYTE *)this + 129) )
      {
        v27 = CGeometry::GetTrimmedShapeData(this, *(const struct CShape **)a3, a3);
        v4 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xCAu);
      }
      return v4;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( *((_BYTE *)this + 130) || (v24 = *((_QWORD *)this + 14)) == 0 )
      {
        v25 = CGeometry::GetTrimmedShapeData(this, *((const struct CShape **)this + 12), a3);
        v4 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xD3u);
      }
      else
      {
        CShapePtr::Release(a3);
        *(_QWORD *)a3 = v24;
        *((_BYTE *)a3 + 8) = 0;
      }
    }
    else
    {
      if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
        (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
      *(_QWORD *)a3 = v16;
      *((_BYTE *)a3 + 8) = 0;
    }
  }
  return v4;
}
