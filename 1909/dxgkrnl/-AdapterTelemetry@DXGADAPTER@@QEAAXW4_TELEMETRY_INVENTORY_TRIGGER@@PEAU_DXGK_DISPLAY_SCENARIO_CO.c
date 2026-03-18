/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0162288
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161C90 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C028C4E0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0003680 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000EA70 (_TlgCreateWsz.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C001F3E0 (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0104860 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  bool v3; // zf
  int v5; // r13d
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int8 v8; // r12
  unsigned __int16 *v9; // r15
  unsigned __int16 *v10; // r14
  unsigned __int16 *v11; // rsi
  unsigned __int16 *v12; // rdi
  BOOLEAN v13; // al
  int v14; // r11d
  int v15; // r10d
  unsigned __int16 *v16; // rax
  __int64 v17; // r11
  int v18; // ecx
  const WCHAR *v19; // rdx
  __int64 v20; // r11
  const GUID *v21; // r9
  unsigned int v22; // ecx
  GUID *p_ActivityId; // r8
  __int16 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v25; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v27; // [rsp+5Ah] [rbp-A6h] BYREF
  __int16 v28; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v29; // [rsp+5Eh] [rbp-A2h] BYREF
  __int16 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v31; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v32; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  volatile unsigned int v34; // [rsp+6Ch] [rbp-94h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v37; // [rsp+78h] [rbp-88h] BYREF
  BOOL v38; // [rsp+7Ch] [rbp-84h] BYREF
  int v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+84h] [rbp-7Ch] BYREF
  BOOL v41; // [rsp+88h] [rbp-78h] BYREF
  int v42; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v43; // [rsp+90h] [rbp-70h]
  BOOL v44; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v45; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v46; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v47; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v49; // [rsp+A8h] [rbp-58h] BYREF
  int v50; // [rsp+ACh] [rbp-54h] BYREF
  int v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B4h] [rbp-4Ch]
  int v53; // [rsp+B8h] [rbp-48h] BYREF
  int v54; // [rsp+BCh] [rbp-44h] BYREF
  char v55[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v59[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+F8h] [rbp-8h]
  __int64 v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h] BYREF
  __int64 v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h] BYREF
  __int64 v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  GUID ActivityId; // [rsp+130h] [rbp+30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int16 *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  int *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  volatile unsigned int *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  int *v76; // [rsp+190h] [rbp+90h]
  int v77; // [rsp+198h] [rbp+98h]
  int v78; // [rsp+19Ch] [rbp+9Ch]
  int *v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  __int64 v83; // [rsp+1C0h] [rbp+C0h]
  _DWORD v84[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v85; // [rsp+1D0h] [rbp+D0h]
  __int64 v86; // [rsp+1D8h] [rbp+D8h]
  __int64 v87; // [rsp+1E0h] [rbp+E0h]
  __int64 v88; // [rsp+1E8h] [rbp+E8h]
  __int64 v89; // [rsp+1F0h] [rbp+F0h]
  __int64 v90; // [rsp+1F8h] [rbp+F8h]
  __int64 v91; // [rsp+200h] [rbp+100h]
  __int64 v92; // [rsp+208h] [rbp+108h]
  __int16 *v93; // [rsp+210h] [rbp+110h]
  __int64 v94; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF
  __int64 v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  __int64 v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  unsigned int *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  BOOL *v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h]
  int *v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h]
  int *v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  BOOL *v108; // [rsp+290h] [rbp+190h]
  __int64 v109; // [rsp+298h] [rbp+198h]
  int *v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  BOOL *v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  unsigned int *v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  unsigned int *v116; // [rsp+2D0h] [rbp+1D0h]
  __int64 v117; // [rsp+2D8h] [rbp+1D8h]
  unsigned int *v118; // [rsp+2E0h] [rbp+1E0h]
  __int64 v119; // [rsp+2E8h] [rbp+1E8h]
  unsigned int *v120; // [rsp+2F0h] [rbp+1F0h]
  __int64 v121; // [rsp+2F8h] [rbp+1F8h]
  unsigned int *v122; // [rsp+300h] [rbp+200h]
  __int64 v123; // [rsp+308h] [rbp+208h]
  unsigned int *v124; // [rsp+310h] [rbp+210h]
  __int64 v125; // [rsp+318h] [rbp+218h]
  int *v126; // [rsp+320h] [rbp+220h]
  __int64 v127; // [rsp+328h] [rbp+228h]
  __int16 *v128; // [rsp+330h] [rbp+230h]
  __int64 v129; // [rsp+338h] [rbp+238h]
  __int16 *v130; // [rsp+340h] [rbp+240h]
  __int64 v131; // [rsp+348h] [rbp+248h]
  __int64 *v132; // [rsp+350h] [rbp+250h]
  __int64 v133; // [rsp+358h] [rbp+258h]
  __int16 *v134; // [rsp+360h] [rbp+260h]
  __int64 v135; // [rsp+368h] [rbp+268h]
  __int16 *v136; // [rsp+370h] [rbp+270h]
  __int64 v137; // [rsp+378h] [rbp+278h]
  int *v138; // [rsp+380h] [rbp+280h]
  __int64 v139; // [rsp+388h] [rbp+288h]
  __int64 *v140; // [rsp+390h] [rbp+290h]
  __int64 v141; // [rsp+398h] [rbp+298h]
  __int64 *v142; // [rsp+3A0h] [rbp+2A0h]
  __int64 v143; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v144; // [rsp+3B0h] [rbp+2B0h]
  __int64 v145; // [rsp+3B8h] [rbp+2B8h]
  __int16 *v146; // [rsp+3C0h] [rbp+2C0h]
  __int64 v147; // [rsp+3C8h] [rbp+2C8h]
  __int16 *v148; // [rsp+3D0h] [rbp+2D0h]
  __int64 v149; // [rsp+3D8h] [rbp+2D8h]
  _DWORD *v150; // [rsp+3E0h] [rbp+2E0h]
  __int64 v151; // [rsp+3E8h] [rbp+2E8h]
  PVOID v152; // [rsp+3F0h] [rbp+2F0h]
  _DWORD v153[2]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _DWORD *v154; // [rsp+400h] [rbp+300h]
  __int64 v155; // [rsp+408h] [rbp+308h]
  __int64 v156; // [rsp+410h] [rbp+310h]
  _DWORD v157[2]; // [rsp+418h] [rbp+318h] BYREF
  _DWORD *v158; // [rsp+420h] [rbp+320h]
  __int64 v159; // [rsp+428h] [rbp+328h]
  __int64 v160; // [rsp+430h] [rbp+330h]
  _DWORD v161[2]; // [rsp+438h] [rbp+338h] BYREF
  _DWORD *v162; // [rsp+440h] [rbp+340h]
  __int64 v163; // [rsp+448h] [rbp+348h]
  __int64 v164; // [rsp+450h] [rbp+350h]
  _DWORD v165[2]; // [rsp+458h] [rbp+358h] BYREF
  _DWORD *v166; // [rsp+460h] [rbp+360h]
  __int64 v167; // [rsp+468h] [rbp+368h]
  __int64 v168; // [rsp+470h] [rbp+370h]
  _DWORD v169[2]; // [rsp+478h] [rbp+378h] BYREF
  __int64 *v170; // [rsp+480h] [rbp+380h]
  __int64 v171; // [rsp+488h] [rbp+388h]
  int *v172; // [rsp+490h] [rbp+390h]
  __int64 v173; // [rsp+498h] [rbp+398h] BYREF

  v3 = (*(_DWORD *)(a1 + 308) & 0x20000) == 0;
  v51 = *(_DWORD *)(a1 + 2452);
  v62 = *(_QWORD *)(a1 + 768);
  v43 = *(_DWORD *)(a1 + 256);
  v64 = a3;
  v52 = a2;
  if ( !v3 || (v5 = 0, (*(_DWORD *)(a1 + 2424) & 2) != 0) )
    v5 = 1;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, (int *)&v32);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)&v65);
  v6 = *(_QWORD *)(a1 + 2560);
  if ( v6 || *(_QWORD *)(a1 + 2552) )
  {
    v7 = *(_QWORD *)(a1 + 2552);
    v56 = 0LL;
    v8 = 0;
    v57 = 0LL;
    v58 = 0LL;
    v24 = 0;
    v25 = 0;
    v60 = 0LL;
    P = 0LL;
    v59[0] = 0LL;
    v59[1] = 0LL;
    if ( v7 )
    {
      v24 = *(_WORD *)(*(_QWORD *)(v7 + 16) + 1344LL);
      v25 = *(_WORD *)(*(_QWORD *)(v7 + 16) + 1348LL);
    }
    if ( !v6 )
      goto LABEL_13;
    if ( !*(_BYTE *)(a1 + 185) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v6 + 544) + 8LL) + 72LL))(
        *(_QWORD *)(v6 + 552),
        0LL,
        v55,
        v55,
        v55,
        &v56,
        &v57,
        &v58);
      v6 = *(_QWORD *)(a1 + 2560);
    }
    v8 = *(_BYTE *)(v6 + 1513);
    if ( v6 )
    {
      v9 = (unsigned __int16 *)(v6 + 264);
    }
    else
    {
LABEL_13:
      v9 = (unsigned __int16 *)v59;
      v6 = 0LL;
    }
    if ( v6 )
    {
      v10 = (unsigned __int16 *)(v6 + 280);
    }
    else
    {
      v10 = (unsigned __int16 *)v59;
      v6 = 0LL;
    }
    if ( v6 )
    {
      v11 = (unsigned __int16 *)(v6 + 296);
    }
    else
    {
      v11 = (unsigned __int16 *)v59;
      v6 = 0LL;
    }
    v12 = (unsigned __int16 *)(v6 + 312);
    if ( !v6 )
      v12 = (unsigned __int16 *)v59;
    if ( (int)IoQueryFullDriverPath(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 64LL) + 40LL) + 32LL),
                &v60) >= 0 )
    {
      v54 = **(_DWORD **)(a1 + 2456);
      ++DXGADAPTER::sTelemetrySeqId;
      if ( (unsigned int)dword_1C00A1930 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1930, 0x800000000004uLL) )
      {
        v71 = 2LL;
        v26 = 9;
        v70 = &v26;
        v33 = MEMORY[0xFFFFF780000002C4];
        v72 = &v33;
        v34 = DXGADAPTER::sTelemetrySeqId;
        v74 = &v34;
        v73 = 4LL;
        v75 = 4LL;
        v13 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00A1930, 0, 0x400000000000uLL);
        v78 = 0;
        v35 = v13;
        v76 = &v35;
        v77 = v14;
        v15 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00A1930, 0, 0x200000000000uLL);
        v81 = v84;
        v79 = &v36;
        v16 = *(unsigned __int16 **)(a1 + 1408);
        v36 = v15;
        v80 = v17;
        v82 = 2LL;
        v18 = *v16;
        v83 = *((_QWORD *)v16 + 1);
        v85 = a1 + 284;
        v87 = a1 + 288;
        v89 = a1 + 292;
        v91 = a1 + 296;
        v27 = *(_WORD *)(a1 + 300);
        v84[0] = v18;
        v84[1] = 0;
        v19 = *(const WCHAR **)(a1 + 1480);
        v93 = &v27;
        v86 = v17;
        v88 = v17;
        v90 = v17;
        v92 = v17;
        v94 = 2LL;
        TlgCreateWsz(&pDesc, v19);
        v97 = 8LL;
        v98 = a1 + 1496;
        v96 = a1 + 1488;
        v21 = (const GUID *)(unsigned int)(v20 - 3);
        v22 = *(_DWORD *)(a1 + 308);
        v99 = v20;
        v101 = v20;
        v37 = (unsigned int)v21 & (v22 >> 6);
        v100 = &v37;
        v103 = v20;
        v105 = v20;
        v38 = (_BYTE)v66 == 0;
        v102 = &v38;
        v39 = *(unsigned __int8 *)(a1 + 2391);
        v104 = &v39;
        v40 = *(unsigned __int8 *)(a1 + 2396);
        v106 = &v40;
        v107 = v20;
        v41 = v62 != 0;
        v108 = &v41;
        v42 = v8;
        v110 = &v42;
        v109 = v20;
        v44 = v43 > (unsigned int)v21;
        v45 = (unsigned int)v21 & (v22 >> 7);
        v112 = &v44;
        v114 = &v45;
        v111 = v20;
        v46 = (unsigned int)v21 & (v32 >> 3);
        v116 = &v46;
        v113 = v20;
        v47 = (unsigned int)v21 & (v32 >> 2);
        v118 = &v47;
        v48 = (unsigned int)v21 & v32;
        v49 = (unsigned int)v21 & (v32 >> 1);
        v115 = v20;
        v122 = &v49;
        v124 = &v32;
        v126 = &v50;
        v28 = *(_WORD *)(a1 + 1536);
        v128 = &v28;
        v117 = v20;
        v119 = v20;
        v120 = &v48;
        v121 = v20;
        v123 = v20;
        v125 = v20;
        v50 = v5;
        v127 = v20;
        v129 = 2LL;
        v29 = v51;
        v130 = &v29;
        v63 = *(_QWORD *)(a1 + 276);
        v132 = &v63;
        v30 = *(_WORD *)(a1 + 2376);
        v134 = &v30;
        v31 = *(_WORD *)(a1 + 2380);
        v136 = &v31;
        v53 = v52;
        v138 = &v53;
        v140 = &v56;
        v142 = &v57;
        v144 = &v58;
        v146 = &v24;
        v148 = &v25;
        v150 = v153;
        v152 = P;
        v153[0] = (unsigned __int16)v60;
        v154 = v157;
        v156 = *((_QWORD *)v9 + 1);
        v157[0] = *v9;
        v158 = v161;
        v160 = *((_QWORD *)v10 + 1);
        v161[0] = *v10;
        v162 = v165;
        v164 = *((_QWORD *)v11 + 1);
        v165[0] = *v11;
        v166 = v169;
        v168 = *((_QWORD *)v12 + 1);
        v169[0] = *v12;
        v131 = 2LL;
        v133 = 8LL;
        v135 = 2LL;
        v137 = 2LL;
        v139 = v20;
        v141 = 8LL;
        v143 = 8LL;
        v145 = 8LL;
        v147 = 2LL;
        v149 = 2LL;
        v151 = 2LL;
        v153[1] = 0;
        v155 = 2LL;
        v157[1] = 0;
        v159 = 2LL;
        v161[1] = 0;
        v163 = 2LL;
        v165[1] = 0;
        v167 = 2LL;
        v169[1] = 0;
        v170 = &v173;
        v172 = &v54;
        v171 = 2LL;
        v173 = v20;
        p_ActivityId = (GUID *)(v64 + 8);
        if ( !v64 )
          p_ActivityId = &ActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1930, &unk_1C0072644, p_ActivityId, v21, 0x36u, &pData);
      }
      ExFreePoolWithTag(P, 0);
    }
  }
}
