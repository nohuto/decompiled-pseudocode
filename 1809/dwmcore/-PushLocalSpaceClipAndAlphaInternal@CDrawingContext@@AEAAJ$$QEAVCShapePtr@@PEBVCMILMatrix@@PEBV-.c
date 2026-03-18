/*
 * XREFs of ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180039420
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180165EC0 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180166050 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180015340 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180037760 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180066B08 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18006ABF4 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180165870 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18017A05C (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
        CDrawingContext *this,
        const struct CShape **a2,
        __int64 a3,
        struct D2D_RECT_F *a4,
        __int64 a5,
        _BYTE *a6)
{
  struct D2D_MATRIX_3X2_F *v6; // r14
  int v9; // edi
  const struct CShape *v10; // r12
  int v11; // eax
  float v12; // xmm6_4
  float v13; // xmm2_4
  unsigned int *v14; // rbx
  __int64 v15; // rcx
  void *v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  void *v21; // rdi
  unsigned int v22; // eax
  int v23; // r15d
  unsigned int v24; // eax
  unsigned int v25; // ecx
  bool v27; // zf
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int *v30; // r12
  __int64 v31; // rcx
  unsigned int v32; // eax
  void *v33; // r9
  unsigned int v34; // eax
  unsigned int v35; // ecx
  float v36; // xmm6_4
  LPVOID v37; // rax
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  const struct CVisual *v43; // rdx
  float v44; // xmm2_4
  int v45; // eax
  unsigned int v46; // ecx
  float v47; // xmm6_4
  CDrawingContext *v48; // rcx
  int v49; // eax
  unsigned int v50; // ecx
  __m128 v51; // xmm4
  __m128 v52; // xmm4
  __m128 v53; // xmm4
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // r12d
  SIZE_T v59; // r8
  unsigned __int64 v60; // rax
  unsigned int v61; // eax
  unsigned int v62; // ecx
  SIZE_T v63; // r8
  unsigned __int64 v64; // rax
  LPVOID v65; // r8
  __int64 v66; // r8
  unsigned int v67; // r12d
  SIZE_T v68; // r8
  unsigned __int64 v69; // rax
  __int64 v70; // r8
  bool v71; // [rsp+40h] [rbp-69h] BYREF
  bool v72; // [rsp+41h] [rbp-68h] BYREF
  char v73; // [rsp+42h] [rbp-67h]
  char v74[5]; // [rsp+43h] [rbp-66h] BYREF
  struct ID2D1Geometry *v75; // [rsp+48h] [rbp-61h] BYREF
  const struct CShape *v76; // [rsp+50h] [rbp-59h]
  struct D2D_RECT_F *v77; // [rsp+60h] [rbp-49h]
  __m128 v78; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v79; // [rsp+78h] [rbp-31h]
  LPVOID lpMem; // [rsp+80h] [rbp-29h] BYREF
  float v81; // [rsp+88h] [rbp-21h]
  float v82; // [rsp+8Ch] [rbp-1Dh]

  v6 = 0LL;
  v77 = a4;
  v9 = 0;
  v10 = 0LL;
  if ( !*(_BYTE *)(a5 + 164) )
    goto LABEL_2;
  v27 = *((_DWORD *)this + 63) == 0;
  v10 = *a2;
  lpMem = *(LPVOID *)a5;
  v76 = v10;
  v73 = 0;
  v71 = 0;
  v28 = CScopedClipStack::PushCpuOrGpuClipToScope((__int64 *)this + 126, (__int64 *)a2, !v27, a3, (char *)&v72, v74);
  v9 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x1182u);
    goto LABEL_28;
  }
  v30 = (unsigned int *)((char *)this + 448);
  v78.m128_u64[1] = (unsigned __int64)lpMem;
  if ( !v74[0] )
  {
    v73 = 1;
    v78.m128_i32[0] = 2;
    v42 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            (unsigned int *)this + 112,
            &v78);
    v9 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v42, 0x1196u);
    }
    else if ( v72 )
    {
      *((_BYTE *)this + 6346) = 1;
    }
    goto LABEL_27;
  }
  v31 = *((unsigned int *)this + 113);
  v32 = *v30;
  v9 = 0;
  v71 = 1;
  v33 = 0LL;
  v78.m128_i32[0] = 1;
  lpMem = 0LL;
  if ( v32 != (_DWORD)v31 )
    goto LABEL_22;
  v61 = 2 * v31;
  if ( (unsigned __int64)(2 * v31) <= 0xFFFFFFFF )
  {
    v62 = 2 * v31;
    if ( v61 <= 0x40 )
      v62 = 64;
    LODWORD(v75) = v62;
    v9 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v62 <= 0x10 )
    {
      v9 = -2147024809;
    }
    else
    {
      v63 = 16LL * v62;
      if ( !v63 )
        v63 = 1LL;
      lpMem = HeapAlloc(WPF::g_processHeap, 0, v63);
      v33 = lpMem;
      if ( !lpMem )
        v9 = -2147024882;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v9, 0x54u);
    }
    else
    {
      v64 = 16LL * *v30;
      v9 = 0;
      if ( v64 <= 0xFFFFFFFF )
      {
        memcpy_0(v33, *((const void **)this + 58), (unsigned int)v64);
        WPF::ProcessHeapImpl::Free(*((void **)this + 58));
        v65 = lpMem;
        *((_DWORD *)this + 113) = (_DWORD)v75;
        v32 = *v30;
        *((_QWORD *)this + 58) = v65;
LABEL_22:
        *(__m128 *)(*((_QWORD *)this + 58) + 16LL * v32) = v78;
        v34 = *((_DWORD *)this + 118);
        v35 = *v30 + 1;
        *v30 = v35;
        if ( v34 <= v35 )
          v34 = v35;
        *((_DWORD *)this + 118) = v34;
        goto LABEL_25;
      }
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
    }
    if ( lpMem )
      HeapFree(WPF::g_processHeap, 0, lpMem);
    goto LABEL_25;
  }
  v9 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x4Cu);
LABEL_25:
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v9, 0x118Bu);
  else
    *((_BYTE *)this + 6345) = 1;
LABEL_27:
  v10 = v76;
LABEL_28:
  if ( v9 < 0 )
  {
    if ( v73 )
      CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 1008), &v72);
    if ( v71 )
      CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)this + 1008));
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v9, 0x1799u);
    return (unsigned int)v9;
  }
  CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008), (__int64)&lpMem);
  if ( v81 <= *(float *)&lpMem || v82 <= *((float *)&lpMem + 1) )
  {
    *a6 = 1;
    return (unsigned int)v9;
  }
  if ( v72 )
    *(_BYTE *)(a5 + 164) = 0;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
  {
    if ( CShapePtr::IsAxisAlignedRectangle((CShapePtr *)a2) )
      *(_DWORD *)(a5 + 160) |= 1u;
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a5 + 92) )
      *(_DWORD *)(a5 + 160) |= 4u;
  }
LABEL_2:
  if ( *(_BYTE *)(a5 + 164) || (v11 = *(_DWORD *)(a5 + 12), v11 == 2) )
  {
    v27 = *(_DWORD *)(a5 + 12) == 1;
    v43 = *(const struct CVisual **)a5;
    v44 = *(float *)(a5 + 20);
    v75 = 0LL;
    if ( v27 )
    {
      v56 = CDrawingContext::PushEffectiveAlphaForNode(this, v43, v44 * *(float *)(a5 + 8), 1);
      v9 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x17CBu);
        goto LABEL_54;
      }
      v47 = FLOAT_1_0;
    }
    else
    {
      v45 = CDrawingContext::PushEffectiveAlphaForNode(this, v43, v44, 1);
      v9 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x17D4u);
        goto LABEL_54;
      }
      v47 = *(float *)(a5 + 8);
    }
    v71 = 1;
    if ( !*(_BYTE *)(a5 + 164) )
    {
LABEL_52:
      v54 = CDrawingContext::PushD2DLayer(this, *(struct CVisual **)a5, v77, v75, v6, v47, 1, *(_DWORD *)(a5 + 160));
      v9 = v54;
      if ( v54 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x17FCu);
      goto LABEL_54;
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v75);
    v49 = CDrawingContext::D2DGeometryFromShape(v48, v10, (const struct CMILMatrix *)(a5 + 92), &v75, &v71);
    v9 = v49;
    if ( v49 == -2003238895 )
    {
      *a6 = 1;
      v9 = 0;
    }
    else
    {
      if ( v49 >= 0 )
      {
        if ( !v71 )
        {
          v6 = (struct D2D_MATRIX_3X2_F *)&v78;
          v51 = _mm_shuffle_ps((__m128)*(unsigned int *)(a5 + 92), (__m128)*(unsigned int *)(a5 + 92), 225);
          v51.m128_f32[0] = *(float *)(a5 + 96);
          v52 = _mm_shuffle_ps(v51, v51, 198);
          v52.m128_f32[0] = *(float *)(a5 + 108);
          v53 = _mm_shuffle_ps(v52, v52, 39);
          v53.m128_f32[0] = *(float *)(a5 + 112);
          v79 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a5 + 140), (__m128)*(unsigned int *)(a5 + 144)).m128_u64[0];
          v78 = _mm_shuffle_ps(v53, v53, 57);
        }
        goto LABEL_52;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x17EAu);
    }
LABEL_54:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v75);
    return (unsigned int)v9;
  }
  v12 = *(float *)(a5 + 20);
  if ( v11 != 1 )
  {
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - 1.0)) & _xmm);
    if ( v13 < 0.0000011920929 )
      return (unsigned int)v9;
    v9 = 0;
    v14 = (unsigned int *)((char *)this + 448);
    v78.m128_u64[1] = *(_QWORD *)a5;
    v15 = *((unsigned int *)this + 113);
    v16 = 0LL;
    v17 = *((_DWORD *)this + 112);
    v78.m128_i32[0] = 7;
    if ( v17 != (_DWORD)v15 )
      goto LABEL_7;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_10;
    }
    v67 = 2 * v15;
    if ( (unsigned int)(2 * v15) <= 0x40 )
      v67 = 64;
    v9 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v67 <= 0x10 )
    {
      v9 = -2147024809;
    }
    else
    {
      v68 = 16LL * v67;
      if ( !v68 )
        v68 = 1LL;
      v16 = HeapAlloc(WPF::g_processHeap, 0, v68);
      if ( !v16 )
        v9 = -2147024882;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v9, 0x54u);
    }
    else
    {
      v69 = 16LL * *v14;
      v9 = 0;
      if ( v69 <= 0xFFFFFFFF )
      {
        memcpy_0(v16, *((const void **)this + 58), (unsigned int)v69);
        WPF::ProcessHeapImpl::Free(*((void **)this + 58));
        v17 = *v14;
        *((_QWORD *)this + 58) = v16;
        *((_DWORD *)this + 113) = v67;
LABEL_7:
        *(__m128 *)(*((_QWORD *)this + 58) + 16LL * v17) = v78;
        v18 = *((_DWORD *)this + 118);
        v19 = *v14 + 1;
        *v14 = v19;
        if ( v18 <= v19 )
          v18 = v19;
        *((_DWORD *)this + 118) = v18;
        goto LABEL_10;
      }
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v16 )
      HeapFree(WPF::g_processHeap, 0, v16);
LABEL_10:
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v9, 0x182Fu);
      goto LABEL_16;
    }
    v20 = *((unsigned int *)this + 817);
    v21 = 0LL;
    v22 = *((_DWORD *)this + 816);
    if ( v22 != (_DWORD)v20 )
      goto LABEL_12;
    v58 = 2 * v20;
    if ( (unsigned __int64)(2 * v20) > 0xFFFFFFFF )
    {
      v23 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0x4Cu);
      v9 = -2147024362;
LABEL_125:
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v23, 0x1833u);
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (char *)this + 448,
        0LL,
        v70);
LABEL_16:
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v9, 0x1813u);
      return (unsigned int)v9;
    }
    if ( v58 <= 0x40 )
      v58 = 64;
    v23 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v58 <= 4 )
    {
      v23 = -2147024809;
    }
    else
    {
      v59 = 4LL * v58;
      if ( !v59 )
        v59 = 1LL;
      v21 = HeapAlloc(WPF::g_processHeap, 0, v59);
      if ( !v21 )
        v23 = -2147024882;
    }
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v23, 0x54u);
    }
    else
    {
      v60 = 4LL * *((unsigned int *)this + 816);
      if ( v60 <= 0xFFFFFFFF )
      {
        memcpy_0(v21, *((const void **)this + 410), (unsigned int)v60);
        WPF::ProcessHeapImpl::Free(*((void **)this + 410));
        v22 = *((_DWORD *)this + 816);
        *((_QWORD *)this + 410) = v21;
        *((_DWORD *)this + 817) = v58;
LABEL_12:
        v23 = 0;
        *(float *)(*((_QWORD *)this + 410) + 4LL * v22) = v12;
        v24 = *((_DWORD *)this + 822);
        v25 = *((_DWORD *)this + 816) + 1;
        *((_DWORD *)this + 816) = v25;
        if ( v24 <= v25 )
          v24 = v25;
        *((_DWORD *)this + 822) = v24;
        goto LABEL_15;
      }
      v23 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v21 )
      HeapFree(WPF::g_processHeap, 0, v21);
LABEL_15:
    v9 = v23;
    if ( v23 >= 0 )
      goto LABEL_16;
    goto LABEL_125;
  }
  v36 = v12 * *(float *)(a5 + 8);
  v37 = *(LPVOID *)a5;
  v78.m128_i32[0] = 7;
  v78.m128_u64[1] = (unsigned __int64)v37;
  *(float *)&v75 = v36;
  v38 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
          (unsigned int *)this + 112,
          &v78);
  v9 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x182Fu);
  }
  else
  {
    v40 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 3264, &v75);
    v9 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x1833u);
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (char *)this + 448,
        0LL,
        v66);
    }
  }
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v9, 0x180Bu);
  return (unsigned int)v9;
}
