/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x1801F0894
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801EE360 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x180096374 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180218810 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180218E08 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18021981C (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021A1EC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        __int64 a2,
        float *a3,
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
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  struct _D3DMATRIX *v19; // rcx
  __int64 v20; // rdx
  __int128 *v21; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  const struct D2DMatrix *v23; // r9
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  const struct D2DMatrix *v28; // r9
  struct D2DMatrix *v29; // r10
  const struct D2DMatrix *v30; // rax
  __int64 v31; // r9
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+A0h] [rbp-60h]
  struct _D3DMATRIX v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-10h] BYREF
  int v42; // [rsp+F8h] [rbp-8h]
  struct _D3DMATRIX v43; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int64 **v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int64 *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int64 *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int64 *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  int *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  __int64 v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  __int64 v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  __int64 v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  float *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  unsigned int *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  struct D2DMatrix *v69; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]
  char *v71; // [rsp+230h] [rbp+130h]
  __int64 v72; // [rsp+238h] [rbp+138h]
  char *v73; // [rsp+240h] [rbp+140h]
  __int64 v74; // [rsp+248h] [rbp+148h]
  char *v75; // [rsp+250h] [rbp+150h]
  __int64 v76; // [rsp+258h] [rbp+158h]
  char *v77; // [rsp+260h] [rbp+160h]
  __int64 v78; // [rsp+268h] [rbp+168h]
  char *v79; // [rsp+270h] [rbp+170h]
  __int64 v80; // [rsp+278h] [rbp+178h]
  char *v81; // [rsp+280h] [rbp+180h]
  __int64 v82; // [rsp+288h] [rbp+188h]
  char *v83; // [rsp+290h] [rbp+190h]
  __int64 v84; // [rsp+298h] [rbp+198h]
  char *v85; // [rsp+2A0h] [rbp+1A0h]
  __int64 v86; // [rsp+2A8h] [rbp+1A8h]
  struct _D3DMATRIX *v87; // [rsp+2B0h] [rbp+1B0h]
  __int64 v88; // [rsp+2B8h] [rbp+1B8h]
  D3DVALUE *p__12; // [rsp+2C0h] [rbp+1C0h]
  __int64 v90; // [rsp+2C8h] [rbp+1C8h]
  D3DVALUE *p__13; // [rsp+2D0h] [rbp+1D0h]
  __int64 v92; // [rsp+2D8h] [rbp+1D8h]
  D3DVALUE *p__21; // [rsp+2E0h] [rbp+1E0h]
  __int64 v94; // [rsp+2E8h] [rbp+1E8h]
  D3DVALUE *p__22; // [rsp+2F0h] [rbp+1F0h]
  __int64 v96; // [rsp+2F8h] [rbp+1F8h]
  D3DVALUE *p__23; // [rsp+300h] [rbp+200h]
  __int64 v98; // [rsp+308h] [rbp+208h]
  D3DVALUE *p__31; // [rsp+310h] [rbp+210h]
  __int64 v100; // [rsp+318h] [rbp+218h]
  D3DVALUE *p__32; // [rsp+320h] [rbp+220h]
  __int64 v102; // [rsp+328h] [rbp+228h]
  D3DVALUE *p__33; // [rsp+330h] [rbp+230h]
  __int64 v104; // [rsp+338h] [rbp+238h]

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v43);
  v10 = *(_OWORD *)&D3DMatrix->_21;
  v11 = *(_OWORD *)&D3DMatrix->_31;
  v12 = *(_OWORD *)&D3DMatrix->_41;
  *v13 = *(_OWORD *)&D3DMatrix->_11;
  v13[1] = v10;
  v13[2] = v11;
  v13[3] = v12;
  v15 = CMILMatrix::GetD3DMatrix(v14, &v43);
  v16 = *(_OWORD *)&v15->_21;
  v17 = *(_OWORD *)&v15->_31;
  v18 = *(_OWORD *)&v15->_41;
  *(_OWORD *)a6 = *(_OWORD *)&v15->_11;
  *((_OWORD *)a6 + 1) = v16;
  *((_OWORD *)a6 + 2) = v17;
  *((_OWORD *)a6 + 3) = v18;
  *(float *)&v16 = (float)(1.0 / a3[2]) - 1.0;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 1)).m128_u64[0];
  v42 = v16;
  *(_DWORD *)(a2 + 8) = v16;
  v43 = *CMILMatrix::GetD3DMatrix(v19, &v40);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 1044) )
  {
    v24 = *v21;
    v25 = v21[1];
    v39 = *((_DWORD *)v21 + 16);
    *(_OWORD *)&v38._11 = v24;
    v26 = v21[2];
    *(_OWORD *)&v38._21 = v25;
    v27 = v21[3];
    *(_OWORD *)&v38._31 = v26;
    *(_OWORD *)&v38._41 = v27;
    if ( CMILMatrix::Invert((CMILMatrix *)&v38, v20, v22) )
    {
      v43 = *CMILMatrix::GetD3DMatrix(&v38, &v40);
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v43);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(v23) )
  {
    v30 = D2DMatrixTranspose(v29, v28);
    if ( D2DMatrixInverse(a6, 0LL, v30) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v34 = a1;
    v45 = &v34;
    v35 = *a1;
    v47 = &v35;
    v36 = a1[20];
    v49 = &v36;
    v37 = a1[40];
    v51 = &v37;
    v41 = a1[60];
    v53 = &v41;
    v33 = *((_DWORD *)a1 + 197);
    v55 = &v33;
    v59 = a2 + 4;
    v61 = a2 + 8;
    v71 = (char *)a6 + 4;
    v73 = (char *)a6 + 8;
    v75 = (char *)a6 + 16;
    v77 = (char *)a6 + 20;
    v79 = (char *)a6 + 24;
    v81 = (char *)a6 + 32;
    v83 = (char *)a6 + 36;
    v85 = (char *)a6 + 40;
    v87 = &v43;
    p__12 = &v43._12;
    p__13 = &v43._13;
    p__21 = &v43._21;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 8LL;
    v52 = 8LL;
    v54 = 8LL;
    v56 = v31;
    v57 = a2;
    v58 = v31;
    v60 = v31;
    v62 = v31;
    v63 = a3;
    v64 = v31;
    v65 = (unsigned int *)(a3 + 1);
    v66 = v31;
    v67 = (unsigned int *)(a3 + 2);
    v68 = v31;
    v69 = a6;
    v70 = v31;
    v72 = v31;
    v74 = v31;
    v76 = v31;
    v78 = v31;
    v80 = v31;
    v82 = v31;
    v84 = v31;
    v86 = v31;
    v88 = v31;
    v90 = v31;
    v92 = v31;
    v94 = v31;
    v96 = v31;
    p__22 = &v43._22;
    p__23 = &v43._23;
    p__31 = &v43._31;
    p__32 = &v43._32;
    p__33 = &v43._33;
    v98 = v31;
    v100 = v31;
    v102 = v31;
    v104 = v31;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B78F2, 0LL, 0LL, 0x20u, &pData);
  }
  return a2;
}
