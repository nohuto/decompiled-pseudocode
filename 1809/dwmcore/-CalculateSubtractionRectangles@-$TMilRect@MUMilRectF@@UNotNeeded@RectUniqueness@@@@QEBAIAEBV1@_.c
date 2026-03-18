/*
 * XREFs of ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180065EA0
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800AB640 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
        float *a1,
        float *a2,
        char a3,
        __int64 a4)
{
  float v4; // xmm1_4
  unsigned int v5; // r10d
  float v8; // xmm1_4
  __int64 v9; // rcx
  int v10; // xmm0_4
  float v11; // xmm1_4
  __int64 v12; // rcx
  int v13; // eax
  float v14; // xmm1_4
  __int64 v15; // r8
  int v17; // eax

  v4 = a1[1];
  v5 = 0;
  if ( a2[1] > v4 )
  {
    *(float *)(a4 + 4) = v4;
    v5 = 1;
    *(float *)(a4 + 12) = a2[1];
    if ( a3 )
    {
      *(float *)a4 = *a2;
      v17 = *((_DWORD *)a2 + 2);
    }
    else
    {
      *(float *)a4 = *a1;
      v17 = *((_DWORD *)a1 + 2);
    }
    *(_DWORD *)(a4 + 8) = v17;
  }
  v8 = *a1;
  if ( *a2 > *a1 )
  {
    v9 = 2LL * v5;
    *(float *)(a4 + 8 * v9) = v8;
    *(float *)(a4 + 8 * v9 + 8) = *a2;
    if ( a3 )
    {
      *(float *)(a4 + 16LL * v5 + 4) = a1[1];
      v10 = *((_DWORD *)a1 + 3);
    }
    else
    {
      *(float *)(a4 + 16LL * v5 + 4) = a2[1];
      v10 = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(a4 + 16LL * v5++ + 12) = v10;
  }
  v11 = a2[2];
  if ( a1[2] > v11 )
  {
    if ( v5 < 4 )
    {
      v12 = 2LL * v5;
      *(float *)(a4 + 8 * v12) = v11;
      *(float *)(a4 + 8 * v12 + 8) = a1[2];
      if ( a3 )
      {
        *(float *)(a4 + 16LL * v5 + 4) = a1[1];
        v13 = *((_DWORD *)a1 + 3);
      }
      else
      {
        *(float *)(a4 + 16LL * v5 + 4) = a2[1];
        v13 = *((_DWORD *)a2 + 3);
      }
      *(_DWORD *)(a4 + 16LL * v5 + 12) = v13;
    }
    ++v5;
  }
  v14 = a2[3];
  if ( a1[3] > v14 )
  {
    if ( v5 < 4 )
    {
      v15 = 2LL * v5;
      *(float *)(a4 + 8 * v15 + 4) = v14;
      *(float *)(a4 + 8 * v15 + 12) = a1[3];
      if ( a3 )
      {
        *(float *)(a4 + 16LL * v5) = *a2;
        *(float *)(a4 + 16LL * v5 + 8) = a2[2];
      }
      else
      {
        *(float *)(a4 + 16LL * v5) = *a1;
        *(float *)(a4 + 16LL * v5 + 8) = a1[2];
      }
    }
    ++v5;
  }
  return v5;
}
