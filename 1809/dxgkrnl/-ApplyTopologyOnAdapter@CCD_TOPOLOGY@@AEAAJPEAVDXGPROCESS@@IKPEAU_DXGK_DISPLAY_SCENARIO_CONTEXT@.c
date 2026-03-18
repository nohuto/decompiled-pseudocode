/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000292C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0004070 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0005BB8 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0005E40 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001A670 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00CF024 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C00CF110 (DxgkQueryDmmInterface.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF180 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CFAB4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C00CFB18 (MonitorSetLastWireformatAndColorspace.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFBFC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C00D0408 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00D5A80 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0137128 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01380A8 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0139ED8 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0242AA0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C0288830 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // r15
  __int64 v8; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rax
  struct D3DKMT_VIDPN_SOURCE_MASKS *v11; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  ADAPTER_DISPLAY **v15; // r13
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  ADAPTER_DISPLAY *v19; // rcx
  int v20; // ebx
  unsigned int v21; // r12d
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned int v24; // r12d
  __int64 v25; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  ADAPTER_DISPLAY *v37; // r8
  unsigned int v38; // ebx
  int v39; // edi
  __int64 v40; // rbx
  unsigned int v41; // edx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r12
  unsigned int v45; // eax
  bool v46; // zf
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r12
  unsigned int v54; // eax
  unsigned __int8 v55; // cf
  unsigned int v56; // eax
  __int64 v57; // r12
  __int64 v58; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v60; // r8
  __int64 v61; // xmm1_8
  __int128 v62; // xmm0
  ADAPTER_DISPLAY *v63; // rax
  __int64 v64; // rdx
  int DisplayId; // eax
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rdi
  struct DXGGLOBAL *Global; // rax
  int v70; // r8d
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _BYTE v82[4]; // [rsp+48h] [rbp-C0h] BYREF
  int i; // [rsp+4Ch] [rbp-BCh]
  DXGDEVICE *v84; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v85; // [rsp+58h] [rbp-B0h]
  int v86; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v87; // [rsp+60h] [rbp-A8h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v88; // [rsp+68h] [rbp-A0h]
  __int64 v89; // [rsp+70h] [rbp-98h] BYREF
  __int64 v90; // [rsp+78h] [rbp-90h]
  char v91[8]; // [rsp+80h] [rbp-88h] BYREF
  char v92; // [rsp+88h] [rbp-80h]
  char v93[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v94; // [rsp+98h] [rbp-70h]
  void (__fastcall *v95)(__int64, __int64); // [rsp+A0h] [rbp-68h]
  __int64 v96; // [rsp+A8h] [rbp-60h]
  int v97; // [rsp+B0h] [rbp-58h]
  __int64 v98; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-48h]
  _BYTE v100[16]; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v101; // [rsp+D8h] [rbp-30h]
  char v102[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v103[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v104[56]; // [rsp+110h] [rbp+8h] BYREF

  v85 = a3;
  v82[0] = 0;
  v6 = 324LL * a4;
  v87 = a4;
  v8 = *((_QWORD *)this + 8);
  v9 = 0LL;
  v84 = 0LL;
  v10 = *(_QWORD *)(v8 + 40);
  v11 = (struct D3DKMT_VIDPN_SOURCE_MASKS *)(v10 + v6 + 76);
  v99 = v10;
  v88 = v11;
  while ( 1 )
  {
    if ( v9 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v9);
      if ( _InterlockedExchangeAdd64(v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v84 + 2), v84);
      v84 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v84,
                                             0LL,
                                             0LL);
    v14 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v81[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
      v81[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
      v81[5] = v14;
      WdLogEvent5_WdError(v81);
      return (unsigned int)v14;
    }
    v9 = (volatile signed __int64 *)v84;
    v15 = (ADAPTER_DISPLAY **)*((_QWORD *)v84 + 216);
    if ( !v15 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      LODWORD(v14) = -1073741811;
      v80[3] = v9;
      v80[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
      v80[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
      v80[6] = -1073741811LL;
      WdLogEvent5_WdError(v80);
      v46 = _InterlockedExchangeAdd64(v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_47;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100, v84);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v91, a2[39], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v91);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, (__int64)v9, 1, v16, 0);
    v14 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v102, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v9) )
      break;
    COREACCESS::~COREACCESS((COREACCESS *)v104);
    COREACCESS::~COREACCESS((COREACCESS *)v103);
    if ( v92 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v91);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
  }
  if ( (int)v14 < 0 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v71[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
    v71[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
    v71[5] = *((_QWORD *)this + 8);
    v71[6] = v14;
  }
  else
  {
    v89 = 0LL;
    v14 = (int)DxgkQueryDmmInterface((DXGADAPTER *)v15, v17, &v89);
    if ( (int)v14 >= 0 )
    {
      v19 = v15[315];
      v20 = 1;
      v21 = 0;
      for ( i = 1; v21 < *((_DWORD *)v19 + 20); i = v20 )
      {
        if ( (v20 & *(_DWORD *)v11) != 0 )
        {
          v66 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v19, v21);
          v68 = v66;
          if ( v66 < 0 )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdError(v67);
            v72[3] = v21;
            v72[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
            v72[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
            v72[6] = v68;
            WdLogEvent5_WdError(v72);
          }
          ADAPTER_DISPLAY::ProcessModeChange(v15[315], v21);
          v19 = v15[315];
        }
        if ( (v20 & *((_DWORD *)v11 + 1)) != 0 )
        {
          v58 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v21 + 81 * v87) + 8);
          DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v15[315], v21);
          v60 = 272 * v58;
          v62 = *(_OWORD *)(*((_QWORD *)this + 8) + 272 * v58 + 216);
          v101 = *DwmClipBox;
          v61 = *(_QWORD *)&v101.left;
          v63 = v15[315];
          v90 = 272 * v58;
          *(_OWORD *)(*((_QWORD *)v63 + 14) + 3760LL * v21 + 652) = v62;
          v64 = *((_QWORD *)this + 8);
          if ( v61 == *(_QWORD *)(v64 + 272 * v58 + 216) && *(_QWORD *)&v101.right == *(_QWORD *)(v64 + v60 + 224) )
          {
            v20 = i;
          }
          else
          {
            v20 = i;
            *((_DWORD *)v11 + 11) |= i;
            v64 = *((_QWORD *)this + 8);
          }
          *(_QWORD *)(*((_QWORD *)v15[315] + 14) + 3760LL * v21 + 644) = *(_QWORD *)(v60 + v64 + 200);
          DisplayId = ADAPTER_DISPLAY::GetDisplayId(v15[315], v21);
          *(_DWORD *)(*((_QWORD *)this + 8) + v90 + 236) = DisplayId;
          v19 = v15[315];
        }
        v20 *= 2;
        ++v21;
      }
      v22 = *((unsigned int *)this + 20);
      v23 = *((_DWORD *)this + 19) & 1;
      v24 = v85;
      v25 = *((_QWORD *)this + 8);
      v94 = 0LL;
      v95 = 0LL;
      v96 = 0LL;
      v97 = 0;
      v93[0] = 0;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   v25,
                                                   v15,
                                                   v23,
                                                   v22,
                                                   v85,
                                                   &v98);
      v14 = PathModalityForAdapterWithCoreAccessHeld;
      if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdError(v27);
        v73[3] = *((_QWORD *)this + 8);
        v73[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
        v73[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
        v73[6] = v14;
        WdLogEvent5_WdError(v73);
        v9 = (volatile signed __int64 *)v84;
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v93,
          v98,
          *(_QWORD *)(v89 + 64),
          (__int64)v15);
        v9 = (volatile signed __int64 *)v84;
        v28 = v24;
        v29 = v94;
        v14 = (int)((__int64 (__fastcall *)(ADAPTER_DISPLAY **, __int64, __int64, __int64, struct D3DKMT_VIDPN_SOURCE_MASKS *, _BYTE *, DXGDEVICE *, char *))DmmSetTimingsOnAdapter)(
                     v15,
                     v94,
                     v28,
                     1LL,
                     v11,
                     v82,
                     v84,
                     v102);
        DisplayScenarioJournalSetCommitVidPnStatus(
          v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
          *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 156);
        if ( (int)v14 < 0 )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v74[3] = v29;
          v74[4] = *((_QWORD *)this + 8);
          v74[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
          v74[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
          v74[7] = v14;
          WdLogEvent5_WdError(v74);
          if ( v93[0] )
            v95(v96, v29);
        }
        else
        {
          if ( v93[0] )
            v95(v96, v29);
          v33 = *((unsigned int *)v11 + 2);
          if ( ((unsigned int)v33 & *((_DWORD *)v11 + 3)) != 0 )
          {
            v75 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v75);
            v33 = *((unsigned int *)v11 + 2);
          }
          if ( ((unsigned int)v33 | *((_DWORD *)v11 + 10)) != (_DWORD)v33
            || ((unsigned int)v33 & *((_DWORD *)v11 + 10)) != *((_DWORD *)v11 + 10) )
          {
            v76 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v76);
            v33 = *(unsigned int *)(v99 + v6 + 84);
          }
          v34 = *(unsigned int *)v11;
          if ( (_DWORD)v33 != ((unsigned int)v33 & (*((_DWORD *)v11 + 1) | *(_DWORD *)v11)) )
          {
            v77 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v77);
            v34 = *(unsigned int *)v11;
          }
          v35 = *((unsigned int *)v11 + 3);
          if ( (_DWORD)v35 != ((unsigned int)v34 & *((_DWORD *)v11 + 3))
            || ((unsigned int)v35 & *((_DWORD *)v11 + 1)) != 0 )
          {
            v78 = WdLogNewEntry5_WdAssertion(v35);
            WdLogEvent5_WdAssertion(v78);
          }
          v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v34, v31, v32);
          v36[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
          v36[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
          v36[5] = *((unsigned int *)v11 + 2);
          v36[6] = *((unsigned int *)v11 + 10);
          v36[7] = *((unsigned int *)v11 + 3);
          WdLogEvent5_WdDmmEvent(v36);
          v37 = v15[315];
          v38 = 0;
          if ( *((_DWORD *)v37 + 20) )
          {
            do
            {
              v39 = 1 << v38;
              if ( ((1 << v38) & *((_DWORD *)v11 + 19)) != 0 )
              {
                *((_DWORD *)v11 + 3) |= v39 & *(_DWORD *)v11;
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  this,
                  (const struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v38,
                  *((_DWORD *)v11 + v38 + 20));
              }
              else if ( (v39 & *((_DWORD *)v11 + 1)) != 0 )
              {
                v48 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)v37, v38);
                v53 = v48;
                if ( v48 < 0 )
                {
                  v79 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v50, v49, v51, v52);
                  v79[3] = v38;
                  v79[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
                  v79[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
                  v79[6] = v53;
                  WdLogEvent5_WdDmmEvent(v79);
                }
                v54 = *((_DWORD *)v11 + 10);
                v55 = _bittest((const int *)&v54, v38);
                v56 = *((_DWORD *)v11 + 2);
                if ( (!v55 & _bittest((const int *)&v56, v38)) != 0 )
                {
                  LOBYTE(v50) = !v55;
                  Global = DXGGLOBAL::GetGlobal(v50);
                  do
                    v70 = _InterlockedIncrement((volatile signed __int32 *)Global + 260);
                  while ( !v70 );
                  v57 = v38;
                  *(_DWORD *)(272LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v38 + 81 * v87) + 8)
                            + *((_QWORD *)this + 8)
                            + 236) = v70;
                  ADAPTER_DISPLAY::SetDisplayId(v15[315], v38, v70);
                }
                else
                {
                  v57 = v38;
                }
                if ( (v39 & *((_DWORD *)v11 + 16)) != 0 )
                  *(_QWORD *)(272LL
                            * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v57 + 81 * v87) + 8)
                            + *((_QWORD *)this + 8)
                            + 244) = 0LL;
              }
              if ( ((*((_DWORD *)v11 + 14) | *((_DWORD *)v11 + 19)) & v39) != 0 )
                ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v15[315], v38);
              v37 = v15[315];
              ++v38;
            }
            while ( v38 < *((_DWORD *)v37 + 20) );
            v9 = (volatile signed __int64 *)v84;
          }
          v40 = *((_QWORD *)this + 8);
          v41 = 0;
          i = 0;
          if ( *(_WORD *)(v40 + 20) )
          {
            do
            {
              v42 = *(_QWORD *)(v40 + 40);
              v43 = v40;
              v44 = 272LL * v41;
              if ( *(_DWORD *)(v44 + v40 + 64) == *(_DWORD *)(v42 + v6)
                && *(_DWORD *)(v44 + v40 + 68) == *(_DWORD *)(v42 + v6 + 4)
                && *(int *)(v44 + v40 + 240) >= 0 )
              {
                if ( DmmGetTargetLinkTrainingStatus(
                       v15,
                       *(_DWORD *)(v44 + v40 + 76),
                       (enum _DXGK_CONNECTION_STATUS *)&v86) >= 0
                  && v86 == 12 )
                {
                  *(_DWORD *)(v44 + v40 + 240) = 259;
                }
                MonitorSetLastWireformatAndColorspace(
                  v15,
                  *(unsigned int *)(v44 + v40 + 76),
                  *(unsigned int *)(v44 + v40 + 252),
                  *(unsigned int *)(v44 + v40 + 256));
                v43 = *((_QWORD *)this + 8);
                v41 = i;
              }
              v45 = *(unsigned __int16 *)(v43 + 20);
              i = ++v41;
              v40 = v43;
            }
            while ( v41 < v45 );
            v11 = v88;
          }
          DmmHandleSetTimingsResult((DXGADAPTER *)v15, (struct _DMM_SET_TIMING_RESULT *)v82, a5);
          LODWORD(v14) = 0;
        }
      }
      goto LABEL_42;
    }
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v71[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
    v71[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
    v71[5] = v14;
  }
  WdLogEvent5_WdError(v71);
LABEL_42:
  if ( (int)v14 < 0 )
  {
    *((_DWORD *)v11 + 19) = *(_DWORD *)v11 | *((_DWORD *)v11 + 1);
    FillFailedStatus(v11, v14);
    *((_DWORD *)v11 + 3) = *(_DWORD *)v11;
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (const struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
      0xFFFFFFFF,
      v14);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v104);
  COREACCESS::~COREACCESS((COREACCESS *)v103);
  if ( v92 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v91);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
  v46 = _InterlockedExchangeAdd64(v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_47:
  if ( v46 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v84 + 2), v84);
  return (unsigned int)v14;
}
