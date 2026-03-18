/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0
 * Callers:
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F704 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C0290438 (MonitorEnableDisableAdvancedColor.c)
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C0297110 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C0297308 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029921C (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00015B0 (_TlgCreateWsz.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0001D14 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0003174 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0004C74 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C0005A4C (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001CD00 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001CDBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001CF50 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C004F2D0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C004FF80 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0050164 (-DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00501D8 (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00502A0 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C00504EC (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0050A84 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00C2C0C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 */

void __fastcall DXGMONITOR::_MonitorTelemetry(GUID *p_ActivityId, __int64 a2, __int64 a3)
{
  GUID *v3; // rbx
  __int64 v4; // rdi
  __int64 **v5; // rax
  __int64 *v6; // rax
  __int64 v7; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // rax
  const void **Data4; // r15
  char *v17; // r13
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const void *v22; // rdx
  size_t Data1; // r8
  __int64 v24; // rax
  bool v25; // zf
  unsigned int v26; // r12d
  __int128 v27; // xmm0
  GUID v28; // xmm1
  __int64 v29; // rax
  GUID v30; // xmm0
  int v31; // eax
  int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  struct HDXGMONITOR__ *MonitorHandle; // rax
  struct HDXGMONITOR__ *v36; // rax
  char *v37; // rsi
  unsigned __int8 *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  unsigned int v42; // r15d
  unsigned __int16 v43; // r15
  SIZE_T v44; // rax
  unsigned __int8 i; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rcx
  _DWORD *v49; // rcx
  int v50; // r9d
  BOOLEAN v51; // al
  __int64 v52; // rdx
  unsigned __int16 *v53; // rax
  int v54; // ecx
  unsigned __int8 *v55; // rax
  __int64 v56; // r11
  __int64 v57; // r10
  int v58; // eax
  LPCGUID v59; // r9
  unsigned __int8 v60; // [rsp+30h] [rbp-D0h] BYREF
  char v61[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int16 v62[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v63; // [rsp+38h] [rbp-C8h] BYREF
  int v64; // [rsp+3Ch] [rbp-C4h] BYREF
  int v65; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v66; // [rsp+44h] [rbp-BCh] BYREF
  int v67; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v68; // [rsp+4Ch] [rbp-B4h] BYREF
  int v69; // [rsp+50h] [rbp-B0h] BYREF
  int v70; // [rsp+54h] [rbp-ACh] BYREF
  int v71; // [rsp+58h] [rbp-A8h] BYREF
  int v72; // [rsp+5Ch] [rbp-A4h] BYREF
  int v73; // [rsp+60h] [rbp-A0h] BYREF
  int v74; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+6Ch] [rbp-94h] BYREF
  int v77; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v78; // [rsp+74h] [rbp-8Ch] BYREF
  int v79; // [rsp+78h] [rbp-88h] BYREF
  int v80; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v81; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v82; // [rsp+84h] [rbp-7Ch] BYREF
  int v83; // [rsp+88h] [rbp-78h] BYREF
  int v84; // [rsp+8Ch] [rbp-74h] BYREF
  int v85; // [rsp+90h] [rbp-70h] BYREF
  int Data1_low; // [rsp+94h] [rbp-6Ch] BYREF
  int v87; // [rsp+98h] [rbp-68h] BYREF
  int v88; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v89; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v90; // [rsp+A4h] [rbp-5Ch] BYREF
  int v91; // [rsp+A8h] [rbp-58h] BYREF
  int v92; // [rsp+ACh] [rbp-54h] BYREF
  int v93; // [rsp+B0h] [rbp-50h] BYREF
  int v94; // [rsp+B4h] [rbp-4Ch] BYREF
  int v95; // [rsp+B8h] [rbp-48h] BYREF
  int v96; // [rsp+BCh] [rbp-44h] BYREF
  size_t v97; // [rsp+C0h] [rbp-40h]
  LPCGUID pActivityId; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v99; // [rsp+D0h] [rbp-30h] BYREF
  int v100; // [rsp+D8h] [rbp-28h]
  __int64 v101; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v102; // [rsp+F0h] [rbp-10h] BYREF
  int v103; // [rsp+100h] [rbp+0h]
  GUID ActivityId; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v105[2]; // [rsp+118h] [rbp+18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v107; // [rsp+160h] [rbp+60h]
  __int64 v108; // [rsp+168h] [rbp+68h]
  unsigned int *v109; // [rsp+170h] [rbp+70h]
  __int64 v110; // [rsp+178h] [rbp+78h]
  int *v111; // [rsp+180h] [rbp+80h]
  __int64 v112; // [rsp+188h] [rbp+88h]
  int *v113; // [rsp+190h] [rbp+90h]
  __int64 v114; // [rsp+198h] [rbp+98h]
  int *v115; // [rsp+1A0h] [rbp+A0h]
  __int64 v116; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v117; // [rsp+1B0h] [rbp+B0h]
  __int64 v118; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v119; // [rsp+1C0h] [rbp+C0h]
  __int64 v120; // [rsp+1C8h] [rbp+C8h]
  __int64 v121; // [rsp+1D0h] [rbp+D0h]
  _DWORD v122[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  int *v123; // [rsp+1E0h] [rbp+E0h]
  __int64 v124; // [rsp+1E8h] [rbp+E8h]
  unsigned __int8 *v125; // [rsp+1F0h] [rbp+F0h]
  __int64 v126; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v127; // [rsp+200h] [rbp+100h]
  __int64 v128; // [rsp+208h] [rbp+108h]
  _DWORD *v129; // [rsp+210h] [rbp+110h]
  __int64 v130; // [rsp+218h] [rbp+118h]
  __int64 v131; // [rsp+220h] [rbp+120h]
  _DWORD v132[2]; // [rsp+228h] [rbp+128h] BYREF
  _QWORD *v133; // [rsp+230h] [rbp+130h]
  __int64 v134; // [rsp+238h] [rbp+138h]
  __int128 *v135; // [rsp+240h] [rbp+140h]
  _QWORD v136[4]; // [rsp+248h] [rbp+148h] BYREF
  _QWORD v137[4]; // [rsp+268h] [rbp+168h] BYREF
  _QWORD v138[38]; // [rsp+288h] [rbp+188h] BYREF
  _DWORD v139[2]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v140; // [rsp+3C0h] [rbp+2C0h]
  __int64 v141; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3D0h] [rbp+2D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+3E0h] [rbp+2E0h] BYREF
  unsigned __int8 *v144; // [rsp+3F0h] [rbp+2F0h]
  __int64 v145; // [rsp+3F8h] [rbp+2F8h]
  unsigned __int16 *v146; // [rsp+400h] [rbp+300h]
  __int64 v147; // [rsp+408h] [rbp+308h]
  int *v148; // [rsp+410h] [rbp+310h]
  __int64 v149; // [rsp+418h] [rbp+318h]
  int *v150; // [rsp+420h] [rbp+320h]
  __int64 v151; // [rsp+428h] [rbp+328h]
  int *v152; // [rsp+430h] [rbp+330h]
  __int64 v153; // [rsp+438h] [rbp+338h]
  int *v154; // [rsp+440h] [rbp+340h]
  __int64 v155; // [rsp+448h] [rbp+348h]
  int *v156; // [rsp+450h] [rbp+350h]
  __int64 v157; // [rsp+458h] [rbp+358h]
  int *v158; // [rsp+460h] [rbp+360h]
  __int64 v159; // [rsp+468h] [rbp+368h]
  int *v160; // [rsp+470h] [rbp+370h]
  __int64 v161; // [rsp+478h] [rbp+378h]
  unsigned int *v162; // [rsp+480h] [rbp+380h]
  __int64 v163; // [rsp+488h] [rbp+388h]
  unsigned int *v164; // [rsp+490h] [rbp+390h]
  __int64 v165; // [rsp+498h] [rbp+398h]
  _DWORD *v166; // [rsp+4A0h] [rbp+3A0h]
  __int64 v167; // [rsp+4A8h] [rbp+3A8h]
  char *v168; // [rsp+4B0h] [rbp+3B0h]
  _DWORD v169[2]; // [rsp+4B8h] [rbp+3B8h] BYREF
  int *v170; // [rsp+4C0h] [rbp+3C0h]
  __int64 v171; // [rsp+4C8h] [rbp+3C8h]
  _DWORD *v172; // [rsp+4D0h] [rbp+3D0h]
  __int64 v173; // [rsp+4D8h] [rbp+3D8h]
  char *v174; // [rsp+4E0h] [rbp+3E0h]
  _DWORD v175[2]; // [rsp+4E8h] [rbp+3E8h] BYREF
  WCHAR v176[4]; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int16 v177; // [rsp+4F8h] [rbp+3F8h]
  WCHAR pwsz[4]; // [rsp+500h] [rbp+400h] BYREF
  int v179; // [rsp+508h] [rbp+408h]
  __int16 v180; // [rsp+50Ch] [rbp+40Ch]

  v77 = a2;
  v3 = p_ActivityId;
  if ( a3 )
  {
    pActivityId = (LPCGUID)(a3 + 8);
  }
  else
  {
    EtwActivityIdControl(3u, &ActivityId);
    p_ActivityId = &ActivityId;
    pActivityId = &ActivityId;
  }
  v4 = 0LL;
  if ( !v3[8].Data1 )
    goto LABEL_17;
  v5 = *(__int64 ***)v3[8].Data4;
  if ( !v5 )
    goto LABEL_17;
  v6 = *v5;
  if ( !v6 )
    goto LABEL_17;
  do
  {
    if ( *((_DWORD *)v6 + 2) == 2 )
      break;
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( v6 )
  {
    v7 = (__int64)(v6 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v6 + 24);
    v12 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock >= 0 )
    {
      v4 = v7;
      LODWORD(v12) = 0;
    }
    else
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdWarning(v13);
      MonitorLogBadEDID(v7, v12);
    }
    v64 = 0;
    if ( (int)v12 >= 0 )
    {
      if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v4) >= 0 )
        v14 = 1;
      v64 = v14;
    }
  }
  else
  {
LABEL_17:
    v15 = WdLogNewEntry5_WdWarning(p_ActivityId, a2, a3);
    *(_QWORD *)(v15 + 24) = v3;
    WdLogEvent5_WdWarning(v15);
    v64 = 0;
  }
  Data4 = (const void **)v3[10].Data4;
  LODWORD(v97) = 0;
  v17 = 0LL;
  v67 = 0;
  if ( *(_QWORD *)v3[10].Data4 )
  {
    v18 = (char *)operator new(v3[11].Data1, 0x4D677844u, PagedPool);
    v17 = v18;
    if ( v18 )
    {
      v22 = *Data4;
      Data1 = v3[11].Data1;
      v97 = Data1;
      memmove(v18, v22, Data1);
      DisplayID_Initialize((struct DisplayIDObj *)&v99, v17, v3[11].Data1);
      DisplayID_UpdateForTelemetry((struct DisplayIDObj *)&v99);
      v67 = 1;
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      WdLogEvent5_WdWarning(v24);
      v67 = 0;
    }
  }
  v25 = (*(_DWORD *)v3[2].Data4 & 0x400) == 0;
  LOBYTE(v26) = 0;
  v27 = *(_OWORD *)&v3[37].Data2;
  v28 = v3[40];
  v103 = *(_DWORD *)&v3[38].Data2;
  v29 = *(_QWORD *)v3[38].Data4;
  v102 = v27;
  v101 = v29;
  v30 = v3[39];
  v105[1] = v28;
  v105[0] = v30;
  if ( v25 )
  {
    v33 = 0LL;
    v32 = -1073741275;
    v100 = 0;
  }
  else
  {
    v31 = *(_DWORD *)&v3[29].Data4[4];
    v32 = 0;
    v99 = *(_QWORD *)&v3[29].Data2;
    v100 = v31;
    v33 = v99;
  }
  v65 = 0;
  v66 = 0;
  if ( v32 >= 0 )
  {
    v34 = HIDWORD(v33);
    v65 = 1;
    v26 = ((unsigned int)v34 >> 1) & 1;
    v66 = (v34 & 4) != 0;
  }
  v68 = 0;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)v3);
  MonitorIsMonitorAndLinkHDRCapable(MonitorHandle, &v68);
  v61[0] = 0;
  v36 = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)v3);
  MonitorIsMonitorAndDriverWCGCapable(v36, v61);
  v60 = 0;
  *(_QWORD *)pwsz = 0LL;
  v179 = 0;
  v180 = 0;
  v37 = 0LL;
  *(_QWORD *)v176 = 0LL;
  v177 = 0;
  v62[0] = 0;
  v75 = 0;
  v76 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  LOWORD(v63) = 0;
  v38 = (unsigned __int8 *)operator new(0x80uLL, 0x4D677844u, PagedPool);
  if ( v38 )
  {
    if ( v4 )
    {
      EDIDV1_ObtainMonitorManufacturerName((unsigned __int8 *)v4, pwsz);
      EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)v4, v176);
      EDIDV1_ObtainMonitorManufactureDate((unsigned __int8 *)v4, &v60, v62);
      EDID_V1_GetPhysicalSize(v39, (unsigned __int8 *)v4, &v75, &v76);
      *(_OWORD *)v38 = *(_OWORD *)v4;
      *((_OWORD *)v38 + 1) = *(_OWORD *)(v4 + 16);
      *((_OWORD *)v38 + 2) = *(_OWORD *)(v4 + 32);
      *((_OWORD *)v38 + 3) = *(_OWORD *)(v4 + 48);
      *((_OWORD *)v38 + 4) = *(_OWORD *)(v4 + 64);
      *((_OWORD *)v38 + 5) = *(_OWORD *)(v4 + 80);
      *((_OWORD *)v38 + 6) = *(_OWORD *)(v4 + 96);
      *((_OWORD *)v38 + 7) = *(_OWORD *)(v4 + 112);
      EDID_V1_RemovePII(v40, v38);
      v41 = *(_DWORD **)v3[14].Data4;
      if ( v41 )
      {
        v69 = v41[5];
        v70 = v41[6];
        v71 = v41[2];
        v72 = v41[14];
        v73 = v41[7];
        v74 = v41[8];
      }
      v42 = v3[8].Data1;
      if ( v42 <= 1 )
      {
        v43 = v63;
      }
      else
      {
        if ( v42 < 4 )
          v43 = v42 - 1;
        else
          v43 = 3;
        v44 = 136LL * v43;
        if ( !is_mul_ok(v43, 0x88uLL) )
          v44 = -1LL;
        v37 = (char *)operator new(v44, 0x4D677844u, PagedPool);
        if ( v37 )
        {
          for ( i = 0; i < v43; *(_OWORD *)&v37[v47 + 120] = *(_OWORD *)(v48 + 136) )
          {
            v46 = i++;
            v47 = 136 * v46;
            *(_DWORD *)&v37[v47] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3[8].Data4 + 8 * v46 + 8) + 8LL);
            *(_DWORD *)&v37[v47 + 4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3[8].Data4 + 8 * v46 + 8) + 12LL);
            v48 = *(_QWORD *)(*(_QWORD *)v3[8].Data4 + 8 * v46 + 8);
            *(_OWORD *)&v37[v47 + 8] = *(_OWORD *)(v48 + 24);
            *(_OWORD *)&v37[v47 + 24] = *(_OWORD *)(v48 + 40);
            *(_OWORD *)&v37[v47 + 40] = *(_OWORD *)(v48 + 56);
            *(_OWORD *)&v37[v47 + 56] = *(_OWORD *)(v48 + 72);
            *(_OWORD *)&v37[v47 + 72] = *(_OWORD *)(v48 + 88);
            *(_OWORD *)&v37[v47 + 88] = *(_OWORD *)(v48 + 104);
            *(_OWORD *)&v37[v47 + 104] = *(_OWORD *)(v48 + 120);
          }
        }
        else
        {
          v43 = 0;
        }
      }
    }
    else if ( *Data4 )
    {
      DisplayID_GetManufacturerName((struct DisplayIDObj *)v3[10].Data4, pwsz);
      DisplayID_GetProductCode((struct DisplayIDObj *)v3[10].Data4, v176);
      DisplayID_GetManufactureDate((struct DisplayIDObj *)v3[10].Data4, &v60, v62);
      DisplayID_GetPhysicalSize((const struct DisplayIDObj *)v3[10].Data4, &v75, &v76);
      v49 = *(_DWORD **)v3[14].Data4;
      v43 = v63;
      if ( v49 )
      {
        v69 = v49[5];
        v70 = v49[6];
        v71 = v49[2];
        v72 = v49[14];
        v73 = v49[7];
        v74 = v49[8];
      }
    }
    else
    {
      v43 = v63;
    }
    if ( dword_1C008D838 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x800000000020uLL) )
    {
      v108 = 2LL;
      LOWORD(v63) = 10;
      v110 = 4LL;
      v107 = &v63;
      v78 = gDISeqId;
      gDISeqId += v50;
      v109 = &v78;
      v79 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C008D838, 0, 0x400000000000uLL);
      v111 = &v79;
      v112 = 4LL;
      v51 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C008D838, 0, 0x200000000000uLL);
      v52 = *(_QWORD *)&v3[2].Data1;
      v113 = &v80;
      v115 = &v77;
      v81 = v3[3].Data1;
      v117 = &v81;
      v119 = v122;
      v121 = *(_QWORD *)&v3[6].Data1;
      v122[0] = *(unsigned __int16 *)v3[5].Data4;
      v123 = &v64;
      v125 = &v3[2].Data4[4];
      v80 = v51;
      v114 = 4LL;
      v116 = 4LL;
      v118 = 4LL;
      v120 = 2LL;
      v122[1] = 0;
      v124 = 4LL;
      v126 = 4LL;
      v99 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) + 16LL) + 276LL);
      v127 = &v99;
      v128 = 8LL;
      v53 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v52 + 8) + 16LL) + 1392LL);
      v129 = v132;
      v130 = 2LL;
      v54 = *v53;
      v131 = *((_QWORD *)v53 + 1);
      v133 = v136;
      v135 = &v102;
      v132[0] = v54;
      v132[1] = 0;
      v134 = 2LL;
      v136[0] = 20LL;
      v136[1] = v137;
      v136[3] = &v101;
      v137[1] = v138;
      v137[3] = v105;
      v82 = v3[41].Data1;
      v138[1] = &v82;
      v83 = *(_DWORD *)&v3[41].Data2;
      v138[3] = &v83;
      v84 = *(_DWORD *)v3[41].Data4;
      v138[5] = &v84;
      v85 = *(_DWORD *)&v3[41].Data4[4];
      v138[7] = &v85;
      Data1_low = LOBYTE(v3[43].Data1);
      v138[9] = &Data1_low;
      v87 = v3[43].Data4[0];
      v138[11] = &v87;
      v138[13] = &v65;
      v88 = (unsigned __int8)v26;
      v138[15] = &v88;
      v138[17] = &v66;
      LODWORD(v53) = v68;
      v136[2] = 2LL;
      v68 &= 1u;
      v138[19] = &v68;
      v89 = ((unsigned int)v53 >> 1) & 1;
      v90 = ((unsigned int)v53 >> 2) & 1;
      v137[0] = 8LL;
      v138[23] = &v90;
      v91 = (unsigned __int8)v61[0];
      v137[2] = 2LL;
      v138[0] = 32LL;
      v138[2] = 4LL;
      v138[4] = 4LL;
      v138[6] = 4LL;
      v138[8] = 4LL;
      v138[10] = 4LL;
      v138[12] = 4LL;
      v138[14] = 4LL;
      v138[16] = 4LL;
      v138[18] = 4LL;
      v138[20] = 4LL;
      v138[21] = &v89;
      v138[22] = 4LL;
      v138[24] = 4LL;
      v138[26] = 4LL;
      v138[25] = &v91;
      LODWORD(v53) = ~(*(_DWORD *)v3[2].Data4 >> 11);
      v138[35] = v139;
      v138[28] = 4LL;
      v92 = (unsigned __int8)v53 & 1;
      v138[30] = 4LL;
      v138[27] = &v92;
      v93 = v3[43].Data4[1];
      v138[29] = &v93;
      v94 = *(_DWORD *)&v3[42].Data4[4];
      v138[31] = &v94;
      v95 = *(_DWORD *)&v3[29].Data4[4];
      v138[33] = &v95;
      v138[32] = 4LL;
      v138[34] = 4LL;
      v55 = 0LL;
      v138[36] = 2LL;
      v139[1] = 0;
      v140 = v56;
      v139[0] = v4 != 0 ? 0x80 : 0;
      v141 = 4LL;
      if ( v4 )
        v55 = v38;
      v138[37] = v55;
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateWsz(&v143, v176);
      v25 = *(_QWORD *)v3[14].Data4 == v57;
      v146 = v62;
      v58 = v57;
      v144 = &v60;
      LOBYTE(v58) = !v25;
      v145 = 1LL;
      v96 = v58;
      v148 = &v96;
      v150 = &v69;
      v152 = &v70;
      v154 = &v71;
      v156 = &v72;
      v158 = &v73;
      v160 = &v74;
      v162 = &v75;
      v147 = 2LL;
      v149 = 4LL;
      v151 = 4LL;
      v153 = 4LL;
      v155 = 4LL;
      v157 = 4LL;
      v159 = 4LL;
      v161 = 4LL;
      v163 = 4LL;
      v164 = &v76;
      v166 = v169;
      v170 = &v67;
      v172 = v175;
      v175[0] = v97;
      v165 = 4LL;
      v167 = 2LL;
      v168 = v37;
      v169[0] = 136 * v43;
      v169[1] = v57;
      v171 = 4LL;
      v173 = 2LL;
      v174 = v17;
      v175[1] = v57;
      TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006BCDB, pActivityId, v59, 0x3Bu, &pData);
    }
    operator delete[](v38);
    if ( v37 )
      operator delete[](v37);
  }
  if ( v17 )
    operator delete[](v17);
}
