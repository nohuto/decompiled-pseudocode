/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AF5D8
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005293C (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180010FA0 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180011188 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180018C68 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18001AFA4 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180073C40 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18009AE40 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800BF830 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA72C (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x1801AE1AC (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ??0WARPDrawListEntryParams@@QEAA@XZ @ 0x1801AF284 (--0WARPDrawListEntryParams@@QEAA@XZ.c)
 *     ??A?$span@UPrimitiveUVDesc@@$0?0@gsl@@QEBAAEAUPrimitiveUVDesc@@_J@Z @ 0x1801AF398 (--A-$span@UPrimitiveUVDesc@@$0-0@gsl@@QEBAAEAUPrimitiveUVDesc@@_J@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1801B0318 (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vli.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801BAB98 (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        CCpuClip **this,
        FLOAT *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_RECT_F *a4)
{
  signed int BuiltHWPrimitiveEntry; // eax
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned int v11; // edi
  struct D2D_RECT_F *v12; // r9
  float *v13; // rdx
  const struct D2D_MATRIX_3X2_F *v14; // r8
  FLOAT v15; // eax
  bool v16; // zf
  FLOAT dy; // eax
  CCpuClip *v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rax
  CCpuClip *v25; // rbx
  __int64 v26; // xmm1_8
  unsigned __int64 v27; // r13
  _BYTE *v28; // rdi
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rdx
  unsigned __int8 v32; // bl
  __int64 v33; // rax
  int v34; // xmm0_4
  __m128 v35; // xmm3
  __m128 v36; // xmm1
  __int64 v37; // xmm1_8
  bool v38; // al
  _OWORD *v39; // rcx
  signed int v40; // eax
  __int64 v41; // rcx
  struct CWARPDrawListEntry *v42; // rbx
  __int16 v44; // [rsp+30h] [rbp-D0h]
  struct CWARPDrawListEntry *v45; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  struct CShape *v47; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v48; // [rsp+50h] [rbp-B0h]
  struct D2D_RECT_F v49; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  __int128 *v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  struct D2D_MATRIX_3X2_F v55; // [rsp+98h] [rbp-68h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-50h] BYREF
  char v57[68]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v58[108]; // [rsp+104h] [rbp+4h] BYREF
  __int128 v59; // [rsp+170h] [rbp+70h] BYREF
  __int64 v60; // [rsp+180h] [rbp+80h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+188h] [rbp+88h] BYREF

  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListEntryBuilder *)this,
                            0LL,
                            0LL,
                            0LL);
  v10 = 0;
  v11 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BuiltHWPrimitiveEntry, 0x10Du, 0LL);
    return v11;
  }
  WARPDrawListEntryParams::WARPDrawListEntryParams((WARPDrawListEntryParams *)&v50);
  memset_0(&v50, 0, 0xF8uLL);
  if ( a4 )
  {
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)a2, a4, &v55, v12);
    LODWORD(v15) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                     (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                     v13,
                     v14);
  }
  else
  {
    v15 = a2[4];
    *(_OWORD *)&v55.m11 = *(_OWORD *)a2;
  }
  v55.dx = v15;
  v16 = *((_DWORD *)this + 3) == 1;
  v50 = (_DWORD)this[3] & 0xFFFFFF9F | 0x40;
  if ( v16 )
  {
    *(_QWORD *)&v55.m[2][0] = 0LL;
  }
  else if ( ((_BYTE)a2[6] & 6) == 6 )
  {
    LODWORD(v55.dy) = 1;
  }
  else if ( ((_BYTE)a2[6] & 2) != 0 )
  {
    LODWORD(v55.dy) = 2;
  }
  else
  {
    dy = v55.dy;
    if ( ((_BYTE)a2[6] & 4) != 0 )
      LODWORD(dy) = 3;
    v55.dy = dy;
  }
  v18 = this[2];
  v46 = 0LL;
  if ( !*((_BYTE *)v18 + 32) )
    goto LABEL_18;
  v19 = CCpuClip::ResolveClip(v18, &v47);
  v11 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x148u, 0LL);
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v47 + 24LL))(v47, 0LL, &v46);
    v11 = v21;
    if ( v21 >= 0 )
    {
      v51 = v46;
LABEL_18:
      if ( a3 )
      {
        v23 = *(_OWORD *)a3;
        v24 = *((_QWORD *)a3 + 3);
        v25 = this[4];
        v48 = (__int64 *)v25;
        v58[93] = 1;
        v56 = v23;
        if ( v24 )
        {
          v52 = v24;
          v53 = &v56;
        }
        v54 = *((_QWORD *)a3 + 4);
        if ( *((_DWORD *)this + 569) )
        {
          if ( a4 )
          {
            v26 = *(_QWORD *)&a4[1].left;
            *(struct D2D_RECT_F *)&matrix.m11 = *a4;
            *(_QWORD *)&matrix.m[2][0] = v26;
            D2D1InvertMatrix(&matrix);
          }
          v47 = (const struct PrimitiveVertexAttributesDesc *)((char *)a3 + 40);
          if ( *((__int64 *)a3 + 5) > 0 )
          {
            v27 = 0LL;
            v28 = v58;
            do
            {
              v29 = *((_DWORD *)this + 569);
              if ( _bittest(&v29, v10) )
              {
                *(_QWORD *)&v49.left = gsl::span<PrimitiveUVDesc,-1>::operator[]((unsigned __int64 *)v47, v27);
                if ( memcmp_0(*(const void **)&v49.left, &unk_18033BE70, 0x24uLL) )
                {
                  v30 = 80 * v27;
                  v31 = (__int64)v25 + 2 * v10;
                  v32 = *(_BYTE *)(v10 + v31 + 66);
                  v44 = *(_WORD *)(v10 + v31 + 64);
                  CDrawListBitmap::operator=((__int64 *)&v57[v30], &v48[2 * v10 + 2 + v10]);
                  *((_DWORD *)v28 - 1) = ExtendMode::ToD2D1ExtendMode(HIBYTE(v44));
                  *(_DWORD *)v28 = ExtendMode::ToD2D1ExtendMode(v32);
                  *((_DWORD *)v28 + 1) = InterpolationMode::ToD2D1InterpolationMode(v44);
                  v33 = *(_QWORD *)&v49.left;
                  v34 = **(_DWORD **)&v49.left;
                  v35 = (__m128)*(unsigned int *)(*(_QWORD *)&v49.left + 28LL);
                  DWORD1(v59) = *(_DWORD *)(*(_QWORD *)&v49.left + 4LL);
                  HIDWORD(v59) = *(_DWORD *)(*(_QWORD *)&v49.left + 16LL);
                  v36 = (__m128)*(unsigned int *)(*(_QWORD *)&v49.left + 24LL);
                  LODWORD(v59) = v34;
                  DWORD2(v59) = *(_DWORD *)(*(_QWORD *)&v49.left + 12LL);
                  *(_OWORD *)(v28 - 44) = v59;
                  *(_QWORD *)(v28 - 28) = _mm_unpacklo_ps(v36, v35).m128_u64[0];
                  if ( a4 )
                  {
                    D2D1::Matrix3x2F::SetProduct(
                      (D2D1::Matrix3x2F *)&v59,
                      (const struct D2D1::Matrix3x2F *)&matrix,
                      (const struct D2D1::Matrix3x2F *)&v57[v30 + 24]);
                    v37 = v60;
                    *(_OWORD *)(v28 - 44) = v59;
                    *(_QWORD *)(v28 - 28) = v37;
                  }
                  v49 = (struct D2D_RECT_F)_xmm;
                  v38 = AreEqual((const struct D2D_RECT_F *)(v33 + 36), &v49);
                  v25 = (CCpuClip *)v48;
                  if ( !v38 )
                  {
                    v28[8] = 1;
                    *(_OWORD *)(v28 - 20) = *v39;
                  }
                }
              }
              ++v10;
              v28 += 80;
              v27 = (int)v10;
            }
            while ( (int)v10 < *(_QWORD *)v47 );
          }
        }
      }
      else
      {
        v56 = _xmm;
      }
      v45 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v45);
      v40 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)&v50, &v45);
      v11 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x196u, 0LL);
      }
      else
      {
        v42 = v45;
        *(_QWORD *)detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                     this + 5,
                     (this[6] - this[5]) >> 3) = v42;
        v45 = 0LL;
      }
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v45);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x14Au, 0LL);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
LABEL_23:
  `vector destructor iterator'(
    v57,
    80LL,
    2LL,
    (void (__fastcall *)(char *))WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc);
  return v11;
}
