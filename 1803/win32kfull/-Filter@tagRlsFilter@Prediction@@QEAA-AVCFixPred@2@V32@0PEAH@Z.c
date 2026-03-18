/*
 * XREFs of ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01B4FD8
 * Callers:
 *     ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01B56E4 (-InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTI.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01B614C (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01B421C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01B439C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01B439C.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01B44C8 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01B45D8 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01B470C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01B4814 (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01B488C (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01B48F4 (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01B4A24 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01B4AB4 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01B4B64 (--4-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01B4BA0 (--4-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01B4BD0 (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z @ 0x1C01B7164 (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z.c)
 */

_QWORD *__fastcall Prediction::tagRlsFilter::Filter(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 *v6; // r11
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // r9d
  __int64 *v12; // rdx
  BOOL v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // r8
  __int64 *v23; // rax
  char *v24; // rax
  char *v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // rsi
  __int64 *v29; // rax
  char *v30; // rax
  char *v31; // rax
  __int64 v32; // rax
  __int64 *v33; // r14
  char *v34; // rax
  char *v35; // rax
  _QWORD *v36; // r13
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  _QWORD *v40; // rax
  char *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  unsigned int v44; // ecx
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  unsigned int v47; // edx
  unsigned __int64 v48; // r10
  __int64 v49; // r9
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  unsigned int v58; // r9d
  __int64 v59; // rdi
  unsigned int v60; // edx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rbx
  int v65; // r10d
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  _QWORD *v70; // rax
  char *v71; // rdi
  char *v72; // rax
  __int64 *v73; // rbx
  char *v74; // rax
  __int64 *v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rbx
  char *v79; // rdx
  signed __int64 v80; // rdi
  __int64 v81; // r10
  __int64 v82; // r9
  char *v83; // rax
  char *v84; // rax
  char *v85; // rax
  char *v86; // rbx
  char *v87; // rax
  char *v88; // rax
  char *v89; // rax
  char *v90; // rax
  _QWORD *result; // rax
  __int64 v92; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v93; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v94; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v95; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *i; // [rsp+40h] [rbp-C0h]
  _QWORD *v97; // [rsp+48h] [rbp-B8h]
  char v98[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v99[24]; // [rsp+68h] [rbp-98h] BYREF
  char v100[80]; // [rsp+80h] [rbp-80h] BYREF
  char v101[24]; // [rsp+D0h] [rbp-30h] BYREF
  char v102[24]; // [rsp+E8h] [rbp-18h] BYREF
  char v103[80]; // [rsp+100h] [rbp+0h] BYREF
  char v104[80]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v105[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v106[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v107[80]; // [rsp+240h] [rbp+140h] BYREF
  char v108[80]; // [rsp+290h] [rbp+190h] BYREF
  char v109[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v110[80]; // [rsp+330h] [rbp+230h] BYREF
  char v111[80]; // [rsp+380h] [rbp+280h] BYREF

  v95 = a4;
  v6 = (__int64 *)a3;
  v94 = a3;
  v97 = a2;
  *a5 = 0;
  v7 = a1 + 2;
  for ( i = a5; ; *i = 1 )
  {
    v8 = a1 + 3;
    v9 = a1 + 1;
    v10 = *v7;
    v11 = 2;
    v12 = v7;
    do
    {
      if ( v12 != v9 )
        *v12 = *v9;
      if ( v12 + 3 != v9 + 3 )
        v12[3] = v9[3];
      --v9;
      --v12;
      --v11;
    }
    while ( v11 );
    if ( a1 != v6 )
      *a1 = *v6;
    if ( v8 != &v93 )
      *v8 = v10;
    v13 = 1;
    v14 = a1;
    v15 = 3LL;
    do
    {
      v13 = v13 && *v14 && (v16 = v14[3]) != 0 && (*v14 ^ v16) < 0;
      ++v14;
      --v15;
    }
    while ( v15 );
    if ( !v13 )
      break;
    v17 = a1[51];
    v18 = a1[53];
    v19 = a1 + 50;
    v20 = a1[50];
    v21 = a1[52];
    memset(a1, 0, 0x1B0uLL);
    if ( a1 + 53 != &v93 )
      a1[53] = v18;
    if ( v19 != &v93 )
      *v19 = v20;
    if ( a1 + 51 != &v93 )
      a1[51] = v17;
    if ( a1 + 52 != &v93 )
      a1[52] = v21;
    v22 = a1 + 48;
    if ( a1 + 48 != v19 )
      *v22 = *v19;
    v93 = 0x100000000LL;
    v23 = Prediction::operator/(&v92, &v93, v22);
    if ( a1 + 49 != v23 )
      a1[49] = *v23;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 18, a1 + 53);
    v93 = 0x100000000LL;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 36, &v93);
    v7 = a1 + 2;
    v6 = (__int64 *)v94;
  }
  v24 = Prediction::operator*<Prediction::CFixPred,3>(v98, (__int64)(a1 + 18), a1);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 12, (__int64)v24);
  v25 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v92, a1, (__int64)(a1 + 12));
  v26 = a1 + 45;
  if ( a1 + 45 == (__int64 *)v25 )
  {
    v27 = a1[45];
  }
  else
  {
    v27 = *(_QWORD *)v25;
    *v26 = *(_QWORD *)v25;
  }
  v28 = a1 + 48;
  if ( v26 != &v92 )
    *v26 = v27 + a1[48];
  v94 = 0x100000000LL;
  v29 = Prediction::operator/(&v92, &v94, a1 + 45);
  if ( v26 != v29 )
    *v26 = *v29;
  v30 = Prediction::operator*<Prediction::CFixPred,3>(v98, (__int64)(a1 + 12), a1 + 45);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 9, (__int64)v30);
  v31 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v92, a1 + 6, (__int64)a1);
  if ( a1 + 46 == (__int64 *)v31 )
  {
    v32 = a1[46];
  }
  else
  {
    v32 = *(_QWORD *)v31;
    a1[46] = v32;
  }
  v33 = a1 + 47;
  if ( a1 + 47 != &v92 )
    *v33 = *(_QWORD *)v95 - v32;
  v34 = Prediction::operator*<Prediction::CFixPred,3>(v98, (__int64)(a1 + 9), a1 + 47);
  v35 = Prediction::operator+<Prediction::CFixPred,3>(v99, (__int64)(a1 + 6), (__int64)v34);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 6, (__int64)v35);
  v36 = a1 + 49;
  v37 = Prediction::operator^<Prediction::CFixPred,3>(v100, (__int64)(a1 + 9), (__int64)(a1 + 12));
  v38 = Prediction::operator-<Prediction::CFixPred,3>(v103, (__int64)(a1 + 18), (__int64)v37);
  v39 = Prediction::operator*<Prediction::CFixPred,3>(v104, (__int64)v38, a1 + 49);
  v40 = Prediction::Tri<Prediction::CFixPred,3>(v105, (__int64)v39);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 18, (__int64)v40);
  v41 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v92, a1 + 15, (__int64)a1);
  v42 = *v33;
  v43 = *(_QWORD *)v41;
  v44 = *(_QWORD *)v41;
  v45 = (*v33 ^ *(_QWORD *)v41) >> 63;
  if ( *(__int64 *)v41 < 0 )
    v44 = -v44;
  v46 = -v43;
  if ( v43 >= 0 )
    v46 = v43;
  v47 = *v33;
  if ( v42 < 0 )
    v47 = -(int)v42;
  v48 = -v42;
  v49 = v44;
  if ( v42 >= 0 )
    v48 = *v33;
  v50 = v47 * (unsigned __int64)v44;
  v51 = HIDWORD(v50) + v47 * HIDWORD(v46);
  v52 = (unsigned int)v51 + v49 * HIDWORD(v48);
  v53 = (unsigned int)(HIDWORD(v52) + HIDWORD(v46) * HIDWORD(v48) + HIDWORD(v51));
  v54 = a1[50];
  v55 = v45 ^ ((unsigned int)v52 | (unsigned __int64)(v53 << 32));
  v56 = v55 - v45;
  if ( (_DWORD)v50 )
    v56 = v55;
  if ( v56 >= v54 )
  {
    v54 = v56;
    if ( v56 > a1[51] )
      v54 = a1[51];
  }
  v57 = a1[52];
  v58 = v54;
  v59 = (v57 ^ v54) >> 63;
  v60 = v57;
  if ( v57 < 0 )
    v60 = -(int)v57;
  v61 = -v57;
  if ( v57 >= 0 )
    v61 = a1[52];
  v62 = -v54;
  if ( v54 < 0 )
    v58 = -(int)v54;
  v63 = HIDWORD(v61);
  if ( v54 >= 0 )
    v62 = v54;
  v64 = v58 * (unsigned __int64)v60;
  v65 = v63 * HIDWORD(v62);
  v66 = HIDWORD(v64) + v58 * v63;
  v67 = (unsigned int)v66 + v60 * HIDWORD(v62);
  v68 = v59 ^ ((unsigned int)v67 | ((unsigned __int64)(unsigned int)(HIDWORD(v67) + v65 + HIDWORD(v66)) << 32));
  v69 = v68 - v59;
  if ( (_DWORD)v64 )
    v69 = v68;
  if ( v28 != &v92 )
    *v28 += v69;
  v95 = 0x100000000LL;
  v70 = Prediction::operator/(&v92, &v95, a1 + 48);
  if ( v36 != v70 )
    *v36 = *v70;
  v71 = Prediction::operator^<Prediction::CFixPred,3>((char *)v105, (__int64)(a1 + 9), (__int64)(a1 + 9));
  v72 = Prediction::operator^<Prediction::CFixPred,3>(v104, (__int64)a1, (__int64)(a1 + 9));
  v73 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v103, (__int64)(a1 + 36), (__int64)v72);
  v74 = Prediction::operator^<Prediction::CFixPred,3>(v108, (__int64)(a1 + 9), (__int64)a1);
  v75 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v109, (__int64)(a1 + 36), (__int64)v74);
  v76 = (__int64 *)Prediction::operator*<Prediction::CFixPred,3>((__int64)v110, v75, a1 + 27);
  v77 = Prediction::operator*<Prediction::CFixPred,3>((__int64)v111, v76, v73);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(v100);
  v78 = v77 - (_QWORD)v71;
  v79 = v100;
  v80 = v71 - v100;
  v81 = 3LL;
  do
  {
    v82 = 3LL;
    do
    {
      if ( v79 != (char *)&v92 )
        *(_QWORD *)v79 = *(_QWORD *)&v79[v80] + *(_QWORD *)&v79[v80 + v78];
      v79 += 8;
      --v82;
    }
    while ( v82 );
    --v81;
  }
  while ( v81 );
  v83 = Prediction::operator-<Prediction::CFixPred,3>(v106, (__int64)v100, (__int64)(a1 + 18));
  v84 = Prediction::operator*<Prediction::CFixPred,3>(v107, (__int64)v83, a1 + 49);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 27, (__int64)v84);
  v85 = Prediction::operator*<Prediction::CFixPred,3>(v99, (__int64)(a1 + 27), a1);
  v86 = Prediction::operator*<Prediction::CFixPred,3>(v98, (__int64)v85, a1 + 47);
  v87 = Prediction::operator^<Prediction::CFixPred,3>(v107, (__int64)(a1 + 9), (__int64)a1);
  v88 = Prediction::operator-<Prediction::CFixPred,3>(v106, (__int64)(a1 + 36), (__int64)v87);
  v89 = Prediction::operator*<Prediction::CFixPred,3>(v101, (__int64)v88, a1 + 15);
  v90 = Prediction::operator+<Prediction::CFixPred,3>(v102, (__int64)v89, (__int64)v86);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 15, (__int64)v90);
  result = v97;
  *v97 = a1[46];
  return result;
}
