/*
 * XREFs of ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180028814 (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x180005B98 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000DF10 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000E0C8 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180015B7C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180026010 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18005C6C4 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B5920 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0WARPDrawListEntryParams@@QEAA@XZ @ 0x180181984 (--0WARPDrawListEntryParams@@QEAA@XZ.c)
 *     ??A?$span@UPrimitiveUVDesc@@$0?0@gsl@@QEBAAEAUPrimitiveUVDesc@@_J@Z @ 0x180181AB8 (--A-$span@UPrimitiveUVDesc@@$0-0@gsl@@QEBAAEAUPrimitiveUVDesc@@_J@Z.c)
 *     ?push_back@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVCDrawListEntry@@@Z @ 0x1801822B4 (-push_back@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x180182790 (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x180186088 (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertWARP(
        struct CWARPDrawListEntry **this,
        FLOAT *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_RECT_F *a4)
{
  int BuiltHWPrimitiveEntry; // eax
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned int v11; // ebx
  struct D2D_RECT_F *v12; // r9
  float *v13; // rdx
  const struct D2D_MATRIX_3X2_F *v14; // r8
  FLOAT v15; // eax
  bool v16; // zf
  FLOAT dy; // eax
  CCpuClip *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rax
  struct CWARPDrawListEntry *v25; // rbx
  __int64 v26; // xmm1_8
  unsigned int v27; // r12d
  _BYTE *v28; // r14
  int v29; // eax
  __int64 v30; // r13
  char *v31; // rdx
  unsigned __int8 v32; // bl
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // xmm0_4
  __m128 v37; // xmm3
  __m128 v38; // xmm1
  __int64 v39; // xmm1_8
  _OWORD *v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  struct CWARPDrawListEntry *v44; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v45; // [rsp+38h] [rbp-C8h]
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  struct CShape *v47; // [rsp+48h] [rbp-B8h] BYREF
  struct D2D_RECT_F v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  __int128 *v52; // [rsp+78h] [rbp-88h]
  struct D2D_MATRIX_3X2_F v53; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+98h] [rbp-68h] BYREF
  char v55[68]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v56[100]; // [rsp+ECh] [rbp-14h] BYREF
  __int128 v57; // [rsp+150h] [rbp+50h] BYREF
  __int64 v58; // [rsp+160h] [rbp+60h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+168h] [rbp+68h] BYREF

  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListEntryBuilder *)this,
                            0,
                            0LL,
                            0LL);
  v10 = 0LL;
  v11 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BuiltHWPrimitiveEntry, 0xDCu);
    return v11;
  }
  WARPDrawListEntryParams::WARPDrawListEntryParams((WARPDrawListEntryParams *)&v49);
  memset_0(&v49, 0, 0xF0uLL);
  if ( a4 )
  {
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)a2, a4, &v53, v12);
    LODWORD(v15) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                     (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                     v13,
                     v14);
  }
  else
  {
    v15 = a2[4];
    *(_OWORD *)&v53.m11 = *(_OWORD *)a2;
  }
  v53.dx = v15;
  v16 = *((_DWORD *)this + 3) == 1;
  v49 = (_DWORD)this[3] & 0xFFFFFF9F | 0x40;
  if ( v16 )
  {
    *(_QWORD *)&v53.m[2][0] = 0LL;
  }
  else if ( ((_BYTE)a2[6] & 6) == 6 )
  {
    LODWORD(v53.dy) = 1;
  }
  else if ( ((_BYTE)a2[6] & 2) != 0 )
  {
    LODWORD(v53.dy) = 2;
  }
  else
  {
    dy = v53.dy;
    if ( ((_BYTE)a2[6] & 4) != 0 )
      LODWORD(dy) = 3;
    v53.dy = dy;
  }
  v18 = this[2];
  v46 = 0LL;
  if ( !*((_BYTE *)v18 + 32) )
    goto LABEL_18;
  v19 = CCpuClip::ResolveClip(v18, &v47);
  v11 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x117u);
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v47 + 24LL))(v47, 0LL, &v46);
    v11 = v21;
    if ( v21 >= 0 )
    {
      v50 = v46;
LABEL_18:
      if ( a3 )
      {
        v23 = *(_OWORD *)a3;
        v24 = *((_QWORD *)a3 + 3);
        v25 = this[4];
        v44 = v25;
        v56[93] = 1;
        v54 = v23;
        if ( v24 )
        {
          v51 = v24;
          v52 = &v54;
        }
        if ( *((_DWORD *)this + 569) )
        {
          if ( a4 )
          {
            v26 = *(_QWORD *)&a4[1].left;
            *(struct D2D_RECT_F *)&matrix.m11 = *a4;
            *(_QWORD *)&matrix.m[2][0] = v26;
            D2D1InvertMatrix(&matrix);
          }
          v27 = 0;
          v47 = (const struct PrimitiveVertexAttributesDesc *)((char *)a3 + 32);
          if ( *((__int64 *)a3 + 4) > 0 )
          {
            v28 = v56;
            do
            {
              v29 = *((_DWORD *)this + 569);
              if ( _bittest(&v29, v27) )
              {
                *(_QWORD *)&v48.left = gsl::span<PrimitiveUVDesc,-1>::operator[]((__int64 *)v47, v10);
                if ( memcmp_0(*(const void **)&v48.left, &unk_1803076F8, 0x24uLL) )
                {
                  v30 = 80 * v10;
                  v31 = (char *)v25 + 2 * v27;
                  v32 = v31[v27 + 66];
                  v45 = *(_WORD *)&v31[v27 + 64];
                  CDrawListBitmap::operator=((__int64 *)&v55[v30], (__int64 *)v44 + 2 * v27 + v27 + 2);
                  *((_DWORD *)v28 - 1) = ExtendMode::ToD2D1ExtendMode(HIBYTE(v45));
                  v33 = ExtendMode::ToD2D1ExtendMode(v32);
                  LOBYTE(v34) = v45;
                  *(_DWORD *)v28 = v33;
                  *((_DWORD *)v28 + 1) = InterpolationMode::ToD2D1InterpolationMode(v34);
                  v35 = *(_QWORD *)&v48.left;
                  v36 = **(_DWORD **)&v48.left;
                  v37 = (__m128)*(unsigned int *)(*(_QWORD *)&v48.left + 28LL);
                  DWORD1(v57) = *(_DWORD *)(*(_QWORD *)&v48.left + 4LL);
                  HIDWORD(v57) = *(_DWORD *)(*(_QWORD *)&v48.left + 16LL);
                  v38 = (__m128)*(unsigned int *)(*(_QWORD *)&v48.left + 24LL);
                  LODWORD(v57) = v36;
                  DWORD2(v57) = *(_DWORD *)(*(_QWORD *)&v48.left + 12LL);
                  *(_OWORD *)(v28 - 44) = v57;
                  *(_QWORD *)(v28 - 28) = _mm_unpacklo_ps(v38, v37).m128_u64[0];
                  if ( a4 )
                  {
                    D2D1::Matrix3x2F::SetProduct(
                      (D2D1::Matrix3x2F *)&v57,
                      (const struct D2D1::Matrix3x2F *)&matrix,
                      (const struct D2D1::Matrix3x2F *)&v55[v30 + 24]);
                    v39 = v58;
                    *(_OWORD *)(v28 - 44) = v57;
                    *(_QWORD *)(v28 - 28) = v39;
                  }
                  v48 = (struct D2D_RECT_F)_xmm;
                  v25 = v44;
                  if ( !AreEqual((const struct D2D_RECT_F *)(v35 + 36), &v48) )
                  {
                    v28[8] = 1;
                    *(_OWORD *)(v28 - 20) = *v40;
                  }
                }
              }
              ++v27;
              v28 += 80;
              v10 = (int)v27;
            }
            while ( (int)v27 < *(_QWORD *)v47 );
          }
        }
      }
      else
      {
        v54 = _xmm;
      }
      v44 = 0LL;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v44);
      v41 = CWARPDrawListEntry::Create((const struct WARPDrawListEntryParams *)&v49, &v44);
      v11 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x162u);
      }
      else
      {
        *(_QWORD *)&v48.left = v44;
        detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::push_back(
          this + 5,
          &v48);
        v44 = 0LL;
      }
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x119u);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
LABEL_23:
  `vector destructor iterator'(
    v55,
    80LL,
    2LL,
    (void (__fastcall *)(char *))WARPDrawListEntryBitmapDesc::~WARPDrawListEntryBitmapDesc);
  return v11;
}
