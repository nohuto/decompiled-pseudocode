/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180010230
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000FDA0 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18000E5BC (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_.c)
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180010478 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180010630 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180010D24 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x18001125C (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r14
  __int64 v4; // rcx
  char v5; // si
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  float m11; // xmm6_4
  float m12; // xmm7_4
  unsigned int v11; // xmm1_4
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  unsigned __int64 v18; // r8
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int128 v23; // xmm0
  __int64 v24; // rcx
  float v25; // xmm7_4
  struct D2D_MATRIX_3X2_F *v26; // [rsp+28h] [rbp-69h]
  char v27; // [rsp+38h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v28; // [rsp+48h] [rbp-49h] BYREF
  __int128 v29; // [rsp+60h] [rbp-31h] BYREF
  __int64 v30; // [rsp+70h] [rbp-21h]
  _OWORD *v31; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v32; // [rsp+80h] [rbp-11h]
  __int64 *v33; // [rsp+88h] [rbp-9h]
  _BYTE v34[16]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 9);
  v2 = (CNineGridDrawListBrush *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v1 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v1 + 24);
  CDrawListBrush::CopyPrimitiveClamp(this, (const struct CDrawListBrush *)v1);
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 72) + 8LL))(*(_QWORD *)(v4 + 72), 2LL);
  v7 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    v8 = *(_BYTE *)(v7 + 145);
    v5 = *(_BYTE *)(v7 + 144);
    if ( v8 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v7 + 136);
      v8 = *(_BYTE *)(v7 + 145);
    }
LABEL_4:
    *((_BYTE *)this + 64) = v8;
    goto LABEL_5;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL) )
  {
    v24 = *((_QWORD *)this + 9);
    v8 = *(_BYTE *)(v24 + 64);
    if ( v8 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v24 + 56);
      v8 = *(_BYTE *)(v24 + 64);
    }
    goto LABEL_4;
  }
LABEL_5:
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v28, &v28.m12, (float *)&v29, v26);
  m11 = v28.m11;
  m12 = v28.m12;
  v27 = *((_BYTE *)this + 568);
  *(float *)&v11 = v28.m12 * *((float *)this + 9);
  v28.m21 = v28.m11 * *((float *)this + 8);
  *(_QWORD *)&v28.m[1][1] = __PAIR64__(v28.m11 * *((float *)this + 10), v11);
  v28.dy = v28.m12 * *((float *)this + 11);
  v13 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 112),
          v12,
          (const struct D2D_RECT_F *)v28.m[1],
          (CNineGridDrawListBrush *)((char *)this + 96),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 80),
          v27,
          v5);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x69u, 0LL);
  }
  else if ( ((*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF0uLL) != 0
         || ((*((_QWORD *)this + 38) - *((_QWORD *)this + 37)) & 0xFFFFFFFFFFFFFFF0uLL) != 0
         || ((*((_QWORD *)this + 61) - *((_QWORD *)this + 60)) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v31 = v34;
    v32 = v34;
    v33 = &v35;
    CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
      (char *)this + 112,
      &v31);
    v17 = v31;
    v18 = (v32 - (_BYTE *)v31) >> 4;
    if ( v18 )
    {
      v23 = *v31;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v23;
    }
    v19 = v29;
    *((_BYTE *)this + 52) = 1;
    v20 = v30;
    *(_OWORD *)v2 = v19;
    v21 = *(_OWORD *)&v28.m[1][0];
    *((_QWORD *)v2 + 2) = v20;
    *((_OWORD *)this + 2) = v21;
    if ( *((_BYTE *)this + 64) )
    {
      v25 = m12 * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v25;
    }
    if ( v18 )
    {
      detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64)&v31,
        v16,
        v18);
      v17 = v31;
    }
    v31 = 0LL;
    if ( v17 == v34 )
      v17 = 0LL;
    operator delete(v17);
  }
  return v15;
}
