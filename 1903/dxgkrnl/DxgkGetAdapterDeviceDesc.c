/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C00E9980
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00020DC (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0003B50 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0006048 (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00064E0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C00065AC (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0032518 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C00C2008 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C72EC (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C00D0100 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D60D0 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E6B40 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6FA0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00E74D0 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C00E765C (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorHandle @ 0x1C00E8044 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E86A4 (MonitorReleaseMonitorHandle.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00E8ACC (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C00E8B2C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E8BF4 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00E98A4 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00EABD0 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00EAC24 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00F79E0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, const GUID *a3, __int64 a4)
{
  struct HDXGMONITOR__ *v4; // r13
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // bl
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r13d
  unsigned int v28; // r15d
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 *v35; // rcx
  struct DXGADAPTER **v36; // rax
  unsigned int v37; // edx
  int PairingAdapters; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  DXGADAPTER *v41; // rdx
  _QWORD *v42; // rdi
  __int64 CurrentProcess; // rax
  PEPROCESS v44; // rax
  volatile signed __int64 *v45; // rsi
  __int64 v46; // rax
  DXGADAPTER *v47; // r9
  _BOOL8 v48; // rcx
  __int64 v49; // rax
  bool v50; // zf
  struct DXGADAPTER ***v51; // rcx
  DXGGLOBAL **v52; // rcx
  DXGADAPTER *v53; // rsi
  DXGADAPTER *v54; // rax
  DXGADAPTER *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // eax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  const GUID *v62; // r8
  DXGADAPTER *v64; // rcx
  __int64 v65; // r11
  __int64 v66; // rdx
  DXGADAPTER *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // eax
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  DXGADAPTER *v76; // rsi
  __int64 v77; // rax
  unsigned int v78; // edx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r13
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  struct DXGADAPTER *v85; // rcx
  char v86; // r13
  int v87; // edx
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // rdx
  __int64 v95; // rcx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v96; // eax
  int MonitorHandle; // eax
  struct HDXGMONITOR__ *v98; // r13
  int v99; // eax
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  int v104; // eax
  __int64 v105; // rax
  int v106; // eax
  DXGSESSIONMGR *v107; // r13
  int v108; // edx
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  int v113; // eax
  __int64 v114; // r8
  __int64 v115; // rcx
  __int64 v116; // rax
  _QWORD *v117; // rax
  int v118; // eax
  __int64 v119; // rdx
  struct HDXGMONITOR__ *v120; // rax
  struct DXGADAPTER *v121; // rsi
  struct DXGADAPTER *v122; // rcx
  struct DXGADAPTER *v123; // rcx
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // rbx
  __int64 v129; // rax
  unsigned __int8 v130; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v131[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v132; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v133[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v134; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v135[8]; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v136; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v137; // [rsp+60h] [rbp-A0h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v138; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *SessionViewOwner; // [rsp+70h] [rbp-90h]
  bool v140; // [rsp+78h] [rbp-88h] BYREF
  bool v141; // [rsp+79h] [rbp-87h] BYREF
  struct HDXGMONITOR__ *v142; // [rsp+80h] [rbp-80h] BYREF
  int v143; // [rsp+88h] [rbp-78h] BYREF
  char v144; // [rsp+8Ch] [rbp-74h]
  int v145; // [rsp+90h] [rbp-70h] BYREF
  char v146; // [rsp+94h] [rbp-6Ch]
  __int64 v147; // [rsp+98h] [rbp-68h]
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v148; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v149; // [rsp+A4h] [rbp-5Ch] BYREF
  struct _LUID v150; // [rsp+A8h] [rbp-58h]
  struct HDXGMONITOR__ *v151; // [rsp+B0h] [rbp-50h]
  DXGSESSIONMGR *v152; // [rsp+B8h] [rbp-48h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v153; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v154; // [rsp+D0h] [rbp-30h]
  int v155; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v156; // [rsp+E0h] [rbp-20h]
  char v157; // [rsp+E8h] [rbp-18h]
  __int64 v158; // [rsp+F0h] [rbp-10h] BYREF
  struct DXGADAPTER *v159; // [rsp+F8h] [rbp-8h]
  char v160; // [rsp+100h] [rbp+0h]
  _DWORD v161[12]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v162[12]; // [rsp+138h] [rbp+38h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v163; // [rsp+168h] [rbp+68h] BYREF
  DXGADAPTER *v164[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v165[2]; // [rsp+180h] [rbp+80h] BYREF
  char v166; // [rsp+190h] [rbp+90h]
  unsigned __int64 v167; // [rsp+198h] [rbp+98h] BYREF
  char v168; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v169; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v170[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v171; // [rsp+1C0h] [rbp+C0h]
  struct DXGADAPTER *v172; // [rsp+1C8h] [rbp+C8h]
  char v173; // [rsp+1D0h] [rbp+D0h]
  int v174; // [rsp+1D4h] [rbp+D4h]
  DXGADAPTER *v175; // [rsp+1D8h] [rbp+D8h]
  _BYTE v176[8]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v177; // [rsp+200h] [rbp+100h]
  struct DXGADAPTER *v178; // [rsp+208h] [rbp+108h]
  char v179; // [rsp+210h] [rbp+110h]
  int v180; // [rsp+214h] [rbp+114h]
  DXGADAPTER *v181; // [rsp+218h] [rbp+118h]

  v155 = -1;
  LODWORD(v4) = 0;
  v6 = a2;
  v150 = a1;
  v156 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v157 = 1;
    v155 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  }
  else
  {
    v157 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v155, 2185LL);
  v137 = 0LL;
  v147 = 0LL;
  v136 = 0LL;
  v151 = 0LL;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 6098LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  SessionViewOwner = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v167);
  if ( !SessionViewOwner )
  {
    v15 = 1144079361;
    LODWORD(v16) = -1073741811;
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v17[3] = v150.HighPart;
    v17[4] = a1.LowPart;
    v17[5] = 1144079361LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_63;
  }
  v19 = DxgkAcquireSessionModeChangeLock(0LL);
  v16 = v19;
  v23 = v19 >= 0;
  if ( v19 < 0 )
  {
    v15 = 1144079362;
    v24 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v16;
    *(_QWORD *)(v24 + 32) = 1144079362LL;
    WdLogEvent5_WdError(v24);
    if ( v23 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_181;
  }
  v27 = -1;
  if ( !(unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v28 = 0;
    v132 = 0;
    v152 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v26, v25) + 74);
    if ( v152 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v30, v29);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v152, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      LODWORD(v16) = -1073741811;
      v15 = 1144079369;
      v42 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v29, 0LL);
      CurrentProcess = PsGetCurrentProcess();
      v42[3] = (unsigned int)PsGetProcessSessionId(CurrentProcess);
      v44 = (PEPROCESS)PsGetCurrentProcess();
      LOBYTE(v4) = 0;
      v42[5] = 1144079369LL;
      v42[4] = v44 != PsInitialSystemProcess;
      WdLogEvent5_WdError(v42);
LABEL_25:
      if ( v23 )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_63;
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4624) == *((_DWORD *)SessionViewOwner + 69)
      && *((_DWORD *)SessionDataForSpecifiedSession + 4625) == *((_DWORD *)SessionViewOwner + 70) )
    {
      v28 = *((_DWORD *)SessionDataForSpecifiedSession + 4626);
      v132 = v28;
    }
    if ( (_DWORD)v6 != -1 && (unsigned int)v6 >= v28 )
    {
      LODWORD(v16) = -1073741811;
      v15 = 1144079363;
      v33 = (_QWORD *)WdLogNewEntry5_WdError(SessionDataForSpecifiedSession, v29, 0LL);
      v34 = v132;
      v33[3] = v6;
      v33[4] = v34;
      v33[5] = 1144079363LL;
LABEL_23:
      WdLogEvent5_WdError(v33);
LABEL_24:
      LOBYTE(v4) = 0;
      goto LABEL_25;
    }
    LODWORD(v6) = -1;
  }
  v35 = (unsigned __int64 *)&v168;
  v36 = &v137;
  v37 = 0;
  if ( (_DWORD)v6 == -1 )
  {
    v35 = 0LL;
    v36 = 0LL;
  }
  else
  {
    v37 = v6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(SessionViewOwner, v37, &v136, &v169, v36, v35, 0);
  v41 = 0LL;
  LODWORD(v16) = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    LODWORD(v16) = -1073741811;
    v15 = 1144079364;
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v39, 0LL, v40);
    v33[3] = v150.HighPart;
    v33[4] = a1.LowPart;
    v33[5] = (unsigned int)v6;
    v33[6] = 1144079364LL;
    goto LABEL_23;
  }
  v45 = (volatile signed __int64 *)v136;
  if ( !v136 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v39, 0LL);
    *(_QWORD *)(v46 + 24) = 6215LL;
    WdLogEvent5_WdAssertion(v46);
    v41 = 0LL;
  }
  v47 = v137;
  v142 = v137;
  v48 = (_DWORD)v6 == -1;
  if ( v48 != (v137 == 0LL) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v48, 0LL);
    *(_QWORD *)(v49 + 24) = 6216LL;
    WdLogEvent5_WdAssertion(v49);
    v47 = v142;
    v41 = 0LL;
  }
  v50 = v47 == 0LL;
  if ( v47 )
  {
    if ( DXGADAPTER::IsIndirectDisplayDevice(v47) )
    {
      v164[0] = v41;
      if ( (int)DxgkpGetIndirectDisplayPairedAdapter(v51, 0, v164) >= 0 )
        v151 = *(struct HDXGMONITOR__ **)((char *)v164[0] + 276);
      DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v164);
      v47 = v142;
      v41 = 0LL;
    }
    v50 = v47 == 0LL;
  }
  if ( v50 )
    v47 = (DXGADAPTER *)v45;
  v172 = (struct DXGADAPTER *)v45;
  v173 = (char)v41;
  v174 = -1;
  v175 = v41;
  if ( v45 )
  {
    _InterlockedIncrement64(v45 + 3);
    v45 = (volatile signed __int64 *)v136;
    v171 = -1LL;
  }
  v179 = (char)v41;
  v180 = -1;
  if ( v47 )
    v45 = (volatile signed __int64 *)v47;
  v181 = v41;
  v178 = (struct DXGADAPTER *)v45;
  if ( v45 )
  {
    _InterlockedIncrement64(v45 + 3);
    v177 = -1LL;
  }
  v52 = (DXGGLOBAL **)SessionViewOwner;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SessionViewOwner + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(v52[2], (struct DXGADAPTER *)v52);
  v53 = v136;
  v154 = v136;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v136 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v136 + 2), v136);
  if ( v137 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v137);
    v54 = v136;
  }
  else
  {
    v54 = v136;
    v137 = v136;
  }
  v165[1] = v54;
  _InterlockedIncrement64((volatile signed __int64 *)v53 + 3);
  v165[0] = -1LL;
  KeEnterCriticalRegion();
  v55 = v136;
  ExAcquirePushLockSharedEx((char *)v136 + 120, 0LL);
  v59 = *((_DWORD *)v55 + 44);
  v166 = 1;
  if ( v59 != 1 )
  {
    LODWORD(v16) = -1073741130;
    v147 = 1144079365LL;
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
    v60[3] = v150.HighPart;
    v60[4] = a1.LowPart;
    v60[5] = (unsigned int)v6;
    v60[6] = 1144079365LL;
    WdLogEvent5_WdWarning(v60);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v165);
    COREACCESS::~COREACCESS((COREACCESS *)v176);
    COREACCESS::~COREACCESS((COREACCESS *)v170);
    LOBYTE(v4) = 0;
    if ( v23 )
      DxgkReleaseSessionModeChangeLock();
    v15 = v147;
    goto LABEL_63;
  }
  v64 = v136;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v136 + 76);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v64 + 71);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v64 + 72);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v64 + 73);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v64 + 74);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v64 + 75);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v64 + 77) >> 7) & 1;
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v64 + 64) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v64 + 613);
  DXGADAPTER::GetDeviceDescriptor(v64, 0x100u, (unsigned __int16 *)(a4 + 860));
  RtlStringCbCopyNW(
    (char *)(a4 + 1116),
    v66,
    *(char **)(*(_QWORD *)(v65 + 1408) + 8LL),
    **(unsigned __int16 **)(v65 + 1408));
  ExReleasePushLockSharedEx((char *)v55 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v154 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v136 + 2), v136);
  if ( v137 )
  {
    v159 = v137;
    _InterlockedIncrement64((volatile signed __int64 *)v137 + 3);
    v158 = -1LL;
    KeEnterCriticalRegion();
    v67 = v137;
    ExAcquirePushLockSharedEx((char *)v137 + 120, 0LL);
    v71 = *((_DWORD *)v67 + 44);
    v160 = 1;
    if ( v71 != 1 )
    {
      LODWORD(v16) = -1073741130;
      v15 = 1144079366;
      v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, v68, v70);
      v72[3] = v150.HighPart;
      v72[4] = a1.LowPart;
      v72[5] = (unsigned int)v6;
      v72[6] = 1144079366LL;
      WdLogEvent5_WdWarning(v72);
LABEL_74:
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v158);
      COREACCESS::~COREACCESS((COREACCESS *)v176);
      COREACCESS::~COREACCESS((COREACCESS *)v170);
      goto LABEL_24;
    }
    if ( (_DWORD)v6 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
      v4 = 0LL;
LABEL_152:
      v76 = v137;
LABEL_153:
      *(_DWORD *)(a4 + 20) = *((_DWORD *)v76 + 76);
      *(_DWORD *)(a4 + 24) = *((_DWORD *)v76 + 71);
      *(_DWORD *)(a4 + 28) = *((_DWORD *)v76 + 72);
      *(_DWORD *)(a4 + 32) = *((_DWORD *)v76 + 73);
      *(_DWORD *)(a4 + 36) = *((_DWORD *)v76 + 74);
      *(_DWORD *)(a4 + 40) = *((_DWORD *)v76 + 75);
      *(_DWORD *)(a4 + 824) = (*((_DWORD *)v76 + 77) >> 7) & 1;
      v118 = (int)v4;
      LOBYTE(v118) = *((_DWORD *)v76 + 64) > 1u;
      *(_DWORD *)(a4 + 828) = v118;
      *(_DWORD *)(a4 + 44) = *((_DWORD *)v76 + 613);
      DXGADAPTER::GetDeviceDescriptor(v76, 0x100u, (unsigned __int16 *)(a4 + 48));
      RtlStringCbCopyNW(
        (char *)(a4 + 304),
        v119,
        *(char **)(*((_QWORD *)v76 + 176) + 8LL),
        **((unsigned __int16 **)v76 + 176));
      if ( !DXGADAPTER::IsIndirectDisplayDevice(v76) )
      {
        if ( *((struct HDXGMONITOR__ **)v76 + 319) == v4 )
        {
          v120 = v4;
          goto LABEL_160;
        }
        if ( v136 )
          v151 = *(struct HDXGMONITOR__ **)((char *)v136 + 276);
        else
          v151 = v4;
      }
      v120 = v151;
LABEL_160:
      *(_QWORD *)(a4 + 2044) = v120;
      if ( v160 != (_BYTE)v4 )
      {
        v121 = v159;
        ExReleasePushLockSharedEx((char *)v159 + 120, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v159 + 2), v159);
      }
      goto LABEL_164;
    }
    v76 = v137;
    v77 = *((_QWORD *)v137 + 319);
    if ( !v77 || (unsigned int)v6 >= *(_DWORD *)(v77 + 80) )
    {
      v15 = 1144079367;
      LODWORD(v16) = -1073741811;
      if ( v77 )
        v27 = *(_DWORD *)(v77 + 80);
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73, v75);
      v117[3] = (unsigned int)v6;
      v117[4] = v27;
      v117[5] = v150.HighPart;
      v117[6] = a1.LowPart;
      v117[7] = 1144079367LL;
      WdLogEvent5_WdError(v117);
      goto LABEL_74;
    }
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)SessionViewOwner + 319), v6);
    if ( !SessionViewOwner )
    {
      *(_DWORD *)(a4 + 1916) = -1;
      *(_QWORD *)(a4 + 1644) = 0LL;
      v4 = 0LL;
      *(_QWORD *)(a4 + 1652) = 0LL;
      *(_QWORD *)(a4 + 1952) = 0LL;
      *(_QWORD *)(a4 + 1960) = 0LL;
      *(_QWORD *)(a4 + 1968) = 0LL;
      *(_QWORD *)(a4 + 1924) = 0LL;
      *(_QWORD *)(a4 + 1932) = 5LL;
      *(_DWORD *)(a4 + 1940) = 1;
      *(_QWORD *)(a4 + 1944) = 1LL;
      SessionViewOwner = 0LL;
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
      goto LABEL_153;
    }
    v132 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v76, (unsigned int)v6, &v132);
    v78 = v132;
    *(_DWORD *)(a4 + 2052) ^= (*(_DWORD *)(a4 + 2052) ^ (*((_DWORD *)v76 + 77) >> 3)) & 0x8000;
    if ( v78 == -1 )
      TargetUsage = 0;
    else
      TargetUsage = DmmGetTargetUsage(v76, v78, 0LL);
    *(_DWORD *)(a4 + 2028) = TargetUsage;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v76 + 319), v6);
    if ( *(_DWORD *)(a4 + 2028) )
    {
      *(_QWORD *)(a4 + 1644) = 0LL;
      *(_QWORD *)(a4 + 1652) = 0LL;
      *(_QWORD *)(a4 + 1952) = 0LL;
      *(_QWORD *)(a4 + 1960) = 0LL;
    }
    else
    {
      *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
      *(struct tagRECT *)(a4 + 1952) = *ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)v76 + 319), v6);
    }
    *(_DWORD *)(a4 + 1916) = v132;
    *(_DWORD *)(a4 + 1920) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v76 + 319), v6);
    *(_DWORD *)(a4 + 1924) = *(_DWORD *)DisplayModeInfo;
    *(_DWORD *)(a4 + 1928) = *((_DWORD *)DisplayModeInfo + 1);
    v81 = *((_DWORD *)DisplayModeInfo + 2);
    if ( v81 == 20 )
    {
      v82 = 3;
      goto LABEL_96;
    }
    if ( v81 > 20 )
    {
      if ( v81 <= 22 )
      {
        v82 = 4;
        goto LABEL_96;
      }
      if ( v81 == 23 )
      {
        v82 = 2;
        goto LABEL_96;
      }
      if ( v81 == 41 )
      {
        v82 = 1;
LABEL_96:
        *(_DWORD *)(a4 + 1932) = v82;
        v83 = *((_DWORD *)DisplayModeInfo + 4);
        if ( v83 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
        {
          *(_DWORD *)(a4 + 1936) = 64;
          v84 = 1;
        }
        else
        {
          *(_DWORD *)(a4 + 1936) = v83;
          v84 = *((_DWORD *)DisplayModeInfo + 5);
        }
        *(_DWORD *)(a4 + 1940) = v84;
        *(_DWORD *)(a4 + 1944) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v76 + 319), (unsigned int)v6, 2LL);
        *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
        DxgkpCopyMonitorLinkInfoToFlags(v76, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
        v85 = SessionViewOwner;
        *(_QWORD *)(a4 + 1968) = *((_QWORD *)SessionViewOwner + 8);
        if ( *((_DWORD *)v85 + 10) == 1 )
        {
          v86 = 0;
          v142 = 0LL;
          v138.Value = MonitorGetMonitorHandle(v76, v132, 0, DxgkGetAdapterDeviceDesc, &v142);
          v134 = 0;
          memset(v161, 0, 0x2CuLL);
          v143 = 0;
          v144 = 0;
          if ( (int)DmmGetCurrentWireFormatAndColorSpace(v76, (unsigned int)v6, v132, &v163, &v148) >= 0
            && (v148 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
             || v148 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
          {
            v86 = 1;
          }
          LOBYTE(v134) = v86;
          v4 = v142;
          if ( (v138.Value & 0x80000000) != 0
            || (int)MonitorGetAdvancedColorParams(v142, &v134, (__int64)v161, (__int64)&v143) < 0 )
          {
            SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
          }
          else
          {
            *(_DWORD *)(a4 + 1984) = v161[0];
            *(_DWORD *)(a4 + 1988) = v161[1];
            *(_DWORD *)(a4 + 1992) = v161[2];
            *(_DWORD *)(a4 + 1996) = v161[3];
            *(_DWORD *)(a4 + 2000) = v161[4];
            *(_DWORD *)(a4 + 2004) = v161[5];
            *(_DWORD *)(a4 + 2008) = v161[6];
            *(_DWORD *)(a4 + 2012) = v161[7];
            v87 = *(_DWORD *)(a4 + 2052);
            *(_DWORD *)(a4 + 2016) = v161[8];
            *(_DWORD *)(a4 + 2020) = v161[9];
            *(_DWORD *)(a4 + 2024) = v161[10];
            *(_DWORD *)(a4 + 2052) = (BYTE1(v143) != 0 ? 0x1000 : 0) | ((_BYTE)v143 != 0 ? 0x200 : 0) | v87 & 0xFFFFEDFF;
          }
          if ( (int)MonitorGetNativeFlags(v4, v133, &v141, &v140) < 0 )
            *(_DWORD *)(a4 + 2052) &= ~0x2000u;
          else
            *(_DWORD *)(a4 + 2052) = (v133[0] != 0 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
          if ( v4 )
          {
            v88 = MonitorReleaseMonitorHandle(v76, (__int64)v4, DxgkGetAdapterDeviceDesc);
            v4 = 0LL;
            if ( v88 < 0 )
            {
              v91 = WdLogNewEntry5_WdAssertion(v90, v89);
              *(_QWORD *)(v91 + 24) = 6467LL;
              WdLogEvent5_WdAssertion(v91);
            }
          }
          v138.Value = (unsigned int)v4;
          if ( (int)DmmGetCurrentWireFormatAndColorSpace(v76, (unsigned int)v6, v132, &v138, &v153) < 0 )
          {
            SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
LABEL_143:
            *(_DWORD *)(a4 + 2052) &= ~0x400u;
            v112 = 3968LL * (unsigned int)v6;
            v113 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 319) + 112LL) + v112 + 3756);
            *(_DWORD *)(a4 + 2032) = v113;
            *(_DWORD *)(a4 + 2036) = (_DWORD)v4;
            if ( !v113 )
              goto LABEL_153;
            _mm_lfence();
            v114 = *((_QWORD *)v76 + 319);
            v115 = *(unsigned int *)(*(_QWORD *)(v114 + 112) + v112 + 3756);
            if ( *(_DWORD *)(v114 + 80 * v115 + 744) == 1 )
            {
              *(_DWORD *)(a4 + 2036) = 1;
            }
            else
            {
              v116 = WdLogNewEntry5_WdAssertion(v115, 10 * v115);
              *(_QWORD *)(v116 + 24) = 6617LL;
              WdLogEvent5_WdAssertion(v116);
              *(_DWORD *)(a4 + 2032) = (_DWORD)v4;
            }
            goto LABEL_152;
          }
          *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v138.Value, v92, v93);
          v96 = v153;
          *(_DWORD *)(a4 + 1980) = v153;
          *(_DWORD *)(a4 + 2040) = (_DWORD)v4;
          if ( v96 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020 )
          {
            MonitorHandle = MonitorGetMonitorHandle(v76, v132, 0, DxgkGetAdapterDeviceDesc, &v142);
            v98 = v142;
            if ( MonitorHandle >= 0 )
            {
              v149 = 0;
              if ( (int)MonitorIsMonitorAndLinkHDRCapable(v142, &v149) >= 0 && (v149 & 1) != 0 )
              {
                if ( *((int *)v76 + 613) < 2500 )
                {
                  *(_DWORD *)(a4 + 2040) = (*((_DWORD *)v76 + 71) != 32902) + 1;
                }
                else
                {
                  v99 = *((_DWORD *)v76 + 608);
                  if ( (v99 & 4) != 0 )
                  {
                    *(_DWORD *)(a4 + 2040) = 2;
                  }
                  else if ( (v99 & 8) != 0 )
                  {
                    *(_DWORD *)(a4 + 2040) = 1;
                  }
                }
              }
            }
            if ( v98 )
            {
              v100 = MonitorReleaseMonitorHandle(v76, (__int64)v98, DxgkGetAdapterDeviceDesc);
              v4 = 0LL;
              if ( v100 >= 0 )
                goto LABEL_143;
              v103 = WdLogNewEntry5_WdAssertion(v102, v101);
              *(_QWORD *)(v103 + 24) = 6533LL;
LABEL_140:
              WdLogEvent5_WdAssertion(v103);
              goto LABEL_143;
            }
          }
          else
          {
            if ( v96 != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL )
              goto LABEL_143;
            v104 = *((_DWORD *)v76 + 77);
            if ( (v104 & 0x200) == 0 && (v104 & 8) == 0 )
            {
              v105 = WdLogNewEntry5_WdAssertion(v95, v94);
              *(_QWORD *)(v105 + 24) = 6539LL;
              WdLogEvent5_WdAssertion(v105);
            }
            v152 = v4;
            v135[0] = (_BYTE)v4;
            memset(v162, 0, 0x2CuLL);
            v135[1] = 1;
            v145 = 0;
            v146 = 0;
            v106 = MonitorGetMonitorHandle(v76, v132, 0, DxgkGetAdapterDeviceDesc, &v152);
            v107 = v152;
            if ( v106 >= 0 && (int)MonitorGetAdvancedColorParams(v152, v135, (__int64)v162, (__int64)&v145) >= 0 )
            {
              *(_DWORD *)(a4 + 1984) = v162[0];
              *(_DWORD *)(a4 + 1988) = v162[1];
              *(_DWORD *)(a4 + 1992) = v162[2];
              *(_DWORD *)(a4 + 1996) = v162[3];
              *(_DWORD *)(a4 + 2000) = v162[4];
              *(_DWORD *)(a4 + 2004) = v162[5];
              *(_DWORD *)(a4 + 2008) = v162[6];
              *(_DWORD *)(a4 + 2012) = v162[7];
              v108 = *(_DWORD *)(a4 + 2052);
              *(_DWORD *)(a4 + 2016) = v162[8];
              *(_DWORD *)(a4 + 2020) = v162[9];
              *(_DWORD *)(a4 + 2024) = v162[10];
              *(_DWORD *)(a4 + 2052) = (BYTE1(v145) != 0 ? 0x1000 : 0) | ((_BYTE)v145 != 0 ? 0x200 : 0) | v108 & 0xFFFFEDFF;
            }
            if ( v107 )
            {
              v109 = MonitorReleaseMonitorHandle(v76, (__int64)v107, DxgkGetAdapterDeviceDesc);
              v4 = 0LL;
              if ( v109 >= 0 )
                goto LABEL_143;
              v103 = WdLogNewEntry5_WdAssertion(v111, v110);
              *(_QWORD *)(v103 + 24) = 6581LL;
              goto LABEL_140;
            }
          }
        }
        else
        {
          SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
        }
        v4 = 0LL;
        goto LABEL_143;
      }
    }
    v82 = 5;
    goto LABEL_96;
  }
  LODWORD(v4) = 0;
LABEL_164:
  v122 = v178;
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  if ( v122 )
  {
    if ( v179 != (_BYTE)v4 )
    {
      COREACCESS::Release((COREACCESS *)v176);
      v122 = v178;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v122 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v122 + 2), v122);
  }
  v123 = v172;
  if ( v172 )
  {
    if ( v173 != (_BYTE)v4 )
    {
      COREACCESS::Release((COREACCESS *)v170);
      v123 = v172;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v123 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v123 + 2), v123);
  }
  if ( v23 )
    DxgkReleaseSessionModeChangeLock();
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v131[0] = (unsigned __int8)v4;
    v130 = (unsigned __int8)v4;
    v124 = DxgkpAdapterCheckStereoMode(a1, (unsigned int)v6, &v130, v131);
    v128 = v124;
    if ( v124 < 0 )
    {
      v129 = WdLogNewEntry5_WdWarning(v126, v125, v127);
      *(_QWORD *)(v129 + 24) = v128;
      WdLogEvent5_WdWarning(v129);
    }
    else
    {
      v18 = (v131[0] != 0 ? 8 : 0) | (v130 != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
      *(_DWORD *)(a4 + 2052) = v18;
    }
  }
  v15 = v147;
LABEL_181:
  if ( (int)v16 >= 0 )
  {
    LODWORD(v16) = (_DWORD)v4;
    goto LABEL_65;
  }
LABEL_63:
  if ( *(_DWORD *)a4 == -21 )
    *(_DWORD *)(a4 + 2024) = v15;
LABEL_65:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v18);
  if ( v157 != (_BYTE)v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v61, &EventProfilerExit, v62, v155);
  return (unsigned int)v16;
}
