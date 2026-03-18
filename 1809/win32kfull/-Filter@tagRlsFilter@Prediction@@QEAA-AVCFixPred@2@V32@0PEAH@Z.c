/*
 * XREFs of ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01D78D8
 * Callers:
 *     ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01D7FC4 (-InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTI.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01D8A58 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01D6B94 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01D6CF8 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_1C01D6CF8.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01D6E08 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01D6EFC (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01D7014 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AVCFixPred@0@AEBV-$Vector@VCFixPred@Prediction@@$0.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01D7104 (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01D717C (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01D71E4 (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01D72F8 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01D7388 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01D7438 (--4-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z @ 0x1C01D7474 (--4-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01D74A4 (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z @ 0x1C01D9908 (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAAXAEBVCFixPred@2@@Z.c)
 */

_QWORD *__fastcall Prediction::tagRlsFilter::Filter(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _QWORD *v6; // r11
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // r9d
  __int64 *v12; // rdx
  BOOL v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 *v22; // r8
  _QWORD *v23; // rax
  char *v24; // rax
  char *v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // rsi
  __int64 *v29; // rax
  char *v30; // rax
  char *v31; // rax
  _QWORD *v32; // r13
  __int64 v33; // rax
  __int64 *v34; // r12
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  _QWORD *v40; // rax
  char *v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r8
  int v48; // r11d
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  signed __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rdi
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rcx
  __int64 v57; // r9
  __int64 v58; // rax
  int v59; // ebx
  unsigned __int64 v60; // r11
  int v61; // r10d
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rax
  char *v65; // rdi
  char *v66; // rax
  __int64 *v67; // rbx
  char *v68; // rax
  unsigned __int64 *v69; // rax
  unsigned __int64 *v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rbx
  char *v73; // rdx
  signed __int64 v74; // rdi
  __int64 v75; // r10
  __int64 v76; // r9
  char *v77; // rax
  char *v78; // rax
  char *v79; // rax
  char *v80; // rbx
  char *v81; // rax
  char *v82; // rax
  char *v83; // rax
  char *v84; // rax
  _QWORD *result; // rax
  __int64 v86; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v87; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v88; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v89; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *i; // [rsp+40h] [rbp-C0h]
  _QWORD *v91; // [rsp+48h] [rbp-B8h]
  char v92[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v93[24]; // [rsp+68h] [rbp-98h] BYREF
  char v94[80]; // [rsp+80h] [rbp-80h] BYREF
  char v95[24]; // [rsp+D0h] [rbp-30h] BYREF
  char v96[24]; // [rsp+E8h] [rbp-18h] BYREF
  char v97[80]; // [rsp+100h] [rbp+0h] BYREF
  char v98[80]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v99[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v100[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v101[80]; // [rsp+240h] [rbp+140h] BYREF
  char v102[80]; // [rsp+290h] [rbp+190h] BYREF
  char v103[80]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v104[80]; // [rsp+330h] [rbp+230h] BYREF
  char v105[80]; // [rsp+380h] [rbp+280h] BYREF

  v89 = a4;
  v6 = (_QWORD *)a3;
  v88 = a3;
  v91 = a2;
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
    if ( v8 != &v87 )
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
    if ( a1 + 53 != &v87 )
      a1[53] = v18;
    if ( v19 != &v87 )
      *v19 = v20;
    if ( a1 + 51 != &v87 )
      a1[51] = v17;
    if ( a1 + 52 != &v87 )
      a1[52] = v21;
    v22 = a1 + 48;
    if ( a1 + 48 != v19 )
      *v22 = *v19;
    v87 = 0x100000000LL;
    v23 = Prediction::operator/(&v86, &v87, v22);
    if ( a1 + 49 != v23 )
      a1[49] = *v23;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 18, a1 + 53);
    v87 = 0x100000000LL;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(a1 + 36, &v87);
    v7 = a1 + 2;
    v6 = (_QWORD *)v88;
  }
  v24 = Prediction::operator*<Prediction::CFixPred,3>(v92, (__int64)(a1 + 18), a1);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 12, (__int64)v24);
  v25 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v86, a1, (__int64)(a1 + 12));
  v26 = a1 + 45;
  if ( a1 + 45 == (_QWORD *)v25 )
  {
    v27 = a1[45];
  }
  else
  {
    v27 = *(_QWORD *)v25;
    *v26 = *(_QWORD *)v25;
  }
  v28 = a1 + 48;
  if ( v26 != &v86 )
    *v26 = v27 + a1[48];
  v88 = 0x100000000LL;
  v29 = Prediction::operator/(&v86, &v88, a1 + 45);
  if ( v26 != v29 )
    *v26 = *v29;
  v30 = Prediction::operator*<Prediction::CFixPred,3>(v92, (__int64)(a1 + 12), a1 + 45);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 9, (__int64)v30);
  v31 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v86, a1 + 6, (__int64)a1);
  v32 = a1 + 46;
  if ( a1 + 46 == (_QWORD *)v31 )
  {
    v33 = a1[46];
  }
  else
  {
    v33 = *(_QWORD *)v31;
    *v32 = v33;
  }
  v34 = a1 + 47;
  if ( a1 + 47 != &v86 )
    *v34 = *(_QWORD *)v89 - v33;
  v35 = Prediction::operator*<Prediction::CFixPred,3>(v92, (__int64)(a1 + 9), a1 + 47);
  v36 = Prediction::operator+<Prediction::CFixPred,3>(v93, (__int64)(a1 + 6), (__int64)v35);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 6, (__int64)v36);
  v37 = Prediction::operator^<Prediction::CFixPred,3>(v94, (__int64)(a1 + 9), (__int64)(a1 + 12));
  v38 = Prediction::operator-<Prediction::CFixPred,3>(v97, (__int64)(a1 + 18), (__int64)v37);
  v39 = Prediction::operator*<Prediction::CFixPred,3>(v98, (__int64)v38, a1 + 49);
  v40 = Prediction::Tri<Prediction::CFixPred,3>(v99, (__int64)v39);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 18, (__int64)v40);
  v41 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v86, a1 + 15, (__int64)a1);
  v42 = *v34;
  v43 = -*(_QWORD *)v41;
  v44 = (*v34 ^ *(_QWORD *)v41) >> 63;
  if ( *(__int64 *)v41 >= 0 )
    v43 = *(_QWORD *)v41;
  v45 = -v42;
  if ( v42 >= 0 )
    v45 = *v34;
  v46 = (unsigned int)v45 * (unsigned __int64)(unsigned int)v43;
  v47 = (unsigned int)v43 * HIDWORD(v45);
  v48 = HIDWORD(v43) * HIDWORD(v45);
  v49 = HIDWORD(v46) + (unsigned int)v45 * HIDWORD(v43);
  v50 = a1[50];
  v51 = v44 ^ ((unsigned int)(v49 + v47) | ((unsigned __int64)(unsigned int)((((unsigned int)v49 + v47) >> 32)
                                                                           + v48
                                                                           + HIDWORD(v49)) << 32));
  v52 = v51 - v44;
  if ( (_DWORD)v46 )
    v52 = v51;
  if ( v52 >= v50 )
  {
    v50 = v52;
    if ( v52 > a1[51] )
      v50 = a1[51];
  }
  v53 = a1[52];
  v54 = (v53 ^ v50) >> 63;
  v55 = -v53;
  if ( v53 >= 0 )
    v55 = a1[52];
  v56 = abs64(v50);
  v57 = (unsigned int)v55;
  v58 = (unsigned int)v56;
  v59 = v56 * v55;
  v60 = HIDWORD(v55);
  v61 = HIDWORD(v55) * HIDWORD(v56);
  v62 = ((v55 * (unsigned int)v56) >> 32) + (unsigned int)v55 * HIDWORD(v56);
  v63 = (v54 ^ ((unsigned int)v62 | ((unsigned __int64)(unsigned int)(HIDWORD(v62)
                                                                    + v61
                                                                    + ((((unsigned __int64)(v58 * v57) >> 32) + v58 * v60) >> 32)) << 32)))
      - v54;
  if ( v59 )
    v63 = v54 ^ ((unsigned int)v62 | ((unsigned __int64)(unsigned int)(HIDWORD(v62)
                                                                     + v61
                                                                     + ((((unsigned __int64)(v58 * v57) >> 32)
                                                                       + v58 * v60) >> 32)) << 32));
  if ( v28 != &v86 )
    *v28 += v63;
  v89 = 0x100000000LL;
  v64 = Prediction::operator/(&v86, &v89, a1 + 48);
  if ( a1 + 49 != v64 )
    a1[49] = *v64;
  v65 = Prediction::operator^<Prediction::CFixPred,3>((char *)v99, (__int64)(a1 + 9), (__int64)(a1 + 9));
  v66 = Prediction::operator^<Prediction::CFixPred,3>(v98, (__int64)a1, (__int64)(a1 + 9));
  v67 = (__int64 *)Prediction::operator-<Prediction::CFixPred,3>(v97, (__int64)(a1 + 36), (__int64)v66);
  v68 = Prediction::operator^<Prediction::CFixPred,3>(v102, (__int64)(a1 + 9), (__int64)a1);
  v69 = (unsigned __int64 *)Prediction::operator-<Prediction::CFixPred,3>(v103, (__int64)(a1 + 36), (__int64)v68);
  v70 = (unsigned __int64 *)Prediction::operator*<Prediction::CFixPred,3>((__int64)v104, v69, a1 + 27);
  v71 = Prediction::operator*<Prediction::CFixPred,3>((__int64)v105, v70, v67);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(v94);
  v72 = v71 - (_QWORD)v65;
  v73 = v94;
  v74 = v65 - v94;
  v75 = 3LL;
  do
  {
    v76 = 3LL;
    do
    {
      if ( v73 != (char *)&v86 )
        *(_QWORD *)v73 = *(_QWORD *)&v73[v74] + *(_QWORD *)&v73[v74 + v72];
      v73 += 8;
      --v76;
    }
    while ( v76 );
    --v75;
  }
  while ( v75 );
  v77 = Prediction::operator-<Prediction::CFixPred,3>(v100, (__int64)v94, (__int64)(a1 + 18));
  v78 = Prediction::operator*<Prediction::CFixPred,3>(v101, (__int64)v77, a1 + 49);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(a1 + 27, (__int64)v78);
  v79 = Prediction::operator*<Prediction::CFixPred,3>(v93, (__int64)(a1 + 27), a1);
  v80 = Prediction::operator*<Prediction::CFixPred,3>(v92, (__int64)v79, a1 + 47);
  v81 = Prediction::operator^<Prediction::CFixPred,3>(v101, (__int64)(a1 + 9), (__int64)a1);
  v82 = Prediction::operator-<Prediction::CFixPred,3>(v100, (__int64)(a1 + 36), (__int64)v81);
  v83 = Prediction::operator*<Prediction::CFixPred,3>(v95, (__int64)v82, a1 + 15);
  v84 = Prediction::operator+<Prediction::CFixPred,3>(v96, (__int64)v83, (__int64)v80);
  Prediction::Vector<Prediction::CFixPred,3>::operator=(a1 + 15, (__int64)v84);
  result = v91;
  *v91 = *v32;
  return result;
}
