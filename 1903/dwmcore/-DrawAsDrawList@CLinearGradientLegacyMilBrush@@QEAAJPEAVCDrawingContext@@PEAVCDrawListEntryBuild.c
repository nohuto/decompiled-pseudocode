/*
 * XREFs of ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x180213308
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BED68 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18003CE1C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1801A33FC (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x180213180 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1802137BC (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::DrawAsDrawList(
        CLinearGradientLegacyMilBrush *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        const struct MilRectF *a5)
{
  float v6; // xmm0_4
  float v8; // xmm1_4
  signed int GradientColor; // eax
  __int64 v10; // rcx
  int v11; // ebx
  float v12; // xmm0_4
  float v13; // xmm1_4
  double v14; // xmm0_8
  float v15; // xmm1_4
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  const __m128i *v20; // rbx
  __int64 v21; // rcx
  __m128 v22; // xmm1
  __int64 v23; // rcx
  __m128 v24; // xmm1
  __int64 v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  CGeometryOnlyDrawListBrush *v30; // rcx
  float v31; // xmm0_4
  CGeometryOnlyDrawListBrush *v32; // rax
  __int64 v33; // rcx
  int DrawList; // eax
  unsigned int v35; // r9d
  unsigned int v37; // [rsp+20h] [rbp-E0h]
  _DWORD v38[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v39[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+80h] [rbp-80h]
  __int16 v42; // [rsp+CCh] [rbp-34h]
  char v43; // [rsp+CEh] [rbp-32h]
  CGeometryOnlyDrawListBrush *v44[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct CGeometryOnlyDrawListBrush *v45[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v46; // [rsp+F0h] [rbp-10h]
  struct CDrawingContext *v47; // [rsp+100h] [rbp+0h] BYREF
  float v48; // [rsp+108h] [rbp+8h]
  float v49; // [rsp+10Ch] [rbp+Ch]
  int v50; // [rsp+110h] [rbp+10h]
  __int128 v51; // [rsp+114h] [rbp+14h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int64 v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  __int64 v55; // [rsp+140h] [rbp+40h]
  int v56; // [rsp+148h] [rbp+48h]
  char v57; // [rsp+14Ch] [rbp+4Ch]

  v47 = a2;
  v50 = 0;
  v52 = 0LL;
  v6 = *((float *)a5 + 3) - *((float *)a5 + 1);
  v8 = *((float *)a5 + 2) - *(float *)a5;
  v53 = 0LL;
  v49 = v6;
  v51 = _xmm;
  v54 = 0LL;
  v48 = v8;
  v55 = 0LL;
  memset(v39, 0, sizeof(v39));
  v56 = 0;
  v57 = 0;
  v40[1] = 0LL;
  v41 = 0;
  v43 = 0;
  v42 = a4 == 0;
  GradientColor = CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>((__int64)this, v39);
  v11 = GradientColor;
  if ( GradientColor < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, GradientColor, 0x32u, 0LL);
    goto LABEL_21;
  }
  *(_OWORD *)v45 = *(_OWORD *)a5;
  if ( operator!=((float *)this + 14, (float *)v45) || memcmp_0((char *)this + 160, (char *)this + 72, 0x58uLL) )
  {
    v12 = *((double *)this + 16);
    v13 = *((double *)this + 17);
    *(float *)v38 = v12;
    v14 = *((double *)this + 18);
    *(float *)&v38[1] = v13;
    v15 = *((double *)this + 19);
    *(float *)v45 = v14;
    *((float *)v45 + 1) = v15;
    v16 = CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(this);
    v11 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3Au, 0LL);
      goto LABEL_21;
    }
    ((void (__fastcall *)(_QWORD, void *, _DWORD *))xmmword_18033B4E0)(
      *((_QWORD *)this + 31) + SDWORD2(xmmword_18033B4E0),
      &CLinearGradientBrush::sc_StartPoint,
      v38);
    ((void (__fastcall *)(_QWORD, void *, struct CGeometryOnlyDrawListBrush **))xmmword_18033B518)(
      *((_QWORD *)this + 31) + SDWORD2(xmmword_18033B518),
      &CLinearGradientBrush::sc_EndPoint,
      v45);
    v18 = *((_QWORD *)&v39[1] + 1);
    v19 = *((_QWORD *)this + 32) + SDWORD2(xmmword_18033B080);
    LODWORD(v44[0]) = **((_DWORD **)&v39[1] + 1);
    ((void (__fastcall *)(__int64, void *, CGeometryOnlyDrawListBrush **))xmmword_18033B080)(
      v19,
      &CColorGradientStop::sc_Offset,
      v44);
    v20 = *(const __m128i **)&v39[0];
    v21 = *((_QWORD *)this + 32) + SDWORD2(xmmword_18033B0B8);
    v22 = (__m128)_mm_loadu_si128(*(const __m128i **)&v39[0]);
    LODWORD(v44[0]) = v22.m128_i32[0];
    HIDWORD(v44[1]) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
    HIDWORD(v44[0]) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
    LODWORD(v44[1]) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, CGeometryOnlyDrawListBrush **))xmmword_18033B0B8)(
      v21,
      &CColorGradientStop::sc_Color,
      v44);
    v23 = *((_QWORD *)this + 33) + SDWORD2(xmmword_18033B080);
    LODWORD(v44[0]) = *(_DWORD *)(v18 + 4);
    ((void (__fastcall *)(__int64, void *, CGeometryOnlyDrawListBrush **))xmmword_18033B080)(
      v23,
      &CColorGradientStop::sc_Offset,
      v44);
    v24 = (__m128)_mm_loadu_si128(v20 + 1);
    v25 = *((_QWORD *)this + 33) + SDWORD2(xmmword_18033B0B8);
    HIDWORD(v44[1]) = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
    LODWORD(v44[0]) = v24.m128_i32[0];
    HIDWORD(v44[0]) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
    LODWORD(v44[1]) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, CGeometryOnlyDrawListBrush **))xmmword_18033B0B8)(
      v25,
      &CColorGradientStop::sc_Color,
      v44);
    v26 = *(_OWORD *)((char *)this + 88);
    *(_OWORD *)v45 = *(_OWORD *)a5;
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)v45;
    *((_OWORD *)this + 10) = *(_OWORD *)((char *)this + 72);
    v27 = *(_OWORD *)((char *)this + 104);
    *((_OWORD *)this + 11) = v26;
    v28 = *(_OWORD *)((char *)this + 120);
    *((_OWORD *)this + 12) = v27;
    v29 = *(_OWORD *)((char *)this + 136);
    *((_OWORD *)this + 13) = v28;
    *(_QWORD *)&v28 = *((_QWORD *)this + 19);
    *((_OWORD *)this + 14) = v29;
    *((_QWORD *)this + 30) = v28;
  }
  v44[0] = 0LL;
  v45[0] = (struct CGeometryOnlyDrawListBrush *)v44;
  v45[1] = 0LL;
  v46 = 1;
  v11 = CGeometryOnlyDrawListBrush::Create(&v45[1]);
  if ( v46 )
  {
    v30 = *(CGeometryOnlyDrawListBrush **)v45[0];
    *(_QWORD *)v45[0] = v45[1];
    if ( v30 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v30, 1);
  }
  if ( v11 < 0 )
  {
    v35 = v11;
    v37 = 83;
  }
  else
  {
    v31 = v49;
    v32 = v44[0];
    v45[0] = 0LL;
    *(float *)&v45[1] = v48;
    *((_BYTE *)v44[0] + 52) = 1;
    *((_DWORD *)v32 + 12) = 50529027;
    *((float *)&v45[1] + 1) = v31;
    *((_OWORD *)v32 + 2) = *(_OWORD *)v45;
    v33 = *((_QWORD *)this + 31);
    v40[0] = v44[0];
    DrawList = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext **))(*(_QWORD *)v33 + 368LL))(v33, &v47);
    v11 = DrawList;
    if ( DrawList < 0 )
    {
      v37 = 91;
    }
    else
    {
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)&v47,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v40,
                   a3);
      v11 = DrawList;
      if ( DrawList >= 0 )
        goto LABEL_17;
      v37 = 92;
    }
    v35 = DrawList;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0, v35, v37, 0LL);
LABEL_17:
  if ( v44[0] )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44[0], 1);
LABEL_21:
  std::vector<float>::_Tidy((__int64)&v39[1] + 8);
  if ( *(_QWORD *)&v39[0] )
    std::_Deallocate<16,0>(*(void **)&v39[0], (*(_QWORD *)&v39[1] - *(_QWORD *)&v39[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v47);
  return (unsigned int)v11;
}
