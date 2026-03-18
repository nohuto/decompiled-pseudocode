/*
 * XREFs of ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18005C5AC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x180053684 (-GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B6CC8 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x1801B9A7C (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1801BA068 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GenerateGeometry(
        Mesh *this,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        float *a6,
        __int16 a7,
        unsigned __int16 *a8,
        int *a9)
{
  char v9; // al
  float v13; // r15d
  int v14; // esi
  unsigned __int16 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  float v19; // xmm4_4
  int v20; // r9d
  double v21; // xmm5_8
  __int64 v22; // r10
  __int64 v23; // rdx
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  unsigned int v33; // ecx
  float v34; // xmm0_4
  double v35; // xmm0_8
  float v36; // xmm1_4
  __int16 v37; // ax
  unsigned int v38; // edi
  unsigned int v40; // eax
  __int64 v41; // r11
  __int64 v42; // rcx
  int inited; // eax
  unsigned int v44; // ecx
  int v45; // edx
  unsigned int v46; // [rsp+20h] [rbp-30h]
  int v47; // [rsp+30h] [rbp-20h]
  float v48; // [rsp+40h] [rbp-10h] BYREF
  float v49; // [rsp+44h] [rbp-Ch]
  int v50; // [rsp+48h] [rbp-8h]
  float v51; // [rsp+4Ch] [rbp-4h]
  int v52; // [rsp+80h] [rbp+30h] BYREF

  v9 = *((_BYTE *)this + 76);
  v48 = 0.0;
  v52 = 0;
  v13 = 0.0;
  v14 = 0;
  if ( (v9 & 1) == 0 )
  {
    v38 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0xEB8u, 0LL);
    return v38;
  }
  v15 = a8;
  if ( a2 )
  {
    v16 = *((_QWORD *)this + 3);
    if ( v16 && (v9 & 0x18) == 0 )
    {
      v17 = *(int *)(v16 + 128);
      if ( (int)v17 > 0 )
      {
        if ( !*(_QWORD *)(v16 + 112) )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        memcpy_0(a8, *(const void **)(v16 + 120), 2 * v17);
        v14 = *(_DWORD *)(*((_QWORD *)this + 3) + 128LL);
        v52 = v14;
      }
      goto LABEL_8;
    }
    inited = Mesh::InitMeshGraph(this);
    v38 = inited;
    if ( inited < 0 )
    {
      v46 = 3807;
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, inited, v46, 0LL);
      return v38;
    }
    v45 = *(_DWORD *)(*((_QWORD *)this + 2) + 100LL)
        + 2 * (*(_DWORD *)(*((_QWORD *)this + 2) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 104LL));
    if ( v45 > 0 )
    {
      inited = Mesh::GenerateTriangles(this, v15, 3 * v45, &v52);
      v38 = inited;
      if ( inited < 0 )
      {
        v46 = 3815;
        goto LABEL_26;
      }
      v14 = v52;
    }
  }
LABEL_8:
  v18 = a5;
  if ( *((int *)this + 3) > 0 )
  {
    v19 = FLOAT_255_0;
    v20 = 0;
    v21 = DOUBLE_6291456_25;
    v22 = 0LL;
    do
    {
      v23 = *(_QWORD *)this;
      v24 = *((float *)this + 10) + *(float *)(v22 + *(_QWORD *)this);
      v25 = *(float *)(v22 + *(_QWORD *)this + 4) + *((float *)this + 11);
      v26 = *(_QWORD *)a4 + v20 * *(_DWORD *)(a4 + 8);
      v27 = v20 * *(_DWORD *)(v18 + 8);
      v28 = *(_QWORD *)v18;
      *(float *)(v27 + v28) = v24;
      *(float *)(v27 + v28 + 4) = v25;
      *(float *)v26 = v24;
      *(float *)(v26 + 4) = v25;
      *(_DWORD *)(v26 + 8) = 1065353216;
      *(_DWORD *)(v27 + v28 + 8) = 0;
      *(_DWORD *)(v27 + v28 + 12) = 1065353216;
      v29 = v22 + v23;
      if ( *((char *)this + 76) < 0 )
      {
        v40 = ColorDWFromStraightColorF((const struct _D3DCOLORVALUE *)(v29 + 8));
        *(_DWORD *)(v41 + 12) = v40;
      }
      else
      {
        v30 = *(float *)(v29 + 16) * v19;
        v31 = (float)(*(float *)(v29 + 20) * v19) + v21;
        v32 = *(float *)(v29 + 12);
        v48 = v31;
        v33 = (LODWORD(v31) << 23) & 0xFF00FFFF;
        v34 = v30 + v21;
        v49 = v34;
        v35 = (float)(v32 * v19);
        v36 = *(float *)(v29 + 8);
        *(float *)&v35 = v35 + v21;
        v50 = LODWORD(v35);
        v51 = (float)(v36 * v19) + v21;
        *(_DWORD *)(v26 + 12) = ((int)(LODWORD(v51) << 10) >> 11) | ((int)(LODWORD(v35) << 10) >> 3) & 0xFFFFFF00 | ((LODWORD(v49) << 15) | v33) & 0xFFFF0000;
      }
      v13 = *((float *)this + 3);
      ++v20;
      v22 += 24LL;
    }
    while ( v20 < SLODWORD(v13) );
    v48 = *((float *)this + 3);
  }
  if ( (*((_BYTE *)this + 76) & 0x40) != 0 )
  {
    Mesh::GenerateAntialiasBorder((__int64)this, a3, (_QWORD *)a4, (_QWORD *)v18, (int *)&v48, (__int64)v15, v47, &v52);
    v13 = v48;
    v14 = v52;
  }
  v37 = a7;
  if ( a7 && v14 > 0 )
  {
    v42 = (unsigned int)v14;
    do
    {
      *v15++ += v37;
      --v42;
    }
    while ( v42 );
  }
  v38 = 0;
  *a6 = v13;
  *a9 = v14;
  return v38;
}
