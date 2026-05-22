/*
 * XREFs of ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x180050134
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x18005006C (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::FeedRecognizer(
        MPCSpatialGestureRecognizerHandler *this,
        struct InputInfo *a2)
{
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r8
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // r8
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // r8
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int64 v66; // rax
  int v67; // eax
  int v68; // eax
  __int64 v69; // r8
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // r8
  __int128 v89; // xmm1
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm0
  __int64 v105; // rax
  int v106; // eax
  __int64 v107; // r8
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm0
  __int128 v122; // xmm1
  __int128 v123; // xmm0
  __int64 v124; // rax
  int v125; // eax
  int v126; // edx
  __int64 v127; // r8
  __int128 v128; // xmm1
  __int128 v129; // xmm0
  __int128 v130; // xmm1
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm0
  __int128 v134; // xmm1
  __int128 v135; // xmm0
  __int128 v136; // xmm1
  __int128 v137; // xmm0
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  __int128 v140; // xmm1
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int128 v143; // xmm0
  __int64 v144; // rax
  int v145; // eax
  __int128 v146; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v147; // [rsp+48h] [rbp-C0h]
  __int128 v148; // [rsp+58h] [rbp-B0h]
  __int128 v149; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v150; // [rsp+78h] [rbp-90h]
  __int128 v151; // [rsp+88h] [rbp-80h]
  __int128 v152; // [rsp+98h] [rbp-70h]
  __int128 v153; // [rsp+A8h] [rbp-60h]
  __int128 v154; // [rsp+B8h] [rbp-50h]
  __int128 v155; // [rsp+C8h] [rbp-40h]
  __int128 v156; // [rsp+D8h] [rbp-30h]
  __int128 v157; // [rsp+E8h] [rbp-20h]
  __int128 v158; // [rsp+F8h] [rbp-10h]
  __int128 v159; // [rsp+108h] [rbp+0h]
  __int128 v160; // [rsp+118h] [rbp+10h]
  __int128 v161; // [rsp+128h] [rbp+20h]
  __int128 v162; // [rsp+138h] [rbp+30h]
  __int128 v163; // [rsp+148h] [rbp+40h]
  __int64 v164; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  *((_QWORD *)this + 13) = a2;
  *((_DWORD *)this + 8) = (int)*((float *)a2 + 278);
  *((_DWORD *)this + 9) = (int)*((float *)a2 + 279);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
  switch ( *((_DWORD *)a2 + 130) )
  {
    case 2:
      MPCSpatialGestureRecognizerHandler::SetMode((__int64)this, *((_DWORD *)a2 + 157));
      v52 = *((_QWORD *)a2 + 2);
      v53 = *((_OWORD *)a2 + 43);
      v146 = *((_OWORD *)a2 + 42);
      v54 = *((_OWORD *)a2 + 44);
      v147 = v53;
      v55 = *(_OWORD *)((char *)a2 + 1160);
      v148 = v54;
      v149 = *(_OWORD *)((char *)a2 + 1144);
      v56 = *(_OWORD *)((char *)a2 + 1176);
      v150 = v55;
      v57 = *(_OWORD *)((char *)a2 + 1192);
      v151 = v56;
      v58 = *(_OWORD *)((char *)a2 + 1208);
      v152 = v57;
      v59 = *(_OWORD *)((char *)a2 + 1224);
      v153 = v58;
      v60 = *(_OWORD *)((char *)a2 + 1240);
      v154 = v59;
      v61 = *(_OWORD *)((char *)a2 + 1256);
      v155 = v60;
      v62 = *(_OWORD *)((char *)a2 + 1272);
      v156 = v61;
      v63 = *(_OWORD *)((char *)a2 + 1288);
      v157 = v62;
      v64 = *(_OWORD *)((char *)a2 + 1304);
      v158 = v63;
      v65 = *(_OWORD *)((char *)a2 + 1320);
      v66 = *((_QWORD *)a2 + 167);
      v159 = v64;
      v160 = v65;
      *(_QWORD *)&v161 = v66;
      v67 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 48LL))(
              *((_QWORD *)this + 3),
              &v149,
              v52,
              &v146);
      if ( v67 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xC7,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v67);
        __debugbreak();
      }
      break;
    case 3:
      v36 = *((_QWORD *)a2 + 2);
      v37 = *((_OWORD *)a2 + 43);
      v146 = *((_OWORD *)a2 + 42);
      v38 = *((_OWORD *)a2 + 44);
      v147 = v37;
      v39 = *(_OWORD *)((char *)a2 + 1160);
      v148 = v38;
      v149 = *(_OWORD *)((char *)a2 + 1144);
      v40 = *(_OWORD *)((char *)a2 + 1176);
      v150 = v39;
      v41 = *(_OWORD *)((char *)a2 + 1192);
      v151 = v40;
      v42 = *(_OWORD *)((char *)a2 + 1208);
      v152 = v41;
      v43 = *(_OWORD *)((char *)a2 + 1224);
      v153 = v42;
      v44 = *(_OWORD *)((char *)a2 + 1240);
      v154 = v43;
      v45 = *(_OWORD *)((char *)a2 + 1256);
      v155 = v44;
      v46 = *(_OWORD *)((char *)a2 + 1272);
      v156 = v45;
      v47 = *(_OWORD *)((char *)a2 + 1288);
      v157 = v46;
      v48 = *(_OWORD *)((char *)a2 + 1304);
      v158 = v47;
      v49 = *(_OWORD *)((char *)a2 + 1320);
      v50 = *((_QWORD *)a2 + 167);
      v159 = v48;
      v160 = v49;
      *(_QWORD *)&v161 = v50;
      v51 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 64LL))(
              *((_QWORD *)this + 3),
              &v149,
              v36,
              &v146);
      if ( v51 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v51);
        __debugbreak();
      }
      break;
    case 4:
      v20 = *((_QWORD *)a2 + 2);
      v21 = *((_OWORD *)a2 + 43);
      v146 = *((_OWORD *)a2 + 42);
      v22 = *((_OWORD *)a2 + 44);
      v147 = v21;
      v23 = *(_OWORD *)((char *)a2 + 1160);
      v148 = v22;
      v149 = *(_OWORD *)((char *)a2 + 1144);
      v24 = *(_OWORD *)((char *)a2 + 1176);
      v150 = v23;
      v25 = *(_OWORD *)((char *)a2 + 1192);
      v151 = v24;
      v26 = *(_OWORD *)((char *)a2 + 1208);
      v152 = v25;
      v27 = *(_OWORD *)((char *)a2 + 1224);
      v153 = v26;
      v28 = *(_OWORD *)((char *)a2 + 1240);
      v154 = v27;
      v29 = *(_OWORD *)((char *)a2 + 1256);
      v155 = v28;
      v30 = *(_OWORD *)((char *)a2 + 1272);
      v156 = v29;
      v31 = *(_OWORD *)((char *)a2 + 1288);
      v157 = v30;
      v32 = *(_OWORD *)((char *)a2 + 1304);
      v158 = v31;
      v33 = *(_OWORD *)((char *)a2 + 1320);
      v34 = *((_QWORD *)a2 + 167);
      v159 = v32;
      v160 = v33;
      *(_QWORD *)&v161 = v34;
      v35 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 72LL))(
              *((_QWORD *)this + 3),
              &v149,
              v20,
              &v146);
      if ( v35 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v35);
        __debugbreak();
      }
      break;
    case 6:
      v4 = *((_QWORD *)a2 + 2);
      v5 = *((_OWORD *)a2 + 43);
      v146 = *((_OWORD *)a2 + 42);
      v6 = *((_OWORD *)a2 + 44);
      v147 = v5;
      v7 = *(_OWORD *)((char *)a2 + 1160);
      v148 = v6;
      v149 = *(_OWORD *)((char *)a2 + 1144);
      v8 = *(_OWORD *)((char *)a2 + 1176);
      v150 = v7;
      v9 = *(_OWORD *)((char *)a2 + 1192);
      v151 = v8;
      v10 = *(_OWORD *)((char *)a2 + 1208);
      v152 = v9;
      v11 = *(_OWORD *)((char *)a2 + 1224);
      v153 = v10;
      v12 = *(_OWORD *)((char *)a2 + 1240);
      v154 = v11;
      v13 = *(_OWORD *)((char *)a2 + 1256);
      v155 = v12;
      v14 = *(_OWORD *)((char *)a2 + 1272);
      v156 = v13;
      v15 = *(_OWORD *)((char *)a2 + 1288);
      v157 = v14;
      v16 = *(_OWORD *)((char *)a2 + 1304);
      v158 = v15;
      v17 = *(_OWORD *)((char *)a2 + 1320);
      v18 = *((_QWORD *)a2 + 167);
      v159 = v16;
      v160 = v17;
      *(_QWORD *)&v161 = v18;
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 56LL))(
              *((_QWORD *)this + 3),
              &v149,
              v4,
              &v146);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
      break;
  }
  if ( *((_DWORD *)a2 + 131) == 2 )
  {
    if ( *(_DWORD *)a2 == 0x2000 )
      v126 = 0;
    else
      v126 = *((_DWORD *)a2 + 157);
    MPCSpatialGestureRecognizerHandler::SetMode((__int64)this, v126);
    v127 = *((_QWORD *)a2 + 2);
    v128 = *((_OWORD *)a2 + 43);
    v146 = *((_OWORD *)a2 + 42);
    v129 = *((_OWORD *)a2 + 44);
    v147 = v128;
    v130 = *(_OWORD *)((char *)a2 + 1160);
    v148 = v129;
    v149 = *(_OWORD *)((char *)a2 + 1144);
    v131 = *(_OWORD *)((char *)a2 + 1176);
    v150 = v130;
    v132 = *(_OWORD *)((char *)a2 + 1192);
    v151 = v131;
    v133 = *(_OWORD *)((char *)a2 + 1208);
    v152 = v132;
    v134 = *(_OWORD *)((char *)a2 + 1224);
    v153 = v133;
    v135 = *(_OWORD *)((char *)a2 + 1240);
    v154 = v134;
    v136 = *(_OWORD *)((char *)a2 + 1256);
    v155 = v135;
    v137 = *(_OWORD *)((char *)a2 + 1272);
    v156 = v136;
    v138 = *(_OWORD *)((char *)a2 + 1288);
    v157 = v137;
    v139 = *(_OWORD *)((char *)a2 + 1304);
    v158 = v138;
    v140 = *(_OWORD *)((char *)a2 + 1320);
    v159 = v139;
    v141 = *(_OWORD *)((char *)a2 + 1336);
    v160 = v140;
    v142 = *(_OWORD *)((char *)a2 + 1352);
    v161 = v141;
    v143 = *(_OWORD *)((char *)a2 + 1368);
    v144 = *((_QWORD *)a2 + 173);
    v162 = v142;
    v163 = v143;
    v164 = v144;
    v145 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 80LL))(
             *((_QWORD *)this + 3),
             &v149,
             v127,
             &v146);
    if ( v145 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v145);
      JUMPOUT(0x1800509C8LL);
    }
  }
  else
  {
    switch ( *((_DWORD *)a2 + 131) )
    {
      case 3:
LABEL_24:
        v107 = *((_QWORD *)a2 + 2);
        v108 = *((_OWORD *)a2 + 43);
        v146 = *((_OWORD *)a2 + 42);
        v109 = *((_OWORD *)a2 + 44);
        v147 = v108;
        v110 = *(_OWORD *)((char *)a2 + 1160);
        v148 = v109;
        v149 = *(_OWORD *)((char *)a2 + 1144);
        v111 = *(_OWORD *)((char *)a2 + 1176);
        v150 = v110;
        v112 = *(_OWORD *)((char *)a2 + 1192);
        v151 = v111;
        v113 = *(_OWORD *)((char *)a2 + 1208);
        v152 = v112;
        v114 = *(_OWORD *)((char *)a2 + 1224);
        v153 = v113;
        v115 = *(_OWORD *)((char *)a2 + 1240);
        v154 = v114;
        v116 = *(_OWORD *)((char *)a2 + 1256);
        v155 = v115;
        v117 = *(_OWORD *)((char *)a2 + 1272);
        v156 = v116;
        v118 = *(_OWORD *)((char *)a2 + 1288);
        v157 = v117;
        v119 = *(_OWORD *)((char *)a2 + 1304);
        v158 = v118;
        v120 = *(_OWORD *)((char *)a2 + 1320);
        v159 = v119;
        v121 = *(_OWORD *)((char *)a2 + 1336);
        v160 = v120;
        v122 = *(_OWORD *)((char *)a2 + 1352);
        v161 = v121;
        v123 = *(_OWORD *)((char *)a2 + 1368);
        v124 = *((_QWORD *)a2 + 173);
        v162 = v122;
        v163 = v123;
        v164 = v124;
        v125 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 88LL))(
                 *((_QWORD *)this + 3),
                 &v149,
                 v107,
                 &v146);
        if ( v125 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x107,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v125);
          __debugbreak();
        }
        goto LABEL_17;
      case 4:
        v69 = *((_QWORD *)a2 + 2);
        v70 = *((_OWORD *)a2 + 43);
        v146 = *((_OWORD *)a2 + 42);
        v71 = *((_OWORD *)a2 + 44);
        v147 = v70;
        v72 = *(_OWORD *)((char *)a2 + 1160);
        v148 = v71;
        v149 = *(_OWORD *)((char *)a2 + 1144);
        v73 = *(_OWORD *)((char *)a2 + 1176);
        v150 = v72;
        v74 = *(_OWORD *)((char *)a2 + 1192);
        v151 = v73;
        v75 = *(_OWORD *)((char *)a2 + 1208);
        v152 = v74;
        v76 = *(_OWORD *)((char *)a2 + 1224);
        v153 = v75;
        v77 = *(_OWORD *)((char *)a2 + 1240);
        v154 = v76;
        v78 = *(_OWORD *)((char *)a2 + 1256);
        v155 = v77;
        v79 = *(_OWORD *)((char *)a2 + 1272);
        v156 = v78;
        v80 = *(_OWORD *)((char *)a2 + 1288);
        v157 = v79;
        v81 = *(_OWORD *)((char *)a2 + 1304);
        v158 = v80;
        v82 = *(_OWORD *)((char *)a2 + 1320);
        v159 = v81;
        v83 = *(_OWORD *)((char *)a2 + 1336);
        v160 = v82;
        v84 = *(_OWORD *)((char *)a2 + 1352);
        v161 = v83;
        v85 = *(_OWORD *)((char *)a2 + 1368);
        v86 = *((_QWORD *)a2 + 173);
        v162 = v84;
        v163 = v85;
        v164 = v86;
        v87 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 96LL))(
                *((_QWORD *)this + 3),
                &v149,
                v69,
                &v146);
        if ( v87 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x110,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v87);
          __debugbreak();
        }
        break;
      case 5:
        break;
      case 6:
        goto LABEL_24;
      default:
        goto LABEL_17;
    }
    v88 = *((_QWORD *)a2 + 2);
    v89 = *((_OWORD *)a2 + 43);
    v146 = *((_OWORD *)a2 + 42);
    v90 = *((_OWORD *)a2 + 44);
    v147 = v89;
    v91 = *(_OWORD *)((char *)a2 + 1160);
    v148 = v90;
    v149 = *(_OWORD *)((char *)a2 + 1144);
    v92 = *(_OWORD *)((char *)a2 + 1176);
    v150 = v91;
    v93 = *(_OWORD *)((char *)a2 + 1192);
    v151 = v92;
    v94 = *(_OWORD *)((char *)a2 + 1208);
    v152 = v93;
    v95 = *(_OWORD *)((char *)a2 + 1224);
    v153 = v94;
    v96 = *(_OWORD *)((char *)a2 + 1240);
    v154 = v95;
    v97 = *(_OWORD *)((char *)a2 + 1256);
    v155 = v96;
    v98 = *(_OWORD *)((char *)a2 + 1272);
    v156 = v97;
    v99 = *(_OWORD *)((char *)a2 + 1288);
    v157 = v98;
    v100 = *(_OWORD *)((char *)a2 + 1304);
    v158 = v99;
    v101 = *(_OWORD *)((char *)a2 + 1320);
    v159 = v100;
    v102 = *(_OWORD *)((char *)a2 + 1336);
    v160 = v101;
    v103 = *(_OWORD *)((char *)a2 + 1352);
    v161 = v102;
    v104 = *(_OWORD *)((char *)a2 + 1368);
    v105 = *((_QWORD *)a2 + 173);
    v162 = v103;
    v163 = v104;
    v164 = v105;
    v106 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 3) + 104LL))(
             *((_QWORD *)this + 3),
             &v149,
             v88,
             &v146);
    if ( v106 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x118,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v106);
      __debugbreak();
    }
  }
LABEL_17:
  if ( *((_BYTE *)this + 200) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 200) = 0;
  }
  if ( *((_BYTE *)this + 172) )
    v68 = *((_DWORD *)this + 42);
  else
    v68 = 0;
  *((_DWORD *)a2 + 265) = v68;
  *((_DWORD *)a2 + 266) = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 267) = *((_DWORD *)this + 45);
  *((_QWORD *)this + 13) = 0LL;
}
