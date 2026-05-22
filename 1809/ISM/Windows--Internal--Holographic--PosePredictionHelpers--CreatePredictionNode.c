/*
 * XREFs of Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1801091F8
 * Callers:
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180109580 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1801097B0 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18012A220 (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18012A2A0 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x18012A38C (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x18012A6C4 (--$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU-$SE3@M@0@QEBM@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

char __fastcall Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
        __int64 a1,
        float *a2,
        __int64 a3,
        float a4,
        __int64 a5)
{
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int128 v17; // xmm0
  float v18; // xmm4_4
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  char result; // al
  __int128 v22; // [rsp+28h] [rbp-61h] BYREF
  __int128 v23; // [rsp+38h] [rbp-51h]
  __int128 v24; // [rsp+48h] [rbp-41h]
  __int128 v25; // [rsp+58h] [rbp-31h] BYREF
  __int128 v26; // [rsp+68h] [rbp-21h]
  __int128 v27; // [rsp+78h] [rbp-11h]
  _DWORD v28[4]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v29; // [rsp+98h] [rbp+Fh] BYREF
  __int128 v30; // [rsp+A8h] [rbp+1Fh]
  __int128 v31; // [rsp+B8h] [rbp+2Fh]

  *(_OWORD *)a5 = *(_OWORD *)a1;
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a5 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a5 + 48) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a5 + 64) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a5 + 80) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a5 + 96) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a5 + 112) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a5 + 128) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a5 + 144) = *(_OWORD *)(a1 + 144);
  if ( a4 < 0.000000059600001 )
    return 0;
  v7 = (float)((float)(a2[20] * 0.5) * a4) * a4;
  v8 = a4 * a2[13];
  *(float *)&v22 = (float)((float)((float)(a2[18] * 0.5) * a4) * a4) + (float)(a4 * a2[12]);
  v9 = v7 + (float)(a4 * a2[14]);
  *((float *)&v22 + 1) = (float)((float)((float)(a2[19] * 0.5) * a4) * a4) + v8;
  v10 = a4 * a2[15];
  v11 = a2[21] * 0.5;
  *((float *)&v22 + 2) = v9;
  v12 = a2[22];
  v13 = (float)((float)(v11 * a4) * a4) + v10;
  v14 = a4 * a2[16];
  *((float *)&v22 + 3) = v13;
  v15 = (float)((float)((float)(v12 * 0.5) * a4) * a4) + v14;
  v16 = (float)(a2[23] * 0.5) * a4;
  v29 = *(_OWORD *)a2;
  v17 = *((_OWORD *)a2 + 2);
  v18 = a4 * a2[17];
  *(float *)&v23 = v15;
  v31 = v17;
  *((float *)&v23 + 1) = (float)(v16 * a4) + v18;
  v30 = *((_OWORD *)a2 + 1);
  ST::SE3_exp<float>(&v25, &v22);
  ST::SE3_mult<float>(&v25, &v25, &v29);
  v29 = v25;
  v30 = v26;
  v31 = v27;
  ST::SE3_invert<float>(&v25, &v29);
  *(_QWORD *)&v22 = __PAIR64__(HIDWORD(v25), v25);
  *((_QWORD *)&v22 + 1) = __PAIR64__(DWORD1(v25), DWORD2(v26));
  LODWORD(v23) = v26;
  *(_QWORD *)((char *)&v23 + 4) = __PAIR64__(DWORD2(v25), HIDWORD(v26));
  v24 = v27;
  HIDWORD(v23) = DWORD1(v26);
  v19 = v23;
  *(_OWORD *)(a5 + 36) = v22;
  v20 = v24;
  *(_OWORD *)(a5 + 52) = v19;
  *(_OWORD *)(a5 + 68) = v20;
  LODWORD(v19) = *(_DWORD *)(a1 + 36);
  DWORD1(v22) = *(_DWORD *)(a1 + 48);
  LODWORD(v20) = *(_DWORD *)(a1 + 72);
  LODWORD(v22) = v19;
  LODWORD(v19) = *(_DWORD *)(a1 + 60);
  DWORD1(v24) = v20;
  LODWORD(v23) = *(_DWORD *)(a1 + 52);
  LODWORD(v20) = *(_DWORD *)(a1 + 76);
  DWORD2(v22) = v19;
  HIDWORD(v22) = *(_DWORD *)(a1 + 40);
  LODWORD(v19) = *(_DWORD *)(a1 + 64);
  DWORD2(v24) = v20;
  HIDWORD(v23) = *(_DWORD *)(a1 + 56);
  LODWORD(v20) = *(_DWORD *)(a1 + 80);
  DWORD1(v23) = v19;
  LODWORD(v19) = *(_DWORD *)(a1 + 44);
  HIDWORD(v24) = v20;
  DWORD2(v23) = v19;
  LODWORD(v24) = *(_DWORD *)(a1 + 68);
  v25 = v22;
  v26 = v23;
  v27 = v24;
  ST::SE3_mult<float>(&v22, &v29, &v25);
  v29 = v22;
  v30 = v23;
  LODWORD(v19) = *(_DWORD *)(a1 + 132);
  v31 = v24;
  LODWORD(v20) = *(_DWORD *)(a1 + 136);
  v28[0] = v19;
  LODWORD(v19) = *(_DWORD *)(a1 + 140);
  v28[1] = v20;
  v28[2] = v19;
  ST::SE3_transform_direction3<float,float,float>(&v22, &v29, v28);
  result = 1;
  LODWORD(v19) = DWORD1(v22);
  *(_DWORD *)(a5 + 132) = v22;
  *(_QWORD *)(a5 + 136) = __PAIR64__(DWORD2(v22), v19);
  *(_QWORD *)a5 = a3;
  return result;
}
