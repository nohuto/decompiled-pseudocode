/*
 * XREFs of ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x180050BE0
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800168FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180050734 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180051114 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180051190 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800512F0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009A820 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800EA844 (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithBitmapAsDrawList(
        CDrawingContext *a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5,
        int a6,
        int a7,
        char a8)
{
  CSurfaceDrawListBrush *v8; // rbx
  __int64 v11; // rax
  __int64 *v13; // rsi
  __int64 v14; // r14
  __int64 (__fastcall *v15)(__int64 *, CSurfaceDrawListBrush **); // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edi
  CSurfaceDrawListBrush *v19; // rbx
  struct CThreadContext *v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v24; // rcx
  CSurfaceDrawListBrush *v25; // rcx
  float v26; // xmm6_4
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  float v29; // xmm3_4
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  _DWORD *v33; // rdi
  int Current; // eax
  __int64 v35; // r8
  struct CThreadContext *v36; // rcx
  int v37; // edx
  unsigned int v38; // ecx
  __int16 v39; // ax
  CSurfaceDrawListBrush *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  CSurfaceDrawListBrush *v44; // [rsp+30h] [rbp-A9h] BYREF
  __int16 v45; // [rsp+38h] [rbp-A1h]
  CSurfaceDrawListBrush *v46; // [rsp+40h] [rbp-99h]
  _QWORD v47[2]; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-81h]
  int v49; // [rsp+5Ch] [rbp-7Dh]
  _DWORD v50[9]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v51[36]; // [rsp+84h] [rbp-55h] BYREF
  struct CThreadContext *v52[2]; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int64 v53; // [rsp+B8h] [rbp-21h]
  void *retaddr; // [rsp+118h] [rbp+3Fh]

  v8 = 0LL;
  v49 = *((_DWORD *)a1 + 64);
  *((_DWORD *)a1 + 64) = a7;
  v11 = *a4;
  v48 = a3;
  v46 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v44 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64 *, CSurfaceDrawListBrush **))(v11 + 80);
  v47[0] = 0LL;
  v16 = v15(a4, &v44);
  v18 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x27u, 0LL);
    goto LABEL_42;
  }
  v19 = v44;
  v20 = *(struct CThreadContext **)(*(_QWORD *)v44 + 144LL);
  v52[0] = v20;
  if ( v47[0] )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v47[0] + 16LL))(v47[0]);
    v21 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, char *, _QWORD *))v52[0])(v19, (char *)a1 + 392, v47);
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, char *, _QWORD *))v20)(v44, (char *)a1 + 392, v47);
  }
  v18 = v21;
  if ( v21 < 0 )
  {
    v8 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2Au, 0LL);
LABEL_42:
    a8 = 0;
    goto LABEL_8;
  }
  if ( a4 )
    (*(void (__fastcall **)(__int64 *))(*a4 + 8))(a4);
  v14 = v47[0];
  v8 = 0LL;
  v13 = a4;
  v47[0] = 0LL;
LABEL_8:
  v24 = v47[0];
  if ( v47[0] )
  {
    v47[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v18, 0x5FDu, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, struct CThreadContext **))(*(_QWORD *)v14 + 40LL))(v14, v52);
    v26 = (float)SHIDWORD(v52[0]);
    (*(void (__fastcall **)(__int64, CSurfaceDrawListBrush **))(*(_QWORD *)v14 + 40LL))(v14, &v44);
    v27 = 0LL;
    *(struct CThreadContext **)((char *)v52 + 4) = 0LL;
    v50[2] = 0;
    v50[5] = 0;
    v50[8] = 1065353216;
    v28 = 0LL;
    v29 = 1.0 / (float)(int)v44;
    v28.m128_f32[0] = 0.0 - (float)(v29 * 0.0);
    v27.m128_f32[0] = 0.0 - (float)((float)(1.0 / v26) * 0.0);
    v30 = *(__m128 *)v52;
    v30.m128_f32[0] = v29;
    v31 = _mm_shuffle_ps(v30, v30, 147);
    v31.m128_f32[0] = 1.0 / v26;
    *(__m128 *)v52 = _mm_shuffle_ps(v31, v31, 57);
    v31.m128_u64[0] = _mm_unpacklo_ps(v28, v27).m128_u64[0];
    v27.m128_i32[0] = a5[1];
    v53 = v31.m128_u64[0];
    v50[0] = *a5;
    v31.m128_i32[0] = a5[2];
    v50[1] = v27.m128_i32[0];
    v27.m128_i32[0] = a5[3];
    v50[3] = v31.m128_i32[0];
    v31.m128_i32[0] = a5[4];
    v50[4] = v27.m128_i32[0];
    v27.m128_i32[0] = a5[5];
    v50[6] = v31.m128_i32[0];
    v50[7] = v27.m128_i32[0];
    D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(a1);
    LOBYTE(v45) = InterpolationMode::FromD2D1InterpolationMode((unsigned int)D2DInterpolationMode);
    HIBYTE(v45) = 1;
    v33 = (_DWORD *)Matrix3x3::operator*(v50, v51, v52);
    Current = CThreadContext::GetCurrent(v52);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr, v35);
    v36 = v52[0];
    v37 = *((_DWORD *)v52[0] + 43);
    if ( v37 )
    {
      v8 = (CSurfaceDrawListBrush *)*((_QWORD *)v52[0] + 22);
      *((_QWORD *)v52[0] + 22) = *(_QWORD *)v8;
      *((_DWORD *)v36 + 43) = v37 - 1;
    }
    if ( v8 || (v8 = (CSurfaceDrawListBrush *)DefaultHeap::Alloc(0x98uLL)) != 0LL )
    {
      *((_BYTE *)v8 + 52) = 0;
      *(_QWORD *)v8 = &CSurfaceDrawListBrush::`vftable';
      *(_OWORD *)((char *)v8 + 8) = _xmm;
      *((_QWORD *)v8 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_QWORD *)v8 + 7) = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64 *))(*v13 + 8))(v13);
      *((_QWORD *)v8 + 8) = v14;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v39 = v45;
      *((_BYTE *)v8 + 72) = a8;
      *((_WORD *)v8 + 40) = v39;
      *((_BYTE *)v8 + 82) = 1;
      *((_DWORD *)v8 + 21) = *v33;
      *((_DWORD *)v8 + 22) = v33[1];
      *((_DWORD *)v8 + 23) = v33[2];
      *((_DWORD *)v8 + 24) = v33[3];
      *((_DWORD *)v8 + 25) = v33[4];
      *((_DWORD *)v8 + 26) = v33[5];
      *((_DWORD *)v8 + 27) = v33[6];
      *((_DWORD *)v8 + 28) = v33[7];
      *((_DWORD *)v8 + 29) = v33[8];
      *(_OWORD *)((char *)v8 + 120) = _xmm;
      *((_WORD *)v8 + 72) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v18 = 0;
    }
    else
    {
      v18 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024882, 0x39u, 0LL);
    }
    v40 = v46;
    v46 = v8;
    if ( v40 )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v40, 1u);
      v8 = v46;
    }
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v40, 0LL, 0, v18, 0x607u, 0LL);
    }
    else
    {
      v41 = v48;
      v47[0] = v48;
      *((_BYTE *)v8 + 52) = 1;
      *((_DWORD *)v8 + 12) = 0;
      v47[1] = a2;
      *((_OWORD *)v8 + 2) = 0LL;
      if ( !a2 && v41 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      HIDWORD(v52[1]) = a6;
      v44 = v46;
      v46 = 0LL;
      v52[0] = (struct CThreadContext *)0x3F8000003F800000LL;
      LODWORD(v52[1]) = 1065353216;
      v18 = CDrawingContext::FillRectanglesAsDrawList(a1);
      if ( v44 )
        std::default_delete<CShape>::operator()(v42, (__int64 (__fastcall ***)(_QWORD, __int64))v44);
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v18, 0x611u, 0LL);
    }
  }
  *((_DWORD *)a1 + 64) = v49;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
  if ( v46 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v46, 1u);
  return (unsigned int)v18;
}
