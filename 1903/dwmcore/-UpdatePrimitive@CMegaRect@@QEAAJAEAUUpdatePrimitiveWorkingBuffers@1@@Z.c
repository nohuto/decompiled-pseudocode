/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180077528
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180096094 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180073328 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     CreateMegaRectVertex @ 0x180077A68 (CreateMegaRectVertex.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180077C08 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180078B10 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180078B84 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ??$FillAllRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x180078C98 (--$FillAllRectangles@V-$back_insert_iterator@V-$vector@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL.c)
 *     ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x18007B368 (-_Reallocate_exactly@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18008E98C (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800C75E0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x1801B8A2C (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(CMegaRect *this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  unsigned __int64 *v2; // rdi
  __int64 (__fastcall ****v3)(_QWORD, __int64); // rsi
  __int64 *v4; // r14
  int v7; // eax
  unsigned int v8; // r13d
  __int64 v9; // rcx
  const char *v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 v17; // bx
  __int64 v18; // r8
  float v19; // xmm0_4
  int v20; // edx
  _WORD *v21; // rdx
  _WORD *v22; // rdx
  _WORD *v23; // rdx
  _WORD *v24; // rdx
  _WORD *v25; // rdx
  _WORD *v26; // rdx
  int v27; // esi
  __m128 v28; // xmm6
  __m128 v29; // xmm6
  unsigned int v30; // xmm1_4
  float v31; // xmm0_4
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  char v37; // al
  __int64 v38; // r9
  __int64 v39; // rcx
  int v40; // ebx
  __int64 (__fastcall ***v41)(_QWORD, __int64); // rdx
  __int64 v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 v46; // [rsp+48h] [rbp-89h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, __int64); // [rsp+50h] [rbp-81h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-79h]
  unsigned int v49; // [rsp+5Ch] [rbp-75h]
  int v50; // [rsp+60h] [rbp-71h]
  unsigned __int64 v51; // [rsp+68h] [rbp-69h]
  int v52; // [rsp+70h] [rbp-61h]
  _DWORD *v53; // [rsp+78h] [rbp-59h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, __int64); // [rsp+80h] [rbp-51h] BYREF
  __int128 v55; // [rsp+88h] [rbp-49h] BYREF
  __int64 (__fastcall ****v56)(_QWORD, __int64); // [rsp+98h] [rbp-39h]
  unsigned int v57[2]; // [rsp+A0h] [rbp-31h] BYREF
  char v58; // [rsp+A8h] [rbp-29h]
  __int128 v59; // [rsp+B8h] [rbp-19h] BYREF
  __m128 v60; // [rsp+C8h] [rbp-9h] BYREF

  v2 = (unsigned __int64 *)((char *)a2 + 24);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v3 = (__int64 (__fastcall ****)(_QWORD, __int64))((char *)a2 + 48);
  v4 = (__int64 *)((char *)a2 + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 9);
  v53 = (_DWORD *)*((_QWORD *)this + 2);
  *(_QWORD *)&v59 = v53;
  v7 = *((_DWORD *)this + 6);
  HIDWORD(v59) = 4;
  v8 = 8 * v7 + 16;
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v9 = *((_QWORD *)this + 1);
  DWORD2(v59) = v8;
  CRegion::FillAllRectangles<std::back_insert_iterator<std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>>>(v9);
  *(_QWORD *)&v55 = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 4;
  v54 = (__int64 (__fastcall ***)(_QWORD, __int64))(4 * v55);
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    v2,
    4 * v55 * v8);
  v51 = *v2;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    v3,
    4 * v55 * v8);
  v12 = v55;
  v13 = *v3;
  v14 = (v4[2] - *v4) >> 1;
  v47 = v13;
  if ( 6 * (__int64)v55 > v14 )
  {
    if ( (unsigned __int64)(6 * v55) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error(v10);
    std::vector<unsigned short>::_Reallocate_exactly(v4);
  }
  v15 = 0LL;
  v49 = 0;
  v48 = 0;
  if ( (_QWORD)v55 )
  {
    v50 = 2 * v8;
    HIDWORD(v46) = 2 * v8;
    LODWORD(v55) = -v8;
    v16 = 0LL;
    v17 = 0;
    v52 = -2 * v8;
    do
    {
      v60 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(*(_QWORD *)a2 + 16 * v16))), (__m128)_xmm);
      v19 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v60, v15, 2LL);
      LOWORD(v46) = v17;
      v48 = (int)v19 + v20;
      v21 = (_WORD *)v4[1];
      if ( (_WORD *)v4[2] == v21 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v21, &v46);
        v18 = 2LL;
      }
      else
      {
        *v21 = v17;
        v4[1] += v18;
      }
      v22 = (_WORD *)v4[1];
      LOWORD(v46) = v17 + 1;
      if ( (_WORD *)v4[2] == v22 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v22, &v46);
        v23 = (_WORD *)*((_QWORD *)a2 + 10);
        v18 = 2LL;
      }
      else
      {
        *v22 = v17 + 1;
        v4[1] += v18;
        v23 = (_WORD *)v4[1];
      }
      LOWORD(v46) = v17 + 3;
      if ( (_WORD *)v4[2] == v23 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v23, &v46);
        v24 = (_WORD *)*((_QWORD *)a2 + 10);
        v18 = 2LL;
      }
      else
      {
        *v23 = v17 + 3;
        v4[1] += v18;
        v24 = (_WORD *)v4[1];
      }
      LOWORD(v46) = v17;
      if ( (_WORD *)v4[2] == v24 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v24, &v46);
        v25 = (_WORD *)*((_QWORD *)a2 + 10);
        v18 = 2LL;
      }
      else
      {
        *v24 = v17;
        v4[1] += v18;
        v25 = (_WORD *)v4[1];
      }
      LOWORD(v46) = v17 + 3;
      if ( (_WORD *)v4[2] == v25 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v25, &v46);
        v26 = (_WORD *)*((_QWORD *)a2 + 10);
        v18 = 2LL;
      }
      else
      {
        *v25 = v17 + 3;
        v4[1] += v18;
        v26 = (_WORD *)v4[1];
      }
      LOWORD(v46) = v18 + v17;
      if ( (_WORD *)v4[2] == v26 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v26, &v46);
      }
      else
      {
        *v26 = v18 + v17;
        v4[1] += v18;
      }
      v27 = v50;
      v28 = (__m128)v60.m128_u32[1];
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v60.m128_u32[0], (__m128)v60.m128_u32[1]).m128_u32[0],
        (unsigned int)&v59,
        *((_DWORD *)this + 6),
        v51 + v50 + v52,
        (__int64)v47 + v52 + HIDWORD(v46));
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v60.m128_u32[2], v28).m128_u32[0],
        (unsigned int)&v59,
        *((_DWORD *)this + 6),
        v51 + v27 + v55,
        (__int64)v47 + (int)v55 + HIDWORD(v46));
      v29 = (__m128)v60.m128_u32[3];
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v60.m128_u32[0], (__m128)v60.m128_u32[3]).m128_u32[0],
        (unsigned int)&v59,
        *((_DWORD *)this + 6),
        v51 + v27,
        (__int64)v47 + SHIDWORD(v46));
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v60.m128_u32[2], v29).m128_u32[0],
        (unsigned int)&v59,
        *((_DWORD *)this + 6),
        v51 + v27 + v8,
        (__int64)v47 + (int)(v8 + HIDWORD(v46)));
      v15 = v48;
      v17 += 4;
      HIDWORD(v46) += 4 * v8;
      v16 = ++v49;
      v11 = 2LL;
      v50 = 4 * v8 + v27;
    }
    while ( v49 < v12 );
    v13 = v47;
  }
  v30 = v53[1];
  LODWORD(v59) = *v53;
  *(_QWORD *)((char *)&v59 + 4) = __PAIR64__(*(_DWORD *)((char *)v53 + (int)(3 * v8)), v30);
  HIDWORD(v59) = *(_DWORD *)((char *)v53 + (int)(3 * v8) + 4);
  v31 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v59, v53, v11);
  v32 = *v4;
  v33 = v4[1];
  v47 = 0LL;
  *(_QWORD *)v57 = 0LL;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v31 - v48;
  v56 = &v47;
  v58 = 1;
  v34 = *(_QWORD *)this;
  v53 = (_DWORD *)_mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  v35 = *(_QWORD *)(v34 + 144);
  v36 = gsl::narrow<__int64,unsigned __int64>((v33 - v32) >> 1);
  *(_QWORD *)&v59 = v36;
  if ( v36 < 0 || (*((_QWORD *)&v59 + 1) = v32) == 0LL && v36 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v37 = *(_BYTE *)(v35 + 97);
  v38 = *((unsigned int *)this + 6);
  v60.m128_u64[0] = v51;
  v55 = v59;
  *(_QWORD *)&v59 = v13;
  *((_QWORD *)&v59 + 1) = __PAIR64__((unsigned int)v54, v8);
  v60.m128_u64[1] = __PAIR64__((unsigned int)v54, v8);
  v40 = CDrawListPrimitive::Create(1LL, &v60, &v59, v38, &v55, &v53, v37, v57, v46);
  if ( v58 )
  {
    v39 = *(_QWORD *)v57;
    v41 = *v56;
    *v56 = *(__int64 (__fastcall ****)(_QWORD, __int64))v57;
    if ( v41 )
      std::default_delete<CShape>::operator()(v39, v41);
  }
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v40, 0x19Eu, 0LL);
  }
  else
  {
    v42 = *(_QWORD *)this;
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)(*(_QWORD *)this + 64LL);
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)(v42 + 80);
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)(v42 + 96);
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)(v42 + 112);
    *((_DWORD *)this + 26) = *(_DWORD *)(v42 + 128);
    v43 = (__int64 *)CHWDrawListEntry::ReplacePrimitive(v42, &v54, &v47, &CMILMatrix::Identity);
    std::unique_ptr<CDrawListPrimitive>::operator=((__int64 *)this + 4, v43);
    if ( v54 )
      std::default_delete<CShape>::operator()(v44, v54);
  }
  if ( v47 )
    std::default_delete<CShape>::operator()(v44, v47);
  return (unsigned int)v40;
}
