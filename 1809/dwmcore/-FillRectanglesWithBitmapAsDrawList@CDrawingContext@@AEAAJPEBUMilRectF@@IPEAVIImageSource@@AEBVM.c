/*
 * XREFs of ?FillRectanglesWithBitmapAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@IPEAVIImageSource@@AEBVMILMatrix3x2@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800B1FB4
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014BE0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B1E70 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B1E90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800B3C40 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800EE430 (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithBitmapAsDrawList(
        CDrawingContext *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        float a6,
        int a7,
        char a8)
{
  char *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r14
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  float v22; // xmm6_4
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  char v26; // al
  float v27; // xmm0_4
  float v28; // xmm0_4
  float *v29; // rdi
  int Current; // eax
  struct CThreadContext *v31; // rcx
  int v32; // edx
  gsl::details *v33; // rcx
  __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v38; // ecx
  struct CThreadContext *v39; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v40; // [rsp+48h] [rbp-99h]
  _QWORD v41[2]; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-81h]
  int v43; // [rsp+64h] [rbp-7Dh]
  float v44[9]; // [rsp+68h] [rbp-79h] BYREF
  float v45[9]; // [rsp+8Ch] [rbp-55h] BYREF
  _BYTE v46[12]; // [rsp+B0h] [rbp-31h] BYREF
  float v47; // [rsp+BCh] [rbp-25h]
  unsigned __int64 v48; // [rsp+C0h] [rbp-21h]
  void *retaddr; // [rsp+120h] [rbp+3Fh]

  v43 = *((_DWORD *)a1 + 64);
  *((_DWORD *)a1 + 64) = a7;
  v42 = a3;
  v11 = 0LL;
  *(_QWORD *)v46 = 0LL;
  v12 = 0LL;
  v41[0] = 0LL;
  v13 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a4 + 80LL))(a4, v46);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x27u);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD *))(**(_QWORD **)v46 + 144LL))(
            *(_QWORD *)v46,
            (_DWORD *)a1 + 98,
            v41);
    v16 = v17;
    if ( v17 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      v13 = v41[0];
      v12 = a4;
      v41[0] = 0LL;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2Au);
  }
  a8 = 0;
LABEL_4:
  v20 = v41[0];
  if ( v41[0] )
  {
    v41[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *(_QWORD *)v46;
  if ( *(_QWORD *)v46 )
  {
    *(_QWORD *)v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v16, 0x600u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, struct CThreadContext **))(*(_QWORD *)v13 + 40LL))(v13, &v39);
    v22 = (float)SHIDWORD(v39);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v46);
    v23 = 0LL;
    *(_QWORD *)&v46[4] = 0LL;
    v47 = 1.0 / v22;
    *(float *)v46 = 1.0 / (float)*(int *)v46;
    v23.m128_f32[0] = 0.0 - (float)(*(float *)v46 * 0.0);
    v24 = 0LL;
    v24.m128_f32[0] = 0.0 - (float)((float)(1.0 / v22) * 0.0);
    v48 = _mm_unpacklo_ps(v23, v24).m128_u64[0];
    D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(a1);
    v26 = InterpolationMode::FromD2D1InterpolationMode(D2DInterpolationMode);
    v44[2] = 0.0;
    v44[5] = 0.0;
    LOBYTE(v40) = v26;
    BYTE1(v40) = 1;
    v44[8] = 1.0;
    v23.m128_i32[0] = *(_DWORD *)(a5 + 4);
    v44[0] = *(float *)a5;
    v27 = *(float *)(a5 + 8);
    v44[1] = v23.m128_f32[0];
    v23.m128_i32[0] = *(_DWORD *)(a5 + 12);
    v44[3] = v27;
    v28 = *(float *)(a5 + 16);
    v44[4] = v23.m128_f32[0];
    v23.m128_i32[0] = *(_DWORD *)(a5 + 20);
    v44[6] = v28;
    v44[7] = v23.m128_f32[0];
    v29 = Matrix3x3::operator*(v44, v45, (float *)v46);
    Current = CThreadContext::GetCurrent(&v39);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    v31 = v39;
    v32 = *((_DWORD *)v39 + 39);
    if ( v32 )
    {
      v11 = (char *)*((_QWORD *)v39 + 20);
      *((_QWORD *)v39 + 20) = *(_QWORD *)v11;
      *((_DWORD *)v31 + 39) = v32 - 1;
    }
    if ( v11 || (v11 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL)) != 0LL )
    {
      v11[52] = 0;
      *(_QWORD *)v11 = &CSurfaceDrawListBrush::`vftable';
      *(_OWORD *)(v11 + 8) = _xmm;
      *((_QWORD *)v11 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_QWORD *)v11 + 7) = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *((_QWORD *)v11 + 8) = v13;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v34 = v40;
      v11[72] = a8;
      *((_WORD *)v11 + 40) = v34;
      v11[82] = 1;
      *((float *)v11 + 21) = *v29;
      *((float *)v11 + 22) = v29[1];
      *((float *)v11 + 23) = v29[2];
      *((float *)v11 + 24) = v29[3];
      *((float *)v11 + 25) = v29[4];
      *((float *)v11 + 26) = v29[5];
      *((float *)v11 + 27) = v29[6];
      *((float *)v11 + 28) = v29[7];
      *((float *)v11 + 29) = v29[8];
      *(_OWORD *)(v11 + 120) = _xmm;
      v11[136] = 0;
    }
    if ( v11 )
    {
      *((_DWORD *)v11 + 12) = 0;
      v35 = v42;
      v11[52] = 1;
      v41[0] = v35;
      v41[1] = a2;
      *((_OWORD *)v11 + 2) = 0LL;
      if ( !a2 && v35 )
      {
        gsl::details::terminate(v33);
        __debugbreak();
      }
      v47 = a6;
      v39 = (struct CThreadContext *)v11;
      *(_QWORD *)v46 = 0x3F8000003F800000LL;
      *(_DWORD *)&v46[8] = 1065353216;
      v16 = CDrawingContext::FillRectanglesAsDrawList(a1);
      if ( v39 )
        std::default_delete<CShape>::operator()(v36, (__int64 (__fastcall ***)(_QWORD, __int64))v39);
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v16, 0x614u);
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, -2147024882, 0x3Cu);
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024882, 0x60Au);
    }
  }
  *((_DWORD *)a1 + 64) = v43;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v16;
}
