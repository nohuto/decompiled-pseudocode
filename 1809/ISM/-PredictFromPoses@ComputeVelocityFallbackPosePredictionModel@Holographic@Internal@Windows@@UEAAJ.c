/*
 * XREFs of ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1801097B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18007D8EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x180108B88 (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1801091F8 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     ??$SE3_mult_a_binv@M@ST@@YA?AU?$SE3@M@0@AEBU10@0@Z @ 0x18011B004 (--$SE3_mult_a_binv@M@ST@@YA-AU-$SE3@M@0@AEBU10@0@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18012A2A0 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x18012A4E4 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel::PredictFromPoses(
        Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char *v10; // rax
  __int64 v11; // rdx
  char *v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  bool v15; // al
  bool v16; // r8
  bool v17; // cl
  bool v18; // dl
  bool v19; // r15
  bool v20; // r14
  unsigned __int64 v21; // rax
  __m128 v22; // xmm1
  __int128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __int128 *v27; // rax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 *v37; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  float v45; // xmm6_4
  float v46; // xmm7_4
  __m128 *v47; // rax
  __m128 v48; // xmm1
  __m128 v49; // xmm0
  __m128 v50; // xmm4
  __m128 v51; // xmm1
  __m128 v52; // xmm2
  __m128 v53; // xmm4
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  const char *v63; // [rsp+30h] [rbp-D8h]
  __m128 v64; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v65; // [rsp+48h] [rbp-C0h]
  __m128 v66; // [rsp+58h] [rbp-B0h]
  __m128 v67; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v68; // [rsp+78h] [rbp-90h]
  __int128 v69; // [rsp+88h] [rbp-80h]
  __m128 v70; // [rsp+98h] [rbp-70h] BYREF
  __m128 v71; // [rsp+A8h] [rbp-60h]
  __m128 v72; // [rsp+B8h] [rbp-50h]
  __int128 v73; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v74; // [rsp+D8h] [rbp-30h]
  __int128 v75; // [rsp+E8h] [rbp-20h]
  __int128 v76; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v77; // [rsp+108h] [rbp+0h]
  __int128 v78; // [rsp+118h] [rbp+10h]
  __int128 v79; // [rsp+128h] [rbp+20h] BYREF
  __int128 v80; // [rsp+138h] [rbp+30h]
  __int128 v81; // [rsp+148h] [rbp+40h]
  __int128 v82; // [rsp+158h] [rbp+50h]
  __int128 v83; // [rsp+168h] [rbp+60h]
  __int128 v84; // [rsp+178h] [rbp+70h]
  __int128 v85; // [rsp+188h] [rbp+80h]
  __int128 v86; // [rsp+198h] [rbp+90h]
  __int128 v87; // [rsp+1A8h] [rbp+A0h]
  __int128 v88; // [rsp+1B8h] [rbp+B0h]
  _OWORD v89[6]; // [rsp+1C8h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  if ( !a2 )
  {
    v7 = 217LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
      (const char *)v8);
    return v8;
  }
  if ( !a5 )
  {
    v7 = 218LL;
    goto LABEL_3;
  }
  if ( a3 < 2 )
  {
    v10 = "Incorrect number of poses provided";
    v11 = 220LL;
LABEL_10:
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
      (const char *)0x80070057LL,
      (unsigned __int16 *)v10,
      v63);
    return v8;
  }
  v12 = (char *)a2 + 160;
  v13 = *((_QWORD *)a2 + 20);
  if ( *(_QWORD *)a2 > v13 )
  {
    v10 = "Poses incorrectly ordered";
    v11 = 224LL;
    goto LABEL_10;
  }
  if ( v13 > a4 )
  {
    v10 = "timestamp predates poses";
    v11 = 225LL;
    goto LABEL_10;
  }
  v14 = *((_DWORD *)a2 + 4);
  v15 = (v14 & 4) == 0;
  v16 = (v14 & 1) != 0 && (v12[16] & 1) != 0;
  v17 = (v14 & 0x10) == 0;
  v18 = (v14 & 2) != 0 && (v12[16] & 2) != 0;
  v19 = v15 && v16;
  v20 = v17 && v18;
  v21 = 0LL;
  v22 = *(__m128 *)((char *)a2 + 52);
  v67 = *(__m128 *)((char *)a2 + 36);
  v23 = *(_OWORD *)((char *)a2 + 68);
  v68 = v22;
  v24 = *(__m128 *)(v12 + 52);
  v69 = v23;
  v25 = *(__m128 *)(v12 + 36);
  v71 = v24;
  v70 = v25;
  v26 = *(__m128 *)(v12 + 68);
  v73 = `ST::SE3_identity<float>'::`2'::id;
  v72 = v26;
  v75 = xmmword_180158080;
  v74 = xmmword_180158070;
  do
  {
    *((_DWORD *)&v76 + v21) = 0;
    *((_DWORD *)&v77 + v21++ + 2) = 0;
  }
  while ( v21 < 6 );
  if ( v19 || v20 )
  {
    v37 = PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v89, (__int64)&v67);
    v73 = *v37;
    v74 = v37[1];
    v75 = v37[2];
    v76 = v37[3];
    v77 = v37[4];
    v38 = *(_OWORD *)a2;
    v78 = v37[5];
    v39 = *((_OWORD *)a2 + 1);
    v79 = v38;
    v40 = *((_OWORD *)a2 + 2);
    v80 = v39;
    v41 = *((_OWORD *)a2 + 3);
    v81 = v40;
    v42 = *((_OWORD *)a2 + 4);
    v82 = v41;
    v43 = *((_OWORD *)a2 + 5);
    v83 = v42;
    v44 = *((_OWORD *)a2 + 6);
    v84 = v43;
    v35 = *((_OWORD *)a2 + 8);
    v85 = v44;
    v86 = *((_OWORD *)a2 + 7);
    v36 = *((_OWORD *)a2 + 9);
  }
  else
  {
    v27 = PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v89, (__int64)&v70);
    v73 = *v27;
    v74 = v27[1];
    v75 = v27[2];
    v76 = v27[3];
    v77 = v27[4];
    v28 = *(_OWORD *)v12;
    v78 = v27[5];
    v29 = *((_OWORD *)v12 + 1);
    v79 = v28;
    v30 = *((_OWORD *)v12 + 2);
    v80 = v29;
    v31 = *((_OWORD *)v12 + 3);
    v81 = v30;
    v32 = *((_OWORD *)v12 + 4);
    v82 = v31;
    v33 = *((_OWORD *)v12 + 5);
    v83 = v32;
    v34 = *((_OWORD *)v12 + 6);
    v84 = v33;
    v35 = *((_OWORD *)v12 + 8);
    v85 = v34;
    v86 = *((_OWORD *)v12 + 7);
    v36 = *((_OWORD *)v12 + 9);
  }
  v87 = v35;
  v88 = v36;
  v45 = (double)((int)a4 - (int)v79) / (double)(int)qword_180193A58;
  if ( v45 <= 0.0 )
  {
    v54 = v80;
    *(_OWORD *)a5 = v79;
    v55 = v81;
    *((_OWORD *)a5 + 1) = v54;
    v56 = v82;
    *((_OWORD *)a5 + 2) = v55;
    v57 = v83;
    *((_OWORD *)a5 + 3) = v56;
    v58 = v84;
    *((_OWORD *)a5 + 4) = v57;
    v59 = v85;
    *((_OWORD *)a5 + 5) = v58;
    v60 = v86;
    *((_OWORD *)a5 + 6) = v59;
    v61 = v87;
    *((_OWORD *)a5 + 7) = v60;
    v62 = v88;
    *((_OWORD *)a5 + 8) = v61;
    *((_OWORD *)a5 + 9) = v62;
  }
  else
  {
    if ( !v19 && !v20 )
      goto LABEL_43;
    v64.m128_u64[0] = __PAIR64__(v67.m128_u32[3], v67.m128_u32[0]);
    v64.m128_u64[1] = __PAIR64__(v67.m128_u32[1], v68.m128_u32[2]);
    v65.m128_u64[0] = __PAIR64__(v68.m128_u32[3], v68.m128_u32[0]);
    v65.m128_u64[1] = __PAIR64__(v68.m128_u32[1], v67.m128_u32[2]);
    v67 = v64;
    v68 = v65;
    ST::SE3_invert<float>(v89, &v67);
    v64.m128_u64[0] = __PAIR64__(v70.m128_u32[3], v70.m128_u32[0]);
    v64.m128_u64[1] = __PAIR64__(v70.m128_u32[1], v71.m128_u32[2]);
    v65.m128_u64[0] = __PAIR64__(v71.m128_u32[3], v71.m128_u32[0]);
    v65.m128_u64[1] = __PAIR64__(v71.m128_u32[1], v70.m128_u32[2]);
    v66 = v72;
    v70 = v64;
    v71 = v65;
    ST::SE3_invert<float>(&v64, &v70);
    v46 = (double)(*(_DWORD *)v12 - *(_DWORD *)a2) / (double)(int)qword_180193A58;
    if ( v46 >= 0.000000059600001 )
    {
      v47 = (__m128 *)ST::SE3_mult_a_binv<float>(&v70, &v64, v89);
      v48 = v47[1];
      v64 = *v47;
      v49 = v47[2];
      v65 = v48;
      v66 = v49;
      ST::SE3_log<float>(&v76, &v64);
      v50 = (__m128)LODWORD(FLOAT_1_0);
      v51 = (__m128)(unsigned int)v77;
      v52 = (__m128)DWORD1(v77);
      v50.m128_f32[0] = 1.0 / v46;
      v53 = _mm_shuffle_ps(v50, v50, 0);
      v51.m128_f32[0] = *(float *)&v77 * v53.m128_f32[0];
      v52.m128_f32[0] = *((float *)&v77 + 1) * v53.m128_f32[0];
      v67 = _mm_mul_ps((__m128)v76, v53);
      *(_QWORD *)&v77 = _mm_unpacklo_ps(v51, v52).m128_u64[0];
      v76 = (__int128)v67;
    }
    if ( !v19 )
    {
LABEL_43:
      if ( (v80 & 4) != 0 )
      {
        LODWORD(v76) = DWORD1(v84);
        *(_QWORD *)((char *)&v76 + 4) = *((_QWORD *)&v84 + 1);
      }
    }
    if ( !v20 && (v80 & 0x10) != 0 )
    {
      HIDWORD(v76) = v85;
      *(_QWORD *)&v77 = *(_QWORD *)((char *)&v85 + 4);
    }
    if ( !Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
            (__int64)&v79,
            (float *)&v73,
            a4,
            v45,
            (__int64)a5) )
    {
      v8 = -2147418113;
      v7 = 296LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
