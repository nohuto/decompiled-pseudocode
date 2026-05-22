/*
 * XREFs of Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x180158EE0
 * Callers:
 *     ?InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0_JPEAU5@@Z @ 0x180158EC0 (-InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B4DFC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$SE3_interpolate@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1M@Z @ 0x180169D4C (--$SE3_interpolate@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1M@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x180169E24 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18016A020 (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x18016A150 (--$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU-$SE3@M@0@QEBM@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const char *v10; // rax
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
  unsigned int v29; // xmm1_4
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  const char *v32; // [rsp+30h] [rbp-D8h]
  __int128 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+48h] [rbp-C0h]
  __int128 v35; // [rsp+58h] [rbp-B0h]
  __int128 v36; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+78h] [rbp-90h]
  __int128 v38; // [rsp+88h] [rbp-80h]
  __int128 v39; // [rsp+98h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-60h]
  __int128 v41; // [rsp+B8h] [rbp-50h]
  _DWORD v42[4]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v43[4]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v44[48]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

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
        v11,
        (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.h",
        (const char *)0x80070057LL,
        (int)v10,
        v32);
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
      LODWORD(v33) = *(_DWORD *)(a1 + 36);
      *(_QWORD *)((char *)&v33 + 4) = __PAIR64__(*(_DWORD *)(a1 + 60), v15);
      v16 = *(_DWORD *)(a1 + 40);
      DWORD1(v35) = *(_DWORD *)(a1 + 72);
      v17 = *(_DWORD *)(a1 + 52);
      HIDWORD(v33) = v16;
      DWORD1(v34) = *(_DWORD *)(a1 + 64);
      v18 = *(_DWORD *)(a1 + 44);
      LODWORD(v34) = v17;
      v19 = *(_DWORD *)(a1 + 76);
      DWORD2(v34) = v18;
      v20 = *(_DWORD *)(a1 + 68);
      DWORD2(v35) = v19;
      v21 = *(_DWORD *)(a1 + 56);
      LODWORD(v35) = v20;
      HIDWORD(v34) = v21;
      HIDWORD(v35) = *(_DWORD *)(a1 + 80);
      v39 = v33;
      v40 = v34;
      v41 = v35;
      ST::SE3_invert<float>(v44, &v39);
      v22 = *(_DWORD *)(a2 + 48);
      LODWORD(v33) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)((char *)&v33 + 4) = __PAIR64__(*(_DWORD *)(a2 + 60), v22);
      v23 = *(_DWORD *)(a2 + 40);
      DWORD1(v35) = *(_DWORD *)(a2 + 72);
      v24 = *(_DWORD *)(a2 + 52);
      HIDWORD(v33) = v23;
      DWORD1(v34) = *(_DWORD *)(a2 + 64);
      v25 = *(_DWORD *)(a2 + 44);
      LODWORD(v34) = v24;
      v26 = *(_DWORD *)(a2 + 76);
      DWORD2(v34) = v25;
      v27 = *(_DWORD *)(a2 + 68);
      DWORD2(v35) = v26;
      v28 = *(_DWORD *)(a2 + 56);
      LODWORD(v35) = v27;
      HIDWORD(v34) = v28;
      HIDWORD(v35) = *(_DWORD *)(a2 + 80);
      v39 = v33;
      v40 = v34;
      v41 = v35;
      ST::SE3_invert<float>(&v33, &v39);
      if ( v14 < 0.0 && v14 > 1.0 )
      {
        v8 = -2147418113;
        v9 = 49LL;
        goto LABEL_3;
      }
      ST::SE3_interpolate<float>(&v36, v44, &v33);
      v39 = v36;
      v40 = v37;
      v41 = v38;
      ST::SE3_invert<float>(&v36, &v39);
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a4 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a4 + 80) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(a4 + 96) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(a4 + 112) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(a4 + 128) = *(_OWORD *)(a1 + 128);
      v29 = v36;
      *(_OWORD *)(a4 + 144) = *(_OWORD *)(a1 + 144);
      *(_QWORD *)&v33 = __PAIR64__(HIDWORD(v36), v29);
      *((_QWORD *)&v33 + 1) = __PAIR64__(DWORD1(v36), DWORD2(v37));
      LODWORD(v34) = v37;
      *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(DWORD2(v36), HIDWORD(v37));
      v35 = v38;
      HIDWORD(v34) = DWORD1(v37);
      v30 = v34;
      *(_OWORD *)(a4 + 36) = v33;
      v31 = v35;
      *(_OWORD *)(a4 + 52) = v30;
      *(_OWORD *)(a4 + 68) = v31;
      LODWORD(v31) = *(_DWORD *)(a1 + 48);
      LODWORD(v33) = *(_DWORD *)(a1 + 36);
      DWORD2(v33) = *(_DWORD *)(a1 + 60);
      LODWORD(v30) = *(_DWORD *)(a1 + 40);
      DWORD1(v33) = v31;
      LODWORD(v31) = *(_DWORD *)(a1 + 72);
      HIDWORD(v33) = v30;
      LODWORD(v30) = *(_DWORD *)(a1 + 64);
      DWORD1(v35) = v31;
      LODWORD(v31) = *(_DWORD *)(a1 + 52);
      DWORD1(v34) = v30;
      LODWORD(v30) = *(_DWORD *)(a1 + 44);
      LODWORD(v34) = v31;
      LODWORD(v31) = *(_DWORD *)(a1 + 76);
      DWORD2(v34) = v30;
      LODWORD(v30) = *(_DWORD *)(a1 + 68);
      DWORD2(v35) = v31;
      LODWORD(v31) = *(_DWORD *)(a1 + 56);
      LODWORD(v35) = v30;
      HIDWORD(v34) = v31;
      HIDWORD(v35) = *(_DWORD *)(a1 + 80);
      v36 = v33;
      v37 = v34;
      v38 = v35;
      ST::SE3_mult<float>(&v33, &v39, &v36);
      v39 = v33;
      v40 = v34;
      LODWORD(v31) = *(_DWORD *)(a4 + 132);
      v41 = v35;
      LODWORD(v30) = *(_DWORD *)(a4 + 136);
      v42[0] = v31;
      LODWORD(v31) = *(_DWORD *)(a4 + 140);
      v42[1] = v30;
      v42[2] = v31;
      ST::SE3_transform_direction3<float,float,float>(v43, &v39, v42);
      LODWORD(v31) = v43[1];
      *(_DWORD *)(a4 + 132) = v43[0];
      *(_DWORD *)(a4 + 140) = v43[2];
      *(_DWORD *)(a4 + 136) = v31;
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
