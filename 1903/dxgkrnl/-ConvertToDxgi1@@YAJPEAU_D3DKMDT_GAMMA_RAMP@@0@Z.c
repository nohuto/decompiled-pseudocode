/*
 * XREFs of ?ConvertToDxgi1@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0058928
 * Callers:
 *     ColorSpaceTransformConvert @ 0x1C000D914 (ColorSpaceTransformConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToDxgi1(struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned int v2; // r8d
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rbx
  __int64 v4; // rdi
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v5; // rcx
  int v6; // r9d
  int v7; // edx
  float *v8; // r10
  int v9; // esi
  __int64 v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  unsigned int v13; // eax

  v2 = 0;
  if ( a1->Type == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    pRgb256x3x16 = a1->Data.pRgb256x3x16;
    v4 = 1025LL;
    v5 = a2->Data.pRgb256x3x16;
    v6 = 0;
    v7 = 0;
    v8 = (float *)&v5->Red[14];
    *(_QWORD *)v5->Red = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
    *(_DWORD *)&v5->Red[4] = 1065353216;
    *(_QWORD *)&v5->Red[6] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)&v5->Red[10] = 0;
    do
    {
      v9 = v6;
      if ( v7 )
      {
        v10 = (unsigned int)(v6 + 1);
        v11 = (float)(1024 - v7);
        *(v8 - 1) = (float)((float)((float)(v7 * pRgb256x3x16->Red[v10]) + (float)((float)pRgb256x3x16->Red[v6] * v11))
                          * 0.0009765625)
                  / 65535.0;
        *v8 = (float)((float)((float)(v7 * pRgb256x3x16->Green[v10]) + (float)((float)pRgb256x3x16->Green[v6] * v11))
                    * 0.0009765625)
            / 65535.0;
        v12 = (float)((float)(v7 * pRgb256x3x16->Blue[v10]) + (float)((float)pRgb256x3x16->Blue[v6] * v11))
            * 0.0009765625;
      }
      else
      {
        *(v8 - 1) = (float)pRgb256x3x16->Red[v6] / 65535.0;
        *v8 = (float)pRgb256x3x16->Green[v6] / 65535.0;
        v12 = (float)pRgb256x3x16->Blue[v6];
      }
      v13 = v7 + 255;
      v8[1] = v12 / 65535.0;
      v8 += 3;
      ++v6;
      v7 += (unsigned int)(v7 + 255) < 0x400 ? 255 : -769;
      if ( v13 < 0x400 )
        v6 = v9;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
