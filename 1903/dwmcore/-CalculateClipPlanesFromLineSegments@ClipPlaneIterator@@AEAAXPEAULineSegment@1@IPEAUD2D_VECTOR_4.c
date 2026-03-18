/*
 * XREFs of ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x18017A6A8
 * Callers:
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18017AACC (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18017AB9C (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

void __fastcall ClipPlaneIterator::CalculateClipPlanesFromLineSegments(
        ClipPlaneIterator *this,
        struct ClipPlaneIterator::LineSegment *a2,
        unsigned int a3,
        struct D2D_VECTOR_4F *a4)
{
  __int64 v6; // rdi
  float *v7; // rbx
  __int64 v8; // r14
  signed __int64 v9; // rsi
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm9_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm10_4
  float v25; // xmm1_4
  __int128 v26; // [rsp+20h] [rbp-78h]

  v6 = a3;
  if ( a3 )
  {
    DWORD2(v26) = 0;
    v7 = (float *)((char *)a2 + 8);
    v8 = a3;
    v9 = (char *)a4 - (char *)a2;
    do
    {
      v10 = *v7;
      v11 = v7[1];
      v12 = *v7 - *(v7 - 2);
      v13 = v11 - *(v7 - 1);
      if ( *(_QWORD *)v7 >= *((_QWORD *)v7 - 1) )
      {
        v10 = *(v7 - 2);
        v11 = *(v7 - 1);
      }
      v14 = _hypot(v12, v13);
      v15 = v13 / v14;
      v16 = v12 / v14;
      v17 = (float)(v16 * v10) + (float)(v15 * v11);
      v18 = v17 * v15;
      v19 = COERCE_FLOAT(LODWORD(v15) ^ _xmm) * *((float *)this + 4);
      v20 = v17 * v16;
      v21 = v11 - v18;
      v22 = v16 * *((float *)this + 4);
      v23 = v10 - v20;
      if ( (float)((float)(v22 * v21) + (float)(v19 * v23)) <= 0.0 )
        v24 = *(float *)&FLOAT_1_0;
      else
        v24 = FLOAT_N1_0;
      *(_QWORD *)&v26 = __PAIR64__(LODWORD(v22), LODWORD(v19));
      v25 = _hypot(v23, v21);
      *((float *)&v26 + 3) = v25 * v24;
      *(_OWORD *)((char *)v7 + v9 - 8) = v26;
      v7 += 4;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned int)v6 < 4 )
    memset_0(&a4[v6], 0, 16LL * (unsigned int)(4 - v6));
}
