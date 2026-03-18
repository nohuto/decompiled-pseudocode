/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172D54
 * Callers:
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01765D8 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8898 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C02C947C (MonitorEnableDisableAdvancedColor.c)
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02CDD70 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02CDF68 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 * Callees:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0002568 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C0003574 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C00062C0 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _TlgCreateWsz @ 0x1C000E2B8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C00217E4 (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C00218A0 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0021A50 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C0021B00 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0021BA0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0021CDC (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0056B38 (-DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056BAC (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056C74 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C0056EC0 (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C00573D4 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D601C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D60D0 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorLogBadEDID @ 0x1C02C9890 (MonitorLogBadEDID.c)
 */

void __fastcall DXGMONITOR::_MonitorTelemetry(GUID *p_ActivityId, __int64 a2, __int64 a3)
{
  GUID *v3; // rbx
  __int64 *v4; // rdi
  __int64 **v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // r11d
  const void **Data4; // r15
  bool v15; // zf
  unsigned int v16; // r12d
  __int128 v17; // xmm0
  unsigned int v18; // r13d
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int128 v21; // xmm0
  unsigned __int64 v22; // rax
  int v23; // ecx
  struct HDXGMONITOR__ *MonitorHandle; // rax
  struct HDXGMONITOR__ *v25; // rax
  char *v26; // rsi
  unsigned __int8 *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  unsigned int v31; // eax
  unsigned __int16 v32; // r15
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rax
  PVOID v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  char *v40; // rsi
  const void *v41; // rdx
  size_t Data1; // r8
  int v43; // r8d
  __int64 v44; // rax
  int v45; // eax
  unsigned __int64 v46; // rax
  SIZE_T v47; // rax
  unsigned __int8 i; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  _DWORD *v52; // rcx
  BOOLEAN v53; // al
  __int64 v54; // rdx
  unsigned __int16 *v55; // rax
  int v56; // ecx
  unsigned __int8 *v57; // rax
  __int64 v58; // r11
  __int64 v59; // r10
  int v60; // eax
  LPCGUID v61; // r9
  unsigned __int8 v62; // [rsp+30h] [rbp-D0h] BYREF
  char v63[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int16 v64[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v65; // [rsp+38h] [rbp-C8h] BYREF
  int v66; // [rsp+3Ch] [rbp-C4h] BYREF
  int v67; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v68; // [rsp+44h] [rbp-BCh] BYREF
  int v69; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v70; // [rsp+4Ch] [rbp-B4h] BYREF
  int v71; // [rsp+50h] [rbp-B0h] BYREF
  int v72; // [rsp+54h] [rbp-ACh] BYREF
  int v73; // [rsp+58h] [rbp-A8h] BYREF
  int v74; // [rsp+5Ch] [rbp-A4h] BYREF
  int v75; // [rsp+60h] [rbp-A0h] BYREF
  int v76; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v77; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v78; // [rsp+6Ch] [rbp-94h] BYREF
  int v79; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v80; // [rsp+74h] [rbp-8Ch] BYREF
  int v81; // [rsp+78h] [rbp-88h] BYREF
  int v82; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v83; // [rsp+80h] [rbp-80h] BYREF
  int v84; // [rsp+84h] [rbp-7Ch] BYREF
  int v85; // [rsp+88h] [rbp-78h] BYREF
  int v86; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v87; // [rsp+90h] [rbp-70h] BYREF
  int Data2_low; // [rsp+94h] [rbp-6Ch] BYREF
  int v89; // [rsp+98h] [rbp-68h] BYREF
  int v90; // [rsp+9Ch] [rbp-64h] BYREF
  int v91; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v92; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v93; // [rsp+A8h] [rbp-58h] BYREF
  int v94; // [rsp+ACh] [rbp-54h] BYREF
  int v95; // [rsp+B0h] [rbp-50h] BYREF
  int v96; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v97; // [rsp+B8h] [rbp-48h] BYREF
  int v98; // [rsp+BCh] [rbp-44h] BYREF
  int v99; // [rsp+C0h] [rbp-40h] BYREF
  void *v100; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v101; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-28h]
  __int64 v103; // [rsp+E0h] [rbp-20h]
  size_t v104; // [rsp+E8h] [rbp-18h]
  LPCGUID pActivityId; // [rsp+F0h] [rbp-10h]
  __int64 v106; // [rsp+F8h] [rbp-8h] BYREF
  GUID ActivityId; // [rsp+100h] [rbp+0h] BYREF
  __int128 v108; // [rsp+110h] [rbp+10h] BYREF
  int v109; // [rsp+120h] [rbp+20h]
  _OWORD v110[2]; // [rsp+128h] [rbp+28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  int *v112; // [rsp+170h] [rbp+70h]
  __int64 v113; // [rsp+178h] [rbp+78h]
  unsigned int *v114; // [rsp+180h] [rbp+80h]
  __int64 v115; // [rsp+188h] [rbp+88h]
  int *v116; // [rsp+190h] [rbp+90h]
  __int64 v117; // [rsp+198h] [rbp+98h]
  int *v118; // [rsp+1A0h] [rbp+A0h]
  __int64 v119; // [rsp+1A8h] [rbp+A8h]
  int *v120; // [rsp+1B0h] [rbp+B0h]
  __int64 v121; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v122; // [rsp+1C0h] [rbp+C0h]
  __int64 v123; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v124; // [rsp+1D0h] [rbp+D0h]
  __int64 v125; // [rsp+1D8h] [rbp+D8h]
  __int64 v126; // [rsp+1E0h] [rbp+E0h]
  _DWORD v127[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  int *v128; // [rsp+1F0h] [rbp+F0h]
  __int64 v129; // [rsp+1F8h] [rbp+F8h]
  unsigned __int8 *v130; // [rsp+200h] [rbp+100h]
  __int64 v131; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v132; // [rsp+210h] [rbp+110h]
  __int64 v133; // [rsp+218h] [rbp+118h]
  _DWORD *v134; // [rsp+220h] [rbp+120h]
  __int64 v135; // [rsp+228h] [rbp+128h]
  __int64 v136; // [rsp+230h] [rbp+130h]
  _DWORD v137[2]; // [rsp+238h] [rbp+138h] BYREF
  _QWORD *v138; // [rsp+240h] [rbp+140h]
  __int64 v139; // [rsp+248h] [rbp+148h]
  __int128 *v140; // [rsp+250h] [rbp+150h]
  _QWORD v141[4]; // [rsp+258h] [rbp+158h] BYREF
  _QWORD v142[4]; // [rsp+278h] [rbp+178h] BYREF
  _QWORD v143[40]; // [rsp+298h] [rbp+198h] BYREF
  _DWORD v144[2]; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v145; // [rsp+3E0h] [rbp+2E0h]
  __int64 v146; // [rsp+3E8h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3F0h] [rbp+2F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v148; // [rsp+400h] [rbp+300h] BYREF
  unsigned __int8 *v149; // [rsp+410h] [rbp+310h]
  __int64 v150; // [rsp+418h] [rbp+318h]
  unsigned __int16 *v151; // [rsp+420h] [rbp+320h]
  __int64 v152; // [rsp+428h] [rbp+328h]
  int *v153; // [rsp+430h] [rbp+330h]
  __int64 v154; // [rsp+438h] [rbp+338h]
  int *v155; // [rsp+440h] [rbp+340h]
  __int64 v156; // [rsp+448h] [rbp+348h]
  int *v157; // [rsp+450h] [rbp+350h]
  __int64 v158; // [rsp+458h] [rbp+358h]
  int *v159; // [rsp+460h] [rbp+360h]
  __int64 v160; // [rsp+468h] [rbp+368h]
  int *v161; // [rsp+470h] [rbp+370h]
  __int64 v162; // [rsp+478h] [rbp+378h]
  int *v163; // [rsp+480h] [rbp+380h]
  __int64 v164; // [rsp+488h] [rbp+388h]
  int *v165; // [rsp+490h] [rbp+390h]
  __int64 v166; // [rsp+498h] [rbp+398h]
  unsigned int *v167; // [rsp+4A0h] [rbp+3A0h]
  __int64 v168; // [rsp+4A8h] [rbp+3A8h]
  unsigned int *v169; // [rsp+4B0h] [rbp+3B0h]
  __int64 v170; // [rsp+4B8h] [rbp+3B8h]
  _DWORD *v171; // [rsp+4C0h] [rbp+3C0h]
  __int64 v172; // [rsp+4C8h] [rbp+3C8h]
  char *v173; // [rsp+4D0h] [rbp+3D0h]
  _DWORD v174[2]; // [rsp+4D8h] [rbp+3D8h] BYREF
  int *v175; // [rsp+4E0h] [rbp+3E0h]
  __int64 v176; // [rsp+4E8h] [rbp+3E8h]
  _DWORD *v177; // [rsp+4F0h] [rbp+3F0h]
  __int64 v178; // [rsp+4F8h] [rbp+3F8h]
  void *v179; // [rsp+500h] [rbp+400h]
  _DWORD v180[2]; // [rsp+508h] [rbp+408h] BYREF
  WCHAR v181[4]; // [rsp+510h] [rbp+410h] BYREF
  __int16 v182; // [rsp+518h] [rbp+418h]
  WCHAR pwsz[4]; // [rsp+520h] [rbp+420h] BYREF
  int v184; // [rsp+528h] [rbp+428h]
  __int16 v185; // [rsp+52Ch] [rbp+42Ch]

  v79 = a2;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
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
    goto LABEL_35;
  v5 = *(__int64 ***)v3[8].Data4;
  if ( !v5 )
    goto LABEL_35;
  v6 = *v5;
  if ( !v6 )
    goto LABEL_35;
  do
  {
    if ( *((_DWORD *)v6 + 2) == 2 )
      break;
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( v6 )
  {
    v7 = v6 + 3;
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v6 + 24);
    v12 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v34 + 24) = v7;
      *(_QWORD *)(v34 + 32) = v12;
      WdLogEvent5_WdWarning(v34);
      MonitorLogBadEDID(v7, (unsigned int)v12);
    }
    else
    {
      v4 = v7;
      LODWORD(v12) = 0;
    }
    v66 = 0;
    if ( (int)v12 >= 0 )
    {
      if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v4) >= 0 )
        v13 = 1;
      v66 = v13;
    }
  }
  else
  {
LABEL_35:
    v35 = WdLogNewEntry5_WdWarning(p_ActivityId, a2, a3);
    *(_QWORD *)(v35 + 24) = v3;
    WdLogEvent5_WdWarning(v35);
    v66 = 0;
  }
  Data4 = (const void **)v3[10].Data4;
  v100 = 0LL;
  LODWORD(v104) = 0;
  v69 = 0;
  if ( *(_QWORD *)v3[10].Data4 )
  {
    v36 = operator new[](v3[11].Data1, 0x4D677844u, PagedPool);
    v100 = v36;
    v40 = (char *)v36;
    if ( v36 )
    {
      v41 = *Data4;
      Data1 = v3[11].Data1;
      v104 = Data1;
      memmove(v36, v41, Data1);
      v43 = v3[11].Data1;
      v101 = 0LL;
      v102 = 0LL;
      v103 = 0LL;
      DisplayID_Initialize((struct DisplayIDObj *)&v101, v40, v43);
      DisplayID_UpdateForTelemetry((struct DisplayIDObj *)&v101);
      v69 = 1;
    }
    else
    {
      v44 = WdLogNewEntry5_WdWarning(v38, v37, v39);
      WdLogEvent5_WdWarning(v44);
      v69 = 0;
    }
  }
  v15 = (*(_DWORD *)v3[2].Data4 & 0x400) == 0;
  LOBYTE(v16) = 0;
  v17 = *(_OWORD *)v3[37].Data4;
  LOBYTE(v18) = 0;
  v19 = *(_OWORD *)&v3[40].Data2;
  v109 = *(_DWORD *)v3[38].Data4;
  v20 = *(_QWORD *)&v3[38].Data4[4];
  v108 = v17;
  v106 = v20;
  v21 = *(_OWORD *)&v3[39].Data2;
  v110[1] = v19;
  v110[0] = v21;
  if ( v15 )
  {
    v22 = 0LL;
    v23 = -1073741275;
    LODWORD(v102) = 0;
  }
  else
  {
    v45 = *(_DWORD *)&v3[29].Data4[4];
    v23 = 0;
    v101 = *(_QWORD *)&v3[29].Data2;
    LODWORD(v102) = v45;
    v22 = v101;
  }
  v67 = 0;
  v68 = 0;
  if ( v23 >= 0 )
  {
    v46 = HIDWORD(v22);
    v67 = 1;
    v16 = ((unsigned int)v46 >> 1) & 1;
    v18 = ((unsigned int)v46 >> 2) & 1;
    v68 = (v46 & 0x800) != 0;
  }
  v70 = 0;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)v3);
  MonitorIsMonitorAndLinkHDRCapable(MonitorHandle, &v70);
  v63[0] = 0;
  v25 = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)v3);
  MonitorIsMonitorAndDriverWCGCapable(v25, v63);
  v62 = 0;
  *(_QWORD *)pwsz = 0LL;
  v184 = 0;
  v185 = 0;
  v26 = 0LL;
  *(_QWORD *)v181 = 0LL;
  v182 = 0;
  v64[0] = 0;
  v77 = 0;
  v78 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  LOWORD(v65) = 0;
  v27 = (unsigned __int8 *)operator new[](0x80uLL, 0x4D677844u, PagedPool);
  if ( v27 )
  {
    if ( v4 )
    {
      EDIDV1_ObtainMonitorManufacturerName((unsigned __int8 *)v4, pwsz);
      EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)v4, v181);
      EDIDV1_ObtainMonitorManufactureDate((unsigned __int8 *)v4, &v62, v64);
      EDID_V1_GetPhysicalSize(v28, (unsigned __int8 *)v4, &v77, &v78);
      *(_OWORD *)v27 = *(_OWORD *)v4;
      *((_OWORD *)v27 + 1) = *((_OWORD *)v4 + 1);
      *((_OWORD *)v27 + 2) = *((_OWORD *)v4 + 2);
      *((_OWORD *)v27 + 3) = *((_OWORD *)v4 + 3);
      *((_OWORD *)v27 + 4) = *((_OWORD *)v4 + 4);
      *((_OWORD *)v27 + 5) = *((_OWORD *)v4 + 5);
      *((_OWORD *)v27 + 6) = *((_OWORD *)v4 + 6);
      *((_OWORD *)v27 + 7) = *((_OWORD *)v4 + 7);
      EDID_V1_RemovePII(v29, v27);
      v30 = *(_DWORD **)v3[14].Data4;
      if ( v30 )
      {
        v71 = v30[5];
        v72 = v30[6];
        v73 = v30[2];
        v74 = v30[14];
        v75 = v30[7];
        v76 = v30[8];
      }
      v31 = v3[8].Data1;
      if ( v31 > 1 )
      {
        if ( v31 < 4 )
          v32 = v31 - 1;
        else
          v32 = 3;
        v47 = 136LL * v32;
        if ( !is_mul_ok(v32, 0x88uLL) )
          v47 = -1LL;
        v26 = (char *)operator new[](v47, 0x4D677844u, PagedPool);
        if ( v26 )
        {
          for ( i = 0; i < v32; *(_OWORD *)&v26[v50 + 120] = *(_OWORD *)(v51 + 136) )
          {
            v49 = i++;
            v50 = 136 * v49;
            *(_DWORD *)&v26[v50] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3[8].Data4 + 8 * v49 + 8) + 8LL);
            *(_DWORD *)&v26[v50 + 4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3[8].Data4 + 8 * v49 + 8) + 12LL);
            v51 = *(_QWORD *)(*(_QWORD *)v3[8].Data4 + 8 * v49 + 8);
            *(_OWORD *)&v26[v50 + 8] = *(_OWORD *)(v51 + 24);
            *(_OWORD *)&v26[v50 + 24] = *(_OWORD *)(v51 + 40);
            *(_OWORD *)&v26[v50 + 40] = *(_OWORD *)(v51 + 56);
            *(_OWORD *)&v26[v50 + 56] = *(_OWORD *)(v51 + 72);
            *(_OWORD *)&v26[v50 + 72] = *(_OWORD *)(v51 + 88);
            *(_OWORD *)&v26[v50 + 88] = *(_OWORD *)(v51 + 104);
            *(_OWORD *)&v26[v50 + 104] = *(_OWORD *)(v51 + 120);
          }
        }
        else
        {
          v32 = 0;
        }
      }
      else
      {
        v32 = v65;
      }
    }
    else if ( *Data4 )
    {
      DisplayID_GetManufacturerName((struct DisplayIDObj *)v3[10].Data4, pwsz);
      DisplayID_GetProductCode((struct DisplayIDObj *)v3[10].Data4, v181);
      DisplayID_GetManufactureDate((struct DisplayIDObj *)v3[10].Data4, &v62, v64);
      DisplayID_GetPhysicalSize((const struct DisplayIDObj *)v3[10].Data4, &v77, &v78);
      v52 = *(_DWORD **)v3[14].Data4;
      v32 = v65;
      if ( v52 )
      {
        v71 = v52[5];
        v72 = v52[6];
        v73 = v52[2];
        v74 = v52[14];
        v75 = v52[7];
        v76 = v52[8];
      }
    }
    else
    {
      v32 = v65;
    }
    if ( dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x800000000020uLL) )
    {
      v113 = 2LL;
      LOWORD(v65) = 11;
      v115 = 4LL;
      v112 = &v65;
      v80 = gDISeqId;
      gDISeqId += v33;
      v114 = &v80;
      v81 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00A1888, 0, 0x400000000000uLL);
      v116 = &v81;
      v117 = 4LL;
      v53 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C00A1888, 0, 0x200000000000uLL);
      v54 = *(_QWORD *)&v3[2].Data1;
      v118 = &v82;
      v120 = &v79;
      v83 = v3[3].Data1;
      v122 = &v83;
      v124 = v127;
      v126 = *(_QWORD *)&v3[6].Data1;
      v127[0] = *(unsigned __int16 *)v3[5].Data4;
      v128 = &v66;
      v130 = &v3[2].Data4[4];
      v82 = v53;
      v119 = 4LL;
      v121 = 4LL;
      v123 = 4LL;
      v125 = 2LL;
      v127[1] = 0;
      v129 = 4LL;
      v131 = 4LL;
      v101 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) + 16LL) + 276LL);
      v132 = &v101;
      v133 = 8LL;
      v55 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v54 + 8) + 16LL) + 1408LL);
      v134 = v137;
      v135 = 2LL;
      v56 = *v55;
      v136 = *((_QWORD *)v55 + 1);
      v138 = v141;
      v140 = &v108;
      v137[0] = v56;
      v137[1] = 0;
      v139 = 2LL;
      v141[0] = 20LL;
      v141[1] = v142;
      v141[3] = &v106;
      v142[1] = v143;
      v142[3] = v110;
      v84 = *(_DWORD *)&v3[41].Data2;
      v143[1] = &v84;
      v85 = *(_DWORD *)v3[41].Data4;
      v143[3] = &v85;
      v86 = *(_DWORD *)&v3[41].Data4[4];
      v143[5] = &v86;
      v87 = v3[42].Data1;
      v143[7] = &v87;
      Data2_low = LOBYTE(v3[43].Data2);
      v143[9] = &Data2_low;
      v89 = v3[43].Data4[4];
      v143[11] = &v89;
      v143[13] = &v67;
      v90 = (unsigned __int8)v16;
      v143[15] = &v90;
      v91 = (unsigned __int8)v18;
      v143[17] = &v91;
      v143[19] = &v68;
      LODWORD(v55) = v70;
      v141[2] = 2LL;
      v70 &= 1u;
      v143[21] = &v70;
      v92 = ((unsigned int)v55 >> 1) & 1;
      v142[0] = 8LL;
      v143[23] = &v92;
      v142[2] = 2LL;
      v143[0] = 32LL;
      v143[2] = 4LL;
      v143[4] = 4LL;
      v143[6] = 4LL;
      v143[8] = 4LL;
      v143[10] = 4LL;
      v143[12] = 4LL;
      v143[14] = 4LL;
      v143[16] = 4LL;
      v143[18] = 4LL;
      v143[20] = 4LL;
      v143[22] = 4LL;
      v143[24] = 4LL;
      v93 = ((unsigned int)v55 >> 2) & 1;
      v143[26] = 4LL;
      v143[25] = &v93;
      v94 = (unsigned __int8)v63[0];
      v143[27] = &v94;
      LODWORD(v55) = ~(*(_DWORD *)v3[2].Data4 >> 11);
      v143[37] = v144;
      v143[28] = 4LL;
      v95 = (unsigned __int8)v55 & 1;
      v143[30] = 4LL;
      v143[29] = &v95;
      v96 = v3[43].Data4[5];
      v143[31] = &v96;
      v97 = v3[43].Data1;
      v143[33] = &v97;
      v98 = *(_DWORD *)&v3[29].Data4[4];
      v143[35] = &v98;
      v143[32] = 4LL;
      v143[34] = 4LL;
      v57 = 0LL;
      v143[36] = 4LL;
      v143[38] = 2LL;
      v144[1] = 0;
      v144[0] = v4 != 0LL ? 0x80 : 0;
      v145 = v58;
      if ( v4 )
        v57 = v27;
      v146 = 4LL;
      v143[39] = v57;
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateWsz(&v148, v181);
      v15 = *(_QWORD *)v3[14].Data4 == v59;
      v151 = v64;
      v60 = v59;
      v149 = &v62;
      LOBYTE(v60) = !v15;
      v150 = 1LL;
      v99 = v60;
      v153 = &v99;
      v155 = &v71;
      v157 = &v72;
      v159 = &v73;
      v161 = &v74;
      v163 = &v75;
      v152 = 2LL;
      v154 = 4LL;
      v156 = 4LL;
      v158 = 4LL;
      v160 = 4LL;
      v162 = 4LL;
      v164 = 4LL;
      v166 = 4LL;
      v165 = &v76;
      v167 = &v77;
      v169 = &v78;
      v171 = v174;
      v175 = &v69;
      v177 = v180;
      v179 = v100;
      v180[0] = v104;
      v168 = 4LL;
      v170 = 4LL;
      v172 = 2LL;
      v173 = v26;
      v174[0] = 136 * v32;
      v174[1] = v59;
      v176 = 4LL;
      v178 = 2LL;
      v180[1] = v59;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0074939, pActivityId, v61, 0x3Cu, &pData);
    }
    operator delete[](v27);
    if ( v26 )
      operator delete[](v26);
  }
  if ( v100 )
    operator delete[](v100);
}
