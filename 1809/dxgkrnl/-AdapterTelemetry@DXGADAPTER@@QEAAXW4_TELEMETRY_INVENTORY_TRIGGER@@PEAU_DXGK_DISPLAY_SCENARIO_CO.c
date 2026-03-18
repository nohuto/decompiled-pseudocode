/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CCC4
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0255F60 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00015B0 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C0005A4C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C000E64C (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C001EEC8 (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rcx
  bool v6; // zf
  int v7; // r12d
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // r14
  unsigned __int16 *v13; // rsi
  unsigned __int16 *v14; // rdi
  BOOLEAN v15; // al
  int v16; // r11d
  int v17; // r10d
  unsigned __int16 *v18; // rax
  __int64 v19; // r11
  int v20; // ecx
  const WCHAR *v21; // rdx
  __int64 v22; // r11
  const GUID *v23; // r9
  unsigned int v24; // ecx
  GUID *p_ActivityId; // r8
  __int16 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v27; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v29; // [rsp+5Ah] [rbp-A6h] BYREF
  __int16 v30; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v31; // [rsp+5Eh] [rbp-A2h] BYREF
  __int16 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v33; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  volatile unsigned int v36; // [rsp+6Ch] [rbp-94h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v39; // [rsp+78h] [rbp-88h] BYREF
  BOOL v40; // [rsp+7Ch] [rbp-84h] BYREF
  int v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+84h] [rbp-7Ch] BYREF
  BOOL v43; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+8Ch] [rbp-74h]
  BOOL v45; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v46; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v47; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v50; // [rsp+A4h] [rbp-5Ch] BYREF
  int v51; // [rsp+A8h] [rbp-58h] BYREF
  int DriverVersion; // [rsp+ACh] [rbp-54h]
  int v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B4h] [rbp-4Ch] BYREF
  int v55; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v57; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v58; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v59; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v60[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v65[24]; // [rsp+110h] [rbp+10h] BYREF
  GUID ActivityId; // [rsp+128h] [rbp+28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int16 *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  int *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  volatile unsigned int *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  int *v74; // [rsp+190h] [rbp+90h]
  int v75; // [rsp+198h] [rbp+98h]
  int v76; // [rsp+19Ch] [rbp+9Ch]
  int *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h]
  __int64 v81; // [rsp+1C0h] [rbp+C0h]
  _DWORD v82[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1D8h] [rbp+D8h]
  __int64 v85; // [rsp+1E0h] [rbp+E0h]
  __int64 v86; // [rsp+1E8h] [rbp+E8h]
  __int64 v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+200h] [rbp+100h]
  __int64 v90; // [rsp+208h] [rbp+108h]
  __int16 *v91; // [rsp+210h] [rbp+110h]
  __int64 v92; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF
  __int64 v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  __int64 v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  unsigned int *v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+258h] [rbp+158h]
  BOOL *v100; // [rsp+260h] [rbp+160h]
  __int64 v101; // [rsp+268h] [rbp+168h]
  int *v102; // [rsp+270h] [rbp+170h]
  __int64 v103; // [rsp+278h] [rbp+178h]
  int *v104; // [rsp+280h] [rbp+180h]
  __int64 v105; // [rsp+288h] [rbp+188h]
  BOOL *v106; // [rsp+290h] [rbp+190h]
  __int64 v107; // [rsp+298h] [rbp+198h]
  BOOL *v108; // [rsp+2A0h] [rbp+1A0h]
  __int64 v109; // [rsp+2A8h] [rbp+1A8h]
  unsigned int *v110; // [rsp+2B0h] [rbp+1B0h]
  __int64 v111; // [rsp+2B8h] [rbp+1B8h]
  unsigned int *v112; // [rsp+2C0h] [rbp+1C0h]
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]
  unsigned int *v114; // [rsp+2D0h] [rbp+1D0h]
  __int64 v115; // [rsp+2D8h] [rbp+1D8h]
  unsigned int *v116; // [rsp+2E0h] [rbp+1E0h]
  __int64 v117; // [rsp+2E8h] [rbp+1E8h]
  unsigned int *v118; // [rsp+2F0h] [rbp+1F0h]
  __int64 v119; // [rsp+2F8h] [rbp+1F8h]
  unsigned int *v120; // [rsp+300h] [rbp+200h]
  __int64 v121; // [rsp+308h] [rbp+208h]
  int *v122; // [rsp+310h] [rbp+210h]
  __int64 v123; // [rsp+318h] [rbp+218h]
  __int16 *v124; // [rsp+320h] [rbp+220h]
  __int64 v125; // [rsp+328h] [rbp+228h]
  __int16 *v126; // [rsp+330h] [rbp+230h]
  __int64 v127; // [rsp+338h] [rbp+238h]
  __int64 *v128; // [rsp+340h] [rbp+240h]
  __int64 v129; // [rsp+348h] [rbp+248h]
  __int16 *v130; // [rsp+350h] [rbp+250h]
  __int64 v131; // [rsp+358h] [rbp+258h]
  __int16 *v132; // [rsp+360h] [rbp+260h]
  __int64 v133; // [rsp+368h] [rbp+268h]
  int *v134; // [rsp+370h] [rbp+270h]
  __int64 v135; // [rsp+378h] [rbp+278h]
  unsigned __int64 *v136; // [rsp+380h] [rbp+280h]
  __int64 v137; // [rsp+388h] [rbp+288h]
  unsigned __int64 *v138; // [rsp+390h] [rbp+290h]
  __int64 v139; // [rsp+398h] [rbp+298h]
  unsigned __int64 *v140; // [rsp+3A0h] [rbp+2A0h]
  __int64 v141; // [rsp+3A8h] [rbp+2A8h]
  __int16 *v142; // [rsp+3B0h] [rbp+2B0h]
  __int64 v143; // [rsp+3B8h] [rbp+2B8h]
  __int16 *v144; // [rsp+3C0h] [rbp+2C0h]
  __int64 v145; // [rsp+3C8h] [rbp+2C8h]
  _DWORD *v146; // [rsp+3D0h] [rbp+2D0h]
  __int64 v147; // [rsp+3D8h] [rbp+2D8h]
  PVOID v148; // [rsp+3E0h] [rbp+2E0h]
  _DWORD v149[2]; // [rsp+3E8h] [rbp+2E8h] BYREF
  _DWORD *v150; // [rsp+3F0h] [rbp+2F0h]
  __int64 v151; // [rsp+3F8h] [rbp+2F8h]
  __int64 v152; // [rsp+400h] [rbp+300h]
  _DWORD v153[2]; // [rsp+408h] [rbp+308h] BYREF
  _DWORD *v154; // [rsp+410h] [rbp+310h]
  __int64 v155; // [rsp+418h] [rbp+318h]
  __int64 v156; // [rsp+420h] [rbp+320h]
  _DWORD v157[2]; // [rsp+428h] [rbp+328h] BYREF
  _DWORD *v158; // [rsp+430h] [rbp+330h]
  __int64 v159; // [rsp+438h] [rbp+338h]
  __int64 v160; // [rsp+440h] [rbp+340h]
  _DWORD v161[2]; // [rsp+448h] [rbp+348h] BYREF
  _DWORD *v162; // [rsp+450h] [rbp+350h]
  __int64 v163; // [rsp+458h] [rbp+358h]
  __int64 v164; // [rsp+460h] [rbp+360h]
  _DWORD v165[2]; // [rsp+468h] [rbp+368h] BYREF
  __int64 *v166; // [rsp+470h] [rbp+370h]
  __int64 v167; // [rsp+478h] [rbp+378h]
  int *v168; // [rsp+480h] [rbp+380h]
  __int64 v169; // [rsp+488h] [rbp+388h] BYREF

  v53 = a2;
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
  v6 = (*(_DWORD *)(v5 + 308) & 0x20000) == 0;
  v63 = *(_QWORD *)(v5 + 784);
  v44 = *(_DWORD *)(v5 + 256);
  if ( !v6 || (v7 = 0, (*(_DWORD *)(v5 + 2400) & 2) != 0) )
    v7 = 1;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, (int *)&v34);
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)v65);
  v8 = *(_QWORD *)(a1 + 2528);
  if ( v8 || *(_QWORD *)(a1 + 2520) )
  {
    v9 = *(_QWORD *)(a1 + 2520);
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v26 = 0;
    v27 = 0;
    v61 = 0LL;
    P = 0LL;
    v60[0] = 0LL;
    v60[1] = 0LL;
    if ( v9 )
    {
      v26 = *(_WORD *)(*(_QWORD *)(v9 + 16) + 1328LL);
      v27 = *(_WORD *)(*(_QWORD *)(v9 + 16) + 1332LL);
    }
    v10 = (unsigned __int16 *)v8;
    if ( v8 && !*(_BYTE *)(a1 + 185) )
    {
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(v8 + 544),
        *(struct VIDMM_GLOBAL **)(v8 + 552),
        0,
        &v56,
        &v56,
        &v56,
        &v57,
        &v58,
        &v59);
      v10 = *(unsigned __int16 **)(a1 + 2528);
    }
    if ( v10 )
    {
      v11 = v10 + 132;
    }
    else
    {
      v11 = (unsigned __int16 *)v60;
      v10 = 0LL;
    }
    if ( v10 )
    {
      v12 = v10 + 140;
    }
    else
    {
      v12 = (unsigned __int16 *)v60;
      v10 = 0LL;
    }
    if ( v10 )
    {
      v13 = v10 + 148;
    }
    else
    {
      v13 = (unsigned __int16 *)v60;
      v10 = 0LL;
    }
    v14 = v10 + 156;
    if ( !v10 )
      v14 = (unsigned __int16 *)v60;
    if ( (int)IoQueryFullDriverPath(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 64LL) + 40LL) + 32LL),
                &v61) >= 0 )
    {
      v55 = **(_DWORD **)(a1 + 4112);
      ++DXGADAPTER::sTelemetrySeqId;
      if ( (unsigned int)dword_1C008D8E0 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D8E0, 0x800000000004uLL) )
      {
        v69 = 2LL;
        v28 = 9;
        v68 = &v28;
        v35 = MEMORY[0xFFFFF780000002C4];
        v70 = &v35;
        v36 = DXGADAPTER::sTelemetrySeqId;
        v72 = &v36;
        v71 = 4LL;
        v73 = 4LL;
        v15 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C008D8E0, 0, 0x400000000000uLL);
        v76 = 0;
        v37 = v15;
        v74 = &v37;
        v75 = v16;
        v17 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C008D8E0, 0, 0x200000000000uLL);
        v79 = v82;
        v77 = &v38;
        v18 = *(unsigned __int16 **)(a1 + 1392);
        v38 = v17;
        v78 = v19;
        v80 = 2LL;
        v20 = *v18;
        v81 = *((_QWORD *)v18 + 1);
        v83 = a1 + 284;
        v85 = a1 + 288;
        v87 = a1 + 292;
        v89 = a1 + 296;
        v29 = *(_WORD *)(a1 + 300);
        v82[0] = v20;
        v82[1] = 0;
        v21 = *(const WCHAR **)(a1 + 1464);
        v91 = &v29;
        v84 = v19;
        v86 = v19;
        v88 = v19;
        v90 = v19;
        v92 = 2LL;
        TlgCreateWsz(&pDesc, v21);
        v95 = 8LL;
        v96 = a1 + 1480;
        v94 = a1 + 1472;
        v23 = (const GUID *)(unsigned int)(v22 - 3);
        v24 = *(_DWORD *)(a1 + 308);
        v97 = v22;
        v99 = v22;
        v39 = (unsigned int)v23 & (v24 >> 6);
        v98 = &v39;
        v101 = v22;
        v103 = v22;
        v40 = v65[8] == 0;
        v100 = &v40;
        v41 = *(unsigned __int8 *)(a1 + 2367);
        v102 = &v41;
        v42 = *(unsigned __int8 *)(a1 + 2372);
        v104 = &v42;
        v105 = v22;
        v43 = v63 != 0;
        v106 = &v43;
        v107 = v22;
        v45 = v44 > (unsigned int)v23;
        v46 = (unsigned int)v23 & (v24 >> 7);
        v108 = &v45;
        v110 = &v46;
        v109 = v22;
        v47 = (unsigned int)v23 & (v34 >> 3);
        v112 = &v47;
        v111 = v22;
        v48 = (unsigned int)v23 & (v34 >> 2);
        v114 = &v48;
        v49 = (unsigned int)v23 & v34;
        v50 = (unsigned int)v23 & (v34 >> 1);
        v113 = v22;
        v118 = &v50;
        v120 = &v34;
        v122 = &v51;
        v30 = *(_WORD *)(a1 + 1520);
        v124 = &v30;
        v31 = DriverVersion;
        v126 = &v31;
        v115 = v22;
        v116 = &v49;
        v117 = v22;
        v119 = v22;
        v121 = v22;
        v51 = v7;
        v123 = v22;
        v125 = 2LL;
        v127 = 2LL;
        v64 = *(_QWORD *)(a1 + 276);
        v128 = &v64;
        v32 = *(_WORD *)(a1 + 2352);
        v130 = &v32;
        v33 = *(_WORD *)(a1 + 2356);
        v132 = &v33;
        v54 = v53;
        v134 = &v54;
        v136 = &v57;
        v138 = &v58;
        v140 = &v59;
        v142 = &v26;
        v144 = &v27;
        v146 = v149;
        v148 = P;
        v149[0] = (unsigned __int16)v61;
        v150 = v153;
        v152 = *((_QWORD *)v11 + 1);
        v153[0] = *v11;
        v154 = v157;
        v156 = *((_QWORD *)v12 + 1);
        v157[0] = *v12;
        v158 = v161;
        v160 = *((_QWORD *)v13 + 1);
        v161[0] = *v13;
        v162 = v165;
        v164 = *((_QWORD *)v14 + 1);
        v165[0] = *v14;
        v166 = &v169;
        v168 = &v55;
        v129 = 8LL;
        v131 = 2LL;
        v133 = 2LL;
        v135 = v22;
        v137 = 8LL;
        v139 = 8LL;
        v141 = 8LL;
        v143 = 2LL;
        v145 = 2LL;
        v147 = 2LL;
        v149[1] = 0;
        v151 = 2LL;
        v153[1] = 0;
        v155 = 2LL;
        v157[1] = 0;
        v159 = 2LL;
        v161[1] = 0;
        v163 = 2LL;
        v165[1] = 0;
        v167 = 2LL;
        v169 = v22;
        p_ActivityId = (GUID *)(a3 + 8);
        if ( !a3 )
          p_ActivityId = &ActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_1C008D8E0, &unk_1C0069F41, p_ActivityId, v23, 0x35u, &pData);
      }
      ExFreePoolWithTag(P, 0);
    }
  }
}
