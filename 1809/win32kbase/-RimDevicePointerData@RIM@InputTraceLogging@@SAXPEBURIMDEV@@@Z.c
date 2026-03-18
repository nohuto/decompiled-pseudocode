/*
 * XREFs of ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C010AAF0
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0051990 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C010A730 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
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
  int *v13; // r10
  __int64 v14; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+6Ch] [rbp-94h] BYREF
  int v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+74h] [rbp-8Ch] BYREF
  int v33; // [rsp+78h] [rbp-88h] BYREF
  int v34; // [rsp+7Ch] [rbp-84h] BYREF
  int v35; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+84h] [rbp-7Ch] BYREF
  const struct RIMDEV *v37; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  const struct RIMDEV **v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int64 v47; // [rsp+100h] [rbp+0h]
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
  _QWORD *v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  char *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  _QWORD *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  char *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  _QWORD *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  char *v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h]
  _QWORD *v77; // [rsp+1F0h] [rbp+F0h]
  __int64 v78; // [rsp+1F8h] [rbp+F8h]
  char *v79; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]
  int *v81; // [rsp+210h] [rbp+110h]
  __int64 v82; // [rsp+218h] [rbp+118h]
  int *v83; // [rsp+220h] [rbp+120h]
  __int64 v84; // [rsp+228h] [rbp+128h]
  _QWORD *v85; // [rsp+230h] [rbp+130h]
  __int64 v86; // [rsp+238h] [rbp+138h]
  char *v87; // [rsp+240h] [rbp+140h]
  __int64 v88; // [rsp+248h] [rbp+148h]
  _QWORD *v89; // [rsp+250h] [rbp+150h]
  __int64 v90; // [rsp+258h] [rbp+158h]
  char *v91; // [rsp+260h] [rbp+160h]
  __int64 v92; // [rsp+268h] [rbp+168h]
  int *v93; // [rsp+270h] [rbp+170h]
  __int64 v94; // [rsp+278h] [rbp+178h]
  int *v95; // [rsp+280h] [rbp+180h]
  __int64 v96; // [rsp+288h] [rbp+188h]
  _DWORD *v97; // [rsp+290h] [rbp+190h]
  __int64 v98; // [rsp+298h] [rbp+198h]
  __int64 v99; // [rsp+2A0h] [rbp+1A0h]
  _DWORD v100[2]; // [rsp+2A8h] [rbp+1A8h] BYREF
  _DWORD *v101; // [rsp+2B0h] [rbp+1B0h]
  __int64 v102; // [rsp+2B8h] [rbp+1B8h]
  __int64 v103; // [rsp+2C0h] [rbp+1C0h]
  _DWORD v104[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v105; // [rsp+2D0h] [rbp+1D0h]
  __int64 v106; // [rsp+2D8h] [rbp+1D8h]
  __int64 v107; // [rsp+2E0h] [rbp+1E0h]
  __int64 v108; // [rsp+2E8h] [rbp+1E8h]
  int *v109; // [rsp+2F0h] [rbp+1F0h]
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
  __int64 v141; // [rsp+3F0h] [rbp+2F0h]
  __int64 v142; // [rsp+3F8h] [rbp+2F8h]

  v1 = *((_QWORD *)a1 + 60);
  v38[0] = 0LL;
  v38[1] = 0LL;
  v3 = *(_DWORD *)(v1 + 156);
  v4 = (_QWORD *)(v1 + 160);
  if ( v3 )
  {
    v5 = (_QWORD *)(v1 + 208);
  }
  else
  {
    v4 = v38;
    v5 = v38;
  }
  v6 = (int *)(v1 + 228);
  if ( v3 )
  {
    v7 = (_QWORD *)(v1 + 252);
  }
  else
  {
    v6 = (int *)&unk_1C01A5FB8;
    v7 = v38;
  }
  if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v9 = *(_DWORD *)(v8 + 24);
      v40 = &v37;
      v37 = a1;
      v41 = 8LL;
      v10 = InputTraceLogging::PointerDeviceTypeToString(v9);
      TlgCreateSz(&pDesc, v10);
      v11 = *((_QWORD *)a1 + 59);
      v15 = *(unsigned __int16 *)(v11 + 16);
      v43 = &v15;
      v44 = 4LL;
      v16 = *(unsigned __int16 *)(v11 + 18);
      v45 = &v16;
      v47 = v12 + 712;
      v49 = v12 + 124;
      v51 = v12 + 128;
      v53 = v12 + 132;
      v55 = v12 + 136;
      v57 = v12 + 140;
      v59 = v12 + 144;
      v61 = v12 + 148;
      v63 = v12 + 152;
      v67 = (char *)v4 + 4;
      v69 = v4 + 1;
      v71 = (char *)v4 + 12;
      v75 = (char *)v5 + 4;
      v77 = v5 + 1;
      v79 = (char *)v5 + 12;
      v17 = v6[1];
      v81 = &v17;
      v18 = *v6;
      v83 = &v18;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v65 = v4;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v73 = v5;
      v74 = 4LL;
      v76 = 4LL;
      v78 = 4LL;
      v80 = 4LL;
      v82 = 4LL;
      v84 = 4LL;
      v85 = v7;
      v86 = 4LL;
      LODWORD(v11) = *(_DWORD *)(v12 + 308);
      v87 = (char *)v7 + 4;
      v89 = v7 + 1;
      v91 = (char *)v7 + 12;
      v19 = v13[1];
      v93 = &v19;
      v20 = *v13;
      v95 = &v20;
      v97 = v100;
      v99 = *(_QWORD *)(v12 + 320);
      v100[0] = *(unsigned __int16 *)(v12 + 312);
      v101 = v104;
      v103 = *(_QWORD *)(v12 + 848);
      v104[0] = *(unsigned __int16 *)(v12 + 840);
      v105 = v12 + 728;
      v88 = 4LL;
      v90 = 4LL;
      v21 = -__CFSHR__(v11, 3);
      v109 = &v21;
      v92 = 4LL;
      v94 = 4LL;
      v22 = -__CFSHR__(v11, 4);
      v111 = &v22;
      v96 = 4LL;
      v98 = 2LL;
      v23 = -__CFSHR__(v11, 5);
      v113 = &v23;
      v100[1] = 0;
      v102 = 2LL;
      v24 = -__CFSHR__(v11, 6);
      v115 = &v24;
      v104[1] = 0;
      v106 = 8LL;
      v25 = -__CFSHR__(v11, 7);
      v117 = &v25;
      v107 = v14;
      v108 = 4LL;
      v26 = -__CFSHR__(v11, 8);
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 4LL;
      v119 = &v26;
      v120 = 4LL;
      v122 = 4LL;
      v27 = -__CFSHR__(v11, 9);
      v121 = &v27;
      v124 = 4LL;
      v126 = 4LL;
      v28 = -__CFSHR__(v11, 10);
      v123 = &v28;
      v128 = 4LL;
      v130 = 4LL;
      v29 = -__CFSHR__(v11, 11);
      v125 = &v29;
      v132 = 4LL;
      v134 = 4LL;
      v30 = -__CFSHR__(v11, 12);
      v127 = &v30;
      v136 = 4LL;
      v138 = 4LL;
      v31 = -__CFSHR__(v11, 13);
      v129 = &v31;
      v140 = 4LL;
      v142 = 4LL;
      v32 = -__CFSHR__(v11, 14);
      v131 = &v32;
      v33 = -__CFSHR__(v11, 15);
      v133 = &v33;
      v34 = -__CFSHR__(v11, 16);
      v135 = &v34;
      v35 = -__CFSHR__(v11, 17);
      v137 = &v35;
      v139 = &v36;
      v141 = v12 + 980;
      v36 = -__CFSHR__(v11, 18);
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019E1CB, 0LL, 0LL, 0x36u, &pData);
    }
  }
}
