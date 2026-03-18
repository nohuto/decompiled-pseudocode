/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180013F60 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036C70 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180037650 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180038B4C (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18003A18C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007E00C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800BB274 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BB2A0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801FB030 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v5; // r14d
  int v6; // xmm0_4
  int v7; // xmm1_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  unsigned int v10; // xmm1_4
  char v11; // r13
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rsi
  D2DMatrixHelper *v15; // rbx
  float v16; // r12d
  __m128i v17; // xmm6
  struct D2D_MATRIX_3X2_F *v18; // r9
  struct CSurfaceDrawListBrush *v19; // r11
  int v20; // xmm0_4
  int v21; // xmm1_4
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  CSurfaceDrawListBrush *v25; // rcx
  CSurfaceDrawListBrush *v26; // rax
  CSurfaceDrawListBrush *v27; // rax
  signed int v28; // eax
  __int64 v29; // rcx
  CSurfaceDrawListBrush *v31[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v32[40]; // [rsp+48h] [rbp-C0h]
  __int128 v33; // [rsp+70h] [rbp-98h]
  struct D2D_RECT_F v34; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v35[2]; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+A8h] [rbp-60h]
  int v37; // [rsp+ACh] [rbp-5Ch]
  CSurfaceDrawListBrush **v38; // [rsp+B0h] [rbp-58h]
  CSurfaceDrawListBrush *v39; // [rsp+B8h] [rbp-50h] BYREF
  char v40; // [rsp+C0h] [rbp-48h]
  struct D2D_RECT_F v41; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v42; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-20h]
  __int128 v44; // [rsp+F8h] [rbp-10h]
  __int128 v45; // [rsp+108h] [rbp+0h]
  int v46; // [rsp+118h] [rbp+10h]
  _OWORD v47[4]; // [rsp+128h] [rbp+20h] BYREF
  int v48; // [rsp+168h] [rbp+60h]
  _BYTE v49[8]; // [rsp+178h] [rbp+70h] BYREF
  D2DMatrixHelper *v50; // [rsp+180h] [rbp+78h]
  struct D2D_RECT_F v51; // [rsp+198h] [rbp+90h] BYREF
  float v52; // [rsp+218h] [rbp+110h] BYREF
  float v53; // [rsp+220h] [rbp+118h] BYREF
  int (*v54)(const struct CDrawListBrush *, void *); // [rsp+228h] [rbp+120h]
  void *v55; // [rsp+230h] [rbp+128h]

  v55 = a4;
  v54 = a3;
  v48 = 0;
  v5 = 0;
  CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v47);
  v6 = *((_DWORD *)this + 2);
  v7 = *((_DWORD *)this + 3);
  *(_QWORD *)v32 = 0LL;
  HIDWORD(v31[1]) = v7;
  v8 = *((_DWORD *)this + 4);
  LODWORD(v31[1]) = v6;
  *(_DWORD *)&v32[12] = *((_DWORD *)this + 5);
  v9 = *((_DWORD *)this + 6);
  *(_DWORD *)&v32[8] = v8;
  v10 = *((_DWORD *)this + 7);
  LODWORD(v33) = v9;
  *(_OWORD *)&v32[16] = 0uLL;
  *(_QWORD *)((char *)&v33 + 4) = v10;
  v42 = (unsigned __int64)v31[1];
  *(_QWORD *)&v32[32] = 1065353216LL;
  HIDWORD(v33) = 1065353216;
  v43 = *(_OWORD *)&v32[8];
  v46 = 0;
  v44 = *(_OWORD *)&v32[24];
  v45 = v33;
  CMILMatrix::Multiply((CMILMatrix *)&v42, (const struct CMILMatrix *)v47);
  v48 = v46;
  v47[0] = v42;
  v47[1] = v43;
  v47[2] = v44;
  v47[3] = v45;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v47, &v52, &v53);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v52 - 1.0)) & _xmm) >= 0.000081380211
    || (v11 = 0, (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v53 - 1.0)) & _xmm) >= 0.000081380211) )
  {
    v11 = 1;
  }
  v12 = *((_QWORD *)this + 9);
  v13 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(v12 + 24) + 8LL) )
    return v5;
  while ( 1 )
  {
    v14 = **(_QWORD **)(v12 + 24) + 144LL * v13;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v12, (__int64)v49, v13);
    if ( (*(_BYTE *)(v14 + 4) & 2) == 0
      && *(_DWORD *)v14
      && *(_DWORD *)(v14 + 40) < *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) )
    {
      break;
    }
LABEL_24:
    v12 = *((_QWORD *)this + 9);
    if ( ++v13 >= *(_DWORD *)(*(_QWORD *)(v12 + 24) + 8LL) )
      return v5;
  }
  while ( 1 )
  {
    v15 = v50;
    if ( *((_BYTE *)this + 52) )
    {
      ClipRectAndEdgeFlags(
        (float *)v50,
        *((_DWORD *)v50 + 11),
        (float *)this + 8,
        *((_DWORD *)this + 12),
        &v41,
        (int *)&v53);
      v16 = v53;
      v17 = (__m128i)v41;
    }
    else
    {
      v17 = _mm_loadu_si128((const __m128i *)v50);
      v16 = *((float *)v50 + 11);
      v53 = v16;
      v41 = (struct D2D_RECT_F)v17;
    }
    if ( IsEmpty(&v41) )
      goto LABEL_23;
    if ( v11 )
    {
      v34 = (struct D2D_RECT_F)_mm_sub_ps(*(__m128 *)v15, (__m128)_xmm);
      D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)v15, &v34, &v51, v18);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)v35,
        (const struct D2D1::Matrix3x2F *)&v51,
        (D2DMatrixHelper *)((char *)v15 + 64));
      *(_QWORD *)&v32[4] = v35[1];
      v20 = v36;
      v21 = v37;
      v31[1] = (CSurfaceDrawListBrush *)v35[0];
    }
    else
    {
      v22 = *((_DWORD *)v15 + 17);
      LODWORD(v31[1]) = *((_DWORD *)v15 + 16);
      v23 = *((_DWORD *)v15 + 18);
      HIDWORD(v31[1]) = v22;
      v24 = *((_DWORD *)v15 + 19);
      *(_DWORD *)&v32[4] = v23;
      v20 = *((_DWORD *)v15 + 20);
      *(_DWORD *)&v32[8] = v24;
      v21 = *((_DWORD *)v15 + 21);
    }
    *(_DWORD *)v32 = 0;
    *(_DWORD *)&v32[12] = 0;
    v31[0] = 0LL;
    v39 = 0LL;
    v38 = v31;
    LOWORD(v52) = *((_WORD *)this + 40);
    BYTE2(v52) = *((_BYTE *)this + 82);
    *(_DWORD *)&v32[20] = v21;
    *(_DWORD *)&v32[16] = v20;
    *(_DWORD *)&v32[24] = 1065353216;
    v40 = 1;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v19, (__int16 *)&v52, (__int64)&v31[1], &v39);
    if ( v40 )
    {
      v25 = *v38;
      *v38 = v39;
      if ( v25 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1);
    }
    if ( (v5 & 0x80000000) != 0 )
      break;
    *((_BYTE *)v31[0] + 145) = 1;
    *(_OWORD *)((char *)v31[0] + 120) = *(_OWORD *)((char *)v15 + 88);
    v26 = v31[0];
    *(_OWORD *)((char *)v31[0] + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v26 + 3) = *((_QWORD *)this + 3);
    v27 = v31[0];
    *((float *)v31[0] + 12) = v16;
    *((_BYTE *)v27 + 52) = 1;
    *((__m128i *)v27 + 2) = v17;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v31[0], (const struct D2D_VECTOR_2F *)this + 7);
    v28 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v54)(v31[0], v55);
    v5 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xA6u, 0LL);
      goto LABEL_28;
    }
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(v31);
LABEL_23:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v49) )
      goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0, v5, 0x9Au, 0LL);
LABEL_28:
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(v31);
  return v5;
}
