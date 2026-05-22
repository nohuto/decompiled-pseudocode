/*
 * XREFs of ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18008F790
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D504 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x180091254 (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::FeedRecognizer(
        MPCSpatialGestureRecognizerHandler *this,
        struct InputInfo *a2)
{
  __int64 *v4; // rcx
  __int128 *v5; // r8
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rdx
  __int64 (__fastcall *v10)(__int64 *, __int128 *, _QWORD, __int128 *); // r10
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rdx
  int v25; // eax
  __int64 *v26; // rcx
  __int128 *v27; // r8
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int128 *v31; // rdx
  __int64 (__fastcall *v32)(__int64 *, __int128 *, _QWORD, __int128 *); // r10
  __int64 v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rdx
  int v47; // eax
  __int64 *v48; // rcx
  __int128 *v49; // r8
  __int128 v50; // xmm1
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 *v53; // rdx
  __int64 (__fastcall *v54)(__int64 *, __int128 *, _QWORD, __int128 *); // r10
  __int64 v55; // rax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int64 v68; // rdx
  int v69; // eax
  __int64 *v70; // rcx
  __int128 *v71; // rdx
  __int128 v72; // xmm1
  __int128 *v73; // r8
  __int64 v74; // rax
  __int128 v75; // xmm0
  __int64 (__fastcall *v76)(__int64 *, __int128 *, _QWORD, __int128 *); // r10
  __int64 v77; // rax
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int64 v90; // rdx
  int v91; // eax
  int v92; // eax
  __int64 *v93; // rcx
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int64 v96; // rax
  __int128 v97; // xmm1
  __int64 (__fastcall *v98)(__int64 *, __int128 *, _QWORD, __int128 *); // rax
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int64 v112; // rdx
  int v113; // eax
  __int64 *v114; // rcx
  __int128 v115; // xmm1
  __int128 v116; // xmm0
  __int64 v117; // rax
  __int128 v118; // xmm1
  __int64 (__fastcall *v119)(__int64 *, __int128 *, _QWORD, __int128 *); // rax
  __int128 v120; // xmm0
  __int128 v121; // xmm1
  __int128 v122; // xmm0
  __int128 v123; // xmm1
  __int128 v124; // xmm0
  __int128 v125; // xmm1
  __int128 v126; // xmm0
  __int128 v127; // xmm1
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm0
  __int128 v131; // xmm1
  __int128 v132; // xmm0
  __int64 v133; // rdx
  int v134; // eax
  __int64 *v135; // rcx
  __int128 v136; // xmm1
  __int128 v137; // xmm0
  __int64 v138; // rax
  __int128 v139; // xmm1
  __int64 (__fastcall *v140)(__int64 *, __int128 *, _QWORD, __int128 *); // rax
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int128 v143; // xmm0
  __int128 v144; // xmm1
  __int128 v145; // xmm0
  __int128 v146; // xmm1
  __int128 v147; // xmm0
  __int128 v148; // xmm1
  __int128 v149; // xmm0
  __int128 v150; // xmm1
  __int128 v151; // xmm0
  __int128 v152; // xmm1
  __int128 v153; // xmm0
  __int64 v154; // rdx
  int v155; // eax
  __int64 v156; // rdx
  __int64 *v157; // rcx
  __int128 v158; // xmm1
  __int128 v159; // xmm0
  __int64 v160; // rax
  __int128 v161; // xmm1
  __int64 (__fastcall *v162)(__int64 *, __int128 *, _QWORD, __int128 *); // rax
  __int128 v163; // xmm0
  __int128 v164; // xmm1
  __int128 v165; // xmm0
  __int128 v166; // xmm1
  __int128 v167; // xmm0
  __int128 v168; // xmm1
  __int128 v169; // xmm0
  __int128 v170; // xmm1
  __int128 v171; // xmm0
  __int128 v172; // xmm1
  __int128 v173; // xmm0
  __int128 v174; // xmm1
  __int128 v175; // xmm0
  __int64 v176; // rdx
  int v177; // eax
  __int128 v178; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v179; // [rsp+48h] [rbp-C0h]
  __int128 v180; // [rsp+58h] [rbp-B0h]
  __int128 v181; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v182; // [rsp+78h] [rbp-90h]
  __int128 v183; // [rsp+88h] [rbp-80h]
  __int128 v184; // [rsp+98h] [rbp-70h]
  __int128 v185; // [rsp+A8h] [rbp-60h]
  __int128 v186; // [rsp+B8h] [rbp-50h]
  __int128 v187; // [rsp+C8h] [rbp-40h]
  __int128 v188; // [rsp+D8h] [rbp-30h]
  __int128 v189; // [rsp+E8h] [rbp-20h]
  __int128 v190; // [rsp+F8h] [rbp-10h]
  __int128 v191; // [rsp+108h] [rbp+0h]
  __int128 v192; // [rsp+118h] [rbp+10h]
  __int128 v193; // [rsp+128h] [rbp+20h]
  __int128 v194; // [rsp+138h] [rbp+30h]
  __int128 v195; // [rsp+148h] [rbp+40h]
  __int64 v196; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+560h] [rbp+458h]

  *((_QWORD *)this + 13) = a2;
  *((_DWORD *)this + 8) = (int)*((float *)a2 + 168);
  *((_DWORD *)this + 9) = (int)*((float *)a2 + 169);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 2:
      MPCSpatialGestureRecognizerHandler::SetMode(this, *((unsigned int *)a2 + 45));
      v70 = (__int64 *)*((_QWORD *)this + 3);
      v71 = (__int128 *)((char *)a2 + 704);
      v72 = *((_OWORD *)a2 + 15);
      v73 = &v181;
      v178 = *((_OWORD *)a2 + 14);
      v74 = *v70;
      v75 = *((_OWORD *)a2 + 16);
      v179 = v72;
      v76 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v74 + 48);
      v77 = 9LL;
      v180 = v75;
      do
      {
        v78 = v71[1];
        *v73 = *v71;
        v79 = v71[2];
        v73[1] = v78;
        v80 = v71[3];
        v73[2] = v79;
        v81 = v71[4];
        v73[3] = v80;
        v82 = v71[5];
        v73[4] = v81;
        v83 = v71[6];
        v73[5] = v82;
        v84 = v71[7];
        v71 += 8;
        v73[6] = v83;
        v73 += 8;
        *(v73 - 1) = v84;
        --v77;
      }
      while ( v77 );
      v85 = v71[1];
      *v73 = *v71;
      v86 = v71[2];
      v73[1] = v85;
      v87 = v71[3];
      v73[2] = v86;
      v88 = v71[4];
      v73[3] = v87;
      v89 = v71[5];
      v90 = *((_QWORD *)v71 + 12);
      v73[4] = v88;
      v73[5] = v89;
      *((_QWORD *)v73 + 12) = v90;
      v91 = v76(v70, &v181, *((_QWORD *)a2 + 2), &v178);
      if ( v91 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          199LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v91);
        __debugbreak();
      }
      break;
    case 3:
      v48 = (__int64 *)*((_QWORD *)this + 3);
      v49 = &v181;
      v50 = *((_OWORD *)a2 + 15);
      v178 = *((_OWORD *)a2 + 14);
      v51 = *v48;
      v52 = *((_OWORD *)a2 + 16);
      v53 = (__int128 *)((char *)a2 + 704);
      v179 = v50;
      v54 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v51 + 64);
      v55 = 9LL;
      v180 = v52;
      do
      {
        v56 = v53[1];
        *v49 = *v53;
        v57 = v53[2];
        v49[1] = v56;
        v58 = v53[3];
        v49[2] = v57;
        v59 = v53[4];
        v49[3] = v58;
        v60 = v53[5];
        v49[4] = v59;
        v61 = v53[6];
        v49[5] = v60;
        v62 = v53[7];
        v53 += 8;
        v49[6] = v61;
        v49 += 8;
        *(v49 - 1) = v62;
        --v55;
      }
      while ( v55 );
      v63 = v53[1];
      *v49 = *v53;
      v64 = v53[2];
      v49[1] = v63;
      v65 = v53[3];
      v49[2] = v64;
      v66 = v53[4];
      v49[3] = v65;
      v67 = v53[5];
      v68 = *((_QWORD *)v53 + 12);
      v49[4] = v66;
      v49[5] = v67;
      *((_QWORD *)v49 + 12) = v68;
      v69 = v54(v48, &v181, *((_QWORD *)a2 + 2), &v178);
      if ( v69 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          219LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v69);
        __debugbreak();
      }
      break;
    case 4:
      v26 = (__int64 *)*((_QWORD *)this + 3);
      v27 = &v181;
      v28 = *((_OWORD *)a2 + 15);
      v178 = *((_OWORD *)a2 + 14);
      v29 = *v26;
      v30 = *((_OWORD *)a2 + 16);
      v31 = (__int128 *)((char *)a2 + 704);
      v179 = v28;
      v32 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v29 + 72);
      v33 = 9LL;
      v180 = v30;
      do
      {
        v34 = v31[1];
        *v27 = *v31;
        v35 = v31[2];
        v27[1] = v34;
        v36 = v31[3];
        v27[2] = v35;
        v37 = v31[4];
        v27[3] = v36;
        v38 = v31[5];
        v27[4] = v37;
        v39 = v31[6];
        v27[5] = v38;
        v40 = v31[7];
        v31 += 8;
        v27[6] = v39;
        v27 += 8;
        *(v27 - 1) = v40;
        --v33;
      }
      while ( v33 );
      v41 = v31[1];
      *v27 = *v31;
      v42 = v31[2];
      v27[1] = v41;
      v43 = v31[3];
      v27[2] = v42;
      v44 = v31[4];
      v27[3] = v43;
      v45 = v31[5];
      v46 = *((_QWORD *)v31 + 12);
      v27[4] = v44;
      v27[5] = v45;
      *((_QWORD *)v27 + 12) = v46;
      v47 = v32(v26, &v181, *((_QWORD *)a2 + 2), &v178);
      if ( v47 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          228LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v47);
        __debugbreak();
      }
      break;
    case 6:
    case 0xB:
      v4 = (__int64 *)*((_QWORD *)this + 3);
      v5 = &v181;
      v6 = *((_OWORD *)a2 + 15);
      v178 = *((_OWORD *)a2 + 14);
      v7 = *v4;
      v8 = *((_OWORD *)a2 + 16);
      v9 = (__int128 *)((char *)a2 + 704);
      v179 = v6;
      v10 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v7 + 56);
      v11 = 9LL;
      v180 = v8;
      do
      {
        v12 = v9[1];
        *v5 = *v9;
        v13 = v9[2];
        v5[1] = v12;
        v14 = v9[3];
        v5[2] = v13;
        v15 = v9[4];
        v5[3] = v14;
        v16 = v9[5];
        v5[4] = v15;
        v17 = v9[6];
        v5[5] = v16;
        v18 = v9[7];
        v9 += 8;
        v5[6] = v17;
        v5 += 8;
        *(v5 - 1) = v18;
        --v11;
      }
      while ( v11 );
      v19 = v9[1];
      *v5 = *v9;
      v20 = v9[2];
      v5[1] = v19;
      v21 = v9[3];
      v5[2] = v20;
      v22 = v9[4];
      v5[3] = v21;
      v23 = v9[5];
      v24 = *((_QWORD *)v9 + 12);
      v5[4] = v22;
      v5[5] = v23;
      *((_QWORD *)v5 + 12) = v24;
      v25 = v10(v4, &v181, *((_QWORD *)a2 + 2), &v178);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          210LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v25);
        __debugbreak();
      }
      break;
  }
  if ( *((_DWORD *)a2 + 17) == 2 )
  {
    if ( *(_DWORD *)a2 == 0x2000 )
      v156 = 0LL;
    else
      v156 = *((unsigned int *)a2 + 45);
    MPCSpatialGestureRecognizerHandler::SetMode(this, v156);
    v157 = (__int64 *)*((_QWORD *)this + 3);
    v158 = *((_OWORD *)a2 + 15);
    v178 = *((_OWORD *)a2 + 14);
    v159 = *((_OWORD *)a2 + 16);
    v160 = *v157;
    v179 = v158;
    v161 = *((_OWORD *)a2 + 45);
    v162 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v160 + 80);
    v180 = v159;
    v181 = *((_OWORD *)a2 + 44);
    v163 = *((_OWORD *)a2 + 46);
    v182 = v161;
    v164 = *((_OWORD *)a2 + 47);
    v183 = v163;
    v165 = *((_OWORD *)a2 + 48);
    v184 = v164;
    v166 = *((_OWORD *)a2 + 49);
    v185 = v165;
    v167 = *((_OWORD *)a2 + 50);
    v186 = v166;
    v168 = *((_OWORD *)a2 + 51);
    v187 = v167;
    v169 = *((_OWORD *)a2 + 52);
    v188 = v168;
    v170 = *((_OWORD *)a2 + 53);
    v189 = v169;
    v171 = *((_OWORD *)a2 + 54);
    v190 = v170;
    v172 = *((_OWORD *)a2 + 55);
    v191 = v171;
    v173 = *((_OWORD *)a2 + 56);
    v192 = v172;
    v174 = *((_OWORD *)a2 + 57);
    v193 = v173;
    v175 = *((_OWORD *)a2 + 58);
    v176 = *((_QWORD *)a2 + 118);
    v194 = v174;
    v195 = v175;
    v196 = v176;
    v177 = v162(v157, &v181, *((_QWORD *)a2 + 2), &v178);
    if ( v177 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        256LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v177);
      __debugbreak();
    }
  }
  else
  {
    switch ( *((_DWORD *)a2 + 17) )
    {
      case 3:
LABEL_35:
        v135 = (__int64 *)*((_QWORD *)this + 3);
        v136 = *((_OWORD *)a2 + 15);
        v178 = *((_OWORD *)a2 + 14);
        v137 = *((_OWORD *)a2 + 16);
        v138 = *v135;
        v179 = v136;
        v139 = *((_OWORD *)a2 + 45);
        v140 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v138 + 88);
        v180 = v137;
        v181 = *((_OWORD *)a2 + 44);
        v141 = *((_OWORD *)a2 + 46);
        v182 = v139;
        v142 = *((_OWORD *)a2 + 47);
        v183 = v141;
        v143 = *((_OWORD *)a2 + 48);
        v184 = v142;
        v144 = *((_OWORD *)a2 + 49);
        v185 = v143;
        v145 = *((_OWORD *)a2 + 50);
        v186 = v144;
        v146 = *((_OWORD *)a2 + 51);
        v187 = v145;
        v147 = *((_OWORD *)a2 + 52);
        v188 = v146;
        v148 = *((_OWORD *)a2 + 53);
        v189 = v147;
        v149 = *((_OWORD *)a2 + 54);
        v190 = v148;
        v150 = *((_OWORD *)a2 + 55);
        v191 = v149;
        v151 = *((_OWORD *)a2 + 56);
        v192 = v150;
        v152 = *((_OWORD *)a2 + 57);
        v193 = v151;
        v153 = *((_OWORD *)a2 + 58);
        v154 = *((_QWORD *)a2 + 118);
        v194 = v152;
        v195 = v153;
        v196 = v154;
        v155 = v140(v135, &v181, *((_QWORD *)a2 + 2), &v178);
        if ( v155 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            266LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v155);
          __debugbreak();
        }
        goto LABEL_27;
      case 4:
        v93 = (__int64 *)*((_QWORD *)this + 3);
        v94 = *((_OWORD *)a2 + 15);
        v178 = *((_OWORD *)a2 + 14);
        v95 = *((_OWORD *)a2 + 16);
        v96 = *v93;
        v179 = v94;
        v97 = *((_OWORD *)a2 + 45);
        v98 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v96 + 96);
        v180 = v95;
        v181 = *((_OWORD *)a2 + 44);
        v99 = *((_OWORD *)a2 + 46);
        v182 = v97;
        v100 = *((_OWORD *)a2 + 47);
        v183 = v99;
        v101 = *((_OWORD *)a2 + 48);
        v184 = v100;
        v102 = *((_OWORD *)a2 + 49);
        v185 = v101;
        v103 = *((_OWORD *)a2 + 50);
        v186 = v102;
        v104 = *((_OWORD *)a2 + 51);
        v187 = v103;
        v105 = *((_OWORD *)a2 + 52);
        v188 = v104;
        v106 = *((_OWORD *)a2 + 53);
        v189 = v105;
        v107 = *((_OWORD *)a2 + 54);
        v190 = v106;
        v108 = *((_OWORD *)a2 + 55);
        v191 = v107;
        v109 = *((_OWORD *)a2 + 56);
        v192 = v108;
        v110 = *((_OWORD *)a2 + 57);
        v193 = v109;
        v111 = *((_OWORD *)a2 + 58);
        v112 = *((_QWORD *)a2 + 118);
        v194 = v110;
        v195 = v111;
        v196 = v112;
        v113 = v98(v93, &v181, *((_QWORD *)a2 + 2), &v178);
        if ( v113 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            275LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v113);
          __debugbreak();
        }
        break;
      case 5:
        break;
      case 6:
        goto LABEL_35;
      default:
        goto LABEL_27;
    }
    v114 = (__int64 *)*((_QWORD *)this + 3);
    v115 = *((_OWORD *)a2 + 15);
    v178 = *((_OWORD *)a2 + 14);
    v116 = *((_OWORD *)a2 + 16);
    v117 = *v114;
    v179 = v115;
    v118 = *((_OWORD *)a2 + 45);
    v119 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int128 *))(v117 + 104);
    v180 = v116;
    v181 = *((_OWORD *)a2 + 44);
    v120 = *((_OWORD *)a2 + 46);
    v182 = v118;
    v121 = *((_OWORD *)a2 + 47);
    v183 = v120;
    v122 = *((_OWORD *)a2 + 48);
    v184 = v121;
    v123 = *((_OWORD *)a2 + 49);
    v185 = v122;
    v124 = *((_OWORD *)a2 + 50);
    v186 = v123;
    v125 = *((_OWORD *)a2 + 51);
    v187 = v124;
    v126 = *((_OWORD *)a2 + 52);
    v188 = v125;
    v127 = *((_OWORD *)a2 + 53);
    v189 = v126;
    v128 = *((_OWORD *)a2 + 54);
    v190 = v127;
    v129 = *((_OWORD *)a2 + 55);
    v191 = v128;
    v130 = *((_OWORD *)a2 + 56);
    v192 = v129;
    v131 = *((_OWORD *)a2 + 57);
    v193 = v130;
    v132 = *((_OWORD *)a2 + 58);
    v133 = *((_QWORD *)a2 + 118);
    v194 = v131;
    v195 = v132;
    v196 = v133;
    v134 = v119(v114, &v181, *((_QWORD *)a2 + 2), &v178);
    if ( v134 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        283LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v134);
      __debugbreak();
    }
  }
LABEL_27:
  if ( *((_BYTE *)this + 200) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 200) = 0;
  }
  if ( *((_BYTE *)this + 172) )
    v92 = *((_DWORD *)this + 42);
  else
    v92 = 0;
  *((_DWORD *)a2 + 155) = v92;
  *((_DWORD *)a2 + 156) = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 157) = *((_DWORD *)this + 45);
  *((_QWORD *)this + 13) = 0LL;
}
