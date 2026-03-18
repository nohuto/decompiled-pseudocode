/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180163988
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180162558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800122B4 (--1-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180015340 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x18001DCD8 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180030128 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x180066AD0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18008DD64 (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800EE474 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180165BA0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801BF860 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1801BF998 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r15
  char v6; // r13
  char v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  const struct CMILMatrix *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  struct CGeometry *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v22; // rcx
  const struct CShape *v23; // r10
  int v24; // eax
  __int64 v25; // rcx
  const struct CMILMatrix *v26; // rax
  int v27; // xmm0_4
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  int v30; // xmm0_4
  __int64 *v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  bool v37; // [rsp+41h] [rbp-48h] BYREF
  char v38; // [rsp+42h] [rbp-47h]
  __int64 v39; // [rsp+48h] [rbp-41h] BYREF
  struct ID2D1Geometry *v40; // [rsp+50h] [rbp-39h] BYREF
  __int64 v41; // [rsp+58h] [rbp-31h] BYREF
  char v42; // [rsp+60h] [rbp-29h]
  __int64 v43[2]; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-11h]
  _OWORD v45[2]; // [rsp+80h] [rbp-9h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v38 = 0;
  if ( *((_QWORD *)a2 + 31) )
  {
    v39 = 0LL;
    CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v45);
    if ( LODWORD(v45[0]) )
    {
      v8 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v45, 1);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x8BEu);
        goto LABEL_33;
      }
      v38 = 1;
    }
    *(float *)&v40 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 816, &v40);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x8C3u);
      goto LABEL_33;
    }
    v7 = 1;
    if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
    {
      v13 = CDrawingContext::PushTransformInternal(this, 0LL, v12, 1, 1);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x8C9u);
        goto LABEL_33;
      }
      v5 = 1;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1) + 76) )
    {
      if ( v5 )
      {
        v15 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v39, this);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x8D2u);
LABEL_33:
          CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v39);
          goto LABEL_34;
        }
      }
    }
    v17 = *((_QWORD *)a2 + 27);
    v18 = *(struct CGeometry **)(v17 + 248);
    if ( !v18 )
      goto LABEL_25;
    v41 = 0LL;
    v42 = 0;
    v19 = CDrawingContext::ShapeDataFromGeometry((const struct D2D_SIZE_F *)(v17 + 132), v18, (struct CShapePtr *)&v41);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x8DAu);
    }
    else
    {
      if ( !v41 )
      {
LABEL_24:
        CShapePtr::Release((CShapePtr *)&v41);
LABEL_25:
        *((_QWORD *)this + 439) = a2;
        v34 = CPolygon::Draw(a2, this);
        v4 = v34;
        if ( v34 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x8F9u);
        goto LABEL_31;
      }
      v40 = 0LL;
      v37 = 1;
      v43[0] = 0LL;
      v43[1] = 0LL;
      v44 = 0LL;
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      v24 = CDrawingContext::D2DGeometryFromShape(v22, v23, TopByReference, &v40, &v37);
      v4 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x8E6u);
        wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)&v40);
        CShapePtr::Release((CShapePtr *)&v41);
        CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v39);
        v7 = 1;
        goto LABEL_34;
      }
      if ( v37 )
      {
        v31 = 0LL;
      }
      else
      {
        v26 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
        v27 = *(_DWORD *)v26;
        v28 = (__m128)*((unsigned int *)v26 + 13);
        DWORD1(v45[0]) = *((_DWORD *)v26 + 1);
        HIDWORD(v45[0]) = *((_DWORD *)v26 + 5);
        v29 = (__m128)*((unsigned int *)v26 + 12);
        LODWORD(v45[0]) = v27;
        v30 = *((_DWORD *)v26 + 4);
        v31 = v43;
        DWORD2(v45[0]) = v30;
        *(_OWORD *)v43 = v45[0];
        v44 = _mm_unpacklo_ps(v29, v28).m128_u64[0];
      }
      v32 = CDrawingContext::PushD2DLayer(
              this,
              (struct CVisual *)v17,
              0LL,
              v40,
              (struct D2D_MATRIX_3X2_F *)v31,
              1.0,
              0,
              0);
      v4 = v32;
      if ( v32 >= 0 )
      {
        v6 = 1;
        wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)&v40);
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x8F1u);
      wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)&v40);
    }
    CShapePtr::Release((CShapePtr *)&v41);
LABEL_31:
    CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v39);
    v7 = 1;
  }
LABEL_34:
  *((_QWORD *)this + 439) = 0LL;
  if ( v6 )
    CDrawingContext::PopLayer(this);
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v7 )
    CWatermarkStack<float,64,2,10>::Pop((_DWORD *)this + 816);
  if ( v38 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
