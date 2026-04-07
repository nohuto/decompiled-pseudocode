/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800196D4
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002789C (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002AC4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180002AE8 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001E590 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800279E0 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180037898 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180038190 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x1800381F0 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x18003DA64 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800B84E0 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v1; // r15
  CBaseObject *v3; // rbx
  char v4; // si
  unsigned int v5; // edx
  CBaseObject *v6; // rdi
  int v7; // r8d
  char v8; // r12
  __int64 v9; // xmm0_8
  char v10; // r14
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  __m128i v15; // xmm5
  __m128i v16; // xmm15
  unsigned int v17; // eax
  float v18; // xmm5_4
  __m128i v19; // xmm9
  int v20; // eax
  float v21; // xmm9_4
  float v22; // xmm15_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm11_4
  float left; // xmm7_4
  float v27; // xmm15_4
  float v28; // xmm14_4
  float v29; // xmm8_4
  float v30; // xmm13_4
  float top; // xmm6_4
  LONG v32; // eax
  float v33; // xmm12_4
  float v34; // xmm7_4
  int v35; // ecx
  float v36; // xmm0_4
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  struct CBaseImageProxy *v49; // rsi
  int v50; // eax
  unsigned int v51; // esi
  float v53; // xmm0_4
  CMatrixTransformProxy *v54; // rcx
  int v55; // eax
  int v56; // eax
  float v57; // xmm9_4
  int v58; // ecx
  int v59; // eax
  __int64 v60; // rdx
  int v61; // [rsp+28h] [rbp-E0h]
  char v62; // [rsp+48h] [rbp-C0h]
  struct tagRECT v63; // [rsp+58h] [rbp-B0h] BYREF
  float v64[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v65[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CRenderDataInstruction *v66; // [rsp+78h] [rbp-90h] BYREF
  struct CRenderDataInstruction *v67; // [rsp+80h] [rbp-88h] BYREF
  struct CRenderDataInstruction *v68; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v69[2]; // [rsp+90h] [rbp-78h] BYREF
  struct tagRECT v70; // [rsp+98h] [rbp-70h] BYREF
  _MilMatrix3x2D v71; // [rsp+A8h] [rbp-60h] BYREF
  float v72; // [rsp+D8h] [rbp-30h]
  float v73; // [rsp+DCh] [rbp-2Ch]
  int v74; // [rsp+E0h] [rbp-28h]
  int v75; // [rsp+E4h] [rbp-24h]
  float v76; // [rsp+E8h] [rbp-20h] BYREF
  float v77; // [rsp+ECh] [rbp-1Ch]
  int v78; // [rsp+F0h] [rbp-18h]
  int v79; // [rsp+F4h] [rbp-14h]
  float v80; // [rsp+F8h] [rbp-10h]
  float v81; // [rsp+FCh] [rbp-Ch]
  int v82; // [rsp+100h] [rbp-8h]
  int v83; // [rsp+104h] [rbp-4h]
  int v84; // [rsp+108h] [rbp+0h]
  int v85; // [rsp+10Ch] [rbp+4h]
  int v86; // [rsp+110h] [rbp+8h]
  int v87; // [rsp+114h] [rbp+Ch]
  float v88; // [rsp+118h] [rbp+10h]
  float v89; // [rsp+11Ch] [rbp+14h]
  int v90; // [rsp+120h] [rbp+18h]
  int v91; // [rsp+124h] [rbp+1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v66 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = *((_DWORD *)this + 214);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 215);
  v8 = 0;
  v9 = *(_QWORD *)((char *)this + 764);
  v10 = 0;
  v11 = *((_DWORD *)this + 216);
  v63.right = *((_DWORD *)this + 193);
  v12 = v11 - v5;
  *(_QWORD *)&v63.left = v9;
  v13 = 0;
  if ( v12 >= 0 )
    v13 = v12;
  v14 = *((_DWORD *)this + 217) - v7;
  v15 = _mm_cvtsi32_si128(v5);
  v70 = *(struct tagRECT *)((char *)this + 856);
  v62 = 0;
  v16 = _mm_cvtsi32_si128(v13);
  v17 = 0;
  if ( v14 >= 0 )
    v17 = v14;
  v18 = _mm_cvtepi32_ps(v15).m128_f32[0];
  v67 = 0LL;
  v68 = 0LL;
  v19 = _mm_cvtsi32_si128(v17);
  v20 = *((_DWORD *)this + 238);
  v64[0] = v18;
  v21 = _mm_cvtepi32_ps(v19).m128_f32[0];
  v65[0] = (float)v7;
  v22 = _mm_cvtepi32_ps(v16).m128_f32[0];
  v23 = (float)(v21 * *((float *)this + 195)) + (float)v7;
  v24 = v22 * *((float *)this + 194);
  *(float *)&v69[1] = v23;
  v25 = v24 + v18;
  *(float *)v69 = v25;
  if ( v20 || *((_DWORD *)this + 239) )
  {
    left = (float)v70.left;
    v27 = v22 / (float)((float)v20 / *((float *)this + 203));
    v28 = *(float *)&v63.left * v27;
    v29 = v21 / (float)((float)*((int *)this + 239) / *((float *)this + 204));
    v30 = *(float *)&v63.top * v29;
    v63.left = RoundToNearestInt((float)((float)((float)v70.left - v25) / v27) + v25);
    top = (float)v70.top;
    v63.top = RoundToNearestInt((float)((float)((float)v70.top - v23) / v29) + v23);
    v63.right = RoundToNearestInt((float)((float)((float)v70.right - v25) / v27) + v25);
    v32 = RoundToNearestInt((float)((float)((float)v70.bottom - v23) / v29) + v23);
    v18 = v64[0];
    v5 = *((_DWORD *)this + 214);
    v4 = 0;
    v7 = *((_DWORD *)this + 215);
    v63.bottom = v32;
    v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v70 = v63;
    v10 = 0;
    v33 = (float)((float)((float)((float)((float)v63.left - v25) * v27) + v25) - left) * *((float *)this + 191);
    v34 = (float)((float)((float)((float)((float)v63.top - v23) * v29) + v23) - top) * *((float *)this + 192);
  }
  else
  {
    v30 = *(float *)&v63.top;
    v33 = 0.0;
    v28 = *(float *)&v63.left;
    v34 = 0.0;
  }
  v35 = *((_DWORD *)this + 216);
  v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28 - 1.0)) & _xmm);
  v37 = (float)(int)(v35 + v5) * 0.5;
  v38 = (float)(v7 + *((_DWORD *)this + 217)) * 0.5;
  if ( v36 >= 0.0000011920929
    || (v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v30 - 1.0)) & _xmm), v39 >= 0.0000011920929) )
  {
    *(_QWORD *)&v63.left = __PAIR64__(LODWORD(v30), LODWORD(v28));
    v8 = 1;
  }
  v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 197)) & _xmm);
  if ( v40 >= 0.0000011920929 )
  {
    v57 = v21 * *((float *)this + 201);
    v58 = v35 - v5;
    v59 = 0;
    v4 = 1;
    if ( v58 >= 0 )
      v59 = v58;
    v64[1] = v57 + v65[0];
    v64[0] = (float)((float)v59 * *((float *)this + 200)) + v18;
  }
  v41 = *((float *)this + 188);
  v42 = *((float *)this + 189);
  v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm);
  if ( v43 >= 0.0000011920929
    || (v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42) & _xmm), v44 >= 0.0000011920929)
    || (v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v33) & _xmm), v45 >= 0.0000011920929)
    || (v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v34) & _xmm), v46 >= 0.0000011920929) )
  {
    v10 = 1;
    v65[0] = v41 - v33;
    v65[1] = v42 - v34;
  }
  v47 = *((float *)this + 235);
  v90 = 0;
  v89 = 0.0;
  v88 = 0.0;
  v87 = 0;
  v85 = 0;
  v84 = 0;
  v83 = 0;
  v82 = 0;
  v80 = 0.0;
  v79 = 0;
  v78 = 0;
  v77 = 0.0;
  v91 = 1065353216;
  v86 = 1065353216;
  v81 = 1.0;
  v76 = 1.0;
  v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v47) & _xmm);
  if ( v48 >= 0.0000011920929 )
  {
    v71.DX = 0.0;
    v71.S_22 = 0.0;
    v71.S_21 = 0.0078125;
    v71.S_12 = 0.0;
    v74 = 0;
    LODWORD(v72) = LODWORD(v37) ^ _xmm;
    LODWORD(v73) = LODWORD(v38) ^ _xmm;
    v62 = 1;
    v75 = 1065353216;
    *(_QWORD *)&v71.DY = 1065353216LL;
    *(_QWORD *)&v71.S_11 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v71);
    D2DMatrixRotationZ((struct D2DMatrix *)&v71, *((float *)this + 235) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v71);
    v71.DX = 0.0;
    v71.S_22 = 0.0;
    v71.S_21 = 0.0078125;
    v71.S_12 = 0.0;
    v74 = 0;
    v72 = v37;
    v73 = v38;
    v75 = 1065353216;
    *(_QWORD *)&v71.DY = 1065353216LL;
    *(_QWORD *)&v71.S_11 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v71);
  }
  if ( !v8 && !v4 && !v10
    || (v4 ? (v53 = *((float *)this + 197)) : (v53 = 0.0),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v71,
           (const struct D2DVector2 *)((unsigned __int64)v69 & -(__int64)(v8 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v63 & -(__int64)(v8 != 0)),
           (const struct D2DVector2 *)((unsigned __int64)v64 & -(__int64)(v4 != 0)),
           v53,
           (const struct D2DVector2 *)((unsigned __int64)v65 & -(__int64)(v10 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v76, (const struct D2DMatrix *)&v71),
         !v4)
     && !v8
     && !v10) )
  {
    if ( !v62 )
      goto LABEL_20;
  }
  v54 = (CMatrixTransformProxy *)*((_QWORD *)this + 41);
  v71.S_11 = v76;
  v71.S_12 = v77;
  v71.S_21 = v80;
  v71.S_22 = v81;
  v71.DX = v88;
  v71.DY = v89;
  v50 = CMatrixTransformProxy::Update(v54, &v71);
  v51 = v50;
  if ( v50 < 0 )
  {
    v60 = 1350LL;
    goto LABEL_56;
  }
  v55 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 41), &v67);
  v51 = v55;
  if ( v55 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x548,
      (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v55,
      v61);
    v3 = v67;
    goto LABEL_26;
  }
  v3 = v67;
  v50 = CRenderDataVisual::AddInstruction(v1, v67);
  v51 = v50;
  if ( v50 < 0 )
  {
    v60 = 1353LL;
  }
  else
  {
LABEL_20:
    v49 = (struct CBaseImageProxy *)*((_QWORD *)this + 75);
    if ( !v49 )
      v49 = (struct CBaseImageProxy *)*((_QWORD *)this + 73);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v66);
    v50 = CDrawTileImageInstruction::Create(
            v49,
            &v70,
            (const struct tagPOINT *)this + 118,
            *((float *)this + 186),
            &v66);
    v51 = v50;
    if ( v50 < 0 )
    {
      v60 = 1362LL;
    }
    else
    {
      v50 = CRenderDataVisual::AddInstruction(v1, v66);
      v51 = v50;
      if ( v50 < 0 )
      {
        v60 = 1363LL;
      }
      else
      {
        if ( !v3 )
        {
LABEL_25:
          v51 = 0;
          goto LABEL_26;
        }
        v56 = CPopInstruction::Create(&v68);
        v51 = v56;
        if ( v56 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x557,
            (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
            (const char *)(unsigned int)v56,
            v61);
          v6 = v68;
          goto LABEL_26;
        }
        v6 = v68;
        v50 = CRenderDataVisual::AddInstruction(v1, v68);
        v51 = v50;
        if ( v50 >= 0 )
          goto LABEL_25;
        v60 = 1368LL;
      }
    }
  }
LABEL_56:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v60,
    (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v50,
    v61);
LABEL_26:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v3 )
    CBaseObject::Release(v3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v66);
  return v51;
}
