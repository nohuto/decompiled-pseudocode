/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800152F0
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022F84 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180004020 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18000EE08 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180010A80 (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180014F80 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800189A0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800218A8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800B21DC (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v1; // r15
  CBaseObject *v3; // rbx
  char v4; // si
  int v5; // edx
  struct CPopInstruction *v6; // rdi
  unsigned int v7; // r8d
  char v8; // r12
  char v9; // r14
  __int64 v10; // xmm0_8
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  __m128i v14; // xmm6
  float v15; // xmm5_4
  __m128i v16; // xmm15
  unsigned int v17; // eax
  struct tagRECT v18; // xmm0
  float v19; // xmm6_4
  __m128i v20; // xmm9
  int v21; // eax
  float v22; // xmm9_4
  float v23; // xmm15_4
  float v24; // xmm11_4
  float v25; // xmm10_4
  float v26; // xmm11_4
  float left; // xmm7_4
  float v28; // xmm15_4
  float v29; // xmm14_4
  float v30; // xmm8_4
  float v31; // xmm13_4
  float top; // xmm6_4
  LONG v33; // eax
  float v34; // xmm12_4
  float v35; // xmm7_4
  float v36; // xmm7_4
  int v37; // ecx
  float v38; // xmm0_4
  float v39; // xmm8_4
  float v40; // xmm10_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm5_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  double v49; // xmm0_8
  float v50; // xmm1_4
  struct CResource *v51; // rsi
  int v52; // eax
  unsigned int v53; // esi
  int v54; // eax
  float v56; // xmm0_4
  __int64 v57; // rax
  int v58; // eax
  float v59; // xmm9_4
  int v60; // ecx
  int v61; // eax
  __int64 v62; // rdx
  int v63; // [rsp+28h] [rbp-E0h]
  char v64; // [rsp+48h] [rbp-C0h]
  struct tagRECT v65; // [rsp+58h] [rbp-B0h] BYREF
  float v66[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v67[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CDrawTileImageInstruction *v68; // [rsp+78h] [rbp-90h] BYREF
  struct CPushTransformInstruction *v69; // [rsp+80h] [rbp-88h] BYREF
  struct CPopInstruction *v70; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v71[2]; // [rsp+90h] [rbp-78h] BYREF
  struct tagRECT v72; // [rsp+98h] [rbp-70h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-60h] BYREF
  double v74; // [rsp+B0h] [rbp-58h]
  double v75; // [rsp+B8h] [rbp-50h]
  double v76; // [rsp+C0h] [rbp-48h]
  double v77; // [rsp+C8h] [rbp-40h]
  __int64 v78; // [rsp+D0h] [rbp-38h]
  float v79; // [rsp+D8h] [rbp-30h]
  float v80; // [rsp+DCh] [rbp-2Ch]
  int v81; // [rsp+E0h] [rbp-28h]
  int v82; // [rsp+E4h] [rbp-24h]
  float v83; // [rsp+E8h] [rbp-20h] BYREF
  float v84; // [rsp+ECh] [rbp-1Ch]
  int v85; // [rsp+F0h] [rbp-18h]
  int v86; // [rsp+F4h] [rbp-14h]
  float v87; // [rsp+F8h] [rbp-10h]
  float v88; // [rsp+FCh] [rbp-Ch]
  int v89; // [rsp+100h] [rbp-8h]
  int v90; // [rsp+104h] [rbp-4h]
  int v91; // [rsp+108h] [rbp+0h]
  int v92; // [rsp+10Ch] [rbp+4h]
  int v93; // [rsp+110h] [rbp+8h]
  int v94; // [rsp+114h] [rbp+Ch]
  float v95; // [rsp+118h] [rbp+10h]
  float v96; // [rsp+11Ch] [rbp+14h]
  int v97; // [rsp+120h] [rbp+18h]
  int v98; // [rsp+124h] [rbp+1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v68 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = *((_DWORD *)this + 214);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 215);
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)((char *)this + 764);
  v11 = *((_DWORD *)this + 216) - v5;
  v65.right = *((_DWORD *)this + 193);
  v12 = 0;
  if ( v11 >= 0 )
    v12 = v11;
  v13 = *((_DWORD *)this + 217) - v7;
  v14 = _mm_cvtsi32_si128(v7);
  v15 = (float)v5;
  v64 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v16 = _mm_cvtsi32_si128(v12);
  v17 = 0;
  if ( v13 >= 0 )
    v17 = v13;
  *(_QWORD *)&v65.left = v10;
  v18 = *(struct tagRECT *)((char *)this + 856);
  v19 = _mm_cvtepi32_ps(v14).m128_f32[0];
  v20 = _mm_cvtsi32_si128(v17);
  v21 = *((_DWORD *)this + 238);
  v66[0] = (float)v5;
  v67[0] = v19;
  v22 = _mm_cvtepi32_ps(v20).m128_f32[0];
  v23 = _mm_cvtepi32_ps(v16).m128_f32[0];
  v24 = v23 * *((float *)this + 194);
  v25 = (float)(v22 * *((float *)this + 195)) + v19;
  v72 = v18;
  v26 = v24 + v15;
  *(float *)&v71[1] = v25;
  *(float *)v71 = v26;
  if ( v21 || *((_DWORD *)this + 239) )
  {
    left = (float)v72.left;
    v28 = v23 / (float)((float)v21 / *((float *)this + 203));
    v29 = *(float *)&v65.left * v28;
    v30 = v22 / (float)((float)*((int *)this + 239) / *((float *)this + 204));
    v31 = *(float *)&v65.top * v30;
    v65.left = RoundToNearestInt((float)((float)((float)v72.left - v26) / v28) + v26);
    top = (float)v72.top;
    v65.top = RoundToNearestInt((float)((float)((float)v72.top - v25) / v30) + v25);
    v65.right = RoundToNearestInt((float)((float)((float)v72.right - v26) / v28) + v26);
    v33 = RoundToNearestInt((float)((float)((float)v72.bottom - v25) / v30) + v25);
    v15 = v66[0];
    v5 = *((_DWORD *)this + 214);
    v4 = 0;
    v7 = *((_DWORD *)this + 215);
    v65.bottom = v33;
    v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v72 = v65;
    v9 = 0;
    v34 = (float)((float)((float)((float)((float)v65.left - v26) * v28) + v26) - left) * *((float *)this + 191);
    v35 = (float)((float)((float)((float)v65.top - v25) * v30) + v25) - top;
    v19 = v67[0];
    v36 = v35 * *((float *)this + 192);
  }
  else
  {
    v31 = *(float *)&v65.top;
    v34 = 0.0;
    v29 = *(float *)&v65.left;
    v36 = 0.0;
  }
  v37 = *((_DWORD *)this + 216);
  v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v29 - 1.0)) & _xmm);
  v39 = (float)(v37 + v5) * 0.5;
  v40 = (float)(int)(v7 + *((_DWORD *)this + 217)) * 0.5;
  if ( v38 >= 0.0000011920929
    || (v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v31 - 1.0)) & _xmm), v41 >= 0.0000011920929) )
  {
    *(_QWORD *)&v65.left = __PAIR64__(LODWORD(v31), LODWORD(v29));
    v8 = 1;
  }
  v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 197)) & _xmm);
  if ( v42 >= 0.0000011920929 )
  {
    v59 = v22 * *((float *)this + 201);
    v60 = v37 - v5;
    v61 = 0;
    v4 = 1;
    if ( v60 >= 0 )
      v61 = v60;
    v66[1] = v59 + v19;
    v66[0] = (float)((float)v61 * *((float *)this + 200)) + v15;
  }
  v43 = *((float *)this + 188);
  v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v43) & _xmm);
  if ( v44 >= 0.0000011920929 )
  {
    v45 = *((float *)this + 189);
  }
  else
  {
    v45 = *((float *)this + 189);
    v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v45) & _xmm);
    if ( v46 < 0.0000011920929 )
    {
      v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v34) & _xmm);
      if ( v47 < 0.0000011920929 )
      {
        v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v36) & _xmm);
        if ( v48 < 0.0000011920929 )
          goto LABEL_14;
      }
    }
  }
  v9 = 1;
  v67[0] = v43 - v34;
  v67[1] = v45 - v36;
LABEL_14:
  v97 = 0;
  v96 = 0.0;
  v95 = 0.0;
  v94 = 0;
  v92 = 0;
  v91 = 0;
  v90 = 0;
  v89 = 0;
  v87 = 0.0;
  v86 = 0;
  v85 = 0;
  v84 = 0.0;
  v49 = *((float *)this + 235);
  v98 = 1065353216;
  v93 = 1065353216;
  v88 = 1.0;
  v83 = 1.0;
  v50 = COERCE_DOUBLE(*(_QWORD *)&v49 & _xmm);
  if ( v50 >= 0.0000011920929 )
  {
    v77 = 0.0;
    v76 = 0.0;
    v75 = 0.0078125;
    v74 = 0.0;
    v81 = 0;
    LODWORD(v79) = LODWORD(v39) ^ _xmm;
    LODWORD(v80) = LODWORD(v40) ^ _xmm;
    v64 = 1;
    v82 = 1065353216;
    v78 = 1065353216LL;
    v73 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v73);
    D2DMatrixRotationZ((struct D2DMatrix *)&v73, *((float *)this + 235) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v73);
    v77 = 0.0;
    v76 = 0.0;
    v75 = 0.0078125;
    v74 = 0.0;
    v81 = 0;
    v79 = v39;
    v80 = v40;
    v82 = 1065353216;
    v78 = 1065353216LL;
    v73 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v73);
  }
  if ( !v8 && !v4 && !v9
    || (v4 ? (v56 = *((float *)this + 197)) : (v56 = 0.0),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v73,
           (const struct D2DVector2 *)((unsigned __int64)v71 & -(__int64)(v8 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v65 & -(__int64)(v8 != 0)),
           (const struct D2DVector2 *)((unsigned __int64)v66 & -(__int64)(v4 != 0)),
           v56,
           (const struct D2DVector2 *)((unsigned __int64)v67 & -(__int64)(v9 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v83, (const struct D2DMatrix *)&v73),
         !v4)
     && !v8
     && !v9) )
  {
    if ( !v64 )
      goto LABEL_20;
  }
  v57 = *((_QWORD *)this + 41);
  *(double *)&v73 = v83;
  v74 = v84;
  v75 = v87;
  v76 = v88;
  v77 = v95;
  *(double *)&v78 = v96;
  v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v57 + 16) + 1160LL))(
          *(_QWORD *)(v57 + 16),
          *(unsigned int *)(v57 + 24),
          &v73);
  v53 = v52;
  if ( v52 < 0 )
  {
    v62 = 1371LL;
    goto LABEL_57;
  }
  v58 = CPushTransformInstruction::Create(*((struct CResource **)this + 41), &v69);
  v53 = v58;
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55D,
      (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v58,
      v63);
    v3 = v69;
    goto LABEL_28;
  }
  v3 = v69;
  v52 = CRenderDataVisual::AddInstruction(v1, v69);
  v53 = v52;
  if ( v52 < 0 )
  {
    v62 = 1374LL;
  }
  else
  {
LABEL_20:
    v51 = (struct CResource *)*((_QWORD *)this + 75);
    if ( !v51 )
      v51 = (struct CResource *)*((_QWORD *)this + 73);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v68);
    v52 = CDrawTileImageInstruction::Create(
            v51,
            &v72,
            (const struct tagPOINT *)this + 118,
            *((float *)this + 186),
            &v68);
    v53 = v52;
    if ( v52 < 0 )
    {
      v62 = 1384LL;
    }
    else
    {
      v52 = CRenderDataVisual::AddInstruction(v1, v68);
      v53 = v52;
      if ( v52 < 0 )
      {
        v62 = 1385LL;
      }
      else
      {
        if ( !v3 )
        {
LABEL_27:
          v53 = 0;
          goto LABEL_28;
        }
        v54 = CPopInstruction::Create(&v70);
        v53 = v54;
        if ( v54 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x56D,
            (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
            (const char *)(unsigned int)v54,
            v63);
          v6 = v70;
          goto LABEL_28;
        }
        v6 = v70;
        v52 = CRenderDataVisual::AddInstruction(v1, v70);
        v53 = v52;
        if ( v52 >= 0 )
          goto LABEL_27;
        v62 = 1390LL;
      }
    }
  }
LABEL_57:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v62,
    (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v52,
    v63);
LABEL_28:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v3 )
    CBaseObject::Release(v3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v68);
  return v53;
}
