/*
 * XREFs of ?GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z @ 0x180089C20
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18016E314 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18016E574 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 */

void __fastcall CDrawingContext::GetEffects(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CVisual **a3,
        struct CDrawingContext::NodeEffects *a4)
{
  __int64 v7; // rax
  float v8; // xmm6_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  _QWORD *v11; // r14
  _DWORD *v12; // r8
  float v13; // xmm7_4
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm7_4
  float v17; // xmm7_4
  CGeometry *v18; // rcx
  _DWORD *v19; // r8
  _DWORD *v20; // r8
  signed int ShapeData; // eax
  __int64 v22; // rcx
  signed int v23; // ebp
  void (__fastcall ***v24)(_QWORD, __int64); // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  __int64 v31; // rax
  _BYTE *v32; // rdx
  unsigned int i; // ecx
  float **v34; // r15
  float *v35; // r15
  __int64 v36; // rax
  _BYTE *v37; // rdx
  unsigned int k; // ecx
  float v39; // xmm1_4
  __int64 v40; // rax
  float v41; // edx
  float *v42; // rcx
  __int64 v43; // rcx
  _BYTE *v44; // rdx
  unsigned int j; // eax
  _QWORD *v46; // rax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  int v48; // r10d
  __int64 v49; // rax
  void (__fastcall ***v50)(_QWORD, __int64); // [rsp+38h] [rbp-80h] BYREF
  char v51; // [rsp+40h] [rbp-78h]
  float v52; // [rsp+48h] [rbp-70h] BYREF
  float v53; // [rsp+4Ch] [rbp-6Ch]
  float v54; // [rsp+50h] [rbp-68h]
  float v55; // [rsp+54h] [rbp-64h]

  *(_QWORD *)a4 = a2;
  if ( a3 && a2 == a3[3] && *((_BYTE *)a3 + 34) )
  {
    v8 = *(float *)&FLOAT_1_0;
    v10 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v7 = *((_QWORD *)a2 + 27);
    v8 = *(float *)&FLOAT_1_0;
    if ( (*(_DWORD *)(v7 + 4) & 0x8000000) != 0 )
    {
      v41 = *(float *)(v7 + 12);
      v42 = (float *)(v7 + 12);
      if ( (LODWORD(v41) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v42 = (float *)((char *)v42 + (LODWORD(v41) & 0xFFFFFF) + 4);
          v41 = *v42;
        }
        while ( (*(_DWORD *)v42 & 0x7F000000) != 0x5000000 );
      }
      v9 = v42[1];
    }
    else
    {
      v9 = *(float *)&FLOAT_1_0;
    }
    v10 = fminf(1.0, fmaxf(v9, 0.0));
  }
  *((float *)a4 + 5) = v10;
  v11 = 0LL;
  v12 = (_DWORD *)*((_QWORD *)a2 + 28);
  v13 = v8;
  if ( (*v12 & 0x200000) != 0 )
  {
    v31 = (unsigned int)v12[1];
    v32 = v12 + 2;
    for ( i = 0; i < (unsigned int)v31; ++v32 )
    {
      if ( *v32 == 11 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v31 )
      v34 = 0LL;
    else
      v34 = (float **)((char *)v12 + v31 + 8LL * i - (((_BYTE)v31 + 15) & 7) + 15);
    v35 = *v34;
    if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v35 + 48LL))(v35, 53LL) )
      v13 = v35[18];
  }
  v14 = *((_DWORD *)this + 816);
  v15 = fminf(v8, fmaxf(v13, 0.0));
  if ( v14 )
    v16 = *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v14 - 1));
  else
    v16 = v8;
  v17 = v16 * v15;
  *((float *)a4 + 2) = v17;
  v18 = (CGeometry *)*((_QWORD *)a2 + 31);
  if ( v18 )
  {
    v50 = 0LL;
    v51 = 0;
    ShapeData = CGeometry::GetShapeData(v18, (const struct D2D_SIZE_F *)((char *)a2 + 132), (struct CShapePtr *)&v50);
    v23 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, ShapeData, 0x62u, 0LL);
    }
    else
    {
      v24 = v50;
      v23 = -2003292412;
      if ( v50 )
      {
        v25 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64), float *, _QWORD))(*v50)[4])(
                v50,
                &v52,
                0LL);
        v23 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x10Du, 0LL);
        v24 = v50;
      }
      if ( v23 >= 0 )
        goto LABEL_24;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, 0LL, 0, v23, 0x63u, 0LL);
    }
    v24 = v50;
LABEL_24:
    v27 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v28 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v29 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v30 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( v23 == -2003304438 )
    {
      v52 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v23 = 0;
      v53 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v54 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v55 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    }
    if ( v51 && v24 )
    {
      (**v24)(v24, 1LL);
      v27 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      v28 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v29 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v30 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v23 >= 0 && (v30 < v52 || v54 < v28) && (v29 < v53 || v55 < v27) )
    {
      *((_BYTE *)a4 + 164) = 1;
      *(_OWORD *)((char *)a4 + 92) = _xmm;
      *((_WORD *)a4 + 78) = 32085;
      *(_OWORD *)((char *)a4 + 108) = _xmm;
      *(_OWORD *)((char *)a4 + 124) = _xmm;
      *(_OWORD *)((char *)a4 + 140) = _xmm;
    }
  }
  v19 = (_DWORD *)*((_QWORD *)a2 + 28);
  if ( (*v19 & 0x1000000) != 0 )
  {
    v43 = (unsigned int)v19[1];
    v44 = v19 + 2;
    for ( j = 0; j < (unsigned int)v43; ++v44 )
    {
      if ( *v44 == 8 )
        break;
      ++j;
    }
    if ( j >= (unsigned int)v43 )
      v46 = 0LL;
    else
      v46 = (_QWORD *)((char *)v19 + 8LL * j - (((_BYTE)v43 + 15) & 7) + v43 + 15);
    if ( *v46 )
      *((_BYTE *)a4 + 165) = 1;
  }
  v20 = (_DWORD *)*((_QWORD *)a2 + 28);
  if ( (*v20 & 0x200000) != 0 )
  {
    v36 = (unsigned int)v20[1];
    v37 = v20 + 2;
    for ( k = 0; k < (unsigned int)v36; ++v37 )
    {
      if ( *v37 == 11 )
        break;
      ++k;
    }
    if ( k < (unsigned int)v36 )
      v11 = (_QWORD *)((char *)v20 + 8LL * k - (((_BYTE)v36 + 15) & 7) + v36 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 48LL))(*v11, 56LL) )
      *((_BYTE *)a4 + 166) = 1;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 27) + 4LL) & 0x4000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 44) + 24LL))(*((_QWORD *)this + 44), &v50);
    ColorSpace = CVisual::GetColorSpace(a2);
    if ( ColorSpace != v48 )
      *((_BYTE *)a4 + 168) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 216LL))(a2) || *((_QWORD *)a2 + 70)) )
  {
    *((_BYTE *)a4 + 167) = 1;
  }
  if ( v8 > v17 )
  {
    v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - v8)) & _xmm);
    if ( v39 >= 0.0000011920929 )
    {
      v40 = *((_QWORD *)a2 + 9);
      if ( (v40 & 2) != 0 )
        v40 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v40) = v40 & 1;
      if ( !(_DWORD)v40 && (*((_BYTE *)a2 + 92) & 1) != 0 && *((_DWORD *)this + 64) != 4
        || *((_DWORD *)this + 65) == 1
        || *((_DWORD *)a2 + 25) == 1 )
      {
        *((_DWORD *)a4 + 3) = 1;
      }
      else
      {
        *((_DWORD *)a4 + 3) = 2;
        if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
        {
          v49 = *((_QWORD *)a2 + 9);
          if ( (v49 & 2) != 0 )
            v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v49) = v49 & 1;
          if ( (_DWORD)v49 )
            *((_DWORD *)a4 + 40) |= 0x20u;
          if ( (*((_BYTE *)a2 + 92) & 1) == 0 )
            *((_DWORD *)a4 + 40) |= 0x40u;
        }
      }
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 27) + 4LL) & 0x2000000) != 0 )
    *((_DWORD *)a4 + 4) = CVisual::GetResampleMode(a2);
}
