/*
 * XREFs of ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x180169FD0
 * Callers:
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x180154300 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x180158ED0 (Windows--Internal--Holographic--PosePredictionHelpers--InterpolatePoses.c)
 *     ??$SE3_interpolate@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1M@Z @ 0x180169CFC (--$SE3_interpolate@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1M@Z.c)
 *     ??$SE3_left_update@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x180169E38 (--$SE3_left_update@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 * Callees:
 *     ST::mult_Ax_3x3_float_ @ 0x18016A308 (ST--mult_Ax_3x3_float_.c)
 */

__int64 __fastcall ST::SE3_mult<float>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  float *v4; // rdx
  float v5; // xmm1_4
  float *v6; // r9
  float v7; // xmm0_4
  float v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = ST::mult_Ax_3x3_float_(v9, a2, a3 + 36);
  v5 = v9[1];
  v6[9] = v9[0] + v4[9];
  v7 = v9[2];
  v6[10] = v5 + v4[10];
  v6[11] = v7 + v4[11];
  return ST::mult_AB_3x3x3_float_(v6, v4, v3);
}
