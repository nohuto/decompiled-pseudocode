/*
 * XREFs of ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18012A2A0
 * Callers:
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x180108B88 (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x180108CA8 (Windows--Internal--Holographic--PosePredictionHelpers--InterpolatePoses.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1801091F8 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1801097B0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ST::mult_Ax_3x3_float_ @ 0x18012A838 (ST--mult_Ax_3x3_float_.c)
 */

__int64 __fastcall ST::SE3_invert<float>(_DWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  _DWORD *v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // rsi
  __int64 v10; // rbp
  _DWORD *v11; // rbx
  _DWORD *v12; // rdi
  int v13; // xmm0_4
  __int64 result; // rax
  _DWORD *v15; // rcx

  v2 = 0LL;
  v5 = a1;
  v6 = 0LL;
  v7 = a2 - (_QWORD)a1;
  v8 = 1;
  v9 = 3LL;
  do
  {
    *a1 = *(_DWORD *)((char *)a1 + v7);
    if ( v8 < 3 )
    {
      v10 = (unsigned int)(3 - v8);
      v11 = &v5[v6 + 1 + v2];
      v12 = &v5[v6 + 3 + v2];
      do
      {
        v13 = *(_DWORD *)((char *)v11 + v7);
        *v11++ = *(_DWORD *)((char *)v12 + v7);
        *v12 = v13;
        v12 += 3;
        --v10;
      }
      while ( v10 );
    }
    ++v8;
    ++v2;
    a1 += 4;
    v6 += 3LL;
    --v9;
  }
  while ( v9 );
  result = ST::mult_Ax_3x3_float_(v5 + 9, v5, a2 + 36);
  *v15 ^= _xmm;
  v15[1] ^= _xmm;
  v15[2] ^= _xmm;
  return result;
}
