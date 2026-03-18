/*
 * XREFs of ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00DCCE0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0004C74 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0005BB8 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00BD370 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00C2F7C (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00C3C04 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00C4348 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C00C44D4 (MonitorGetNativeFlags.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C00D2B60 (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00DC378 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00E02D8 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C00E4368 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E544C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E57AC (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C012D288 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetAdapterDeviceDesc(
        struct _LUID a1,
        unsigned int a2,
        struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a3)
{
  __int64 v3; // r13
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v4; // r12
  DWORD LowPart; // ebx
  struct DXGGLOBAL *Global; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // r15
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v18; // rcx
  unsigned __int64 *v19; // rcx
  unsigned int v20; // edx
  struct DXGADAPTER **v21; // rax
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rbx
  DXGADAPTER *v24; // rdi
  _BOOL8 v25; // rcx
  DXGADAPTER *v26; // r14
  signed __int64 v27; // rax
  DXGADAPTER *v28; // rbx
  DXGADAPTER *v29; // rbx
  int v30; // eax
  DXGADAPTER *v31; // r9
  __int64 v32; // r9
  __int16 v33; // r10
  _WORD *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int16 v39; // ax
  unsigned __int16 *v40; // rax
  _WORD *v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // r8
  unsigned __int64 v44; // rcx
  __int64 v45; // r9
  __int16 v46; // ax
  const struct _DXGK_DISPLAYMODE_INFO *v47; // rcx
  DXGADAPTER *v48; // rbx
  int v49; // eax
  __int64 v50; // rcx
  DXGADAPTER *v51; // r14
  DXGADAPTER ***v52; // r12
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r13
  int **v56; // r15
  int v57; // edx
  int v58; // eax
  _WORD *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int16 v62; // ax
  unsigned __int16 *v63; // rcx
  _WORD *v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // r8
  __int16 v67; // cx
  bool v68; // zf
  struct DXGADAPTER *v69; // rbx
  struct DXGADAPTER *v70; // rcx
  struct DXGADAPTER *v71; // rcx
  int v73; // ebx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rbx
  DXGADAPTER **v76; // rbx
  DXGADAPTER *v77; // rax
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v78; // rcx
  DXGADAPTER **v79; // rcx
  unsigned int v80; // r12d
  int v81; // ecx
  int v82; // eax
  int v83; // eax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  const struct _DXGK_DISPLAYMODE_INFO *v88; // rbx
  struct HDXGMONITOR__ *MonitorHandle; // r15
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  MONITOR_MGR *v93; // r12
  int MonitorInstance; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // ebx
  DXGMONITOR *v100; // rbx
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v101; // rbx
  int v102; // eax
  __int64 v103; // r9
  int v104; // ecx
  __int64 v105; // rcx
  __int64 v106; // rcx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v107; // eax
  int v108; // ecx
  unsigned int v109; // eax
  unsigned int v110; // ebx
  __int64 v111; // rcx
  DXGSESSIONMGR *v112; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // ecx
  int v128; // ecx
  int v129; // ecx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // r9
  struct HDXGMONITOR__ *v138; // rbx
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rax
  int v142; // eax
  __int64 v143; // rax
  int v144; // eax
  __int64 v145; // r9
  __int64 v146; // rbx
  int v147; // r8d
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // r8
  __int64 v151; // rcx
  __int64 v152; // rax
  _QWORD *v153; // rax
  bool v154; // [rsp+30h] [rbp-D0h]
  unsigned int v155; // [rsp+34h] [rbp-CCh] BYREF
  DXGADAPTER *v156; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v157[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v158; // [rsp+44h] [rbp-BCh] BYREF
  DXGADAPTER *v159; // [rsp+48h] [rbp-B8h] BYREF
  const struct _DXGK_DISPLAYMODE_INFO *v160; // [rsp+50h] [rbp-B0h]
  bool v161; // [rsp+58h] [rbp-A8h] BYREF
  bool v162; // [rsp+59h] [rbp-A7h] BYREF
  int v163; // [rsp+5Ch] [rbp-A4h] BYREF
  char v164; // [rsp+60h] [rbp-A0h]
  int v165; // [rsp+64h] [rbp-9Ch] BYREF
  char v166; // [rsp+68h] [rbp-98h]
  unsigned int v167; // [rsp+6Ch] [rbp-94h] BYREF
  DXGFASTMUTEX *v168; // [rsp+70h] [rbp-90h] BYREF
  char v169; // [rsp+78h] [rbp-88h]
  struct HDXGMONITOR__ *v170; // [rsp+80h] [rbp-80h] BYREF
  int v171; // [rsp+88h] [rbp-78h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v172; // [rsp+8Ch] [rbp-74h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v173; // [rsp+90h] [rbp-70h] BYREF
  struct DXGMONITOR *v174; // [rsp+98h] [rbp-68h] BYREF
  __int64 v175; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v176[12]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v177[12]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v178; // [rsp+108h] [rbp+8h] BYREF
  struct DXGADAPTER *v179; // [rsp+110h] [rbp+10h]
  char v180; // [rsp+118h] [rbp+18h]
  __int64 v181; // [rsp+120h] [rbp+20h] BYREF
  struct _KTHREAD **v182[2]; // [rsp+138h] [rbp+38h] BYREF
  struct DXGADAPTER *v183; // [rsp+148h] [rbp+48h]
  char v184; // [rsp+150h] [rbp+50h]
  struct _KTHREAD **v185[2]; // [rsp+158h] [rbp+58h] BYREF
  struct DXGADAPTER *v186; // [rsp+168h] [rbp+68h]
  char v187; // [rsp+170h] [rbp+70h]
  _QWORD v188[2]; // [rsp+180h] [rbp+80h] BYREF
  char v189; // [rsp+190h] [rbp+90h]
  unsigned __int64 v190; // [rsp+198h] [rbp+98h] BYREF
  LONG HighPart; // [rsp+1F4h] [rbp+F4h]
  unsigned int v192; // [rsp+1F8h] [rbp+F8h]
  unsigned __int8 v194; // [rsp+208h] [rbp+108h] BYREF

  v192 = a2;
  HighPart = a1.HighPart;
  v3 = a2;
  v156 = 0LL;
  v4 = a3;
  v159 = 0LL;
  LowPart = a1.LowPart;
  if ( !a3 )
  {
    v116 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v116 + 24) = 6053LL;
    WdLogEvent5_WdAssertion(v116);
  }
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v169 = 0;
  v168 = (struct DXGGLOBAL *)((char *)Global + 408);
  if ( Global == (struct DXGGLOBAL *)-408LL )
  {
    v117 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v117 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v117);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v168 + 1) == CurrentThread )
  {
    v118 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v118 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v118);
  }
  if ( v169 )
  {
    v119 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v119[5] = &v168;
    v119[3] = 275LL;
    v119[4] = 4LL;
    v119[6] = 0LL;
    v119[7] = 0LL;
    WdLogEvent5_WdCriticalError(v119);
  }
  DXGFASTMUTEX::Acquire(v168);
  v169 = 1;
  v9 = (_QWORD *)*((_QWORD *)Global + 56);
LABEL_10:
  while ( v9 != (_QWORD *)((char *)Global + 448) && v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    if ( *(_QWORD *)((char *)v10 + 276) == __PAIR64__(HighPart, LowPart) )
    {
      _m_prefetchw(v10 + 3);
      v11 = v10[3];
      if ( v11 )
      {
        while ( 1 )
        {
          v8 = v11 + 1;
          v12 = v11;
          v11 = _InterlockedCompareExchange64(v10 + 3, v11 + 1, v11);
          if ( v12 == v11 )
            break;
          if ( !v11 )
            goto LABEL_10;
        }
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v168);
        v13 = DxgkAcquireSessionModeChangeLock(0LL);
        v15 = v13;
        v154 = v13 >= 0;
        if ( v13 < 0 )
        {
          v120 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v120 + 24) = v15;
          WdLogEvent5_WdError(v120);
          goto LABEL_102;
        }
        Current = DXGPROCESS::GetCurrent();
        if ( !Current )
        {
          v121 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v121 + 24) = 5507LL;
          WdLogEvent5_WdAssertion(v121);
        }
        if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(*((_QWORD *)Current + 13) + 224LL))(
               0LL,
               0LL,
               &v171)
          && !v171 )
        {
          v110 = 0;
          v112 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 77);
          if ( v112 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v111);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v112,
                                               CurrentProcessSessionId);
            if ( SessionDataForSpecifiedSession )
            {
              v111 = *((unsigned int *)v10 + 69);
              if ( *((_DWORD *)SessionDataForSpecifiedSession + 4624) == (_DWORD)v111 )
              {
                v111 = *((unsigned int *)v10 + 70);
                if ( *((_DWORD *)SessionDataForSpecifiedSession + 4625) == (_DWORD)v111 )
                  v110 = *((_DWORD *)SessionDataForSpecifiedSession + 4626);
              }
            }
          }
          if ( (_DWORD)v3 != -1 && (unsigned int)v3 >= v110 )
          {
            v122 = WdLogNewEntry5_WdError(v111);
            v123 = v110;
            *(_QWORD *)(v122 + 24) = v3;
            goto LABEL_161;
          }
          LODWORD(v3) = -1;
          v192 = -1;
        }
        v19 = (unsigned __int64 *)&v181;
        v20 = 0;
        v21 = &v156;
        if ( (_DWORD)v3 == -1 )
        {
          v19 = 0LL;
          v21 = 0LL;
        }
        v181 = -1LL;
        if ( (_DWORD)v3 != -1 )
          v20 = v3;
        if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v10, v20, &v159, &v190, v21, v19) < 0 )
        {
          v122 = WdLogNewEntry5_WdError(v22);
          v123 = (unsigned int)v3;
          *(_QWORD *)(v122 + 24) = v10;
LABEL_161:
          *(_QWORD *)(v122 + 32) = v123;
          WdLogEvent5_WdError(v122);
          LODWORD(v15) = -1073741811;
          goto LABEL_102;
        }
        v23 = (volatile signed __int64 *)v159;
        if ( !v159 )
        {
          v124 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v124 + 24) = 6138LL;
          WdLogEvent5_WdAssertion(v124);
        }
        v24 = v156;
        v25 = (_DWORD)v3 == -1;
        if ( v25 != (v156 == 0LL) )
        {
          v125 = WdLogNewEntry5_WdAssertion(v25);
          *(_QWORD *)(v125 + 24) = 6139LL;
          WdLogEvent5_WdAssertion(v125);
        }
        v183 = (struct DXGADAPTER *)v23;
        v184 = 0;
        if ( !v24 )
          v24 = (DXGADAPTER *)v23;
        if ( v23 )
        {
          _InterlockedIncrement64(v23 + 3);
          v23 = (volatile signed __int64 *)v159;
          v182[1] = (struct _KTHREAD **)-1LL;
        }
        if ( v24 )
          v23 = (volatile signed __int64 *)v24;
        v186 = (struct DXGADAPTER *)v23;
        v187 = 0;
        if ( v23 )
        {
          _InterlockedIncrement64(v23 + 3);
          v185[1] = (struct _KTHREAD **)-1LL;
        }
        if ( _InterlockedExchangeAdd64(v10 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v10[2], (struct DXGADAPTER *)v10);
        v26 = v159;
        v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v28 = v159;
        if ( v27 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v159 + 2), v159);
        if ( v156 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
          v28 = v159;
        }
        else
        {
          v156 = v28;
        }
        v188[1] = v28;
        _InterlockedIncrement64((volatile signed __int64 *)v26 + 3);
        v188[0] = -1LL;
        KeEnterCriticalRegion();
        v29 = v159;
        v160 = (DXGADAPTER *)((char *)v159 + 120);
        ExAcquirePushLockSharedEx((char *)v159 + 120, 0LL);
        v30 = *((_DWORD *)v29 + 44);
        v189 = 1;
        if ( v30 != 1 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v188);
          LODWORD(v15) = -1073741130;
          goto LABEL_92;
        }
        v31 = v159;
        *((_DWORD *)v4 + 208) = *((_DWORD *)v159 + 76);
        *((_DWORD *)v4 + 209) = *((_DWORD *)v31 + 71);
        *((_DWORD *)v4 + 210) = *((_DWORD *)v31 + 72);
        *((_DWORD *)v4 + 211) = *((_DWORD *)v31 + 73);
        *((_DWORD *)v4 + 212) = *((_DWORD *)v31 + 74);
        *((_DWORD *)v4 + 213) = *((_DWORD *)v31 + 75);
        *((_DWORD *)v4 + 409) = (*((_DWORD *)v31 + 77) & 0x80u) != 0;
        *((_DWORD *)v4 + 410) = *((_DWORD *)v31 + 64) > 1u;
        *((_DWORD *)v4 + 214) = DXGADAPTER::GetDriverVersion(v31);
        v34 = (_WORD *)((char *)v4 + 860);
        v35 = *(_QWORD *)(v32 + 1384);
        v36 = 128LL;
        if ( v35 )
        {
          v37 = 128LL;
          v38 = v35 - (_QWORD)v34;
          while ( v37 != -2147483518 )
          {
            v39 = *(_WORD *)((char *)v34 + v38);
            if ( !v39 )
              break;
            *v34++ = v39;
            if ( !--v37 )
            {
              --v34;
              break;
            }
          }
LABEL_51:
          *v34 = v33;
        }
        else if ( v4 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-860LL )
        {
          goto LABEL_51;
        }
        v40 = *(unsigned __int16 **)(v32 + 1392);
        v41 = (_WORD *)((char *)v4 + 1116);
        v42 = 260LL;
        v43 = 260LL;
        v44 = ((unsigned __int64)*v40 >> 1) - 260;
        v45 = *((_QWORD *)v40 + 1) - ((_QWORD)v4 + 1116);
        while ( v44 + v43 )
        {
          v46 = *(_WORD *)((char *)v41 + v45);
          if ( !v46 )
            break;
          *v41++ = v46;
          if ( !--v43 )
          {
            --v41;
            break;
          }
        }
        v47 = v160;
        *v41 = v33;
        ExReleasePushLockSharedEx(v47, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v159 + 2), v159);
        if ( !v156 )
          goto LABEL_91;
        v179 = v156;
        _InterlockedIncrement64((volatile signed __int64 *)v156 + 3);
        v178 = -1LL;
        KeEnterCriticalRegion();
        v48 = v156;
        ExAcquirePushLockSharedEx((char *)v156 + 120, 0LL);
        v49 = *((_DWORD *)v48 + 44);
        v180 = 1;
        if ( v49 == 1 )
        {
          if ( (_DWORD)v3 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
          {
            v51 = v156;
            goto LABEL_71;
          }
          v51 = v156;
          if ( (*((_DWORD *)v156 + 77) & 0x40000) != 0 )
            goto LABEL_71;
          v52 = (DXGADAPTER ***)((char *)v156 + 2520);
          v53 = *((_QWORD *)v156 + 315);
          if ( v53 && (unsigned int)v3 < *(_DWORD *)(v53 + 80) )
          {
            _mm_lfence();
            v54 = v10[315];
            if ( (unsigned int)v3 >= *(_DWORD *)(v54 + 80) )
            {
              v126 = WdLogNewEntry5_WdAssertion(v50);
              *(_QWORD *)(v126 + 24) = 37LL;
              WdLogEvent5_WdAssertion(v126);
            }
            v55 = 3760LL * (unsigned int)v3;
            v56 = *(int ***)(*(_QWORD *)(v54 + 112) + v55 + 48);
            if ( !v56 || (v73 = **v56, v73 != (unsigned int)PsGetCurrentProcessSessionId(v50)) )
            {
              v4 = a3;
              *((_DWORD *)a3 + 479) = -1;
              *(_QWORD *)((char *)a3 + 1644) = 0LL;
              *(_QWORD *)((char *)a3 + 1652) = 0LL;
              *((_QWORD *)a3 + 244) = 0LL;
              *((_QWORD *)a3 + 245) = 0LL;
              *((_QWORD *)a3 + 246) = 0LL;
              *(_QWORD *)((char *)a3 + 1924) = 0LL;
              *(_QWORD *)((char *)a3 + 1932) = 5LL;
              *((_DWORD *)a3 + 485) = 1;
              *((_QWORD *)a3 + 243) = 1LL;
              SetDisplayInfoDefaultToSDR(a3);
              v51 = v156;
              goto LABEL_72;
            }
            v51 = v156;
            v155 = -1;
            DmmGetMostImportantClientVidPnPathTargetsFromSource(v156, v192, &v155);
            if ( v155 == -1 )
              TargetUsage = 0;
            else
              TargetUsage = DmmGetTargetUsage(v51, v155, 0LL);
            *((_DWORD *)a3 + 507) = TargetUsage;
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*v52, v192);
            v160 = DisplayModeInfo;
            if ( *((_DWORD *)a3 + 507) )
            {
              *(_QWORD *)((char *)a3 + 1644) = 0LL;
              *(_QWORD *)((char *)a3 + 1652) = 0LL;
              *((_QWORD *)a3 + 244) = 0LL;
              *((_QWORD *)a3 + 245) = 0LL;
              v78 = a3;
            }
            else
            {
              *(_OWORD *)((char *)a3 + 1644) = *(_OWORD *)(v56 + 3);
              v76 = *v52;
              DXGADAPTER::IsCoreResourceSharedOwner((*v52)[2]);
              v77 = v76[14];
              v78 = a3;
              DisplayModeInfo = v160;
              *((_OWORD *)a3 + 122) = *(_OWORD *)((char *)v77 + v55 + 652);
            }
            *((_DWORD *)v78 + 479) = v155;
            v79 = *v52;
            v80 = v192;
            *((_DWORD *)a3 + 480) = ADAPTER_DISPLAY::GetDisplayId((ADAPTER_DISPLAY *)v79, v192);
            *((_DWORD *)a3 + 481) = *(_DWORD *)DisplayModeInfo;
            *((_DWORD *)a3 + 482) = *((_DWORD *)DisplayModeInfo + 1);
            v81 = *((_DWORD *)DisplayModeInfo + 2);
            if ( v81 == 21 )
            {
LABEL_112:
              v82 = 4;
            }
            else
            {
              v127 = v81 - 20;
              if ( v127 )
              {
                v128 = v127 - 2;
                if ( !v128 )
                  goto LABEL_112;
                v129 = v128 - 1;
                if ( v129 )
                {
                  if ( v129 == 18 )
                    v82 = 1;
                  else
                    v82 = 5;
                }
                else
                {
                  v82 = 2;
                }
              }
              else
              {
                v82 = 3;
              }
            }
            *((_DWORD *)a3 + 483) = v82;
            v83 = *((_DWORD *)DisplayModeInfo + 4);
            if ( v83 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
            {
              *((_DWORD *)a3 + 484) = 64;
              v84 = 1;
            }
            else
            {
              *((_DWORD *)a3 + 484) = v83;
              v84 = *((_DWORD *)DisplayModeInfo + 5);
            }
            *((_DWORD *)a3 + 485) = v84;
            *((_DWORD *)a3 + 486) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v51 + 315), v192, 2LL);
            *((_DWORD *)a3 + 487) = *((_DWORD *)DisplayModeInfo + 6);
            DxgkpCopyMonitorLinkInfoToFlags(v51, a3);
            *((_QWORD *)a3 + 246) = v56[8];
            if ( *((_DWORD *)v56 + 10) != 1 )
              goto LABEL_207;
            v88 = (const struct _DXGK_DISPLAYMODE_INFO *)v155;
            MonitorHandle = 0LL;
            v170 = 0LL;
            v90 = WdLogNewEntry5_WdTrace(a3, v85, v86, v87);
            v160 = v88;
            *(_QWORD *)(v90 + 24) = v88;
            *(_QWORD *)(v90 + 32) = v51;
            if ( (_DWORD)v88 != -1 )
            {
              v170 = 0LL;
              DXGADAPTER::IsCoreResourceSharedOwner(v51);
              v92 = *((_QWORD *)v51 + 315);
              if ( !v92 )
              {
                v130 = WdLogNewEntry5_WdAssertion(v91);
                WdLogEvent5_WdAssertion(v130);
                v92 = *((_QWORD *)v51 + 315);
              }
              v93 = *(MONITOR_MGR **)(v92 + 96);
              if ( v93 )
              {
                v174 = 0LL;
                MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v93, (unsigned int)v88, 0, &v174);
                v99 = MonitorInstance;
                if ( MonitorInstance == -1073741275 )
                {
                  v132 = WdLogNewEntry5_WdDmmEvent(v96, v95, v97, v98);
                  *(_QWORD *)(v132 + 24) = v160;
                  *(_QWORD *)(v132 + 32) = v93;
                  WdLogEvent5_WdDmmEvent(v132);
                  v80 = v192;
                  v99 = -1073741275;
                }
                else if ( MonitorInstance < 0 )
                {
                  v133 = WdLogNewEntry5_WdError(v96);
                  *(_QWORD *)(v133 + 24) = v160;
                  *(_QWORD *)(v133 + 32) = v93;
                  WdLogEvent5_WdError(v133);
                  v80 = v192;
                }
                else
                {
                  v100 = v174;
                  if ( !v174 )
                  {
                    v134 = WdLogNewEntry5_WdAssertion(v96);
                    WdLogEvent5_WdAssertion(v134);
                  }
                  DXGMONITOR::_AddReference(v100, DxgkpGetAdapterDeviceDesc);
                  v80 = v192;
                  MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v100);
                  v170 = MonitorHandle;
                  v99 = 0;
                }
LABEL_125:
                memset(v176, 0, 0x2CuLL);
                v157[0] = 1;
                v163 = 0;
                v164 = 0;
                if ( v99 < 0
                  || (int)MonitorGetAdvancedColorParams(MonitorHandle, v157, (__int64)v176, (bool *)&v163) < 0 )
                {
                  v101 = a3;
                  SetDisplayInfoDefaultToSDR(a3);
                }
                else
                {
                  v68 = (_BYTE)v163 == 0;
                  v101 = a3;
                  *((_DWORD *)a3 + 496) = v176[0];
                  *((_DWORD *)a3 + 497) = v176[1];
                  *((_DWORD *)a3 + 498) = v176[2];
                  *((_DWORD *)a3 + 499) = v176[3];
                  *((_DWORD *)a3 + 500) = v176[4];
                  *((_DWORD *)a3 + 501) = v176[5];
                  *((_DWORD *)a3 + 502) = v176[6];
                  *((_DWORD *)a3 + 503) = v176[7];
                  *((_DWORD *)a3 + 504) = v176[8];
                  *((_DWORD *)a3 + 505) = v176[9];
                  *((_DWORD *)a3 + 506) = v176[10];
                  if ( v68 )
                    v102 = 0;
                  else
                    v102 = 512;
                  *((_DWORD *)a3 + 511) = (BYTE1(v163) != 0 ? 0x1000 : 0) | v102 & 0xFFFFEFFF | *((_DWORD *)a3 + 511) & 0xFFFFEDFF;
                }
                if ( (int)MonitorGetNativeFlags(MonitorHandle, &v194, &v162, &v161) < 0 )
                {
                  *((_DWORD *)v101 + 511) &= ~0x2000u;
                }
                else
                {
                  if ( v194 )
                    v104 = 0x2000;
                  else
                    v104 = 0;
                  *((_DWORD *)v101 + 511) = v104 | *((_DWORD *)v101 + 511) & 0xFFFFDFFF;
                }
                if ( MonitorHandle
                  && (int)MonitorReleaseMonitorHandle(v51, (__int64)MonitorHandle, DxgkpGetAdapterDeviceDesc, v103) < 0 )
                {
                  v135 = WdLogNewEntry5_WdAssertion(v105);
                  *(_QWORD *)(v135 + 24) = 6348LL;
                  WdLogEvent5_WdAssertion(v135);
                }
                if ( DmmGetCurrentWireFormatAndColorSpace(v51, v80, v155, &v172, &v173) >= 0 )
                {
                  v4 = a3;
                  *((_DWORD *)a3 + 494) = GetColorDepthFromPickedWireFormat(v172.Value);
                  v107 = v173;
                  *((_DWORD *)a3 + 495) = v173;
                  *((_DWORD *)a3 + 510) = 0;
                  if ( v107 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020 )
                  {
                    v136 = MonitorGetMonitorHandle(v51, v155, 0LL, DxgkpGetAdapterDeviceDesc, &v170);
                    v138 = v170;
                    if ( v136 >= 0 )
                    {
                      v167 = 0;
                      if ( (int)MonitorIsMonitorAndLinkHDRCapable(v170, &v167) >= 0 && (v167 & 1) != 0 )
                      {
                        if ( (int)DXGADAPTER::GetDriverVersion(v51) < 2500 )
                        {
                          *((_DWORD *)a3 + 510) = (*((_DWORD *)v51 + 71) != 32902) + 1;
                        }
                        else
                        {
                          v139 = *((_DWORD *)v51 + 602);
                          if ( (v139 & 4) != 0 )
                          {
                            *((_DWORD *)a3 + 510) = 2;
                          }
                          else if ( (v139 & 8) != 0 )
                          {
                            *((_DWORD *)a3 + 510) = 1;
                          }
                        }
                      }
                    }
                    if ( v138
                      && (int)MonitorReleaseMonitorHandle(v51, (__int64)v138, DxgkpGetAdapterDeviceDesc, v137) < 0 )
                    {
                      v141 = WdLogNewEntry5_WdAssertion(v140);
                      *(_QWORD *)(v141 + 24) = 6414LL;
                      WdLogEvent5_WdAssertion(v141);
                    }
                  }
                  else if ( v107 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL )
                  {
                    v142 = *((_DWORD *)v51 + 77);
                    if ( (v142 & 0x200) == 0 && (v142 & 8) == 0 )
                    {
                      v143 = WdLogNewEntry5_WdAssertion(v106);
                      *(_QWORD *)(v143 + 24) = 6420LL;
                      WdLogEvent5_WdAssertion(v143);
                    }
                    v175 = 0LL;
                    v158 = 256;
                    memset(v177, 0, 0x2CuLL);
                    v165 = 0;
                    v166 = 0;
                    v144 = MonitorGetMonitorHandle(v51, v155, 0LL, DxgkpGetAdapterDeviceDesc, &v175);
                    v146 = v175;
                    if ( v144 >= 0
                      && (int)MonitorGetAdvancedColorParams(
                                (struct HDXGMONITOR__ *)v175,
                                &v158,
                                (__int64)v177,
                                (bool *)&v165) >= 0 )
                    {
                      *((_DWORD *)a3 + 496) = v177[0];
                      *((_DWORD *)a3 + 497) = v177[1];
                      *((_DWORD *)a3 + 498) = v177[2];
                      *((_DWORD *)a3 + 499) = v177[3];
                      *((_DWORD *)a3 + 500) = v177[4];
                      *((_DWORD *)a3 + 501) = v177[5];
                      *((_DWORD *)a3 + 502) = v177[6];
                      *((_DWORD *)a3 + 503) = v177[7];
                      v147 = *((_DWORD *)a3 + 511);
                      *((_DWORD *)a3 + 504) = v177[8];
                      *((_DWORD *)a3 + 505) = v177[9];
                      *((_DWORD *)a3 + 506) = v177[10];
                      *((_DWORD *)a3 + 511) = (BYTE1(v165) != 0 ? 0x1000 : 0) | ((_BYTE)v165 != 0 ? 0x200 : 0) | v147 & 0xFFFFEDFF;
                    }
                    if ( v146 && (int)MonitorReleaseMonitorHandle(v51, v146, DxgkpGetAdapterDeviceDesc, v145) < 0 )
                    {
                      v149 = WdLogNewEntry5_WdAssertion(v148);
                      *(_QWORD *)(v149 + 24) = 6462LL;
                      WdLogEvent5_WdAssertion(v149);
                    }
                  }
LABEL_140:
                  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v51 + 315) + 112LL) + v55 + 724) )
                    v108 = 1024;
                  else
                    v108 = 0;
                  *((_DWORD *)v4 + 511) = v108 | *((_DWORD *)v4 + 511) & 0xFFFFFBFF;
                  v109 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v51 + 315) + 112LL) + v55 + 3756);
                  *((_QWORD *)v4 + 254) = v109;
                  if ( v109 )
                  {
                    _mm_lfence();
                    v150 = *((_QWORD *)v51 + 315);
                    v151 = *(unsigned int *)(*(_QWORD *)(v150 + 112) + v55 + 3756) + 8LL;
                    if ( *(_DWORD *)(v150 + 80 * v151) != 1 )
                    {
                      v152 = WdLogNewEntry5_WdAssertion(v151);
                      *(_QWORD *)(v152 + 24) = 6496LL;
                      WdLogEvent5_WdAssertion(v152);
                      v51 = v156;
                      *((_DWORD *)v4 + 508) = 0;
                      goto LABEL_71;
                    }
                    v51 = v156;
                    v57 = 1;
                    *((_DWORD *)v4 + 509) = 1;
                  }
                  else
                  {
LABEL_71:
                    v57 = 1;
                  }
LABEL_72:
                  *((_DWORD *)v4 + 5) = *((_DWORD *)v51 + 76);
                  *((_DWORD *)v4 + 6) = *((_DWORD *)v51 + 71);
                  *((_DWORD *)v4 + 7) = *((_DWORD *)v51 + 72);
                  *((_DWORD *)v4 + 8) = *((_DWORD *)v51 + 73);
                  *((_DWORD *)v4 + 9) = *((_DWORD *)v51 + 74);
                  *((_DWORD *)v4 + 10) = *((_DWORD *)v51 + 75);
                  if ( (*((_DWORD *)v51 + 77) & 0x80u) != 0 )
                    v58 = v57;
                  else
                    v58 = 0;
                  *((_DWORD *)v4 + 206) = v58;
                  if ( *((_DWORD *)v51 + 64) <= 1u )
                    v57 = 0;
                  *((_DWORD *)v4 + 207) = v57;
                  *((_DWORD *)v4 + 11) = DXGADAPTER::GetDriverVersion(v51);
                  v59 = (_WORD *)((char *)v4 + 48);
                  v60 = *((_QWORD *)v51 + 173);
                  if ( v60 )
                  {
                    v61 = v60 - (_QWORD)v59;
                    while ( v36 != -2147483518 )
                    {
                      v62 = *(_WORD *)((char *)v59 + v61);
                      if ( !v62 )
                        break;
                      *v59++ = v62;
                      if ( !--v36 )
                      {
                        --v59;
                        break;
                      }
                    }
LABEL_82:
                    *v59 = 0;
                  }
                  else if ( v4 != (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-48LL )
                  {
                    goto LABEL_82;
                  }
                  v63 = (unsigned __int16 *)*((_QWORD *)v51 + 174);
                  v64 = (_WORD *)((char *)v4 + 304);
                  v65 = ((unsigned __int64)*v63 >> 1) - 260;
                  v66 = *((_QWORD *)v63 + 1) - ((_QWORD)v4 + 304);
                  while ( v65 + v42 )
                  {
                    v67 = *(_WORD *)((char *)v64 + v66);
                    if ( !v67 )
                      break;
                    *v64++ = v67;
                    if ( !--v42 )
                    {
                      --v64;
                      break;
                    }
                  }
                  v68 = v180 == 0;
                  *v64 = 0;
                  if ( !v68 )
                  {
                    v69 = v179;
                    ExReleasePushLockSharedEx((char *)v179 + 120, 0LL);
                    KeLeaveCriticalRegion();
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v179 + 2), v179);
                  }
LABEL_91:
                  LODWORD(v15) = 0;
                  *((_WORD *)v4 + 153) = 92;
                  *((_WORD *)v4 + 559) = 92;
LABEL_92:
                  v70 = v186;
                  if ( v186 )
                  {
                    if ( v187 )
                    {
                      COREACCESS::Release(v185);
                      v70 = v186;
                    }
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v70 + 2), v70);
                  }
                  v71 = v183;
                  if ( v183 )
                  {
                    if ( v184 )
                    {
                      COREACCESS::Release(v182);
                      v71 = v183;
                    }
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v71 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v71 + 2), v71);
                  }
LABEL_102:
                  if ( v154 )
                    DxgkReleaseSessionModeChangeLock();
                  return (unsigned int)v15;
                }
LABEL_207:
                v4 = a3;
                SetDisplayInfoDefaultToSDR(a3);
                goto LABEL_140;
              }
              v131 = WdLogNewEntry5_WdError(v91);
              *(_QWORD *)(v131 + 24) = v51;
              WdLogEvent5_WdError(v131);
              v80 = v192;
            }
            v99 = -1073741811;
            goto LABEL_125;
          }
          v153 = (_QWORD *)WdLogNewEntry5_WdError(v50);
          LODWORD(v15) = -1073741811;
          v153[3] = (unsigned int)v3;
          v153[4] = v10;
          v153[5] = -1073741811LL;
          WdLogEvent5_WdError(v153);
        }
        else
        {
          LODWORD(v15) = -1073741130;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v178);
        goto LABEL_92;
      }
    }
  }
  if ( v169 )
  {
    v169 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v168);
  }
  v115 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v115 + 32) = LowPart;
  *(_QWORD *)(v115 + 24) = HighPart;
  WdLogEvent5_WdError(v115);
  return -1073741811LL;
}
