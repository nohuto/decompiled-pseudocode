/*
 * XREFs of ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x1C0024B20
 * Callers:
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0024C00 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?ConvertToMatrix_3x4@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0058B10 (-ConvertToMatrix_3x4@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 *     ?ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0058C30 (-ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeIdentityLut(struct D3DDDI_DXGI_RGB *a1, unsigned int a2, float a3, float a4)
{
  float v4; // xmm3_4
  float *p_Green; // rax
  __int64 v6; // rcx

  v4 = (float)(a4 - a3) / (float)(int)(a2 - 1);
  if ( a2 )
  {
    p_Green = &a1->Green;
    v6 = a2;
    do
    {
      p_Green[1] = a3;
      *p_Green = a3;
      *(p_Green - 1) = a3;
      p_Green += 3;
      a3 = a3 + v4;
      --v6;
    }
    while ( v6 );
  }
  return 0LL;
}
