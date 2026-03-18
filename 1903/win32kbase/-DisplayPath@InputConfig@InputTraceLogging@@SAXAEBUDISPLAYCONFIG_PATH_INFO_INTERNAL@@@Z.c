/*
 * XREFs of ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C006388C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00658F8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C00668C0 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0188190 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z @ 0x1C01881D4 (-ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z.c)
 */

void __fastcall InputTraceLogging::InputConfig::DisplayPath(const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1)
{
  __int64 *v1; // r11
  __int64 v2; // rcx
  const WCHAR *v3; // rdx
  _DWORD *v4; // r11
  const WCHAR *v5; // r10
  const WCHAR *v6; // rdx
  _DWORD *v7; // r11
  const WCHAR *v8; // r10
  const WCHAR *v9; // rdx
  _DWORD *v10; // r11
  const WCHAR *v11; // r10
  const WCHAR *v12; // rdx
  _QWORD *v13; // r11
  const WCHAR *v14; // r10
  const WCHAR *v15; // rdx
  _DWORD *v16; // r11
  const WCHAR *v17; // r10
  const WCHAR *v18; // rdx
  _DWORD *v19; // r11
  const WCHAR *v20; // r10
  const WCHAR *v21; // rdx
  _QWORD *v22; // r11
  const WCHAR *v23; // r10
  const WCHAR *v24; // rdx
  _QWORD *v25; // r11
  const WCHAR *v26; // r10
  const WCHAR *v27; // rdx
  const WCHAR *v28; // r10
  _QWORD *v29; // r11
  __int64 v30; // r11
  unsigned int v31; // ecx
  const CHAR *v32; // rax
  __int64 v33; // r11
  const CHAR *v34; // rax
  __int64 v35; // r11
  const CHAR *v36; // rax
  _DWORD *v37; // r11
  int v38; // ecx
  int v39; // eax
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+5Ch] [rbp-A4h] BYREF
  int v52; // [rsp+60h] [rbp-A0h] BYREF
  int v53; // [rsp+64h] [rbp-9Ch] BYREF
  int v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  int v57; // [rsp+74h] [rbp-8Ch] BYREF
  int v58; // [rsp+78h] [rbp-88h] BYREF
  int v59; // [rsp+7Ch] [rbp-84h] BYREF
  int v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+84h] [rbp-7Ch] BYREF
  int v62; // [rsp+88h] [rbp-78h] BYREF
  int v63; // [rsp+8Ch] [rbp-74h] BYREF
  int v64; // [rsp+90h] [rbp-70h] BYREF
  int v65; // [rsp+94h] [rbp-6Ch] BYREF
  int v66; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  __int64 *v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+180h] [rbp+80h] BYREF
  int *v84; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  int *v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]
  __int64 v88; // [rsp+1B0h] [rbp+B0h]
  __int64 v89; // [rsp+1B8h] [rbp+B8h]
  int *v90; // [rsp+1C0h] [rbp+C0h]
  __int64 v91; // [rsp+1C8h] [rbp+C8h]
  int *v92; // [rsp+1D0h] [rbp+D0h]
  __int64 v93; // [rsp+1D8h] [rbp+D8h]
  int *v94; // [rsp+1E0h] [rbp+E0h]
  __int64 v95; // [rsp+1E8h] [rbp+E8h]
  int *v96; // [rsp+1F0h] [rbp+F0h]
  __int64 v97; // [rsp+1F8h] [rbp+F8h]
  int *v98; // [rsp+200h] [rbp+100h]
  __int64 v99; // [rsp+208h] [rbp+108h]
  int *v100; // [rsp+210h] [rbp+110h]
  __int64 v101; // [rsp+218h] [rbp+118h]
  int *v102; // [rsp+220h] [rbp+120h]
  __int64 v103; // [rsp+228h] [rbp+128h]
  int *v104; // [rsp+230h] [rbp+130h]
  __int64 v105; // [rsp+238h] [rbp+138h]
  __int64 v106; // [rsp+240h] [rbp+140h]
  __int64 v107; // [rsp+248h] [rbp+148h]
  int *v108; // [rsp+250h] [rbp+150h]
  __int64 v109; // [rsp+258h] [rbp+158h]
  int *v110; // [rsp+260h] [rbp+160h]
  __int64 v111; // [rsp+268h] [rbp+168h]
  int *v112; // [rsp+270h] [rbp+170h]
  __int64 v113; // [rsp+278h] [rbp+178h]
  __int64 v114; // [rsp+280h] [rbp+180h]
  __int64 v115; // [rsp+288h] [rbp+188h]
  __int64 v116; // [rsp+290h] [rbp+190h]
  __int64 v117; // [rsp+298h] [rbp+198h]
  int *v118; // [rsp+2A0h] [rbp+1A0h]
  __int64 v119; // [rsp+2A8h] [rbp+1A8h]
  int *v120; // [rsp+2B0h] [rbp+1B0h]
  __int64 v121; // [rsp+2B8h] [rbp+1B8h]
  int *v122; // [rsp+2C0h] [rbp+1C0h]
  __int64 v123; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v124; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v127; // [rsp+300h] [rbp+200h]
  __int64 v128; // [rsp+308h] [rbp+208h]
  int *v129; // [rsp+310h] [rbp+210h]
  __int64 v130; // [rsp+318h] [rbp+218h]
  int *v131; // [rsp+320h] [rbp+220h]
  __int64 v132; // [rsp+328h] [rbp+228h]
  int *v133; // [rsp+330h] [rbp+230h]
  __int64 v134; // [rsp+338h] [rbp+238h]
  int *v135; // [rsp+340h] [rbp+240h]
  __int64 v136; // [rsp+348h] [rbp+248h]
  int *v137; // [rsp+350h] [rbp+250h]
  __int64 v138; // [rsp+358h] [rbp+258h]
  _DWORD *v139; // [rsp+360h] [rbp+260h]
  __int64 v140; // [rsp+368h] [rbp+268h]
  _DWORD *v141; // [rsp+370h] [rbp+270h]
  __int64 v142; // [rsp+378h] [rbp+278h]
  _DWORD *v143; // [rsp+380h] [rbp+280h]
  __int64 v144; // [rsp+388h] [rbp+288h]
  _DWORD *v145; // [rsp+390h] [rbp+290h]
  __int64 v146; // [rsp+398h] [rbp+298h]
  _DWORD *v147; // [rsp+3A0h] [rbp+2A0h]
  __int64 v148; // [rsp+3A8h] [rbp+2A8h]
  int *v149; // [rsp+3B0h] [rbp+2B0h]
  __int64 v150; // [rsp+3B8h] [rbp+2B8h]
  int *v151; // [rsp+3C0h] [rbp+2C0h]
  __int64 v152; // [rsp+3C8h] [rbp+2C8h]
  int *v153; // [rsp+3D0h] [rbp+2D0h]
  __int64 v154; // [rsp+3D8h] [rbp+2D8h]
  int *v155; // [rsp+3E0h] [rbp+2E0h]
  __int64 v156; // [rsp+3E8h] [rbp+2E8h]
  _DWORD *v157; // [rsp+3F0h] [rbp+2F0h]
  __int64 v158; // [rsp+3F8h] [rbp+2F8h]
  _DWORD *v159; // [rsp+400h] [rbp+300h]
  __int64 v160; // [rsp+408h] [rbp+308h]
  int *v161; // [rsp+410h] [rbp+310h]
  __int64 v162; // [rsp+418h] [rbp+318h]
  _DWORD *v163; // [rsp+420h] [rbp+320h]
  __int64 v164; // [rsp+428h] [rbp+328h]

  if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 2uLL) )
  {
    v2 = *v1;
    v70 = &v67;
    v68 = v1[1];
    v3 = &pwsz;
    v67 = v2;
    v72 = &v68;
    v71 = 8LL;
    if ( (v2 & 0x87) == 0 )
      v3 = L"TMI";
    v73 = 8LL;
    TlgCreateWsz(&pDesc, v3);
    v6 = v5;
    if ( (*v4 & 0x100LL) == 0 )
      v6 = L"SMI";
    TlgCreateWsz(&v75, v6);
    v9 = v8;
    if ( (*v7 & 0x20000) == 0 )
      v9 = L"CR";
    TlgCreateWsz(&v76, v9);
    v12 = v11;
    if ( (*v10 & 0x800000) == 0 )
      v12 = L"DWMCB";
    TlgCreateWsz(&v77, v12);
    v15 = v14;
    if ( (*v13 & 0x40000000000LL) == 0 )
      v15 = L"STA";
    TlgCreateWsz(&v78, v15);
    v18 = v17;
    if ( (*v16 & 0x200LL) == 0 )
      v18 = L"R";
    TlgCreateWsz(&v79, v18);
    v21 = v20;
    if ( (*v19 & 0x800LL) == 0 )
      v21 = L"P";
    TlgCreateWsz(&v80, v21);
    v24 = v23;
    if ( (*v22 & 0x100000000000LL) == 0 )
      v24 = L"AL";
    TlgCreateWsz(&v81, v24);
    v27 = v26;
    if ( (*v25 & 0x200000000000LL) == 0 )
      v27 = L"VPSI";
    TlgCreateWsz(&v82, v27);
    if ( (*v29 & 0x400000000000LL) == 0 )
      v28 = L"VPTI";
    TlgCreateWsz(&v83, v28);
    v40 = *(_DWORD *)(v30 + 24);
    v84 = &v40;
    v41 = *(_DWORD *)(v30 + 28);
    v86 = &v41;
    v88 = v30 + 32;
    v42 = *(_DWORD *)(v30 + 40);
    v90 = &v42;
    v43 = *(_DWORD *)(v30 + 44);
    v92 = &v43;
    v44 = *(_DWORD *)(v30 + 48);
    v94 = &v44;
    v45 = *(_DWORD *)(v30 + 52);
    v96 = &v45;
    v46 = *(_DWORD *)(v30 + 56);
    v98 = &v46;
    v47 = *(_DWORD *)(v30 + 60);
    v100 = &v47;
    v48 = *(_DWORD *)(v30 + 64);
    v102 = &v48;
    v49 = *(_DWORD *)(v30 + 68);
    v104 = &v49;
    v106 = v30 + 72;
    v50 = *(_DWORD *)(v30 + 76);
    v108 = &v50;
    v51 = *(_DWORD *)(v30 + 80);
    v110 = &v51;
    v52 = *(_DWORD *)(v30 + 84);
    v112 = &v52;
    v114 = v30 + 88;
    v116 = v30 + 92;
    v53 = *(_DWORD *)(v30 + 96);
    v118 = &v53;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 8LL;
    v91 = 4LL;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 4LL;
    v101 = 4LL;
    v103 = 4LL;
    v105 = 4LL;
    v107 = 4LL;
    v109 = 4LL;
    v111 = 4LL;
    v113 = 4LL;
    v115 = 4LL;
    v117 = 4LL;
    v119 = 4LL;
    v31 = *(_DWORD *)(v30 + 104);
    v54 = *(unsigned __int8 *)(v30 + 100);
    v120 = &v54;
    v55 = *(unsigned __int8 *)(v30 + 101);
    v122 = &v55;
    v121 = 4LL;
    v123 = 4LL;
    v32 = InputTraceLogging::OrientationToString(v31);
    TlgCreateSz(&v124, v32);
    v34 = (const CHAR *)InputTraceLogging::ScalingToString(*(unsigned int *)(v33 + 108));
    TlgCreateSz(&v125, v34);
    v36 = (const CHAR *)InputTraceLogging::ScalingToString(*(unsigned int *)(v35 + 112));
    TlgCreateSz(&v126, v36);
    v38 = v37[29];
    v127 = &v56;
    v57 = v37[30];
    v129 = &v57;
    v58 = v37[31];
    v131 = &v58;
    v59 = v37[32];
    v133 = &v59;
    v60 = v37[33];
    v135 = &v60;
    v61 = v37[34];
    v137 = &v61;
    v139 = v37 + 35;
    v141 = v37 + 36;
    v143 = v37 + 37;
    v145 = v37 + 38;
    v147 = v37 + 40;
    v62 = v37[41];
    v149 = &v62;
    v63 = v37[43];
    v151 = &v63;
    v39 = v37[42];
    v56 = v38;
    v128 = 4LL;
    v130 = 4LL;
    v132 = 4LL;
    v134 = 4LL;
    v136 = 4LL;
    v138 = 4LL;
    v140 = 4LL;
    v142 = 4LL;
    v144 = 4LL;
    v146 = 4LL;
    v148 = 4LL;
    v150 = 4LL;
    v152 = 4LL;
    v64 = v39;
    v153 = &v64;
    v65 = v37[44];
    v155 = &v65;
    v157 = v37 + 45;
    v159 = v37 + 46;
    v66 = v37[47];
    v161 = &v66;
    v163 = v37 + 48;
    v154 = 4LL;
    v156 = 4LL;
    v158 = 4LL;
    v160 = 4LL;
    v162 = 4LL;
    v164 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E7BCB, 0LL, 0LL, 0x38u, &pData);
  }
}
