/*
 * XREFs of ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x18012A750
 * Callers:
 *     Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x180108CA8 (Windows--Internal--Holographic--PosePredictionHelpers--InterpolatePoses.c)
 * Callees:
 *     ??$SE3_mult_a_binv@M@ST@@YA?AU?$SE3@M@0@AEBU10@0@Z @ 0x18011B004 (--$SE3_mult_a_binv@M@ST@@YA-AU-$SE3@M@0@AEBU10@0@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18012A220 (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x18012A38C (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x18012A4E4 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

_OWORD *__fastcall ST::SE3_interpolate<float>(_OWORD *a1, __int64 a2, __int64 a3, float a4)
{
  float *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 i; // rax
  _OWORD *result; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD v13[3]; // [rsp+28h] [rbp-29h] BYREF
  _OWORD v14[3]; // [rsp+58h] [rbp+7h] BYREF

  v6 = ST::SE3_mult_a_binv<float>((__int64)v14, a3, a2);
  v7 = *((_OWORD *)v6 + 1);
  v13[0] = *(_OWORD *)v6;
  v8 = *((_OWORD *)v6 + 2);
  v13[1] = v7;
  v13[2] = v8;
  ST::SE3_log<float>((float *)v14, (float *)v13);
  for ( i = 0LL; i < 6; ++i )
    *((float *)v14 + i) = a4 * *((float *)v14 + i);
  ST::SE3_exp<float>((float *)v13, (float *)v14);
  ST::SE3_mult<float>((__int64)v14, (__int64)v13, a2);
  result = a1;
  v11 = v14[1];
  *a1 = v14[0];
  v12 = v14[2];
  a1[1] = v11;
  a1[2] = v12;
  return result;
}
