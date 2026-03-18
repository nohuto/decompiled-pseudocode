/*
 * XREFs of ?GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180216470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180216550 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

void __fastcall CMeshGeometry2D::GetTextureBounds(__int64 a1, _OWORD *a2)
{
  unsigned int VertexCount; // eax
  double *v5; // rcx
  double v6; // xmm2_8
  double v7; // xmm1_8
  double v8; // xmm3_8
  double v9; // xmm4_8
  double *v10; // rcx
  __int64 v11; // rdx
  double v12; // xmm0_8
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm2_4

  if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
  {
    VertexCount = CMeshGeometry2D::GetVertexCount((CMeshGeometry2D *)a1);
    if ( VertexCount )
    {
      v5 = *(double **)(a1 + 136);
      v6 = *v5;
      v7 = v5[1];
      v8 = *v5;
      v9 = v7;
      if ( VertexCount > 1 )
      {
        v10 = v5 + 2;
        v11 = VertexCount - 1;
        do
        {
          if ( *v10 <= v8 )
            v8 = *v10;
          if ( v6 <= *v10 )
            v6 = *v10;
          v12 = v10[1];
          if ( v12 <= v9 )
            v9 = v10[1];
          if ( v7 <= v12 )
            v7 = v10[1];
          v10 += 2;
          --v11;
        }
        while ( v11 );
      }
      v13 = v8;
      v14 = v9;
      v15 = v7;
      v16 = v6;
    }
    else
    {
      v13 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      v14 = 0.0;
    }
    *(float *)(a1 + 100) = v14;
    *(float *)(a1 + 104) = v16;
    *(float *)(a1 + 108) = v15;
    *(float *)(a1 + 96) = v13;
    *(_DWORD *)(a1 + 72) &= ~2u;
  }
  *a2 = *(_OWORD *)(a1 + 96);
}
