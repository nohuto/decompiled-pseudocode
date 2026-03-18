/*
 * XREFs of ?ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0058C30
 * Callers:
 *     ColorSpaceTransformConvert @ 0x1C000D914 (ColorSpaceTransformConvert.c)
 * Callees:
 *     ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x1C0024B20 (-InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0024C00 (ColorSpaceTransformInitIdentityTransform.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ColorSpaceTransformCombine @ 0x1C0058D2C (ColorSpaceTransformCombine.c)
 */

__int64 __fastcall ConvertToMatrix_V2(struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned int v2; // ebx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rsi
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v6; // rdi
  float *v7; // r8
  __int64 v8; // rdi
  float *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = 0;
  if ( a1->Type == D3DDDI_GAMMARAMP_MATRIX_3x4 )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v6 = a1->Data.pRgb256x3x16;
    *(_DWORD *)pRgb256x3x16->Red = 1;
    memmove(&pRgb256x3x16->Red[2], &v6->Red[26], 0xC000uLL);
    v7 = (float *)&v6->Red[24];
    *(_DWORD *)&pRgb256x3x16[32].Red[2] = 1;
    v8 = (char *)v6 - (char *)pRgb256x3x16 - 49160;
    v9 = (float *)&pRgb256x3x16[32].Red[4];
    v10 = 3LL;
    do
    {
      v11 = 3LL;
      do
      {
        *v9 = *(float *)((char *)v9 + v8) * *v7;
        ++v9;
        --v11;
      }
      while ( v11 );
      v8 += 4LL;
      --v10;
    }
    while ( v10 );
    *(_DWORD *)&pRgb256x3x16[32].Red[22] = 2;
    InitializeIdentityLut((struct D3DDDI_DXGI_RGB *)&pRgb256x3x16[32].Red[24], 0x1000u, 0.0, 1.0);
  }
  else if ( (unsigned int)(a1->Type - 2) <= 1 )
  {
    ColorSpaceTransformInitIdentityTransform((__int64)a2);
    return (unsigned int)ColorSpaceTransformCombine(0LL, a1, a2);
  }
  return v2;
}
