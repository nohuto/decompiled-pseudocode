/*
 * XREFs of PhysicalToLogicalInPlaceRect @ 0x1C002C04C
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C002B4F4 (IntersectWithParents.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhysicalToLogicalInPlaceRect(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  float *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  __m128i v14; // xmm0
  __m128i v15; // xmm1

  v2 = 0;
  if ( *(_QWORD *)(a1 + 200) && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v6 = *(_QWORD *)(a1 + 200);
    v2 = 1;
    v7 = (int)*(float *)(v6 + 48);
    v8 = -(int)*(float *)(v6 + 52);
    a2[3] -= (int)*(float *)(v6 + 52);
    v9 = -v7;
    *a2 += v9;
    a2[2] += v9;
    a2[1] += v8;
    v10 = *(float **)(a1 + 200);
    v11 = 1.0 / *v10;
    v12 = 1.0 / v10[5];
    v13 = (float)a2[1];
    v14 = _mm_cvtsi32_si128(a2[2]);
    *a2 = (int)(float)((float)*a2 * v11);
    LODWORD(v10) = (int)(float)(v13 * v12);
    v15 = _mm_cvtsi32_si128(a2[3]);
    a2[1] = (int)v10;
    a2[2] = (int)(float)(_mm_cvtepi32_ps(v14).m128_f32[0] * v11);
    a2[3] = (int)(float)(_mm_cvtepi32_ps(v15).m128_f32[0] * v12);
  }
  return v2;
}
