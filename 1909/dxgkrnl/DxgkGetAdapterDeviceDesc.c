/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C00E7E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0003C50 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C00063B0 (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C000650C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0006790 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000D03C (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0032678 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C00C2008 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D6920 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E7160 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C00E74CC (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E7594 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00E7D68 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00E9060 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90B4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C00ED2BC (MonitorGetNativeFlags.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00ED3A4 (MonitorGetAdvancedColorParams.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00ED9A4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00EDEEC (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00FC6B0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C0129A84 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, const GUID *a3, __int64 a4)
{
  DXGSESSIONMGR *v4; // r13
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
  __int64 v78; // rdx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r13
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  struct DXGADAPTER *v85; // rcx
  char v86; // r13
  int v87; // edx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v95; // eax
  int MonitorHandle; // eax
  struct HDXGMONITOR__ *v97; // r13
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  int v102; // eax
  __int64 v103; // rax
  int v104; // eax
  DXGSESSIONMGR *v105; // r13
  int v106; // edx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // r8
  __int64 v112; // rcx
  __int64 v113; // rax
  _QWORD *v114; // rax
  int v115; // eax
  __int64 v116; // rdx
  DXGSESSIONMGR *v117; // rax
  struct DXGADAPTER *v118; // rsi
  struct DXGADAPTER *v119; // rcx
  struct DXGADAPTER *v120; // rcx
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rbx
  __int64 v126; // rax
  unsigned __int8 v127; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v128[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v129; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v130[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v131; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v132[8]; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v133; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v134; // [rsp+60h] [rbp-A0h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v135; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *SessionViewOwner; // [rsp+70h] [rbp-90h]
  char v137; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v138[7]; // [rsp+79h] [rbp-87h] BYREF
  struct HDXGMONITOR__ *v139; // [rsp+80h] [rbp-80h] BYREF
  int v140; // [rsp+88h] [rbp-78h] BYREF
  char v141; // [rsp+8Ch] [rbp-74h]
  int v142; // [rsp+90h] [rbp-70h] BYREF
  char v143; // [rsp+94h] [rbp-6Ch]
  __int64 v144; // [rsp+98h] [rbp-68h]
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v145; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v146; // [rsp+A4h] [rbp-5Ch] BYREF
  struct _LUID v147; // [rsp+A8h] [rbp-58h]
  DXGSESSIONMGR *v148; // [rsp+B0h] [rbp-50h]
  DXGSESSIONMGR *v149; // [rsp+B8h] [rbp-48h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v150; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v151; // [rsp+D0h] [rbp-30h]
  int v152; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v153; // [rsp+E0h] [rbp-20h]
  char v154; // [rsp+E8h] [rbp-18h]
  __int64 v155; // [rsp+F0h] [rbp-10h] BYREF
  struct DXGADAPTER *v156; // [rsp+F8h] [rbp-8h]
  char v157; // [rsp+100h] [rbp+0h]
  _DWORD v158[12]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v159[12]; // [rsp+138h] [rbp+38h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v160; // [rsp+168h] [rbp+68h] BYREF
  DXGADAPTER *v161[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v162[2]; // [rsp+180h] [rbp+80h] BYREF
  char v163; // [rsp+190h] [rbp+90h]
  unsigned __int64 v164; // [rsp+198h] [rbp+98h] BYREF
  char v165; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v166; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v167[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v168; // [rsp+1C0h] [rbp+C0h]
  struct DXGADAPTER *v169; // [rsp+1C8h] [rbp+C8h]
  char v170; // [rsp+1D0h] [rbp+D0h]
  int v171; // [rsp+1D4h] [rbp+D4h]
  DXGADAPTER *v172; // [rsp+1D8h] [rbp+D8h]
  _BYTE v173[8]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v174; // [rsp+200h] [rbp+100h]
  struct DXGADAPTER *v175; // [rsp+208h] [rbp+108h]
  char v176; // [rsp+210h] [rbp+110h]
  int v177; // [rsp+214h] [rbp+114h]
  DXGADAPTER *v178; // [rsp+218h] [rbp+118h]

  v152 = -1;
  LODWORD(v4) = 0;
  v6 = a2;
  v147 = a1;
  v153 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v154 = 1;
    v152 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  }
  else
  {
    v154 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v152, 2185LL);
  v134 = 0LL;
  v144 = 0LL;
  v133 = 0LL;
  v148 = 0LL;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 6098LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  SessionViewOwner = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v164);
  if ( !SessionViewOwner )
  {
    v15 = 1144079361;
    LODWORD(v16) = -1073741811;
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v17[3] = v147.HighPart;
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
    v129 = 0;
    v149 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v26, v25) + 74);
    if ( v149 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v30, v29);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v149, CurrentProcessSessionId);
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
      v129 = v28;
    }
    if ( (_DWORD)v6 != -1 && (unsigned int)v6 >= v28 )
    {
      LODWORD(v16) = -1073741811;
      v15 = 1144079363;
      v33 = (_QWORD *)WdLogNewEntry5_WdError(SessionDataForSpecifiedSession, v29, 0LL);
      v34 = v129;
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
  v35 = (unsigned __int64 *)&v165;
  v36 = &v134;
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
  PairingAdapters = DxgkpGetPairingAdapters(SessionViewOwner, v37, &v133, &v166, v36, v35, 0);
  v41 = 0LL;
  LODWORD(v16) = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    LODWORD(v16) = -1073741811;
    v15 = 1144079364;
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v39, 0LL, v40);
    v33[3] = v147.HighPart;
    v33[4] = a1.LowPart;
    v33[5] = (unsigned int)v6;
    v33[6] = 1144079364LL;
    goto LABEL_23;
  }
  v45 = (volatile signed __int64 *)v133;
  if ( !v133 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v39, 0LL);
    *(_QWORD *)(v46 + 24) = 6215LL;
    WdLogEvent5_WdAssertion(v46);
    v41 = 0LL;
  }
  v47 = v134;
  v139 = v134;
  v48 = (_DWORD)v6 == -1;
  if ( v48 != (v134 == 0LL) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v48, 0LL);
    *(_QWORD *)(v49 + 24) = 6216LL;
    WdLogEvent5_WdAssertion(v49);
    v47 = v139;
    v41 = 0LL;
  }
  v50 = v47 == 0LL;
  if ( v47 )
  {
    if ( DXGADAPTER::IsIndirectDisplayDevice(v47) )
    {
      v161[0] = v41;
      if ( (int)DxgkpGetIndirectDisplayPairedAdapter(v51, 0, v161) >= 0 )
        v148 = *(DXGSESSIONMGR **)((char *)v161[0] + 276);
      DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v161);
      v47 = v139;
      v41 = 0LL;
    }
    v50 = v47 == 0LL;
  }
  if ( v50 )
    v47 = (DXGADAPTER *)v45;
  v169 = (struct DXGADAPTER *)v45;
  v170 = (char)v41;
  v171 = -1;
  v172 = v41;
  if ( v45 )
  {
    _InterlockedIncrement64(v45 + 3);
    v45 = (volatile signed __int64 *)v133;
    v168 = -1LL;
  }
  v176 = (char)v41;
  v177 = -1;
  if ( v47 )
    v45 = (volatile signed __int64 *)v47;
  v178 = v41;
  v175 = (struct DXGADAPTER *)v45;
  if ( v45 )
  {
    _InterlockedIncrement64(v45 + 3);
    v174 = -1LL;
  }
  v52 = (DXGGLOBAL **)SessionViewOwner;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SessionViewOwner + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(v52[2], (struct DXGADAPTER *)v52);
  v53 = v133;
  v151 = v133;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v133 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v133 + 2), v133);
  if ( v134 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v134);
    v54 = v133;
  }
  else
  {
    v54 = v133;
    v134 = v133;
  }
  v162[1] = v54;
  _InterlockedIncrement64((volatile signed __int64 *)v53 + 3);
  v162[0] = -1LL;
  KeEnterCriticalRegion();
  v55 = v133;
  ExAcquirePushLockSharedEx((char *)v133 + 120, 0LL);
  v59 = *((_DWORD *)v55 + 44);
  v163 = 1;
  if ( v59 != 1 )
  {
    LODWORD(v16) = -1073741130;
    v144 = 1144079365LL;
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
    v60[3] = v147.HighPart;
    v60[4] = a1.LowPart;
    v60[5] = (unsigned int)v6;
    v60[6] = 1144079365LL;
    WdLogEvent5_WdWarning(v60);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v162);
    COREACCESS::~COREACCESS((COREACCESS *)v173);
    COREACCESS::~COREACCESS((COREACCESS *)v167);
    LOBYTE(v4) = 0;
    if ( v23 )
      DxgkReleaseSessionModeChangeLock();
    v15 = v144;
    goto LABEL_63;
  }
  v64 = v133;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v133 + 76);
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
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v151 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v133 + 2), v133);
  if ( v134 )
  {
    v156 = v134;
    _InterlockedIncrement64((volatile signed __int64 *)v134 + 3);
    v155 = -1LL;
    KeEnterCriticalRegion();
    v67 = v134;
    ExAcquirePushLockSharedEx((char *)v134 + 120, 0LL);
    v71 = *((_DWORD *)v67 + 44);
    v157 = 1;
    if ( v71 != 1 )
    {
      LODWORD(v16) = -1073741130;
      v15 = 1144079366;
      v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, v68, v70);
      v72[3] = v147.HighPart;
      v72[4] = a1.LowPart;
      v72[5] = (unsigned int)v6;
      v72[6] = 1144079366LL;
      WdLogEvent5_WdWarning(v72);
LABEL_74:
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
      COREACCESS::~COREACCESS((COREACCESS *)v173);
      COREACCESS::~COREACCESS((COREACCESS *)v167);
      goto LABEL_24;
    }
    if ( (_DWORD)v6 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
      v4 = 0LL;
LABEL_152:
      v76 = v134;
LABEL_153:
      *(_DWORD *)(a4 + 20) = *((_DWORD *)v76 + 76);
      *(_DWORD *)(a4 + 24) = *((_DWORD *)v76 + 71);
      *(_DWORD *)(a4 + 28) = *((_DWORD *)v76 + 72);
      *(_DWORD *)(a4 + 32) = *((_DWORD *)v76 + 73);
      *(_DWORD *)(a4 + 36) = *((_DWORD *)v76 + 74);
      *(_DWORD *)(a4 + 40) = *((_DWORD *)v76 + 75);
      *(_DWORD *)(a4 + 824) = (*((_DWORD *)v76 + 77) >> 7) & 1;
      v115 = (int)v4;
      LOBYTE(v115) = *((_DWORD *)v76 + 64) > 1u;
      *(_DWORD *)(a4 + 828) = v115;
      *(_DWORD *)(a4 + 44) = *((_DWORD *)v76 + 613);
      DXGADAPTER::GetDeviceDescriptor(v76, 0x100u, (unsigned __int16 *)(a4 + 48));
      RtlStringCbCopyNW(
        (char *)(a4 + 304),
        v116,
        *(char **)(*((_QWORD *)v76 + 176) + 8LL),
        **((unsigned __int16 **)v76 + 176));
      if ( !DXGADAPTER::IsIndirectDisplayDevice(v76) )
      {
        if ( *((DXGSESSIONMGR **)v76 + 319) == v4 )
        {
          v117 = v4;
          goto LABEL_160;
        }
        if ( v133 )
          v148 = *(DXGSESSIONMGR **)((char *)v133 + 276);
        else
          v148 = v4;
      }
      v117 = v148;
LABEL_160:
      *(_QWORD *)(a4 + 2044) = v117;
      if ( v157 != (_BYTE)v4 )
      {
        v118 = v156;
        ExReleasePushLockSharedEx((char *)v156 + 120, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
      }
      goto LABEL_164;
    }
    v76 = v134;
    v77 = *((_QWORD *)v134 + 319);
    if ( !v77 || (unsigned int)v6 >= *(_DWORD *)(v77 + 80) )
    {
      v15 = 1144079367;
      LODWORD(v16) = -1073741811;
      if ( v77 )
        v27 = *(_DWORD *)(v77 + 80);
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73, v75);
      v114[3] = (unsigned int)v6;
      v114[4] = v27;
      v114[5] = v147.HighPart;
      v114[6] = a1.LowPart;
      v114[7] = 1144079367LL;
      WdLogEvent5_WdError(v114);
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
    v129 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v76, (unsigned int)v6, &v129);
    v78 = v129;
    *(_DWORD *)(a4 + 2052) ^= (*(_DWORD *)(a4 + 2052) ^ (*((_DWORD *)v76 + 77) >> 3)) & 0x8000;
    if ( (_DWORD)v78 == -1 )
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
    *(_DWORD *)(a4 + 1916) = v129;
    *(_DWORD *)(a4 + 1920) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v76 + 319), (unsigned int)v6);
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
          v139 = 0LL;
          v135.Value = MonitorGetMonitorHandle(v76, v129, 0, DxgkGetAdapterDeviceDesc, (__int64)&v139);
          v131 = 0;
          memset(v158, 0, 0x2CuLL);
          v140 = 0;
          v141 = 0;
          if ( (int)DmmGetCurrentWireFormatAndColorSpace(v76, (unsigned int)v6, v129, &v160, &v145) >= 0
            && (v145 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
             || v145 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
          {
            v86 = 1;
          }
          LOBYTE(v131) = v86;
          v4 = v139;
          if ( (v135.Value & 0x80000000) != 0 || (int)MonitorGetAdvancedColorParams(v139, &v131, v158, &v140) < 0 )
          {
            SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
          }
          else
          {
            *(_DWORD *)(a4 + 1984) = v158[0];
            *(_DWORD *)(a4 + 1988) = v158[1];
            *(_DWORD *)(a4 + 1992) = v158[2];
            *(_DWORD *)(a4 + 1996) = v158[3];
            *(_DWORD *)(a4 + 2000) = v158[4];
            *(_DWORD *)(a4 + 2004) = v158[5];
            *(_DWORD *)(a4 + 2008) = v158[6];
            *(_DWORD *)(a4 + 2012) = v158[7];
            v87 = *(_DWORD *)(a4 + 2052);
            *(_DWORD *)(a4 + 2016) = v158[8];
            *(_DWORD *)(a4 + 2020) = v158[9];
            *(_DWORD *)(a4 + 2024) = v158[10];
            *(_DWORD *)(a4 + 2052) = (BYTE1(v140) != 0 ? 0x1000 : 0) | ((_BYTE)v140 != 0 ? 0x200 : 0) | v87 & 0xFFFFEDFF;
          }
          if ( (int)MonitorGetNativeFlags(v4, v130, v138, &v137) < 0 )
            *(_DWORD *)(a4 + 2052) &= ~0x2000u;
          else
            *(_DWORD *)(a4 + 2052) = (v130[0] != 0 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
          if ( v4 )
          {
            v4 = 0LL;
            if ( (int)MonitorReleaseMonitorHandle(v76) < 0 )
            {
              v90 = WdLogNewEntry5_WdAssertion(v89, v88);
              *(_QWORD *)(v90 + 24) = 6467LL;
              WdLogEvent5_WdAssertion(v90);
            }
          }
          v135.Value = (unsigned int)v4;
          if ( (int)DmmGetCurrentWireFormatAndColorSpace(v76, (unsigned int)v6, v129, &v135, &v150) < 0 )
          {
            SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
LABEL_143:
            *(_DWORD *)(a4 + 2052) &= ~0x400u;
            v109 = 3968LL * (unsigned int)v6;
            v110 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 319) + 112LL) + v109 + 3756);
            *(_DWORD *)(a4 + 2032) = v110;
            *(_DWORD *)(a4 + 2036) = (_DWORD)v4;
            if ( !v110 )
              goto LABEL_153;
            _mm_lfence();
            v111 = *((_QWORD *)v76 + 319);
            v112 = *(unsigned int *)(*(_QWORD *)(v111 + 112) + v109 + 3756);
            if ( *(_DWORD *)(v111 + 80 * v112 + 744) == 1 )
            {
              *(_DWORD *)(a4 + 2036) = 1;
            }
            else
            {
              v113 = WdLogNewEntry5_WdAssertion(v112, 10 * v112);
              *(_QWORD *)(v113 + 24) = 6617LL;
              WdLogEvent5_WdAssertion(v113);
              *(_DWORD *)(a4 + 2032) = (_DWORD)v4;
            }
            goto LABEL_152;
          }
          *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v135.Value, v91, v92);
          v95 = v150;
          *(_DWORD *)(a4 + 1980) = v150;
          *(_DWORD *)(a4 + 2040) = (_DWORD)v4;
          if ( v95 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020 )
          {
            MonitorHandle = MonitorGetMonitorHandle(v76, v129, 0, DxgkGetAdapterDeviceDesc, (__int64)&v139);
            v97 = v139;
            if ( MonitorHandle >= 0 )
            {
              v146 = 0;
              if ( (int)MonitorIsMonitorAndLinkHDRCapable(v139, &v146) >= 0 && (v146 & 1) != 0 )
              {
                if ( *((int *)v76 + 613) < 2500 )
                {
                  *(_DWORD *)(a4 + 2040) = (*((_DWORD *)v76 + 71) != 32902) + 1;
                }
                else
                {
                  v98 = *((_DWORD *)v76 + 608);
                  if ( (v98 & 4) != 0 )
                  {
                    *(_DWORD *)(a4 + 2040) = 2;
                  }
                  else if ( (v98 & 8) != 0 )
                  {
                    *(_DWORD *)(a4 + 2040) = 1;
                  }
                }
              }
            }
            if ( v97 )
            {
              v4 = 0LL;
              if ( (int)MonitorReleaseMonitorHandle(v76) >= 0 )
                goto LABEL_143;
              v101 = WdLogNewEntry5_WdAssertion(v100, v99);
              *(_QWORD *)(v101 + 24) = 6533LL;
LABEL_140:
              WdLogEvent5_WdAssertion(v101);
              goto LABEL_143;
            }
          }
          else
          {
            if ( v95 != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL )
              goto LABEL_143;
            v102 = *((_DWORD *)v76 + 77);
            if ( (v102 & 0x200) == 0 && (v102 & 8) == 0 )
            {
              v103 = WdLogNewEntry5_WdAssertion(v94, v93);
              *(_QWORD *)(v103 + 24) = 6539LL;
              WdLogEvent5_WdAssertion(v103);
            }
            v149 = v4;
            v132[0] = (_BYTE)v4;
            memset(v159, 0, 0x2CuLL);
            v132[1] = 1;
            v142 = 0;
            v143 = 0;
            v104 = MonitorGetMonitorHandle(v76, v129, 0, DxgkGetAdapterDeviceDesc, (__int64)&v149);
            v105 = v149;
            if ( v104 >= 0 && (int)MonitorGetAdvancedColorParams(v149, v132, v159, &v142) >= 0 )
            {
              *(_DWORD *)(a4 + 1984) = v159[0];
              *(_DWORD *)(a4 + 1988) = v159[1];
              *(_DWORD *)(a4 + 1992) = v159[2];
              *(_DWORD *)(a4 + 1996) = v159[3];
              *(_DWORD *)(a4 + 2000) = v159[4];
              *(_DWORD *)(a4 + 2004) = v159[5];
              *(_DWORD *)(a4 + 2008) = v159[6];
              *(_DWORD *)(a4 + 2012) = v159[7];
              v106 = *(_DWORD *)(a4 + 2052);
              *(_DWORD *)(a4 + 2016) = v159[8];
              *(_DWORD *)(a4 + 2020) = v159[9];
              *(_DWORD *)(a4 + 2024) = v159[10];
              *(_DWORD *)(a4 + 2052) = (BYTE1(v142) != 0 ? 0x1000 : 0) | ((_BYTE)v142 != 0 ? 0x200 : 0) | v106 & 0xFFFFEDFF;
            }
            if ( v105 )
            {
              v4 = 0LL;
              if ( (int)MonitorReleaseMonitorHandle(v76) >= 0 )
                goto LABEL_143;
              v101 = WdLogNewEntry5_WdAssertion(v108, v107);
              *(_QWORD *)(v101 + 24) = 6581LL;
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
  v119 = v175;
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  if ( v119 )
  {
    if ( v176 != (_BYTE)v4 )
    {
      COREACCESS::Release((COREACCESS *)v173);
      v119 = v175;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v119 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v119 + 2), v119);
  }
  v120 = v169;
  if ( v169 )
  {
    if ( v170 != (_BYTE)v4 )
    {
      COREACCESS::Release((COREACCESS *)v167);
      v120 = v169;
    }
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v120 + 3) )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v120 + 2), v120);
  }
  if ( v23 )
    DxgkReleaseSessionModeChangeLock();
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v128[0] = (unsigned __int8)v4;
    v127 = (unsigned __int8)v4;
    v121 = DxgkpAdapterCheckStereoMode(a1, (unsigned int)v6, &v127, v128);
    v125 = v121;
    if ( v121 < 0 )
    {
      v126 = WdLogNewEntry5_WdWarning(v123, v122, v124);
      *(_QWORD *)(v126 + 24) = v125;
      WdLogEvent5_WdWarning(v126);
    }
    else
    {
      v18 = (v128[0] != 0 ? 8 : 0) | (v127 != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
      *(_DWORD *)(a4 + 2052) = v18;
    }
  }
  v15 = v144;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v152, v18);
  if ( v154 != (_BYTE)v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v61, &EventProfilerExit, v62, v152);
  return (unsigned int)v16;
}
