/*
 * XREFs of ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x18012A6C4
 * Callers:
 *     Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x180108CA8 (Windows--Internal--Holographic--PosePredictionHelpers--InterpolatePoses.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1801091F8 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 * Callees:
 *     <none>
 */

void __fastcall ST::SE3_transform_direction3<float,float,float>(float *a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm1_4
  float v7; // xmm3_4

  v3 = a3[2];
  v4 = v3 * a2[8];
  v5 = (float)(a3[1] * a2[7]) + (float)(*a3 * a2[6]);
  v6 = v3 * a2[5];
  v7 = (float)(a3[1] * a2[4]) + (float)(*a3 * a2[3]);
  *a1 = (float)((float)(a3[1] * a2[1]) + (float)(*a3 * *a2)) + (float)(a3[2] * a2[2]);
  a1[2] = v5 + v4;
  a1[1] = v7 + v6;
}
