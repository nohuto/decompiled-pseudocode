/*
 * XREFs of ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0134E84
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C006C9DC (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01345B0 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevicePointerData(const struct RIMDEV *a1)
{
  __int64 v1; // r11
  int v3; // eax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  int *v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r11
  int v9; // ecx
  const char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r11
  int v13; // edx
  int *v14; // r10
  __int64 v15; // r9
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+74h] [rbp-8Ch] BYREF
  int v34; // [rsp+78h] [rbp-88h] BYREF
  int v35; // [rsp+7Ch] [rbp-84h] BYREF
  int v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+84h] [rbp-7Ch] BYREF
  int v38; // [rsp+88h] [rbp-78h] BYREF
  const struct RIMDEV *v39; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v40[3]; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  const struct RIMDEV **v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  __int64 v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int64 v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  __int64 v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  __int64 v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  __int64 v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  __int64 v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  __int64 v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  __int64 v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  _QWORD *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  char *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  _QWORD *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  char *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  _QWORD *v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h]
  char *v77; // [rsp+1F0h] [rbp+F0h]
  __int64 v78; // [rsp+1F8h] [rbp+F8h]
  _QWORD *v79; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]
  char *v81; // [rsp+210h] [rbp+110h]
  __int64 v82; // [rsp+218h] [rbp+118h]
  int *v83; // [rsp+220h] [rbp+120h]
  __int64 v84; // [rsp+228h] [rbp+128h]
  int *v85; // [rsp+230h] [rbp+130h]
  __int64 v86; // [rsp+238h] [rbp+138h]
  _QWORD *v87; // [rsp+240h] [rbp+140h]
  __int64 v88; // [rsp+248h] [rbp+148h]
  char *v89; // [rsp+250h] [rbp+150h]
  __int64 v90; // [rsp+258h] [rbp+158h]
  _QWORD *v91; // [rsp+260h] [rbp+160h]
  __int64 v92; // [rsp+268h] [rbp+168h]
  char *v93; // [rsp+270h] [rbp+170h]
  __int64 v94; // [rsp+278h] [rbp+178h]
  int *v95; // [rsp+280h] [rbp+180h]
  __int64 v96; // [rsp+288h] [rbp+188h]
  int *v97; // [rsp+290h] [rbp+190h]
  __int64 v98; // [rsp+298h] [rbp+198h]
  _DWORD *v99; // [rsp+2A0h] [rbp+1A0h]
  __int64 v100; // [rsp+2A8h] [rbp+1A8h]
  __int64 v101; // [rsp+2B0h] [rbp+1B0h]
  _DWORD v102[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _DWORD *v103; // [rsp+2C0h] [rbp+1C0h]
  __int64 v104; // [rsp+2C8h] [rbp+1C8h]
  __int64 v105; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v106[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v107; // [rsp+2E0h] [rbp+1E0h]
  __int64 v108; // [rsp+2E8h] [rbp+1E8h]
  __int64 v109; // [rsp+2F0h] [rbp+1F0h]
  __int64 v110; // [rsp+2F8h] [rbp+1F8h]
  int *v111; // [rsp+300h] [rbp+200h]
  __int64 v112; // [rsp+308h] [rbp+208h]
  int *v113; // [rsp+310h] [rbp+210h]
  __int64 v114; // [rsp+318h] [rbp+218h]
  int *v115; // [rsp+320h] [rbp+220h]
  __int64 v116; // [rsp+328h] [rbp+228h]
  int *v117; // [rsp+330h] [rbp+230h]
  __int64 v118; // [rsp+338h] [rbp+238h]
  int *v119; // [rsp+340h] [rbp+240h]
  __int64 v120; // [rsp+348h] [rbp+248h]
  int *v121; // [rsp+350h] [rbp+250h]
  __int64 v122; // [rsp+358h] [rbp+258h]
  int *v123; // [rsp+360h] [rbp+260h]
  __int64 v124; // [rsp+368h] [rbp+268h]
  int *v125; // [rsp+370h] [rbp+270h]
  __int64 v126; // [rsp+378h] [rbp+278h]
  int *v127; // [rsp+380h] [rbp+280h]
  __int64 v128; // [rsp+388h] [rbp+288h]
  int *v129; // [rsp+390h] [rbp+290h]
  __int64 v130; // [rsp+398h] [rbp+298h]
  int *v131; // [rsp+3A0h] [rbp+2A0h]
  __int64 v132; // [rsp+3A8h] [rbp+2A8h]
  int *v133; // [rsp+3B0h] [rbp+2B0h]
  __int64 v134; // [rsp+3B8h] [rbp+2B8h]
  int *v135; // [rsp+3C0h] [rbp+2C0h]
  __int64 v136; // [rsp+3C8h] [rbp+2C8h]
  int *v137; // [rsp+3D0h] [rbp+2D0h]
  __int64 v138; // [rsp+3D8h] [rbp+2D8h]
  int *v139; // [rsp+3E0h] [rbp+2E0h]
  __int64 v140; // [rsp+3E8h] [rbp+2E8h]
  int *v141; // [rsp+3F0h] [rbp+2F0h]
  __int64 v142; // [rsp+3F8h] [rbp+2F8h]
  __int64 v143; // [rsp+400h] [rbp+300h]
  __int64 v144; // [rsp+408h] [rbp+308h]
  int *v145; // [rsp+410h] [rbp+310h]
  __int64 v146; // [rsp+418h] [rbp+318h]

  v1 = *((_QWORD *)a1 + 60);
  v40[0] = 0LL;
  v40[1] = 0LL;
  v3 = *(_DWORD *)(v1 + 156);
  v4 = (_QWORD *)(v1 + 160);
  if ( v3 )
  {
    v5 = (_QWORD *)(v1 + 208);
  }
  else
  {
    v4 = v40;
    v5 = v40;
  }
  v6 = (int *)(v1 + 228);
  if ( v3 )
  {
    v7 = (_QWORD *)(v1 + 252);
  }
  else
  {
    v6 = (int *)&unk_1C01ECA98;
    v7 = v40;
  }
  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v9 = *(_DWORD *)(v8 + 24);
      v42 = &v39;
      v39 = a1;
      v43 = 8LL;
      v10 = InputTraceLogging::PointerDeviceTypeToString(v9);
      TlgCreateSz(&pDesc, v10);
      v11 = *((_QWORD *)a1 + 59);
      v16 = *(unsigned __int16 *)(v11 + 16);
      v45 = &v16;
      v46 = 4LL;
      v17 = *(unsigned __int16 *)(v11 + 18);
      v47 = &v17;
      v49 = v12 + 720;
      v51 = v12 + 124;
      v53 = v12 + 128;
      v55 = v12 + 132;
      v57 = v12 + 136;
      v59 = v12 + 140;
      v61 = v12 + 144;
      v63 = v12 + 148;
      v65 = v12 + 152;
      v69 = (char *)v4 + 4;
      v71 = v4 + 1;
      v73 = (char *)v4 + 12;
      v77 = (char *)v5 + 4;
      v79 = v5 + 1;
      v81 = (char *)v5 + 12;
      v18 = v6[1];
      v83 = &v18;
      v19 = *v6;
      v85 = &v19;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v67 = v4;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      v75 = v5;
      v76 = 4LL;
      v78 = 4LL;
      v80 = 4LL;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      v87 = v7;
      v88 = 4LL;
      v13 = *(_DWORD *)(v12 + 312);
      v89 = (char *)v7 + 4;
      v91 = v7 + 1;
      v93 = (char *)v7 + 12;
      v20 = v14[1];
      v95 = &v20;
      v21 = *v14;
      v97 = &v21;
      v99 = v102;
      v101 = *(_QWORD *)(v12 + 328);
      v102[0] = *(unsigned __int16 *)(v12 + 320);
      v103 = v106;
      v105 = *(_QWORD *)(v12 + 856);
      v106[0] = *(unsigned __int16 *)(v12 + 848);
      v107 = v12 + 736;
      v90 = 4LL;
      v92 = 4LL;
      v22 = -(v13 & 1);
      v111 = &v22;
      v94 = 4LL;
      v96 = 4LL;
      v23 = -__CFSHR__(v13, 2);
      v113 = &v23;
      v98 = 4LL;
      v100 = 2LL;
      v24 = -__CFSHR__(v13, 3);
      v115 = &v24;
      v102[1] = 0;
      v104 = 2LL;
      v25 = -__CFSHR__(v13, 4);
      v117 = &v25;
      v106[1] = 0;
      v108 = 8LL;
      v26 = -__CFSHR__(v13, 5);
      v119 = &v26;
      v109 = v15;
      v110 = 4LL;
      v27 = -__CFSHR__(v13, 6);
      v112 = 4LL;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 4LL;
      v120 = 4LL;
      v121 = &v27;
      v122 = 4LL;
      v124 = 4LL;
      v28 = -__CFSHR__(v13, 7);
      v123 = &v28;
      v126 = 4LL;
      v128 = 4LL;
      v29 = -__CFSHR__(v13, 8);
      v125 = &v29;
      v130 = 4LL;
      v132 = 4LL;
      v30 = -__CFSHR__(v13, 9);
      v127 = &v30;
      v134 = 4LL;
      v136 = 4LL;
      v31 = -__CFSHR__(v13, 10);
      v129 = &v31;
      v138 = 4LL;
      v140 = 4LL;
      v32 = -__CFSHR__(v13, 11);
      v131 = &v32;
      v142 = 4LL;
      v144 = 4LL;
      v33 = -__CFSHR__(v13, 12);
      v133 = &v33;
      v146 = 4LL;
      v34 = -__CFSHR__(v13, 13);
      v135 = &v34;
      v35 = -__CFSHR__(v13, 14);
      v137 = &v35;
      v36 = -__CFSHR__(v13, 15);
      v139 = &v36;
      v37 = -__CFSHR__(v13, 16);
      v141 = &v37;
      v143 = v12 + 988;
      v145 = &v38;
      v38 = -__CFSHR__(v13, 17);
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E42BC, 0LL, 0LL, 0x37u, &pData);
    }
  }
}
