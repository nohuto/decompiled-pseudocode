/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x18022FAAC
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180230A4C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180009AF0 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008B180 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008B5C0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C10AC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     acosf_0 @ 0x1800F0157 (acosf_0.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x18021B1A0 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x18021B548 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18021B6FC (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     TransformPoint @ 0x180231F18 (TransformPoint.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180235818 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        struct CMILMatrix *a5,
        CMILMatrix *a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  int v12; // xmm1_4
  int v13; // xmm1_4
  int v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  const struct DEVICE_INFO *v18; // rsi
  int v19; // r8d
  int v20; // r9d
  const struct _TlgProvider_t *v21; // rcx
  __int64 v22; // r9
  int v23; // xmm0_4
  int v24; // xmm0_4
  int v25; // xmm0_4
  int v26; // xmm0_4
  int v27; // xmm0_4
  int v28; // xmm0_4
  int v29; // xmm0_4
  int v30; // xmm0_4
  int v31; // xmm0_4
  int v32; // xmm0_4
  int v33; // xmm0_4
  int v34; // xmm0_4
  int v35; // xmm0_4
  int v36; // xmm0_4
  int v37; // xmm0_4
  int v38; // xmm0_4
  bool v39[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v40; // [rsp+3Ch] [rbp-CCh] BYREF
  int v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+44h] [rbp-C4h]
  int v43; // [rsp+48h] [rbp-C0h] BYREF
  int v44; // [rsp+4Ch] [rbp-BCh]
  int v45; // [rsp+50h] [rbp-B8h] BYREF
  int v46; // [rsp+54h] [rbp-B4h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v47; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+60h] [rbp-A8h] BYREF
  int v49; // [rsp+64h] [rbp-A4h] BYREF
  float v50; // [rsp+68h] [rbp-A0h] BYREF
  float v51; // [rsp+6Ch] [rbp-9Ch] BYREF
  const struct Windows::Foundation::Numerics::float2 *v52; // [rsp+70h] [rbp-98h] BYREF
  int v53; // [rsp+78h] [rbp-90h] BYREF
  int v54; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v55; // [rsp+80h] [rbp-88h] BYREF
  int v56; // [rsp+84h] [rbp-84h] BYREF
  int v57; // [rsp+88h] [rbp-80h] BYREF
  int v58; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v59; // [rsp+90h] [rbp-78h] BYREF
  int v60; // [rsp+94h] [rbp-74h] BYREF
  int v61; // [rsp+98h] [rbp-70h] BYREF
  int v62; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v63; // [rsp+A0h] [rbp-68h] BYREF
  int v64; // [rsp+A4h] [rbp-64h] BYREF
  int v65; // [rsp+A8h] [rbp-60h] BYREF
  int v66; // [rsp+ACh] [rbp-5Ch] BYREF
  int v67; // [rsp+B0h] [rbp-58h] BYREF
  int v68; // [rsp+B4h] [rbp-54h] BYREF
  int v69; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v70; // [rsp+BCh] [rbp-4Ch] BYREF
  int v71; // [rsp+C0h] [rbp-48h] BYREF
  int v72; // [rsp+C4h] [rbp-44h] BYREF
  int v73; // [rsp+C8h] [rbp-40h] BYREF
  int v74; // [rsp+CCh] [rbp-3Ch] BYREF
  int v75; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v76[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v77; // [rsp+118h] [rbp+10h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF
  BOOL *v79; // [rsp+148h] [rbp+40h]
  __int64 v80; // [rsp+150h] [rbp+48h]
  int *v81; // [rsp+158h] [rbp+50h]
  __int64 v82; // [rsp+160h] [rbp+58h]
  int *v83; // [rsp+168h] [rbp+60h]
  __int64 v84; // [rsp+170h] [rbp+68h]
  int *v85; // [rsp+178h] [rbp+70h]
  __int64 v86; // [rsp+180h] [rbp+78h]
  int *v87; // [rsp+188h] [rbp+80h]
  __int64 v88; // [rsp+190h] [rbp+88h]
  int *v89; // [rsp+198h] [rbp+90h]
  __int64 v90; // [rsp+1A0h] [rbp+98h]
  int *v91; // [rsp+1A8h] [rbp+A0h]
  __int64 v92; // [rsp+1B0h] [rbp+A8h]
  int *v93; // [rsp+1B8h] [rbp+B0h]
  __int64 v94; // [rsp+1C0h] [rbp+B8h]
  int *v95; // [rsp+1C8h] [rbp+C0h]
  __int64 v96; // [rsp+1D0h] [rbp+C8h]
  int *v97; // [rsp+1D8h] [rbp+D0h]
  __int64 v98; // [rsp+1E0h] [rbp+D8h]
  int *v99; // [rsp+1E8h] [rbp+E0h]
  __int64 v100; // [rsp+1F0h] [rbp+E8h]
  int *v101; // [rsp+1F8h] [rbp+F0h]
  __int64 v102; // [rsp+200h] [rbp+F8h]
  int *v103; // [rsp+208h] [rbp+100h]
  __int64 v104; // [rsp+210h] [rbp+108h]
  int *v105; // [rsp+218h] [rbp+110h]
  __int64 v106; // [rsp+220h] [rbp+118h]
  int *v107; // [rsp+228h] [rbp+120h]
  __int64 v108; // [rsp+230h] [rbp+128h]
  int *v109; // [rsp+238h] [rbp+130h]
  __int64 v110; // [rsp+240h] [rbp+138h]
  int *v111; // [rsp+248h] [rbp+140h]
  __int64 v112; // [rsp+250h] [rbp+148h]
  const struct Windows::Foundation::Numerics::float2 **v113; // [rsp+258h] [rbp+150h]
  __int64 v114; // [rsp+260h] [rbp+158h]
  char *v115; // [rsp+268h] [rbp+160h]
  __int64 v116; // [rsp+270h] [rbp+168h]
  int *v117; // [rsp+278h] [rbp+170h]
  __int64 v118; // [rsp+280h] [rbp+178h]
  int *v119; // [rsp+288h] [rbp+180h]
  __int64 v120; // [rsp+290h] [rbp+188h]
  int *v121; // [rsp+298h] [rbp+190h]
  __int64 v122; // [rsp+2A0h] [rbp+198h]
  int *v123; // [rsp+2A8h] [rbp+1A0h]
  __int64 v124; // [rsp+2B0h] [rbp+1A8h]
  float *v125; // [rsp+2B8h] [rbp+1B0h]
  __int64 v126; // [rsp+2C0h] [rbp+1B8h]
  float *v127; // [rsp+2C8h] [rbp+1C0h]
  __int64 v128; // [rsp+2D0h] [rbp+1C8h]
  float *v129; // [rsp+2D8h] [rbp+1D0h]
  __int64 v130; // [rsp+2E0h] [rbp+1D8h]
  int *v131; // [rsp+2E8h] [rbp+1E0h]
  __int64 v132; // [rsp+2F0h] [rbp+1E8h]
  int *v133; // [rsp+2F8h] [rbp+1F0h]
  __int64 v134; // [rsp+300h] [rbp+1F8h]
  int *v135; // [rsp+308h] [rbp+200h]
  __int64 v136; // [rsp+310h] [rbp+208h]
  int *v137; // [rsp+318h] [rbp+210h]
  __int64 v138; // [rsp+320h] [rbp+218h]
  int *v139; // [rsp+328h] [rbp+220h]
  __int64 v140; // [rsp+330h] [rbp+228h]
  int *v141; // [rsp+338h] [rbp+230h]
  __int64 v142; // [rsp+340h] [rbp+238h]
  const struct Windows::Foundation::Numerics::float2 **v143; // [rsp+348h] [rbp+240h]
  __int64 v144; // [rsp+350h] [rbp+248h]
  int *v145; // [rsp+358h] [rbp+250h]
  __int64 v146; // [rsp+360h] [rbp+258h]
  int *v147; // [rsp+368h] [rbp+260h]
  __int64 v148; // [rsp+370h] [rbp+268h]

  *(_OWORD *)a3 = *(_OWORD *)a1;
  v40 = 0.0;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  v77 = 32085;
  v10 = *(_OWORD *)(a1 + 32);
  v39[0] = 0;
  v76[2] = _xmm;
  *(_OWORD *)(a3 + 32) = v10;
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 48);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 64);
  *(_OWORD *)a4 = _xmm;
  *(_WORD *)(a4 + 64) = 32085;
  *(_OWORD *)(a4 + 16) = _xmm;
  *(_OWORD *)(a4 + 32) = _xmm;
  *(_OWORD *)(a4 + 48) = _xmm;
  *((_WORD *)a5 + 32) = 32085;
  *(_OWORD *)a5 = _xmm;
  *((_OWORD *)a5 + 1) = _xmm;
  *((_OWORD *)a5 + 2) = _xmm;
  *((_OWORD *)a5 + 3) = _xmm;
  v11 = *(_OWORD *)a3;
  v76[3] = _xmm;
  *(_OWORD *)a6 = v11;
  *((_OWORD *)a6 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)a6 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)a6 + 3) = *(_OWORD *)(a3 + 48);
  *((_DWORD *)a6 + 16) = *(_DWORD *)(a3 + 64);
  v12 = *(_DWORD *)(a1 + 52);
  LODWORD(v47) = *(_DWORD *)(a1 + 48);
  LODWORD(v11) = *(_DWORD *)a1;
  HIDWORD(v47) = v12;
  v13 = *(_DWORD *)(a1 + 20);
  v45 = v11;
  v46 = v13;
  v76[0] = _xmm;
  v76[1] = _xmm;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest((CMILMatrix *)a1, a5, (struct CMILMatrix *)v76, v39);
  if ( v39[0] )
  {
    v14 = *((_DWORD *)a5 + 5);
    v45 = *(_DWORD *)a5;
    v46 = v14;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v48, (const struct D2DMatrix *)v76);
    v48 = 0;
    v49 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v48, (const struct D2DQuaternion *)&v48);
    if ( v50 >= 0.0 )
      v15 = *(float *)&FLOAT_1_0;
    else
      v15 = FLOAT_N1_0;
    v16 = acosf_0(v51 * v15);
    v17 = v16 + v16;
    v40 = v16 + v16;
    CMILMatrix::Set2DRotation((CMILMatrix *)a4, v16 + v16, 0.0, 0.0);
  }
  else
  {
    v17 = v40;
  }
  if ( !CMILMatrix::Is2DAffine<1>(a1, 1) )
  {
    v43 = 0;
    v44 = 0;
    v41 = 0;
    v42 = 0;
    CMILMatrix::Set2DAffineMatrix(
      (CMILMatrix *)a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v45,
      v17,
      &v47,
      (const struct Windows::Foundation::Numerics::float2 *)&v41,
      (const struct Windows::Foundation::Numerics::float2 *)&v43);
    *(_OWORD *)a6 = *(_OWORD *)a3;
    *((_OWORD *)a6 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a6 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a6 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a6 + 16) = *(_DWORD *)(a3 + 64);
  }
  v18 = CPointerDeviceCache::Query(a2);
  if ( !CMILMatrix::IsIdentity<0>(a3) && *((_BYTE *)v18 + 48) )
  {
    TransformPoint((_DWORD)v18, (_DWORD)v18 + 16, v19, v20, (__int64)&v52, (__int64)&v52 + 4);
    v43 = 0;
    v44 = 0;
    v41 = 0;
    v42 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a6,
      (const struct Windows::Foundation::Numerics::float2 *)&v45,
      v40,
      &v52,
      (const struct Windows::Foundation::Numerics::float2 *)&v41,
      (const struct Windows::Foundation::Numerics::float2 *)&v43);
  }
  if ( dword_180337240 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
    {
      v23 = *(_DWORD *)a1;
      v70 = v39[0];
      v79 = &v70;
      v71 = v23;
      v24 = *(_DWORD *)(a1 + 4);
      v81 = &v71;
      v72 = v24;
      v25 = *(_DWORD *)(a1 + 8);
      v83 = &v72;
      v73 = v25;
      v26 = *(_DWORD *)(a1 + 12);
      v85 = &v73;
      v74 = v26;
      v27 = *(_DWORD *)(a1 + 16);
      v87 = &v74;
      v75 = v27;
      v28 = *(_DWORD *)(a1 + 20);
      v89 = &v75;
      v53 = v28;
      v29 = *(_DWORD *)(a1 + 24);
      v91 = &v53;
      v54 = v29;
      v30 = *(_DWORD *)(a1 + 28);
      v93 = &v54;
      v55 = v30;
      v31 = *(_DWORD *)(a1 + 32);
      v95 = &v55;
      v56 = v31;
      v32 = *(_DWORD *)(a1 + 36);
      v97 = &v56;
      v57 = v32;
      v33 = *(_DWORD *)(a1 + 40);
      v99 = &v57;
      v58 = v33;
      v34 = *(_DWORD *)(a1 + 44);
      v101 = &v58;
      v59 = v34;
      v35 = *(_DWORD *)(a1 + 48);
      v103 = &v59;
      v60 = v35;
      v36 = *(_DWORD *)(a1 + 52);
      v105 = &v60;
      v61 = v36;
      v37 = *(_DWORD *)(a1 + 56);
      v107 = &v61;
      v62 = v37;
      v38 = *(_DWORD *)(a1 + 60);
      v109 = &v62;
      v80 = v22;
      v82 = v22;
      v84 = v22;
      v86 = v22;
      v88 = v22;
      v90 = v22;
      v92 = v22;
      v94 = v22;
      v96 = v22;
      v98 = v22;
      v100 = v22;
      v102 = v22;
      v104 = v22;
      v106 = v22;
      v108 = v22;
      v110 = v22;
      v63 = v38;
      v111 = &v63;
      v113 = &v47;
      v115 = (char *)&v47 + 4;
      v117 = &v45;
      v119 = &v46;
      v121 = &v48;
      v123 = &v49;
      v125 = &v50;
      v127 = &v51;
      v129 = &v40;
      v131 = &v64;
      v65 = *((_DWORD *)v18 + 4);
      v133 = &v65;
      v66 = *((_DWORD *)v18 + 5);
      v135 = &v66;
      v67 = *((_DWORD *)v18 + 6);
      v137 = &v67;
      v68 = *((_DWORD *)v18 + 7);
      v139 = &v68;
      v69 = *(_DWORD *)v18;
      v141 = &v69;
      LODWORD(v52) = *((_DWORD *)v18 + 1);
      v143 = &v52;
      v41 = *((_DWORD *)v18 + 2);
      v145 = &v41;
      v43 = *((_DWORD *)v18 + 3);
      v147 = &v43;
      v112 = v22;
      v114 = v22;
      v116 = v22;
      v118 = v22;
      v120 = v22;
      v122 = v22;
      v124 = v22;
      v126 = v22;
      v128 = v22;
      v130 = v22;
      v64 = (int)a2;
      v132 = v22;
      v134 = v22;
      v136 = v22;
      v138 = v22;
      v140 = v22;
      v142 = v22;
      v144 = v22;
      v146 = v22;
      v148 = v22;
      TlgWrite(v21, &unk_1802DCC7B, 0LL, 0LL, 0x25u, &pData);
    }
  }
}
