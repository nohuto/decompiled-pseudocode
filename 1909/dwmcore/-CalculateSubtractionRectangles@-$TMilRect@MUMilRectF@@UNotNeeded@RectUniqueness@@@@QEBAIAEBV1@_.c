/*
 * XREFs of ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800CF7F8
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18007C3E0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
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
  int v8; // eax
  float v9; // xmm1_4
  float v10; // xmm1_4
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm1_4
  __int64 v14; // r8
  __int64 v16; // rcx
  int v17; // xmm0_4

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
      v8 = *((_DWORD *)a2 + 2);
    }
    else
    {
      *(float *)a4 = *a1;
      v8 = *((_DWORD *)a1 + 2);
    }
    *(_DWORD *)(a4 + 8) = v8;
  }
  v9 = *a1;
  if ( *a2 > *a1 )
  {
    v16 = 2LL * v5;
    *(float *)(a4 + 8 * v16) = v9;
    *(float *)(a4 + 8 * v16 + 8) = *a2;
    if ( a3 )
    {
      *(float *)(a4 + 16LL * v5 + 4) = a1[1];
      v17 = *((_DWORD *)a1 + 3);
    }
    else
    {
      *(float *)(a4 + 16LL * v5 + 4) = a2[1];
      v17 = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(a4 + 16LL * v5++ + 12) = v17;
  }
  v10 = a2[2];
  if ( a1[2] > v10 )
  {
    if ( v5 < 4 )
    {
      v11 = 2LL * v5;
      *(float *)(a4 + 8 * v11) = v10;
      *(float *)(a4 + 8 * v11 + 8) = a1[2];
      if ( a3 )
      {
        *(float *)(a4 + 16LL * v5 + 4) = a1[1];
        v12 = *((_DWORD *)a1 + 3);
      }
      else
      {
        *(float *)(a4 + 16LL * v5 + 4) = a2[1];
        v12 = *((_DWORD *)a2 + 3);
      }
      *(_DWORD *)(a4 + 16LL * v5 + 12) = v12;
    }
    ++v5;
  }
  v13 = a2[3];
  if ( a1[3] > v13 )
  {
    if ( v5 < 4 )
    {
      v14 = 2LL * v5;
      *(float *)(a4 + 8 * v14 + 4) = v13;
      *(float *)(a4 + 8 * v14 + 12) = a1[3];
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
