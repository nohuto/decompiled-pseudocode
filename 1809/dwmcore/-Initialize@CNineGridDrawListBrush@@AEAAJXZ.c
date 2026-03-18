/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000D1DC
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000CF80 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18000D3BC (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 *     ?clear@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000D5A4 (-clear@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x18000D5C8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000DC78 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x18000E19C (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r14
  __int64 v4; // rcx
  char v5; // si
  unsigned int v6; // xmm3_4
  unsigned int v7; // xmm1_4
  FLOAT v8; // xmm2_4
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int128 v15; // xmm0
  void *v16; // rcx
  bool v17; // zf
  __int128 v19; // xmm0
  struct D2D_MATRIX_3X2_F *v20; // [rsp+20h] [rbp-49h]
  char v21; // [rsp+30h] [rbp-39h]
  struct D2D_MATRIX_3X2_F v22; // [rsp+40h] [rbp-29h] BYREF
  __int128 v23; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  _OWORD *v25; // [rsp+70h] [rbp+7h] BYREF
  _BYTE *v26; // [rsp+78h] [rbp+Fh]
  __int64 *v27; // [rsp+80h] [rbp+17h]
  _BYTE v28[16]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+98h] [rbp+2Fh] BYREF

  v1 = *((_QWORD *)this + 7);
  v2 = (CNineGridDrawListBrush *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v1 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v1 + 24);
  CDrawListBrush::CopyPrimitiveClamp(this, (const struct CDrawListBrush *)v1);
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 56) + 8LL))(*(_QWORD *)(v4 + 56), 2LL) )
    v5 = *(_BYTE *)(*((_QWORD *)this + 7) + 136LL);
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v22, &v22.m12, (float *)&v23, v20);
  v21 = *((_BYTE *)this + 552);
  *(float *)&v6 = v22.m11 * *((float *)this + 10);
  *(float *)&v7 = v22.m12 * *((float *)this + 9);
  v8 = v22.m12 * *((float *)this + 11);
  v22.m21 = v22.m11 * *((float *)this + 8);
  *(_QWORD *)&v22.m[1][1] = __PAIR64__(v6, v7);
  v22.dy = v8;
  v10 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 96),
          v9,
          (const struct D2D_RECT_F *)v22.m[1],
          (CNineGridDrawListBrush *)((char *)this + 80),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 64),
          v21,
          v5);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x66u);
  }
  else if ( ((*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF0uLL) != 0
         || ((*((_QWORD *)this + 36) - *((_QWORD *)this + 35)) & 0xFFFFFFFFFFFFFFF0uLL) != 0
         || ((*((_QWORD *)this + 59) - *((_QWORD *)this + 58)) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v25 = v28;
    v26 = v28;
    v27 = &v29;
    CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
      (char *)this + 96,
      &v25);
    if ( (v26 - (_BYTE *)v25) >> 4 )
    {
      v19 = *v25;
      *((_BYTE *)this + 553) = 1;
      *(_OWORD *)((char *)this + 536) = v19;
    }
    v13 = v23;
    *((_BYTE *)this + 52) = 1;
    v14 = v24;
    *(_OWORD *)v2 = v13;
    v15 = *(_OWORD *)&v22.m[1][0];
    *((_QWORD *)v2 + 2) = v14;
    *((_OWORD *)this + 2) = v15;
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(&v25);
    v16 = v25;
    v17 = v25 == (_OWORD *)v28;
    v25 = 0LL;
    if ( v17 )
      v16 = 0LL;
    WPF::ProcessHeapImpl::Free(v16);
  }
  return v12;
}
