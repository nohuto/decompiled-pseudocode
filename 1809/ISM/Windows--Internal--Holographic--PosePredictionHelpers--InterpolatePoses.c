/*
 * XREFs of Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x180108CA8
 * Callers:
 *     ?InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0_JPEAU5@@Z @ 0x180109790 (-InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18007D8EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18012A220 (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18012A2A0 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x18012A6C4 (--$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x18012A750 (--$SE3_interpolate@M@ST@@YA-AU-$SE3@M@0@AEBU10@0M@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm2_4
  float v14; // xmm6_4
  unsigned int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  int v20; // xmm0_4
  int v21; // xmm1_4
  unsigned int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm0_4
  int v28; // xmm1_4
  __int128 *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  const char *v34; // [rsp+30h] [rbp-D8h]
  __int128 v35; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+48h] [rbp-C0h]
  __int128 v37; // [rsp+58h] [rbp-B0h]
  __int128 v38; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+78h] [rbp-90h]
  __int128 v40; // [rsp+88h] [rbp-80h]
  __int128 v41; // [rsp+98h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-60h]
  __int128 v43; // [rsp+B8h] [rbp-50h]
  _DWORD v44[4]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v45[4]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v46[48]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  if ( a4 )
  {
    if ( *(_QWORD *)a1 > *(_QWORD *)a2 )
    {
      v10 = "Poses incorrectly ordered";
      v11 = 23LL;
LABEL_16:
      v8 = -2147024809;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
        (const char *)0x80070057LL,
        (unsigned __int16 *)v10,
        v34);
      return v8;
    }
    v12 = (float)(*(_DWORD *)a2 - *(_DWORD *)a1);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm) >= 0.00000011920929 )
    {
      v14 = (float)(a3 - *(_DWORD *)a1) / v12;
      if ( v14 < 0.0 || v14 > 1.0 )
      {
        v10 = "Timestamp outside valid range";
        v11 = 33LL;
        goto LABEL_16;
      }
      v15 = *(_DWORD *)(a1 + 48);
      LODWORD(v35) = *(_DWORD *)(a1 + 36);
      *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(*(_DWORD *)(a1 + 60), v15);
      v16 = *(_DWORD *)(a1 + 40);
      DWORD1(v37) = *(_DWORD *)(a1 + 72);
      v17 = *(_DWORD *)(a1 + 52);
      HIDWORD(v35) = v16;
      DWORD1(v36) = *(_DWORD *)(a1 + 64);
      v18 = *(_DWORD *)(a1 + 44);
      LODWORD(v36) = v17;
      v19 = *(_DWORD *)(a1 + 76);
      DWORD2(v36) = v18;
      v20 = *(_DWORD *)(a1 + 68);
      DWORD2(v37) = v19;
      v21 = *(_DWORD *)(a1 + 56);
      LODWORD(v37) = v20;
      HIDWORD(v36) = v21;
      HIDWORD(v37) = *(_DWORD *)(a1 + 80);
      v41 = v35;
      v42 = v36;
      v43 = v37;
      ST::SE3_invert<float>(v46, &v41);
      v22 = *(_DWORD *)(a2 + 48);
      LODWORD(v35) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(*(_DWORD *)(a2 + 60), v22);
      v23 = *(_DWORD *)(a2 + 40);
      DWORD1(v37) = *(_DWORD *)(a2 + 72);
      v24 = *(_DWORD *)(a2 + 52);
      HIDWORD(v35) = v23;
      DWORD1(v36) = *(_DWORD *)(a2 + 64);
      v25 = *(_DWORD *)(a2 + 44);
      LODWORD(v36) = v24;
      v26 = *(_DWORD *)(a2 + 76);
      DWORD2(v36) = v25;
      v27 = *(_DWORD *)(a2 + 68);
      DWORD2(v37) = v26;
      v28 = *(_DWORD *)(a2 + 56);
      LODWORD(v37) = v27;
      HIDWORD(v36) = v28;
      HIDWORD(v37) = *(_DWORD *)(a2 + 80);
      v41 = v35;
      v42 = v36;
      v43 = v37;
      ST::SE3_invert<float>(&v38, &v41);
      if ( v14 < 0.0 && v14 > 1.0 )
      {
        v8 = -2147418113;
        v9 = 49LL;
        goto LABEL_3;
      }
      v29 = (__int128 *)ST::SE3_interpolate<float>(&v35, v46, &v38);
      v30 = v29[1];
      v41 = *v29;
      v31 = v29[2];
      v42 = v30;
      v43 = v31;
      ST::SE3_invert<float>(&v38, &v41);
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a4 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a4 + 80) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(a4 + 96) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(a4 + 112) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(a4 + 128) = *(_OWORD *)(a1 + 128);
      LODWORD(v30) = v38;
      *(_OWORD *)(a4 + 144) = *(_OWORD *)(a1 + 144);
      LODWORD(v35) = v30;
      *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(DWORD2(v39), HIDWORD(v38));
      HIDWORD(v35) = DWORD1(v38);
      *(_QWORD *)&v36 = __PAIR64__(HIDWORD(v39), v39);
      *((_QWORD *)&v36 + 1) = __PAIR64__(DWORD1(v39), DWORD2(v38));
      v37 = v40;
      v32 = v36;
      *(_OWORD *)(a4 + 36) = v35;
      v33 = v37;
      *(_OWORD *)(a4 + 52) = v32;
      *(_OWORD *)(a4 + 68) = v33;
      LODWORD(v33) = *(_DWORD *)(a1 + 48);
      LODWORD(v35) = *(_DWORD *)(a1 + 36);
      DWORD2(v35) = *(_DWORD *)(a1 + 60);
      LODWORD(v32) = *(_DWORD *)(a1 + 40);
      DWORD1(v35) = v33;
      LODWORD(v33) = *(_DWORD *)(a1 + 72);
      HIDWORD(v35) = v32;
      LODWORD(v32) = *(_DWORD *)(a1 + 64);
      DWORD1(v37) = v33;
      LODWORD(v33) = *(_DWORD *)(a1 + 52);
      DWORD1(v36) = v32;
      LODWORD(v32) = *(_DWORD *)(a1 + 44);
      LODWORD(v36) = v33;
      LODWORD(v33) = *(_DWORD *)(a1 + 76);
      DWORD2(v36) = v32;
      LODWORD(v32) = *(_DWORD *)(a1 + 68);
      DWORD2(v37) = v33;
      LODWORD(v33) = *(_DWORD *)(a1 + 56);
      LODWORD(v37) = v32;
      HIDWORD(v36) = v33;
      HIDWORD(v37) = *(_DWORD *)(a1 + 80);
      v39 = v36;
      v38 = v35;
      v40 = v37;
      ST::SE3_mult<float>(&v35, &v41, &v38);
      v41 = v35;
      v42 = v36;
      LODWORD(v32) = *(_DWORD *)(a4 + 132);
      v43 = v37;
      LODWORD(v33) = *(_DWORD *)(a4 + 136);
      v44[0] = v32;
      LODWORD(v32) = *(_DWORD *)(a4 + 140);
      v44[1] = v33;
      v44[2] = v32;
      ST::SE3_transform_direction3<float,float,float>(v45, &v41, v44);
      LODWORD(v32) = v45[1];
      *(_DWORD *)(a4 + 132) = v45[0];
      *(_DWORD *)(a4 + 140) = v45[2];
      *(_DWORD *)(a4 + 136) = v32;
      *(_QWORD *)a4 = a3;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a4 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a4 + 80) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(a4 + 96) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(a4 + 112) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(a4 + 128) = *(_OWORD *)(a1 + 128);
      *(_OWORD *)(a4 + 144) = *(_OWORD *)(a1 + 144);
    }
    return 0LL;
  }
  v8 = -2147467261;
  v9 = 22LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
    (const char *)v8);
  return v8;
}
