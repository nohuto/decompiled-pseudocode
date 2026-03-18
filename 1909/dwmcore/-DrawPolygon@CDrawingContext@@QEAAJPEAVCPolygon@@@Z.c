/*
 * XREFs of ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016C44C
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016B6F4 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180004188 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B484 (--1-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180015A0C (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180038D08 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18004233C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800819F0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008B180 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AF1C0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x1800CDC24 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800CE2E0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800EB6A8 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016E9E0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801BD7E8 (-Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z @ 0x1801BD934 (-GetRenderOptions@CPolygon@@QEBAXPEAUMilRenderOptions@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawPolygon(CDrawingContext *this, struct CPolygon *a2)
{
  unsigned int v4; // ebx
  char v5; // r15
  char v6; // r13
  char v7; // r14
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  const struct CMILMatrix *v12; // rcx
  __int64 v13; // r9
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  struct CGeometry *v19; // rdx
  signed int v20; // eax
  __int64 v21; // rcx
  const struct CMILMatrix *TopByReference; // rax
  CDrawingContext *v23; // rcx
  const struct CShape *v24; // r10
  signed int v25; // eax
  __int64 v26; // rcx
  const struct CMILMatrix *v27; // rax
  int v28; // xmm0_4
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  int v31; // xmm0_4
  __int64 *v32; // rax
  signed int v33; // eax
  __int64 v34; // rcx
  signed int v35; // eax
  __int64 v36; // rcx
  bool v38; // [rsp+41h] [rbp-48h] BYREF
  char v39; // [rsp+42h] [rbp-47h]
  __int64 v40; // [rsp+48h] [rbp-41h] BYREF
  struct ID2D1Geometry *v41; // [rsp+50h] [rbp-39h] BYREF
  __int64 v42; // [rsp+58h] [rbp-31h] BYREF
  char v43; // [rsp+60h] [rbp-29h]
  __int64 v44[2]; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-11h]
  _OWORD v46[2]; // [rsp+80h] [rbp-9h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v39 = 0;
  if ( *((_QWORD *)a2 + 31) )
  {
    v40 = 0LL;
    CPolygon::GetRenderOptions(a2, (struct MilRenderOptions *)v46);
    if ( LODWORD(v46[0]) )
    {
      v8 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v46, 1);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x8FBu, 0LL);
        goto LABEL_34;
      }
      v39 = 1;
    }
    *(float *)&v41 = CDrawingContext::GetOpacity(this) * *((float *)a2 + 56);
    v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 816, &v41);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x900u, 0LL);
      goto LABEL_34;
    }
    v7 = 1;
    if ( !CMILMatrix::IsIdentity<0>((__int64)a2 + 144) )
    {
      LOBYTE(v13) = 1;
      v14 = CDrawingContext::PushTransformInternal(this, 0LL, v12, v13, 1);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x906u, 0LL);
        goto LABEL_34;
      }
      v5 = 1;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1) + 76) )
    {
      if ( v5 )
      {
        v16 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v40, this);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x90Fu, 0LL);
LABEL_34:
          CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v40);
          goto LABEL_35;
        }
      }
    }
    v18 = *((_QWORD *)a2 + 27);
    v19 = *(struct CGeometry **)(v18 + 248);
    if ( !v19 )
      goto LABEL_25;
    v42 = 0LL;
    v43 = 0;
    v20 = CDrawingContext::ShapeDataFromGeometry((const struct D2D_SIZE_F *)(v18 + 132), v19, (struct CShapePtr *)&v42);
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x917u, 0LL);
    }
    else
    {
      if ( !v42 )
      {
LABEL_24:
        CShapePtr::Release((CShapePtr *)&v42);
LABEL_25:
        *((_QWORD *)this + 439) = a2;
        v35 = CPolygon::Draw(a2, this);
        v4 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x936u, 0LL);
        goto LABEL_32;
      }
      v41 = 0LL;
      v38 = 1;
      v44[0] = 0LL;
      v44[1] = 0LL;
      v45 = 0LL;
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      v25 = CDrawingContext::D2DGeometryFromShape(v23, v24, TopByReference, &v41, &v38);
      v4 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x923u, 0LL);
      }
      else
      {
        if ( v38 )
        {
          v32 = 0LL;
        }
        else
        {
          v27 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
          v28 = *(_DWORD *)v27;
          v29 = (__m128)*((unsigned int *)v27 + 13);
          DWORD1(v46[0]) = *((_DWORD *)v27 + 1);
          HIDWORD(v46[0]) = *((_DWORD *)v27 + 5);
          v30 = (__m128)*((unsigned int *)v27 + 12);
          LODWORD(v46[0]) = v28;
          v31 = *((_DWORD *)v27 + 4);
          v32 = v44;
          DWORD2(v46[0]) = v31;
          *(_OWORD *)v44 = v46[0];
          v45 = _mm_unpacklo_ps(v30, v29).m128_u64[0];
        }
        v33 = CDrawingContext::PushD2DLayer(
                this,
                (struct CVisual *)v18,
                0LL,
                v41,
                (struct D2D_MATRIX_3X2_F *)v32,
                1.0,
                0,
                0);
        v4 = v33;
        if ( v33 >= 0 )
        {
          v6 = 1;
          wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)&v41);
          goto LABEL_24;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x92Eu, 0LL);
      }
      wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)&v41);
    }
    CShapePtr::Release((CShapePtr *)&v42);
LABEL_32:
    CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v40);
    v7 = 1;
  }
LABEL_35:
  *((_QWORD *)this + 439) = 0LL;
  if ( v6 )
    CDrawingContext::PopLayer(this);
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
  if ( v7 )
    CWatermarkStack<float,64,2,10>::Pop((_DWORD *)this + 816);
  if ( v39 )
    CDrawingContext::PopRenderOptionsInternal(this, 1);
  return v4;
}
