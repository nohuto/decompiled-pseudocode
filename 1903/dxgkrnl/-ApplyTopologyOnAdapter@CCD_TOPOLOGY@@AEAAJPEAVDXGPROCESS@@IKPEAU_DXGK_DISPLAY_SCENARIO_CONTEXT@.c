/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CDBBC (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00020DC (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002118 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00037B4 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0003B50 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000D4F8 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001B794 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00CD5C8 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CD618 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00CEDA4 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C00CEE90 (DxgkQueryDmmInterface.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEF00 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF7E4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C00CF850 (MonitorSetLastWireformatAndColorspace.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C00CF9A8 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00D2468 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0128098 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0149C74 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0277EF0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02C0BA0 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
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
  __int64 v30; // rcx
  int v31; // r13d
  __int64 v32; // r9
  DXGADAPTER *v33; // r13
  __int64 v34; // r8
  __int64 v35; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 LowPart; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 HighPart; // rcx
  _QWORD *v48; // rax
  DXGADAPTER *v49; // r13
  __int64 v50; // rbx
  __int64 v51; // r8
  int v52; // r12d
  __int64 v54; // rdi
  __int64 v55; // r13
  __int64 v56; // rdx
  __int64 v57; // rcx
  DWORD v58; // eax
  unsigned __int8 v59; // cf
  DWORD v60; // eax
  __int64 v61; // rbx
  const struct tagRECT *DwmClipBox; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // xmm1_8
  __int64 v66; // rbx
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rbx
  struct DXGGLOBAL *Global; // rax
  int v74; // r8d
  DXGADAPTER *v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  char v86; // [rsp+40h] [rbp-C0h]
  _BYTE v87[7]; // [rsp+41h] [rbp-BFh] BYREF
  DXGDEVICE *v88; // [rsp+48h] [rbp-B8h]
  int v89; // [rsp+50h] [rbp-B0h]
  DXGADAPTER *v90; // [rsp+58h] [rbp-A8h]
  DXGADAPTER *v91[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v92; // [rsp+70h] [rbp-90h] BYREF
  __int64 v93; // [rsp+78h] [rbp-88h] BYREF
  __int64 v94; // [rsp+80h] [rbp-80h]
  _BYTE v95[8]; // [rsp+88h] [rbp-78h] BYREF
  char v96; // [rsp+90h] [rbp-70h]
  _BYTE v97[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v99)(__int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  int v101; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C0h] [rbp-40h] BYREF
  struct _LUID *v103; // [rsp+C8h] [rbp-38h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v104; // [rsp+D0h] [rbp-30h]
  struct tagRECT v105; // [rsp+D8h] [rbp-28h]
  _BYTE v106[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v107[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v108[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v109[88]; // [rsp+148h] [rbp+48h] BYREF

  v5 = 0LL;
  v91[0] = 0LL;
  v104 = a5;
  v8 = 332LL * a4;
  v94 = a4;
  v9 = *((_QWORD *)this + 8);
  v89 = a3;
  v88 = 0LL;
  v87[0] = 0;
  v103 = (struct _LUID *)(v8 + *(_QWORD *)(v9 + 40));
  v10 = v103 + 10;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v91, v103);
  v90 = v91[0];
  if ( v91[0] )
  {
    v14 = *(_BYTE *)(*((_QWORD *)v91[0] + 319) + 232LL);
    v86 = v14;
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
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v88 + 2), v88);
        v88 = 0LL;
      }
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                               (struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                               v14);
      v19 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession < 0 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
        v76[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
        v76[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
        v76[5] = v19;
        goto LABEL_79;
      }
      v5 = (volatile signed __int64 *)v88;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106, v88);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v95, a2[36], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v95);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v88, 1, v20, 0);
      v19 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v107, 2LL);
      if ( !DXGDEVICE::IsExecutionStateErrorState(v88) )
        break;
      COREACCESS::~COREACCESS((COREACCESS *)v109);
      COREACCESS::~COREACCESS((COREACCESS *)v108);
      if ( v96 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
      v14 = v86;
    }
    if ( (int)v19 < 0 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
      v77[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v77[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v77[5] = *((_QWORD *)this + 8);
      v77[6] = v19;
    }
    else
    {
      v93 = 0LL;
      v24 = DxgkQueryDmmInterface(v91[0], v21, &v93);
      v19 = v24;
      if ( v24 >= 0 )
      {
        v28 = v90;
        v29 = 0;
        v30 = *((_QWORD *)v90 + 319);
        v31 = 1;
        if ( *(_DWORD *)(v30 + 80) )
        {
          do
          {
            if ( (v31 & v10->LowPart) != 0 )
            {
              v68 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource((DXGADAPTER **)v30, v29);
              v72 = v68;
              if ( v68 < 0 )
              {
                v78 = (_QWORD *)WdLogNewEntry5_WdError(v70, v69, v71);
                v78[3] = v29;
                v78[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                v78[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                v78[6] = v72;
                WdLogEvent5_WdError(v78);
              }
              ADAPTER_DISPLAY::ProcessModeChange(*((DXGADAPTER ***)v28 + 319), v29);
            }
            if ( (v31 & v10->HighPart) != 0 )
            {
              v61 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 4 * (v29 + 83 * v94) + 8);
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)v90 + 319), v29);
              v63 = *((_QWORD *)this + 8);
              v64 = 3968LL * v29;
              v66 = 272 * v61;
              v105 = *DwmClipBox;
              v65 = *(_QWORD *)&v105.left;
              v28 = v90;
              *(_OWORD *)(*(_QWORD *)(*((_QWORD *)v90 + 319) + 112LL) + v64 + 652) = *(_OWORD *)(v63 + v66 + 216);
              v67 = *((_QWORD *)this + 8);
              if ( v65 != *(_QWORD *)(v67 + v66 + 216) || *(_QWORD *)&v105.right != *(_QWORD *)(v67 + v66 + 224) )
              {
                v10[5].HighPart |= v31;
                v67 = *((_QWORD *)this + 8);
              }
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 319) + 112LL) + v64 + 644) = *(_QWORD *)(v67 + v66 + 200);
              *(_DWORD *)(*((_QWORD *)this + 8) + v66 + 236) = ADAPTER_DISPLAY::GetDisplayId(
                                                                 *((ADAPTER_DISPLAY **)v28 + 319),
                                                                 v29);
            }
            v30 = *((_QWORD *)v28 + 319);
            ++v29;
            v31 *= 2;
          }
          while ( v29 < *(_DWORD *)(v30 + 80) );
        }
        v32 = *((unsigned int *)this + 20);
        v33 = v91[0];
        v34 = *((_DWORD *)this + 19) & 1;
        v35 = *((_QWORD *)this + 8);
        v98 = 0LL;
        v99 = 0LL;
        v100 = 0LL;
        v101 = 0;
        v97[0] = 0;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v35,
                                                     v91[0],
                                                     v34,
                                                     v32,
                                                     v89,
                                                     &v102);
        v19 = PathModalityForAdapterWithCoreAccessHeld;
        if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39);
          v79[3] = *((_QWORD *)this + 8);
          v79[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v79[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v79[6] = v19;
          WdLogEvent5_WdError(v79);
          v5 = (volatile signed __int64 *)v88;
        }
        else
        {
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
            (__int64)v97,
            v102,
            *(_QWORD *)(v93 + 64),
            (__int64)v33);
          v5 = (volatile signed __int64 *)v88;
          v40 = v98;
          v19 = (int)DmmSetTimingsOnAdapter(v33, v98, (unsigned int)v89, 1LL, v10, v87, v88, v107);
          DisplayScenarioJournalSetCommitVidPnStatus(
            v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
            *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 164);
          if ( (int)v19 < 0 )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
            v80[3] = v40;
            v80[4] = *((_QWORD *)this + 8);
            v80[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v80[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v80[7] = v19;
            WdLogEvent5_WdError(v80);
            if ( v97[0] )
              v99(v100, v40);
          }
          else
          {
            if ( v97[0] )
              v99(v100, v40);
            LowPart = v10[1].LowPart;
            if ( ((unsigned int)LowPart & v10[1].HighPart) != 0 )
            {
              v81 = WdLogNewEntry5_WdAssertion(LowPart, v41);
              WdLogEvent5_WdAssertion(v81);
              LowPart = v10[1].LowPart;
            }
            v45 = v10[5].LowPart;
            if ( ((unsigned int)LowPart | v10[5].LowPart) != (_DWORD)LowPart
              || ((unsigned int)LowPart & (unsigned int)v45) != (_DWORD)v45 )
            {
              v82 = WdLogNewEntry5_WdAssertion(LowPart, v45);
              WdLogEvent5_WdAssertion(v82);
              LowPart = v103[11].LowPart;
            }
            v46 = v10->LowPart;
            if ( (_DWORD)LowPart != ((unsigned int)LowPart & ((unsigned int)v46 | v10->HighPart)) )
            {
              v83 = WdLogNewEntry5_WdAssertion(LowPart, v46);
              WdLogEvent5_WdAssertion(v83);
              v46 = v10->LowPart;
            }
            HighPart = (unsigned int)v10[1].HighPart;
            if ( (_DWORD)HighPart != ((unsigned int)v46 & v10[1].HighPart)
              || ((unsigned int)HighPart & v10->HighPart) != 0 )
            {
              v84 = WdLogNewEntry5_WdAssertion(HighPart, v46);
              WdLogEvent5_WdAssertion(v84);
            }
            v48 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v48[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v48[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v48[5] = v10[1].LowPart;
            v48[6] = v10[5].LowPart;
            v48[7] = (unsigned int)v10[1].HighPart;
            WdLogEvent5_WdDmmEvent(v48);
            v49 = v90;
            v50 = 0LL;
            v51 = *((_QWORD *)v90 + 319);
            if ( *(_DWORD *)(v51 + 80) )
            {
              do
              {
                v52 = 1 << v50;
                if ( ((1 << v50) & v10[10].LowPart) != 0 )
                {
                  v10[1].HighPart |= v52 & v10->LowPart;
                  CCD_TOPOLOGY::MarkPathsApplyFailure(
                    this,
                    (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                    v50,
                    *(&v10[10].HighPart + v50));
                }
                else if ( (v52 & v10->HighPart) != 0 )
                {
                  v54 = *((_QWORD *)this + 8);
                  v55 = 272LL * *(unsigned int *)(*(_QWORD *)(v54 + 40) + 4 * ((unsigned int)v50 + 83 * v94) + 8);
                  v89 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((DXGADAPTER **)v51, v50);
                  if ( v89 < 0 )
                  {
                    v85 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
                    v85[3] = (unsigned int)v50;
                    v85[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
                    v85[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
                    v85[6] = v89;
                    WdLogEvent5_WdDmmEvent(v85);
                  }
                  v58 = v10[5].LowPart;
                  v59 = _bittest((const int *)&v58, v50);
                  v60 = v10[1].LowPart;
                  if ( (!v59 & _bittest((const int *)&v60, v50)) != 0 )
                  {
                    LOBYTE(v57) = !v59;
                    Global = DXGGLOBAL::GetGlobal(v57, v56);
                    do
                      v74 = _InterlockedIncrement((volatile signed __int32 *)Global + 252);
                    while ( !v74 );
                    v75 = v90;
                    *(_DWORD *)(v54 + v55 + 236) = v74;
                    ADAPTER_DISPLAY::SetDisplayId(*((ADAPTER_DISPLAY **)v75 + 319), (unsigned int)v50, v74);
                  }
                  if ( (v52 & v10[8].LowPart) != 0 )
                    *(_QWORD *)(v54 + v55 + 244) = 0LL;
                  if ( DmmGetTargetLinkTrainingStatus(
                         v91[0],
                         *(_DWORD *)(v54 + v55 + 76),
                         (enum _DXGK_CONNECTION_STATUS *)&v92) >= 0
                    && v92 == 12 )
                  {
                    *(_DWORD *)(v54 + v55 + 240) = 259;
                  }
                  MonitorSetLastWireformatAndColorspace(
                    v91[0],
                    *(unsigned int *)(v54 + v55 + 76),
                    *(unsigned int *)(v54 + v55 + 252),
                    *(unsigned int *)(v54 + v55 + 256));
                  v49 = v90;
                }
                if ( ((v10[7].LowPart | v10[10].LowPart) & v52) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*((ADAPTER_DISPLAY **)v49 + 319), v50);
                v51 = *((_QWORD *)v49 + 319);
                v50 = (unsigned int)(v50 + 1);
              }
              while ( (unsigned int)v50 < *(_DWORD *)(v51 + 80) );
              v5 = (volatile signed __int64 *)v88;
            }
            if ( v86 )
              *(_BYTE *)(v51 + 232) = 0;
            DmmHandleSetTimingsResult(v91[0], (struct _DMM_SET_TIMING_RESULT *)v87, v104);
            LODWORD(v19) = 0;
          }
        }
        goto LABEL_35;
      }
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
      v77[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v77[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
      v77[5] = v19;
    }
    WdLogEvent5_WdError(v77);
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
    COREACCESS::~COREACCESS((COREACCESS *)v109);
    COREACCESS::~COREACCESS((COREACCESS *)v108);
    if ( v96 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
    if ( v5 && _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v88 + 2), v88);
    goto LABEL_42;
  }
  v76 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
  LODWORD(v19) = -1073741811;
  v76[3] = 0LL;
  v76[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
  v76[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
  v76[6] = -1073741811LL;
LABEL_79:
  WdLogEvent5_WdError(v76);
LABEL_42:
  DXGADAPTER_REFERENCE::Assign(v91, 0LL);
  return (unsigned int)v19;
}
