/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01284EC
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00027B0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0003C50 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000D03C (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000D078 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000D834 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001B7E4 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF690 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C01268E8 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C01269D4 (DxgkQueryDmmInterface.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0126B30 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128B44 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C0128BB0 (MonitorSetLastWireformatAndColorspace.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C0128D08 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0129B44 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129DD0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012CCCC (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014DAA4 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014E718 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0278650 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02C0C60 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  volatile signed __int64 *v5; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  struct _LUID *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  DXGADAPTER *v28; // rdi
  unsigned int v29; // r12d
  ADAPTER_DISPLAY *v30; // rcx
  int v31; // r13d
  int v32; // r9d
  DXGADAPTER *v33; // r13
  int v34; // r8d
  unsigned int v35; // r12d
  __int64 v36; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 LowPart; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 HighPart; // rcx
  _QWORD *v50; // rax
  DXGADAPTER *v51; // r13
  __int64 v52; // rbx
  __int64 v53; // r8
  int v54; // r12d
  __int64 v56; // rdi
  __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  DWORD v60; // eax
  unsigned __int8 v61; // cf
  DWORD v62; // eax
  __int64 v63; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // xmm1_8
  __int64 v68; // rbx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rbx
  struct DXGGLOBAL *Global; // rax
  int v76; // r8d
  DXGADAPTER *v77; // rcx
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rax
  char v88; // [rsp+40h] [rbp-C0h]
  _BYTE v89[7]; // [rsp+41h] [rbp-BFh] BYREF
  DXGDEVICE *v90; // [rsp+48h] [rbp-B8h] BYREF
  int v91; // [rsp+50h] [rbp-B0h]
  DXGADAPTER *v92; // [rsp+58h] [rbp-A8h]
  DXGADAPTER *v93[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v94; // [rsp+70h] [rbp-90h] BYREF
  __int64 v95; // [rsp+78h] [rbp-88h] BYREF
  __int64 v96; // [rsp+80h] [rbp-80h]
  _BYTE v97[8]; // [rsp+88h] [rbp-78h] BYREF
  char v98; // [rsp+90h] [rbp-70h]
  _BYTE v99[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v101)(__int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v102; // [rsp+B0h] [rbp-50h]
  int v103; // [rsp+B8h] [rbp-48h]
  __int64 v104; // [rsp+C0h] [rbp-40h] BYREF
  struct _LUID *v105; // [rsp+C8h] [rbp-38h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v106; // [rsp+D0h] [rbp-30h]
  struct tagRECT v107; // [rsp+D8h] [rbp-28h]
  _BYTE v108[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v109[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v110[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v111[88]; // [rsp+148h] [rbp+48h] BYREF

  v5 = 0LL;
  v93[0] = 0LL;
  v106 = a5;
  v8 = 332LL * a4;
  v96 = a4;
  v9 = *((_QWORD *)this + 8);
  v91 = a3;
  v90 = 0LL;
  v89[0] = 0;
  v105 = (struct _LUID *)(v8 + *(_QWORD *)(v9 + 40));
  v10 = v105 + 10;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v93, v105);
  v92 = v93[0];
  if ( v93[0] )
  {
    v14 = *(_BYTE *)(*((_QWORD *)v93[0] + 319) + 232LL);
    v88 = v14;
    if ( v14 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 76) = 1;
    while ( 1 )
    {
      if ( v5 )
      {
        DxgkDestroyCddDeviceAndContextForCurrentSession(
          (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
          (struct DXGDEVICE *)v5);
        if ( _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
        v90 = 0LL;
      }
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                               (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                               &v90,
                                               0LL,
                                               0LL,
                                               v14);
      v19 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession < 0 )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
        v78[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v78[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v78[5] = v19;
        goto LABEL_79;
      }
      v5 = (volatile signed __int64 *)v90;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v108, v90);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v97, a2[36], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v97);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v109, (__int64)v5, 1, v20, 0);
      v19 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v109, 2LL);
      if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v5) )
        break;
      COREACCESS::~COREACCESS((COREACCESS *)v111);
      COREACCESS::~COREACCESS((COREACCESS *)v110);
      if ( v98 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v108);
      v14 = v88;
    }
    if ( (int)v19 < 0 )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
      v79[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v79[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v79[5] = *((_QWORD *)this + 8);
      v79[6] = v19;
    }
    else
    {
      v95 = 0LL;
      v24 = DxgkQueryDmmInterface(v93[0], v21, &v95);
      v19 = v24;
      if ( v24 >= 0 )
      {
        v28 = v92;
        v29 = 0;
        v30 = (ADAPTER_DISPLAY *)*((_QWORD *)v92 + 319);
        v31 = 1;
        if ( *((_DWORD *)v30 + 20) )
        {
          do
          {
            if ( (v31 & v10->LowPart) != 0 )
            {
              v70 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v30, v29);
              v74 = v70;
              if ( v70 < 0 )
              {
                v80 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71, v73);
                v80[3] = v29;
                v80[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                v80[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                v80[6] = v74;
                WdLogEvent5_WdError(v80);
              }
              ADAPTER_DISPLAY::ProcessModeChange(*((ADAPTER_DISPLAY **)v28 + 319), v29);
            }
            if ( (v31 & v10->HighPart) != 0 )
            {
              v63 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v29 + 83 * v96) + 8);
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)v92 + 319), v29);
              v65 = *((_QWORD *)this + 8);
              v66 = 3968LL * v29;
              v68 = 272 * v63;
              v107 = *DwmClipBox;
              v67 = *(_QWORD *)&v107.left;
              v28 = v92;
              *(_OWORD *)(*(_QWORD *)(*((_QWORD *)v92 + 319) + 112LL) + v66 + 652) = *(_OWORD *)(v65 + v68 + 216);
              v69 = *((_QWORD *)this + 8);
              if ( v67 != *(_QWORD *)(v69 + v68 + 216) || *(_QWORD *)&v107.right != *(_QWORD *)(v69 + v68 + 224) )
              {
                v10[5].HighPart |= v31;
                v69 = *((_QWORD *)this + 8);
              }
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 319) + 112LL) + v66 + 644) = *(_QWORD *)(v69 + v68 + 200);
              *(_DWORD *)(*((_QWORD *)this + 8) + v68 + 236) = ADAPTER_DISPLAY::GetDisplayId(
                                                                 *((ADAPTER_DISPLAY **)v28 + 319),
                                                                 v29);
            }
            v30 = (ADAPTER_DISPLAY *)*((_QWORD *)v28 + 319);
            ++v29;
            v31 *= 2;
          }
          while ( v29 < *((_DWORD *)v30 + 20) );
        }
        v32 = *((_DWORD *)this + 20);
        v33 = v93[0];
        v34 = *((_DWORD *)this + 19) & 1;
        v35 = v91;
        v36 = *((_QWORD *)this + 8);
        v100 = 0LL;
        v101 = 0LL;
        v102 = 0LL;
        v103 = 0;
        v99[0] = 0;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v36,
                                                     (__int64)v93[0],
                                                     v34,
                                                     v32,
                                                     v91,
                                                     (__int64)&v104);
        v19 = PathModalityForAdapterWithCoreAccessHeld;
        if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
        {
          v81 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v40);
          v81[3] = *((_QWORD *)this + 8);
          v81[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v81[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v81[6] = v19;
          WdLogEvent5_WdError(v81);
          v5 = (volatile signed __int64 *)v90;
        }
        else
        {
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
            (__int64)v99,
            v104,
            *(_QWORD *)(v95 + 64),
            (__int64)v33);
          v5 = (volatile signed __int64 *)v90;
          v41 = v35;
          v42 = v100;
          v19 = (int)DmmSetTimingsOnAdapter(v33, v100, v41, 1LL, v10, v89, v90, v109);
          DisplayScenarioJournalSetCommitVidPnStatus(
            v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
            *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 164);
          if ( (int)v19 < 0 )
          {
            v82 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
            v82[3] = v42;
            v82[4] = *((_QWORD *)this + 8);
            v82[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v82[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v82[7] = v19;
            WdLogEvent5_WdError(v82);
            if ( v99[0] )
              v101(v102, v42);
          }
          else
          {
            if ( v99[0] )
              v101(v102, v42);
            LowPart = v10[1].LowPart;
            if ( ((unsigned int)LowPart & v10[1].HighPart) != 0 )
            {
              v83 = WdLogNewEntry5_WdAssertion(LowPart, v43);
              WdLogEvent5_WdAssertion(v83);
              LowPart = v10[1].LowPart;
            }
            v47 = v10[5].LowPart;
            if ( ((unsigned int)LowPart | v10[5].LowPart) != (_DWORD)LowPart
              || ((unsigned int)LowPart & (unsigned int)v47) != (_DWORD)v47 )
            {
              v84 = WdLogNewEntry5_WdAssertion(LowPart, v47);
              WdLogEvent5_WdAssertion(v84);
              LowPart = v105[11].LowPart;
            }
            v48 = v10->LowPart;
            if ( (_DWORD)LowPart != ((unsigned int)LowPart & ((unsigned int)v48 | v10->HighPart)) )
            {
              v85 = WdLogNewEntry5_WdAssertion(LowPart, v48);
              WdLogEvent5_WdAssertion(v85);
              v48 = v10->LowPart;
            }
            HighPart = (unsigned int)v10[1].HighPart;
            if ( (_DWORD)HighPart != ((unsigned int)v48 & v10[1].HighPart)
              || ((unsigned int)HighPart & v10->HighPart) != 0 )
            {
              v86 = WdLogNewEntry5_WdAssertion(HighPart, v48);
              WdLogEvent5_WdAssertion(v86);
            }
            v50 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(HighPart, v48);
            v50[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v50[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v50[5] = v10[1].LowPart;
            v50[6] = v10[5].LowPart;
            v50[7] = (unsigned int)v10[1].HighPart;
            WdLogEvent5_WdDmmEvent(v50);
            v51 = v92;
            v52 = 0LL;
            v53 = *((_QWORD *)v92 + 319);
            if ( *(_DWORD *)(v53 + 80) )
            {
              do
              {
                v54 = 1 << v52;
                if ( ((1 << v52) & v10[10].LowPart) != 0 )
                {
                  v10[1].HighPart |= v54 & v10->LowPart;
                  CCD_TOPOLOGY::MarkPathsApplyFailure(
                    this,
                    (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                    v52,
                    *(&v10[10].HighPart + v52));
                }
                else if ( (v54 & v10->HighPart) != 0 )
                {
                  v56 = *((_QWORD *)this + 8);
                  v57 = 272LL * *(unsigned int *)(*(_QWORD *)(v56 + 40) + 4 * ((unsigned int)v52 + 83 * v96) + 8);
                  v91 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((ADAPTER_DISPLAY *)v53, v52);
                  if ( v91 < 0 )
                  {
                    v87 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59, v58);
                    v87[3] = (unsigned int)v52;
                    v87[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                    v87[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                    v87[6] = v91;
                    WdLogEvent5_WdDmmEvent(v87);
                  }
                  v60 = v10[5].LowPart;
                  v61 = _bittest((const int *)&v60, v52);
                  v62 = v10[1].LowPart;
                  if ( (!v61 & _bittest((const int *)&v62, v52)) != 0 )
                  {
                    LOBYTE(v59) = !v61;
                    Global = DXGGLOBAL::GetGlobal(v59, v58);
                    do
                      v76 = _InterlockedIncrement((volatile signed __int32 *)Global + 252);
                    while ( !v76 );
                    v77 = v92;
                    *(_DWORD *)(v56 + v57 + 236) = v76;
                    ADAPTER_DISPLAY::SetDisplayId(*((ADAPTER_DISPLAY **)v77 + 319), (unsigned int)v52, v76);
                  }
                  if ( (v54 & v10[8].LowPart) != 0 )
                    *(_QWORD *)(v56 + v57 + 244) = 0LL;
                  if ( DmmGetTargetLinkTrainingStatus(
                         v93[0],
                         *(_DWORD *)(v56 + v57 + 76),
                         (enum _DXGK_CONNECTION_STATUS *)&v94) >= 0
                    && v94 == 12 )
                  {
                    *(_DWORD *)(v56 + v57 + 240) = 259;
                  }
                  MonitorSetLastWireformatAndColorspace(
                    v93[0],
                    *(unsigned int *)(v56 + v57 + 76),
                    *(unsigned int *)(v56 + v57 + 252),
                    *(unsigned int *)(v56 + v57 + 256));
                  v51 = v92;
                }
                if ( ((v10[7].LowPart | v10[10].LowPart) & v54) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*((ADAPTER_DISPLAY **)v51 + 319), v52);
                v53 = *((_QWORD *)v51 + 319);
                v52 = (unsigned int)(v52 + 1);
              }
              while ( (unsigned int)v52 < *(_DWORD *)(v53 + 80) );
              v5 = (volatile signed __int64 *)v90;
            }
            if ( v88 )
              *(_BYTE *)(v53 + 232) = 0;
            DmmHandleSetTimingsResult(v93[0], (struct _DMM_SET_TIMING_RESULT *)v89, v106);
            LODWORD(v19) = 0;
          }
        }
        goto LABEL_35;
      }
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
      v79[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v79[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v79[5] = v19;
    }
    WdLogEvent5_WdError(v79);
LABEL_35:
    if ( (int)v19 < 0 )
    {
      v10[10].LowPart = v10->LowPart | v10->HighPart;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v10, v19);
      v10[1].HighPart = v10->LowPart;
      CCD_TOPOLOGY::MarkPathsApplyFailure(
        this,
        (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        0xFFFFFFFF,
        v19);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v111);
    COREACCESS::~COREACCESS((COREACCESS *)v110);
    if ( v98 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v108);
    if ( v5 && _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    goto LABEL_42;
  }
  v78 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
  LODWORD(v19) = -1073741811;
  v78[3] = 0LL;
  v78[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
  v78[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
  v78[6] = -1073741811LL;
LABEL_79:
  WdLogEvent5_WdError(v78);
LABEL_42:
  DXGADAPTER_REFERENCE::Assign(v93, 0LL);
  return (unsigned int)v19;
}
