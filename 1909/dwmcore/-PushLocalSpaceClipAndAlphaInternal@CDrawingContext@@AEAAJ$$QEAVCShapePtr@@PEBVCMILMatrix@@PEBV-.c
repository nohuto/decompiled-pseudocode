/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800616E0
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18016EDD4 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x18016EF68 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180004798 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180015A0C (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180038D08 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18003FBC4 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18005CF68 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x180061DA8 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800819F0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x18008D2C0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180178F28 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        struct ID2D1Geometry **a2,
        int a3,
        struct D2D_RECT_F *a4,
        __int64 a5,
        _BYTE *a6)
{
  int v6; // ebx
  _BYTE *v7; // r15
  const struct CShape *v8; // r14
  struct D2D_RECT_F *v9; // r13
  const struct CVisual *v13; // r15
  BOOL v14; // r8d
  int v15; // eax
  unsigned int v16; // ecx
  bool v17; // r13
  unsigned int *v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // r15d
  int v24; // eax
  float v25; // xmm2_4
  float v26; // xmm3_4
  int v28; // eax
  float v29; // xmm2_4
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  bool v37; // zf
  const struct CVisual *v38; // rdx
  float v39; // xmm2_4
  int v40; // eax
  unsigned int v41; // ecx
  float v42; // xmm6_4
  CDrawingContext *v43; // rcx
  int v44; // eax
  unsigned int v45; // ecx
  __int64 *v46; // rcx
  __m128 v47; // xmm4
  __m128 v48; // xmm4
  __m128 v49; // xmm4
  int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // ecx
  unsigned __int64 v55; // rax
  void *v56; // rbx
  void *v57; // rbx
  HANDLE ProcessHeap; // rax
  char v59; // al
  int v60; // eax
  unsigned int v61; // ecx
  bool v62; // [rsp+40h] [rbp-69h] BYREF
  bool v63; // [rsp+41h] [rbp-68h] BYREF
  char v64; // [rsp+42h] [rbp-67h]
  struct ID2D1Geometry *v65; // [rsp+48h] [rbp-61h] BYREF
  char v66[8]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE *v67; // [rsp+58h] [rbp-51h]
  void *lpMem; // [rsp+60h] [rbp-49h] BYREF
  struct D2D_RECT_F *v69; // [rsp+68h] [rbp-41h]
  __int64 v70[2]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-29h]
  __int64 v72; // [rsp+88h] [rbp-21h] BYREF
  float v73; // [rsp+90h] [rbp-19h]
  float v74; // [rsp+94h] [rbp-15h]

  v6 = 0;
  v7 = a6;
  v8 = 0LL;
  v9 = a4;
  v69 = a4;
  v67 = a6;
  if ( !*(_BYTE *)(a5 + 164) )
    goto LABEL_18;
  v8 = *a2;
  v13 = *(const struct CVisual **)a5;
  v14 = *((_DWORD *)this + 63) != 0;
  v65 = *a2;
  v64 = 0;
  v62 = 0;
  v15 = CScopedClipStack::PushCpuOrGpuClipToScope((int)this + 1008, (_DWORD)a2, v14, a3, (__int64)&v63, (__int64)v66);
  v17 = v63;
  v6 = v15;
  if ( v15 >= 0 )
  {
    v18 = (unsigned int *)((char *)this + 448);
    v70[1] = (__int64)v13;
    if ( !v66[0] )
    {
      v64 = 1;
      LODWORD(v70[0]) = 2;
      v28 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
              (unsigned int *)this + 112,
              v70);
      v6 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v28, 0x10ECu, 0LL);
      }
      else if ( v17 )
      {
        *((_BYTE *)this + 6346) = 1;
      }
      goto LABEL_10;
    }
    v19 = *((unsigned int *)this + 113);
    v20 = *v18;
    v62 = 1;
    LODWORD(v70[0]) = 1;
    lpMem = 0LL;
    if ( v20 != (_DWORD)v19 )
      goto LABEL_5;
    v52 = 2 * v19;
    if ( (unsigned __int64)(2 * v19) > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      v23 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_57;
    }
    if ( (unsigned int)v52 <= 0x40 )
      v52 = 64LL;
    v72 = v52;
    v53 = HrMalloc(0x10uLL, (unsigned int)v52, &lpMem);
    v23 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x53u, 0LL);
    }
    else
    {
      v55 = 16LL * *v18;
      if ( v55 <= 0xFFFFFFFF )
      {
        v56 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 58), (unsigned int)v55);
        operator delete(*((void **)this + 58));
        *((_DWORD *)this + 113) = v72;
        v20 = *v18;
        *((_QWORD *)this + 58) = v56;
LABEL_5:
        *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v20) = *(_OWORD *)v70;
        v21 = *((_DWORD *)this + 118);
        v22 = *v18 + 1;
        *v18 = v22;
        if ( v21 <= v22 )
          v21 = v22;
        v23 = 0;
        *((_DWORD *)this + 118) = v21;
        goto LABEL_8;
      }
      v23 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v57 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v57);
    }
LABEL_8:
    v6 = v23;
    if ( v23 >= 0 )
    {
      *((_BYTE *)this + 6345) = 1;
LABEL_10:
      v8 = v65;
      goto LABEL_11;
    }
LABEL_57:
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v23, 0x10E1u, 0LL);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x10D8u, 0LL);
LABEL_11:
  if ( v6 >= 0 )
  {
    CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)&v72);
    if ( v73 <= *(float *)&v72 || v74 <= *((float *)&v72 + 1) )
    {
      *v67 = 1;
      return (unsigned int)v6;
    }
    if ( v17 )
      *(_BYTE *)(a5 + 164) = 0;
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
    {
      if ( CShapePtr::IsAxisAlignedRectangle(a2) )
        *(_DWORD *)(a5 + 160) |= 1u;
      v59 = CMILMatrix::Is2DAxisAlignedPreserving<1>(a5 + 92);
      v7 = v67;
      v9 = v69;
      if ( v59 )
        *(_DWORD *)(a5 + 160) |= 4u;
    }
    else
    {
      v7 = v67;
      v9 = v69;
    }
LABEL_18:
    if ( !*(_BYTE *)(a5 + 164) )
    {
      v24 = *(_DWORD *)(a5 + 12);
      if ( v24 != 2 )
      {
        v25 = *(float *)(a5 + 20);
        if ( v24 == 1 )
        {
          v29 = v25 * *(float *)(a5 + 8);
          v30 = *(_QWORD *)a5;
          LODWORD(v70[0]) = 7;
          v70[1] = v30;
          *(float *)&v65 = v29;
          v31 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                  (unsigned int *)this + 112,
                  v70);
          v6 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x1783u, 0LL);
          }
          else
          {
            v33 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 3264, &v65);
            v6 = v33;
            if ( v33 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x1787u, 0LL);
              CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 112, 0LL);
            }
          }
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v6, 0x175Fu, 0LL);
        }
        else
        {
          v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - 1.0)) & _xmm);
          if ( v26 >= 0.0000011920929 )
          {
            v35 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a5, v25, 1);
            v6 = v35;
            if ( v35 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x1767u, 0LL);
          }
        }
        return (unsigned int)v6;
      }
    }
    v37 = *(_DWORD *)(a5 + 12) == 1;
    v38 = *(const struct CVisual **)a5;
    v39 = *(float *)(a5 + 20);
    v65 = 0LL;
    if ( v37 )
    {
      v60 = CDrawingContext::PushEffectiveAlphaForNode(this, v38, v39 * *(float *)(a5 + 8), 1);
      v6 = v60;
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x171Fu, 0LL);
        goto LABEL_44;
      }
      v42 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v40 = CDrawingContext::PushEffectiveAlphaForNode(this, v38, v39, 1);
      v6 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x1728u, 0LL);
        goto LABEL_44;
      }
      v42 = *(float *)(a5 + 8);
    }
    v37 = *(_BYTE *)(a5 + 164) == 0;
    v62 = 1;
    if ( v37 )
      goto LABEL_45;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v65);
    v44 = CDrawingContext::D2DGeometryFromShape(v43, v8, (const struct CMILMatrix *)(a5 + 92), &v65, &v62);
    v6 = v44;
    if ( v44 == -2003238895 )
    {
      *v7 = 1;
      v6 = 0;
    }
    else
    {
      if ( v44 >= 0 )
      {
        if ( !v62 )
        {
          v46 = v70;
          v47 = _mm_shuffle_ps((__m128)*(unsigned int *)(a5 + 92), (__m128)*(unsigned int *)(a5 + 92), 225);
          v47.m128_f32[0] = *(float *)(a5 + 96);
          v48 = _mm_shuffle_ps(v47, v47, 198);
          v48.m128_f32[0] = *(float *)(a5 + 108);
          v49 = _mm_shuffle_ps(v48, v48, 39);
          v49.m128_f32[0] = *(float *)(a5 + 112);
          v71 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a5 + 140), (__m128)*(unsigned int *)(a5 + 144)).m128_u64[0];
          *(__m128 *)v70 = _mm_shuffle_ps(v49, v49, 57);
          goto LABEL_42;
        }
LABEL_45:
        v46 = 0LL;
LABEL_42:
        v50 = CDrawingContext::PushD2DLayer(
                this,
                *(struct CVisual **)a5,
                v9,
                v65,
                (struct D2D_MATRIX_3X2_F *)v46,
                v42,
                1,
                *(_DWORD *)(a5 + 160));
        v6 = v50;
        if ( v50 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x1750u, 0LL);
        goto LABEL_44;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x173Eu, 0LL);
    }
LABEL_44:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v65);
    return (unsigned int)v6;
  }
  if ( v64 )
    CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 1008), &v63);
  if ( v62 )
    CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)this + 1008));
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v6, 0x16EDu, 0LL);
  return (unsigned int)v6;
}
