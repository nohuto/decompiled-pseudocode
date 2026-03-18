/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180059670
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18005AC60 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801704B4 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180170648 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18000475C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180017138 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003BB8C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054C84 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180057AD0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18006E36C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180072BF8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1800742B0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18007AF54 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18017A628 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        struct ID2D1Geometry **a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        _BYTE *a6)
{
  int v6; // ebx
  _BYTE *v7; // r15
  const struct CShape *v8; // r14
  const struct CVisual *v12; // r15
  BOOL v13; // r8d
  int v14; // eax
  unsigned int v15; // ecx
  bool v16; // r13
  unsigned int *v17; // r14
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // r15d
  int v23; // eax
  float v24; // xmm2_4
  float v25; // xmm3_4
  int v27; // eax
  float v28; // xmm2_4
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  bool v36; // zf
  const struct CVisual *v37; // rdx
  float v38; // xmm2_4
  int v39; // eax
  unsigned int v40; // ecx
  float v41; // xmm6_4
  CDrawingContext *v42; // rcx
  int v43; // eax
  unsigned int v44; // ecx
  __int64 *v45; // rcx
  __m128 v46; // xmm4
  __m128 v47; // xmm4
  __m128 v48; // xmm4
  int v49; // eax
  unsigned int v50; // ecx
  __int64 v51; // rax
  int v52; // eax
  unsigned int v53; // ecx
  unsigned __int64 v54; // rax
  void *v55; // rbx
  void *v56; // rbx
  HANDLE ProcessHeap; // rax
  char v58; // al
  int v59; // eax
  unsigned int v60; // ecx
  bool v61; // [rsp+40h] [rbp-69h] BYREF
  bool v62; // [rsp+41h] [rbp-68h] BYREF
  char v63; // [rsp+42h] [rbp-67h]
  struct ID2D1Geometry *v64; // [rsp+48h] [rbp-61h] BYREF
  char v65[8]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE *v66; // [rsp+58h] [rbp-51h]
  void *lpMem[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v68[2]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v69; // [rsp+80h] [rbp-29h]
  __int64 v70; // [rsp+88h] [rbp-21h] BYREF
  float v71; // [rsp+90h] [rbp-19h]
  float v72; // [rsp+94h] [rbp-15h]

  v6 = 0;
  v7 = a6;
  v8 = 0LL;
  lpMem[1] = a4;
  v66 = a6;
  if ( !*(_BYTE *)(a5 + 164) )
    goto LABEL_18;
  v8 = *a2;
  v12 = *(const struct CVisual **)a5;
  v13 = *((_DWORD *)this + 63) != 0;
  v64 = *a2;
  v63 = 0;
  v61 = 0;
  v14 = CScopedClipStack::PushCpuOrGpuClipToScope((__int64 *)this + 126, (__int64 *)a2, v13, a3, (char *)&v62, v65);
  v16 = v62;
  v6 = v14;
  if ( v14 >= 0 )
  {
    v17 = (unsigned int *)((char *)this + 448);
    v68[1] = (__int64)v12;
    if ( !v65[0] )
    {
      v63 = 1;
      LODWORD(v68[0]) = 2;
      v27 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v68);
      v6 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v27, 0x10ECu, 0LL);
      }
      else if ( v16 )
      {
        *((_BYTE *)this + 6346) = 1;
      }
      goto LABEL_10;
    }
    v18 = *((unsigned int *)this + 113);
    v19 = *v17;
    v61 = 1;
    LODWORD(v68[0]) = 1;
    lpMem[0] = 0LL;
    if ( v19 != (_DWORD)v18 )
      goto LABEL_5;
    v51 = 2 * v18;
    if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      v22 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_57;
    }
    if ( (unsigned int)v51 <= 0x40 )
      v51 = 64LL;
    v70 = v51;
    v52 = HrMalloc(0x10uLL, (unsigned int)v51, lpMem);
    v22 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x53u, 0LL);
    }
    else
    {
      v54 = 16LL * *v17;
      if ( v54 <= 0xFFFFFFFF )
      {
        v55 = lpMem[0];
        memcpy_0(lpMem[0], *((const void **)this + 58), (unsigned int)v54);
        operator delete(*((void **)this + 58));
        *((_DWORD *)this + 113) = v70;
        v19 = *v17;
        *((_QWORD *)this + 58) = v55;
LABEL_5:
        *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v19) = *(_OWORD *)v68;
        v20 = *((_DWORD *)this + 118);
        v21 = *v17 + 1;
        *v17 = v21;
        if ( v20 <= v21 )
          v20 = v21;
        v22 = 0;
        *((_DWORD *)this + 118) = v20;
        goto LABEL_8;
      }
      v22 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v56 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v56);
    }
LABEL_8:
    v6 = v22;
    if ( v22 >= 0 )
    {
      *((_BYTE *)this + 6345) = 1;
LABEL_10:
      v8 = v64;
      goto LABEL_11;
    }
LABEL_57:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v22, 0x10E1u, 0LL);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x10D8u, 0LL);
LABEL_11:
  if ( v6 >= 0 )
  {
    CScopedClipStack::GetClipBoundsWorld((char *)this + 1008, &v70);
    if ( v71 <= *(float *)&v70 || v72 <= *((float *)&v70 + 1) )
    {
      *v66 = 1;
      return (unsigned int)v6;
    }
    if ( v16 )
      *(_BYTE *)(a5 + 164) = 0;
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
    {
      if ( CShapePtr::IsAxisAlignedRectangle(a2) )
        *(_DWORD *)(a5 + 160) |= 1u;
      v58 = CMILMatrix::Is2DAxisAlignedPreserving<1>(a5 + 92);
      v7 = v66;
      if ( v58 )
        *(_DWORD *)(a5 + 160) |= 4u;
    }
    else
    {
      v7 = v66;
    }
LABEL_18:
    if ( !*(_BYTE *)(a5 + 164) )
    {
      v23 = *(_DWORD *)(a5 + 12);
      if ( v23 != 2 )
      {
        v24 = *(float *)(a5 + 20);
        if ( v23 == 1 )
        {
          v28 = v24 * *(float *)(a5 + 8);
          v29 = *(_QWORD *)a5;
          LODWORD(v68[0]) = 7;
          v68[1] = v29;
          *(float *)&v64 = v28;
          v30 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v68);
          v6 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1783u, 0LL);
          }
          else
          {
            v32 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 816, &v64);
            v6 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1787u, 0LL);
              CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 112, 0LL);
            }
          }
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v6, 0x175Fu, 0LL);
        }
        else
        {
          v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - 1.0)) & _xmm);
          if ( v25 >= 0.0000011920929 )
          {
            v34 = CDrawingContext::PushEffectiveAlphaForNode(this, *(const struct CVisual **)a5, v24, 1);
            v6 = v34;
            if ( v34 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x1767u, 0LL);
          }
        }
        return (unsigned int)v6;
      }
    }
    v36 = *(_DWORD *)(a5 + 12) == 1;
    v37 = *(const struct CVisual **)a5;
    v38 = *(float *)(a5 + 20);
    v64 = 0LL;
    if ( v36 )
    {
      v59 = CDrawingContext::PushEffectiveAlphaForNode(this, v37, v38 * *(float *)(a5 + 8), 1);
      v6 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x171Fu, 0LL);
        goto LABEL_44;
      }
      v41 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v39 = CDrawingContext::PushEffectiveAlphaForNode(this, v37, v38, 1);
      v6 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x1728u, 0LL);
        goto LABEL_44;
      }
      v41 = *(float *)(a5 + 8);
    }
    v36 = *(_BYTE *)(a5 + 164) == 0;
    v61 = 1;
    if ( v36 )
      goto LABEL_45;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v64);
    v43 = CDrawingContext::D2DGeometryFromShape(v42, v8, (const struct CMILMatrix *)(a5 + 92), &v64, &v61);
    v6 = v43;
    if ( v43 == -2003238895 )
    {
      *v7 = 1;
      v6 = 0;
    }
    else
    {
      if ( v43 >= 0 )
      {
        if ( !v61 )
        {
          v45 = v68;
          v46 = _mm_shuffle_ps((__m128)*(unsigned int *)(a5 + 92), (__m128)*(unsigned int *)(a5 + 92), 225);
          v46.m128_f32[0] = *(float *)(a5 + 96);
          v47 = _mm_shuffle_ps(v46, v46, 198);
          v47.m128_f32[0] = *(float *)(a5 + 108);
          v48 = _mm_shuffle_ps(v47, v47, 39);
          v48.m128_f32[0] = *(float *)(a5 + 112);
          v69 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a5 + 140), (__m128)*(unsigned int *)(a5 + 144)).m128_u64[0];
          *(__m128 *)v68 = _mm_shuffle_ps(v48, v48, 57);
          goto LABEL_42;
        }
LABEL_45:
        v45 = 0LL;
LABEL_42:
        v49 = CDrawingContext::PushD2DLayer(this, (__int64)v45, v41, 1, *(_DWORD *)(a5 + 160));
        v6 = v49;
        if ( v49 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x1750u, 0LL);
        goto LABEL_44;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x173Eu, 0LL);
    }
LABEL_44:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v64);
    return (unsigned int)v6;
  }
  if ( v63 )
    CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 1008), &v62);
  if ( v61 )
    CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)this + 1008));
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v6, 0x16EDu, 0LL);
  return (unsigned int)v6;
}
