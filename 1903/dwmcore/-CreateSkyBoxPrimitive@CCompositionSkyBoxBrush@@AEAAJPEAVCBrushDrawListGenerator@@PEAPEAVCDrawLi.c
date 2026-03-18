/*
 * XREFs of ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801D2DC4
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D28CC (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000BF94 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18006E200 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180071D5C (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180078B84 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18008F0E0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x1801D2838 (-AddMultipleAndSet@-$DynArray@G$0A@@@QEAAJPEFBGI@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(
        CCompositionSkyBoxBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawListPrimitive **a3)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int i; // ebx
  int v10; // eax
  CTransform3D *v11; // rcx
  const struct CMILMatrix *Matrix; // rax
  const struct MilPoint4F *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r11
  int v16; // xmm0_4
  _DWORD *v17; // rdx
  int v18; // eax
  int v19; // xmm1_4
  int v20; // xmm0_4
  int v21; // eax
  signed int v22; // eax
  __int64 v23; // rcx
  _DWORD *v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  _DWORD *v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  unsigned int v32; // [rsp+88h] [rbp-78h]
  _OWORD v33[4]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v34; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v35; // [rsp+E0h] [rbp-20h] BYREF
  int v36; // [rsp+E8h] [rbp-18h]
  _DWORD v37[64]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v38[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  v33[0] = _xmm;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v33[1] = _xmm;
  v33[2] = _xmm;
  v33[3] = _xmm;
  v34 = 32085;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v6 = DynArrayImpl<0>::Grow((__int64)&v30, 2u, 36, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x176u, 0LL);
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      v10 = *((_DWORD *)this + 28);
      if ( _bittest(&v10, i) )
        DynArray<unsigned short,0>::AddMultipleAndSet((__int64)&v30, (__int64 *)((char *)&unk_180311E80 + 12 * i));
    }
    CMILMatrix::Scale((CMILMatrix *)v33, *((float *)this + 27), *((float *)this + 27), *((float *)this + 27));
    CMILMatrix::Translate((CMILMatrix *)v33, *((float *)this + 24), *((float *)this + 25), *((float *)this + 26));
    v11 = (CTransform3D *)*((_QWORD *)this + 11);
    if ( v11 )
    {
      Matrix = CTransform3D::GetMatrix(v11, a2 + 1);
      CMILMatrix::Multiply((CMILMatrix *)v33, Matrix);
    }
    CMILMatrix::Translate((CMILMatrix *)v33, a2[1].width * 0.5, a2[1].height * 0.5, 0.0);
    v13 = (const struct MilPoint4F *)&unk_180311DF0;
    v14 = 8LL;
    do
    {
      CMILMatrix::Transform((CMILMatrix *)v33, v13, (struct MilPoint4F *)&v35, 1);
      *(_DWORD *)((char *)&v37[3] + v15) = -1;
      v16 = HIDWORD(v35);
      v18 = *v17;
      v19 = v35;
      *(_DWORD *)((char *)&v37[1] + v15) = HIDWORD(v35);
      *(_DWORD *)((char *)&v38[1] + v15) = v16;
      *(_DWORD *)((char *)&v37[2] + v15) = v36;
      v20 = v17[1] ^ _xmm;
      *(_DWORD *)((char *)v37 + v15) = v19;
      *(_DWORD *)((char *)&v37[4] + v15) = v18;
      v21 = v17[2];
      v13 = (const struct MilPoint4F *)(v17 + 4);
      *(_DWORD *)((char *)&v37[5] + v15) = v20;
      *(_DWORD *)((char *)&v37[6] + v15) = v21;
      *(_DWORD *)((char *)&v37[7] + v15) = 0;
      *(_DWORD *)((char *)v38 + v15) = v19;
      *(_DWORD *)((char *)&v38[2] + v15) = 0;
      *(_DWORD *)((char *)&v38[3] + v15) = 1065353216;
      *(_OWORD *)((char *)&v37[68] + v15) = *(_OWORD *)((char *)&v37[4] + v15);
      --v14;
    }
    while ( v14 );
    v27 = v37;
    v25 = v38;
    v28 = 0x800000020LL;
    v26 = 0x800000020LL;
    v35 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
    v29[0] = v32;
    v29[1] = v30;
    if ( !(_QWORD)v30 && v32 )
    {
      ((void (__fastcall *)(_QWORD, const struct MilPoint4F *))`gsl::details::get_terminate_handler'::`2'::handler)(
        v32,
        v13);
      __debugbreak();
    }
    v22 = CDrawListPrimitive::Create(0, (__int64)&v27, (__int64)&v25, 2u, (__int64)v29, (__int64)&v35, 0, (__int64 *)a3);
    v8 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1B6u, 0LL);
    else
      v8 = 0;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v30);
  return v8;
}
