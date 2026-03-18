/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x1801F0D94
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801F1D4C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180008D90 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800309B0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     acosf_0 @ 0x1800EFFC7 (acosf_0.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1801E23B8 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x1801E27BC (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x1801E2970 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     TransformPoint @ 0x1801F2F68 (TransformPoint.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        __int64 a1,
        __int64 a2,
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
  int v18; // r8d
  int v19; // r9d
  const struct _TlgProvider_t *v20; // rcx
  __int64 v21; // r9
  int v22; // xmm0_4
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
  bool v38[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v39; // [rsp+3Ch] [rbp-CCh] BYREF
  int v40; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+44h] [rbp-C4h]
  int v42; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+4Ch] [rbp-BCh]
  int v44; // [rsp+50h] [rbp-B8h] BYREF
  int v45; // [rsp+54h] [rbp-B4h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v46; // [rsp+58h] [rbp-B0h] BYREF
  int v47; // [rsp+60h] [rbp-A8h] BYREF
  int v48; // [rsp+64h] [rbp-A4h] BYREF
  float v49; // [rsp+68h] [rbp-A0h] BYREF
  float v50; // [rsp+6Ch] [rbp-9Ch] BYREF
  const struct Windows::Foundation::Numerics::float2 *v51; // [rsp+70h] [rbp-98h] BYREF
  int v52; // [rsp+78h] [rbp-90h] BYREF
  int v53; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v54; // [rsp+80h] [rbp-88h] BYREF
  int v55; // [rsp+84h] [rbp-84h] BYREF
  int v56; // [rsp+88h] [rbp-80h] BYREF
  int v57; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v58; // [rsp+90h] [rbp-78h] BYREF
  int v59; // [rsp+94h] [rbp-74h] BYREF
  int v60; // [rsp+98h] [rbp-70h] BYREF
  int v61; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v62; // [rsp+A0h] [rbp-68h] BYREF
  int v63; // [rsp+A4h] [rbp-64h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-58h] BYREF
  int v66; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v67; // [rsp+BCh] [rbp-4Ch] BYREF
  int v68; // [rsp+C0h] [rbp-48h] BYREF
  int v69; // [rsp+C4h] [rbp-44h] BYREF
  int v70; // [rsp+C8h] [rbp-40h] BYREF
  int v71; // [rsp+CCh] [rbp-3Ch] BYREF
  int v72; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v73[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+128h] [rbp+20h] BYREF
  __int64 v76; // [rsp+130h] [rbp+28h]
  __int64 v77; // [rsp+138h] [rbp+30h] BYREF
  __int64 v78; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  BOOL *v80; // [rsp+168h] [rbp+60h]
  __int64 v81; // [rsp+170h] [rbp+68h]
  int *v82; // [rsp+178h] [rbp+70h]
  __int64 v83; // [rsp+180h] [rbp+78h]
  int *v84; // [rsp+188h] [rbp+80h]
  __int64 v85; // [rsp+190h] [rbp+88h]
  int *v86; // [rsp+198h] [rbp+90h]
  __int64 v87; // [rsp+1A0h] [rbp+98h]
  int *v88; // [rsp+1A8h] [rbp+A0h]
  __int64 v89; // [rsp+1B0h] [rbp+A8h]
  int *v90; // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  int *v92; // [rsp+1C8h] [rbp+C0h]
  __int64 v93; // [rsp+1D0h] [rbp+C8h]
  int *v94; // [rsp+1D8h] [rbp+D0h]
  __int64 v95; // [rsp+1E0h] [rbp+D8h]
  int *v96; // [rsp+1E8h] [rbp+E0h]
  __int64 v97; // [rsp+1F0h] [rbp+E8h]
  int *v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  int *v100; // [rsp+208h] [rbp+100h]
  __int64 v101; // [rsp+210h] [rbp+108h]
  int *v102; // [rsp+218h] [rbp+110h]
  __int64 v103; // [rsp+220h] [rbp+118h]
  int *v104; // [rsp+228h] [rbp+120h]
  __int64 v105; // [rsp+230h] [rbp+128h]
  int *v106; // [rsp+238h] [rbp+130h]
  __int64 v107; // [rsp+240h] [rbp+138h]
  int *v108; // [rsp+248h] [rbp+140h]
  __int64 v109; // [rsp+250h] [rbp+148h]
  int *v110; // [rsp+258h] [rbp+150h]
  __int64 v111; // [rsp+260h] [rbp+158h]
  int *v112; // [rsp+268h] [rbp+160h]
  __int64 v113; // [rsp+270h] [rbp+168h]
  const struct Windows::Foundation::Numerics::float2 **v114; // [rsp+278h] [rbp+170h]
  __int64 v115; // [rsp+280h] [rbp+178h]
  char *v116; // [rsp+288h] [rbp+180h]
  __int64 v117; // [rsp+290h] [rbp+188h]
  int *v118; // [rsp+298h] [rbp+190h]
  __int64 v119; // [rsp+2A0h] [rbp+198h]
  int *v120; // [rsp+2A8h] [rbp+1A0h]
  __int64 v121; // [rsp+2B0h] [rbp+1A8h]
  int *v122; // [rsp+2B8h] [rbp+1B0h]
  __int64 v123; // [rsp+2C0h] [rbp+1B8h]
  int *v124; // [rsp+2C8h] [rbp+1C0h]
  __int64 v125; // [rsp+2D0h] [rbp+1C8h]
  float *v126; // [rsp+2D8h] [rbp+1D0h]
  __int64 v127; // [rsp+2E0h] [rbp+1D8h]
  float *v128; // [rsp+2E8h] [rbp+1E0h]
  __int64 v129; // [rsp+2F0h] [rbp+1E8h]
  float *v130; // [rsp+2F8h] [rbp+1F0h]
  __int64 v131; // [rsp+300h] [rbp+1F8h]
  int *v132; // [rsp+308h] [rbp+200h]
  __int64 v133; // [rsp+310h] [rbp+208h]
  __int64 *v134; // [rsp+318h] [rbp+210h]
  __int64 v135; // [rsp+320h] [rbp+218h]
  char *v136; // [rsp+328h] [rbp+220h]
  __int64 v137; // [rsp+330h] [rbp+228h]
  __int64 *v138; // [rsp+338h] [rbp+230h]
  __int64 v139; // [rsp+340h] [rbp+238h]
  char *v140; // [rsp+348h] [rbp+240h]
  __int64 v141; // [rsp+350h] [rbp+248h]
  int *v142; // [rsp+358h] [rbp+250h]
  __int64 v143; // [rsp+360h] [rbp+258h]
  const struct Windows::Foundation::Numerics::float2 **v144; // [rsp+368h] [rbp+260h]
  __int64 v145; // [rsp+370h] [rbp+268h]
  int *v146; // [rsp+378h] [rbp+270h]
  __int64 v147; // [rsp+380h] [rbp+278h]
  int *v148; // [rsp+388h] [rbp+280h]
  __int64 v149; // [rsp+390h] [rbp+288h]

  *(_OWORD *)a3 = *(_OWORD *)a1;
  v39 = 0.0;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  v74 = 32085;
  v10 = *(_OWORD *)(a1 + 32);
  v38[0] = 0;
  v73[2] = _xmm;
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
  v73[3] = _xmm;
  *(_OWORD *)a6 = v11;
  *((_OWORD *)a6 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)a6 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)a6 + 3) = *(_OWORD *)(a3 + 48);
  *((_DWORD *)a6 + 16) = *(_DWORD *)(a3 + 64);
  v12 = *(_DWORD *)(a1 + 52);
  LODWORD(v46) = *(_DWORD *)(a1 + 48);
  LODWORD(v11) = *(_DWORD *)a1;
  HIDWORD(v46) = v12;
  v13 = *(_DWORD *)(a1 + 20);
  v44 = v11;
  v45 = v13;
  v73[0] = _xmm;
  v73[1] = _xmm;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest((CMILMatrix *)a1, a5, (struct CMILMatrix *)v73, v38);
  if ( v38[0] )
  {
    v14 = *((_DWORD *)a5 + 5);
    v44 = *(_DWORD *)a5;
    v45 = v14;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v47, (const struct D2DMatrix *)v73);
    v47 = 0;
    v48 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v47, (const struct D2DQuaternion *)&v47);
    if ( v49 >= 0.0 )
      v15 = FLOAT_1_0;
    else
      v15 = FLOAT_N1_0;
    v16 = acosf_0(v50 * v15);
    v17 = v16 + v16;
    v39 = v16 + v16;
    CMILMatrix::Set2DRotation((CMILMatrix *)a4, v16 + v16, 0.0, 0.0);
  }
  else
  {
    v17 = v39;
  }
  if ( !CMILMatrix::Is2DAffine<1>(a1, 1) )
  {
    v42 = 0;
    v43 = 0;
    v40 = 0;
    v41 = 0;
    CMILMatrix::Set2DAffineMatrix(
      (CMILMatrix *)a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v44,
      v17,
      &v46,
      (const struct Windows::Foundation::Numerics::float2 *)&v40,
      (const struct Windows::Foundation::Numerics::float2 *)&v42);
    *(_OWORD *)a6 = *(_OWORD *)a3;
    *((_OWORD *)a6 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a6 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a6 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a6 + 16) = *(_DWORD *)(a3 + 64);
  }
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( !CMILMatrix::IsIdentity<0>(a3) && (unsigned int)GetPointerDeviceRects(a2, &v75, &v77) )
  {
    TransformPoint((unsigned int)&v77, (unsigned int)&v75, v18, v19, (__int64)&v51, (__int64)&v51 + 4);
    v42 = 0;
    v43 = 0;
    v40 = 0;
    v41 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a6,
      (const struct Windows::Foundation::Numerics::float2 *)&v44,
      v39,
      &v51,
      (const struct Windows::Foundation::Numerics::float2 *)&v40,
      (const struct Windows::Foundation::Numerics::float2 *)&v42);
  }
  if ( dword_180305E40 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v22 = *(_DWORD *)a1;
      v67 = v38[0];
      v80 = &v67;
      v68 = v22;
      v23 = *(_DWORD *)(a1 + 4);
      v82 = &v68;
      v69 = v23;
      v24 = *(_DWORD *)(a1 + 8);
      v84 = &v69;
      v70 = v24;
      v25 = *(_DWORD *)(a1 + 12);
      v86 = &v70;
      v71 = v25;
      v26 = *(_DWORD *)(a1 + 16);
      v88 = &v71;
      v72 = v26;
      v27 = *(_DWORD *)(a1 + 20);
      v90 = &v72;
      v52 = v27;
      v28 = *(_DWORD *)(a1 + 24);
      v92 = &v52;
      v53 = v28;
      v29 = *(_DWORD *)(a1 + 28);
      v94 = &v53;
      v54 = v29;
      v30 = *(_DWORD *)(a1 + 32);
      v96 = &v54;
      v55 = v30;
      v31 = *(_DWORD *)(a1 + 36);
      v98 = &v55;
      v56 = v31;
      v32 = *(_DWORD *)(a1 + 40);
      v100 = &v56;
      v57 = v32;
      v33 = *(_DWORD *)(a1 + 44);
      v102 = &v57;
      v58 = v33;
      v34 = *(_DWORD *)(a1 + 48);
      v104 = &v58;
      v59 = v34;
      v35 = *(_DWORD *)(a1 + 52);
      v106 = &v59;
      v60 = v35;
      v36 = *(_DWORD *)(a1 + 56);
      v108 = &v60;
      v61 = v36;
      v37 = *(_DWORD *)(a1 + 60);
      v110 = &v61;
      v81 = v21;
      v83 = v21;
      v85 = v21;
      v87 = v21;
      v89 = v21;
      v91 = v21;
      v93 = v21;
      v95 = v21;
      v97 = v21;
      v99 = v21;
      v101 = v21;
      v103 = v21;
      v105 = v21;
      v107 = v21;
      v109 = v21;
      v111 = v21;
      v62 = v37;
      v112 = &v62;
      v114 = &v46;
      v116 = (char *)&v46 + 4;
      v118 = &v44;
      v120 = &v45;
      v122 = &v47;
      v124 = &v48;
      v126 = &v49;
      v128 = &v50;
      v130 = &v39;
      v132 = &v63;
      v64 = v75;
      v134 = &v64;
      v136 = (char *)&v64 + 4;
      v65 = v76;
      v138 = &v65;
      v140 = (char *)&v65 + 4;
      v66 = v77;
      v142 = &v66;
      LODWORD(v51) = HIDWORD(v77);
      v144 = &v51;
      v40 = v78;
      v146 = &v40;
      v42 = HIDWORD(v78);
      v148 = &v42;
      v113 = v21;
      v115 = v21;
      v117 = v21;
      v119 = v21;
      v121 = v21;
      v123 = v21;
      v125 = v21;
      v127 = v21;
      v129 = v21;
      v131 = v21;
      v63 = a2;
      v133 = v21;
      v135 = v21;
      v137 = v21;
      v139 = v21;
      v141 = v21;
      v143 = v21;
      v145 = v21;
      v147 = v21;
      v149 = v21;
      TlgWrite(v20, &unk_1802B7BDA, 0LL, 0LL, 0x25u, &pData);
    }
  }
}
