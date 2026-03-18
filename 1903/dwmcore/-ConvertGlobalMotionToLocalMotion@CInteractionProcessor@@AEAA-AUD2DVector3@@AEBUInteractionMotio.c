/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x180230CC0
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18022E4BC (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800453F4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180061BF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4B8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180227BE4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x1802281DC (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x180228D88 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180229808 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct D2DMatrix *a6)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  _OWORD *v13; // r10
  struct _D3DMATRIX *v14; // rcx
  struct _D3DMATRIX *v15; // rax
  float *v16; // r8
  unsigned int *v17; // r12
  unsigned int *v18; // r15
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  struct _D3DMATRIX *v22; // rcx
  __int64 v23; // rdx
  __int128 *v24; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v25; // r8
  const struct D2DMatrix *v26; // r9
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  const struct D2DMatrix *v31; // r9
  struct D2DMatrix *v32; // r10
  const struct D2DMatrix *v33; // rax
  __int64 v34; // r9
  int v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+A0h] [rbp-60h]
  struct _D3DMATRIX v43; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-10h] BYREF
  int v45; // [rsp+F8h] [rbp-8h]
  struct _D3DMATRIX v46; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int64 **v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  __int64 *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  __int64 *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  __int64 *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  __int64 *v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  int *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int64 v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int64 v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  __int64 v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  __int64 v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  unsigned int *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  struct D2DMatrix *v72; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  char *v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  char *v76; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  char *v78; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  char *v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  char *v82; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]
  char *v84; // [rsp+280h] [rbp+180h]
  __int64 v85; // [rsp+288h] [rbp+188h]
  char *v86; // [rsp+290h] [rbp+190h]
  __int64 v87; // [rsp+298h] [rbp+198h]
  char *v88; // [rsp+2A0h] [rbp+1A0h]
  __int64 v89; // [rsp+2A8h] [rbp+1A8h]
  struct _D3DMATRIX *v90; // [rsp+2B0h] [rbp+1B0h]
  __int64 v91; // [rsp+2B8h] [rbp+1B8h]
  D3DVALUE *p__12; // [rsp+2C0h] [rbp+1C0h]
  __int64 v93; // [rsp+2C8h] [rbp+1C8h]
  D3DVALUE *p__13; // [rsp+2D0h] [rbp+1D0h]
  __int64 v95; // [rsp+2D8h] [rbp+1D8h]
  D3DVALUE *p__21; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h]
  D3DVALUE *p__22; // [rsp+2F0h] [rbp+1F0h]
  __int64 v99; // [rsp+2F8h] [rbp+1F8h]
  D3DVALUE *p__23; // [rsp+300h] [rbp+200h]
  __int64 v101; // [rsp+308h] [rbp+208h]
  D3DVALUE *p__31; // [rsp+310h] [rbp+210h]
  __int64 v103; // [rsp+318h] [rbp+218h]
  D3DVALUE *p__32; // [rsp+320h] [rbp+220h]
  __int64 v105; // [rsp+328h] [rbp+228h]
  D3DVALUE *p__33; // [rsp+330h] [rbp+230h]
  __int64 v107; // [rsp+338h] [rbp+238h]

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v46);
  v10 = *(_OWORD *)&D3DMatrix->_21;
  v11 = *(_OWORD *)&D3DMatrix->_31;
  v12 = *(_OWORD *)&D3DMatrix->_41;
  *v13 = *(_OWORD *)&D3DMatrix->_11;
  v13[1] = v10;
  v13[2] = v11;
  v13[3] = v12;
  v15 = CMILMatrix::GetD3DMatrix(v14, &v46);
  v17 = (unsigned int *)(v16 + 2);
  v18 = (unsigned int *)(v16 + 1);
  v19 = *(_OWORD *)&v15->_21;
  v20 = *(_OWORD *)&v15->_31;
  v21 = *(_OWORD *)&v15->_41;
  *(_OWORD *)a6 = *(_OWORD *)&v15->_11;
  *((_OWORD *)a6 + 1) = v19;
  *((_OWORD *)a6 + 2) = v20;
  *((_OWORD *)a6 + 3) = v21;
  *(float *)&v19 = (float)(1.0 / v16[2]) - 1.0;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)v16, (__m128)*((unsigned int *)v16 + 1)).m128_u64[0];
  v45 = v19;
  *(_DWORD *)(a2 + 8) = v19;
  v46 = *CMILMatrix::GetD3DMatrix(v22, &v43);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 1044) )
  {
    v27 = *v24;
    v28 = v24[1];
    v42 = *((_DWORD *)v24 + 16);
    *(_OWORD *)&v41._11 = v27;
    v29 = v24[2];
    *(_OWORD *)&v41._21 = v28;
    v30 = v24[3];
    *(_OWORD *)&v41._31 = v29;
    *(_OWORD *)&v41._41 = v30;
    if ( CMILMatrix::Invert((CMILMatrix *)&v41, v23, v25) )
    {
      v46 = *CMILMatrix::GetD3DMatrix(&v41, &v43);
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v46);
    }
  }
  if ( !D2DMatrixIsIdentity(v26) )
  {
    v33 = D2DMatrixTranspose(v32, v31);
    if ( D2DMatrixInverse(a6, 0LL, v33) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
  {
    v37 = a1;
    v48 = &v37;
    v38 = *a1;
    v50 = &v38;
    v39 = a1[20];
    v52 = &v39;
    v40 = a1[40];
    v54 = &v40;
    v44 = a1[60];
    v56 = &v44;
    v36 = *((_DWORD *)a1 + 197);
    v58 = &v36;
    v62 = a2 + 4;
    v64 = a2 + 8;
    v74 = (char *)a6 + 4;
    v76 = (char *)a6 + 8;
    v78 = (char *)a6 + 16;
    v80 = (char *)a6 + 20;
    v82 = (char *)a6 + 24;
    v84 = (char *)a6 + 32;
    v86 = (char *)a6 + 36;
    v88 = (char *)a6 + 40;
    v90 = &v46;
    p__12 = &v46._12;
    p__13 = &v46._13;
    p__21 = &v46._21;
    v49 = 8LL;
    v51 = 8LL;
    v53 = 8LL;
    v55 = 8LL;
    v57 = 8LL;
    v59 = v34;
    v60 = a2;
    v61 = v34;
    v63 = v34;
    v65 = v34;
    v66 = a3;
    v67 = v34;
    v68 = v18;
    v69 = v34;
    v70 = v17;
    v71 = v34;
    v72 = a6;
    v73 = v34;
    v75 = v34;
    v77 = v34;
    v79 = v34;
    v81 = v34;
    v83 = v34;
    v85 = v34;
    v87 = v34;
    v89 = v34;
    v91 = v34;
    v93 = v34;
    v95 = v34;
    v97 = v34;
    v99 = v34;
    p__22 = &v46._22;
    p__23 = &v46._23;
    p__31 = &v46._31;
    p__32 = &v46._32;
    p__33 = &v46._33;
    v101 = v34;
    v103 = v34;
    v105 = v34;
    v107 = v34;
    TlgWrite((TraceLoggingHProvider)&dword_18033A240, &unk_1802DE856, 0LL, 0LL, 0x20u, &pData);
  }
  return a2;
}
