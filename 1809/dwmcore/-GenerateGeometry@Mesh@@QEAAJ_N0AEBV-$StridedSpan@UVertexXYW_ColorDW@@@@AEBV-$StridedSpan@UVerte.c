/*
 * XREFs of ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18003B8B8
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x180066B34 (-GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800BAE9C (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180185618 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GenerateGeometry(
        Mesh *this,
        char a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        float *a6,
        __int16 a7,
        unsigned __int16 *a8,
        int *a9)
{
  char v9; // al
  unsigned int v10; // ebx
  float v14; // r15d
  int v15; // esi
  unsigned __int16 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rbx
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rax
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  int v32; // ecx
  float v33; // xmm0_4
  unsigned int v34; // ecx
  double v35; // xmm0_8
  float v36; // xmm1_4
  unsigned int v37; // ecx
  float v38; // xmm0_4
  __int16 v39; // ax
  int v41; // ecx
  float v42; // xmm0_4
  unsigned int v43; // ecx
  double v44; // xmm0_8
  float v45; // xmm1_4
  __int64 v46; // rcx
  int inited; // eax
  unsigned int v48; // ecx
  int v49; // edx
  unsigned int v50; // [rsp+20h] [rbp-30h]
  float v51; // [rsp+40h] [rbp-10h] BYREF
  float v52; // [rsp+44h] [rbp-Ch]
  float v53; // [rsp+48h] [rbp-8h]
  float v54; // [rsp+4Ch] [rbp-4h]
  int v55; // [rsp+80h] [rbp+30h] BYREF

  v9 = *((_BYTE *)this + 76);
  v10 = 0;
  v51 = 0.0;
  v55 = 0;
  v14 = 0.0;
  v15 = 0;
  if ( (v9 & 1) == 0 )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0xEB8u);
    return v10;
  }
  v16 = a8;
  if ( a2 )
  {
    v17 = *((_QWORD *)this + 3);
    if ( v17 && (v9 & 0x18) == 0 )
    {
      v18 = *(int *)(v17 + 128);
      if ( (int)v18 > 0 )
      {
        if ( *(__int64 *)(v17 + 112) <= 0 )
        {
          gsl::details::terminate(this);
          JUMPOUT(0x18003BBA1LL);
        }
        memcpy_0(a8, *(const void **)(v17 + 120), 2 * v18);
        v15 = *(_DWORD *)(*((_QWORD *)this + 3) + 128LL);
        v55 = v15;
      }
      goto LABEL_8;
    }
    inited = Mesh::InitMeshGraph(this);
    v10 = inited;
    if ( inited < 0 )
    {
      v50 = 3807;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, inited, v50);
      return v10;
    }
    v10 = 0;
    v49 = *(_DWORD *)(*((_QWORD *)this + 2) + 100LL)
        + 2 * (*(_DWORD *)(*((_QWORD *)this + 2) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 104LL));
    if ( v49 > 0 )
    {
      inited = Mesh::GenerateTriangles(this, v16, 3 * v49, &v55);
      v10 = inited;
      if ( inited < 0 )
      {
        v50 = 3815;
        goto LABEL_27;
      }
      v15 = v55;
      v10 = 0;
    }
  }
LABEL_8:
  v19 = a5;
  if ( *((int *)this + 3) > 0 )
  {
    v20 = 0;
    v21 = 0LL;
    do
    {
      v22 = *(_QWORD *)this;
      v23 = *a4;
      v24 = *((float *)this + 10) + *(float *)(v21 + *(_QWORD *)this);
      v25 = *(float *)(v21 + *(_QWORD *)this + 4) + *((float *)this + 11);
      v26 = v20 * *((_DWORD *)a4 + 2);
      v27 = v20 * *(_DWORD *)(v19 + 8);
      v28 = *(_QWORD *)v19;
      *(float *)(v27 + v28) = v24;
      *(float *)(v27 + v28 + 4) = v25;
      *(float *)(v26 + v23) = v24;
      *(float *)(v26 + v23 + 4) = v25;
      *(_DWORD *)(v26 + v23 + 8) = 1065353216;
      *(_DWORD *)(v27 + v28 + 8) = 0;
      *(_DWORD *)(v27 + v28 + 12) = 1065353216;
      v29 = *(float *)(v21 + v22 + 16) * 255.0;
      v30 = (float)(*(float *)(v21 + v22 + 20) * 255.0) + 6291456.25;
      v31 = *(float *)(v21 + v22 + 12) * 255.0;
      if ( *((char *)this + 76) < 0 )
      {
        v51 = (float)(*(float *)(v21 + v22 + 20) * 255.0) + 6291456.25;
        v41 = LODWORD(v30) << 23;
        v42 = v29 + 6291456.25;
        v52 = v42;
        v43 = (LODWORD(v42) << 15) | v41 & 0xFF00FFFF;
        v44 = v31;
        v45 = *(float *)(v21 + v22 + 8);
        *(float *)&v44 = v44 + 6291456.25;
        v53 = *(float *)&v44;
        v37 = ((int)(LODWORD(v44) << 10) >> 3) | v43 & 0xFFFF00FF;
        v38 = (float)(v45 * 255.0) + 6291456.25;
        v54 = v38;
      }
      else
      {
        v54 = (float)(*(float *)(v21 + v22 + 20) * 255.0) + 6291456.25;
        v32 = LODWORD(v30) << 23;
        v33 = v29 + 6291456.25;
        v53 = v33;
        v34 = (LODWORD(v33) << 15) | v32 & 0xFF00FFFF;
        v35 = v31;
        v36 = *(float *)(v21 + v22 + 8);
        *(float *)&v35 = v35 + 6291456.25;
        v52 = *(float *)&v35;
        v37 = ((int)(LODWORD(v35) << 10) >> 3) | v34 & 0xFFFF00FF;
        v38 = (float)(v36 * 255.0) + 6291456.25;
        v51 = v38;
      }
      ++v20;
      v21 += 24LL;
      *(_DWORD *)(v26 + v23 + 12) = ((int)(LODWORD(v38) << 10) >> 11) | v37 & 0xFFFFFF00;
      v14 = *((float *)this + 3);
    }
    while ( v20 < SLODWORD(v14) );
    v51 = *((float *)this + 3);
    v10 = 0;
  }
  if ( (*((_BYTE *)this + 76) & 0x40) != 0 )
  {
    Mesh::GenerateAntialiasBorder((_DWORD)this, a3, (_DWORD)a4, v19, (__int64)&v51, (__int64)v16);
    v14 = v51;
    v15 = v55;
  }
  v39 = a7;
  if ( a7 && v15 > 0 )
  {
    v46 = (unsigned int)v15;
    do
    {
      *v16++ += v39;
      --v46;
    }
    while ( v46 );
  }
  *a6 = v14;
  *a9 = v15;
  return v10;
}
