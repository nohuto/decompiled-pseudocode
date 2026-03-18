/*
 * XREFs of DxgkSetDisplayMode @ 0x1C00CC7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001D10 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E68 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0002074 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CC68 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023AD0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023AF8 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0023B0C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C9B94 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C00CA1B4 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     DxgkStatusChangeNotify @ 0x1C00CBEA0 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD000 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEF00 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0149F80 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C014A8D8 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200390 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiPollDisplayChildren @ 0x1C029CDE0 (DpiPollDisplayChildren.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGPROCESS *Current; // r12
  unsigned int v8; // r13d
  ULONG64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGALLOCATION *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // r12d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  const GUID *v52; // r8
  bool v53; // zf
  __int64 v55; // rbx
  __int64 v56; // rdx
  _QWORD *v57; // rbx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // r9
  _BYTE *v61; // r8
  __int64 v62; // rdx
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // r9
  unsigned __int64 v73; // rdx
  _QWORD *v74; // rax
  __int64 v75; // r9
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  const GUID *v81; // r8
  _DWORD *v82; // rdx
  _QWORD *v83; // rax
  __int64 v84; // rax
  void *v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // [rsp+20h] [rbp-408h]
  struct DXGALLOCATION *v89; // [rsp+40h] [rbp-3E8h] BYREF
  struct DXGDEVICE *v90; // [rsp+48h] [rbp-3E0h] BYREF
  int v91; // [rsp+50h] [rbp-3D8h] BYREF
  __int64 v92; // [rsp+58h] [rbp-3D0h]
  char v93; // [rsp+60h] [rbp-3C8h]
  ULONG64 v94; // [rsp+68h] [rbp-3C0h]
  _QWORD v95[2]; // [rsp+70h] [rbp-3B8h] BYREF
  _BYTE v96[16]; // [rsp+80h] [rbp-3A8h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v97[4]; // [rsp+90h] [rbp-398h]
  _BYTE v98[12]; // [rsp+A0h] [rbp-388h]
  _BYTE v99[24]; // [rsp+B0h] [rbp-378h] BYREF
  struct DXGPROCESS *v100; // [rsp+C8h] [rbp-360h]
  unsigned int v101; // [rsp+D0h] [rbp-358h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-350h]
  struct DXGDEVICE *v103; // [rsp+E0h] [rbp-348h] BYREF
  _QWORD v104[2]; // [rsp+E8h] [rbp-340h] BYREF
  _BYTE v105[48]; // [rsp+F8h] [rbp-330h] BYREF
  _BYTE v106[48]; // [rsp+128h] [rbp-300h] BYREF
  _BYTE v107[48]; // [rsp+158h] [rbp-2D0h] BYREF
  _BYTE v108[48]; // [rsp+188h] [rbp-2A0h] BYREF
  _BYTE v109[48]; // [rsp+1B8h] [rbp-270h] BYREF
  _BYTE v110[48]; // [rsp+1E8h] [rbp-240h] BYREF
  _BYTE v111[48]; // [rsp+218h] [rbp-210h] BYREF
  _BYTE v112[48]; // [rsp+248h] [rbp-1E0h] BYREF
  _BYTE v113[48]; // [rsp+278h] [rbp-1B0h] BYREF
  _BYTE v114[48]; // [rsp+2A8h] [rbp-180h] BYREF
  _BYTE v115[56]; // [rsp+2D8h] [rbp-150h] BYREF
  _BYTE v116[160]; // [rsp+310h] [rbp-118h] BYREF
  _QWORD v117[10]; // [rsp+3B0h] [rbp-78h] BYREF

  v94 = a1;
  memset(v117, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v117[1]);
  v117[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v117[3]) = 49;
  LOBYTE(v117[6]) = -1;
  v91 = -1;
  v92 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v93 = 1;
    v91 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2018);
  }
  else
  {
    v93 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v91, 2018LL);
  Current = DXGPROCESS::GetCurrent();
  v100 = Current;
  if ( !Current )
  {
    v55 = WdLogNewEntry5_WdError(v5, v4, v6);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v55 + 24) = -1073741811LL;
    *(_QWORD *)(v55 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v55);
LABEL_54:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v56);
    v53 = v93 == 0;
    goto LABEL_49;
  }
  v102 = 0LL;
  v8 = 0;
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)v97 = *(_OWORD *)v9;
  *(_QWORD *)v98 = *(_QWORD *)(v9 + 16);
  *(_DWORD *)&v98[8] = *(_DWORD *)(v9 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v90, v97[0], (struct _KTHREAD **)Current, &v103);
  v13 = v103;
  if ( !v103 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    LODWORD(v17) = -1073741811;
    v57[3] = -1073741811LL;
    v57[4] = PsGetCurrentProcess();
    v57[5] = (unsigned int)v97[0];
    WdLogEvent5_WdError(v57);
LABEL_58:
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    goto LABEL_54;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95, v103);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v99, Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v99, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v96,
    (struct DXGFASTMUTEX *const *)Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v116, (__int64)v13, 1, v14, 0);
  LODWORD(v17) = COREDEVICEACCESS::AcquireExclusive((__int64)v116, 2LL);
  if ( (int)v17 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v99);
    if ( v95[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
    goto LABEL_58;
  }
  v19 = *((_QWORD *)v13 + 216);
  if ( !v19 )
  {
    v58 = WdLogNewEntry5_WdError(v16, v15, v18);
    *(_QWORD *)(v58 + 24) = v13;
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v58 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v58);
LABEL_67:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v99);
    if ( v95[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    goto LABEL_48;
  }
  ++*(_DWORD *)(*(_QWORD *)(v19 + 2552) + 344LL);
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v89, v97[1]);
  v23 = v89;
  if ( !v89 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    LODWORD(v17) = -1073741811;
    v59[3] = -1073741811LL;
    v59[4] = v13;
    v59[5] = (unsigned int)v97[1];
    WdLogEvent5_WdError(v59);
    memset(v105, 0, 0x2CuLL);
    v88 = -1071775468;
    v61 = v105;
    v62 = 0xFFFFFFFFLL;
LABEL_65:
    DmmCacheDisplayModeChangeRequest((DXGADAPTER *)v19, v62, (__int64)v61, v60, v88);
LABEL_66:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v89);
    goto LABEL_67;
  }
  v24 = *(_QWORD *)(*((_QWORD *)v89 + 1) + 16LL);
  v25 = *((_QWORD *)v13 + 2);
  v26 = *(_QWORD *)(v25 + 16);
  if ( *(_QWORD *)(v24 + 16) != v26 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v25, v26, v24);
    v63[3] = v13;
    v63[4] = v89;
    LODWORD(v17) = -1073741811;
    v63[5] = -1073741811LL;
    WdLogEvent5_WdError(v63);
    memset(v106, 0, 0x2CuLL);
    v88 = -1071775467;
    v61 = v106;
LABEL_74:
    v62 = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_65;
  }
  v27 = *((_QWORD *)v89 + 6);
  v28 = *(unsigned int *)(v27 + 4);
  if ( (v28 & 1) == 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v27, v28, v24);
    LODWORD(v17) = -1073741811;
    v65[3] = -1073741811LL;
    v65[4] = v13;
    v65[5] = (unsigned int)v97[1];
    v65[6] = v89;
    v65[7] = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v65);
    memset(v107, 0, 0x2CuLL);
    v88 = -1071775482;
    v61 = v107;
    goto LABEL_74;
  }
  if ( v19 != *((_QWORD *)v13 + 216) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v27, v28);
    *(_QWORD *)(v66 + 24) = 6118LL;
    WdLogEvent5_WdAssertion(v66);
    v23 = v89;
  }
  v29 = (unsigned int)(v97[2] - 1);
  if ( (unsigned int)v29 > 2 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v24);
    LODWORD(v17) = -1073741811;
    v67[3] = -1073741811LL;
    v67[4] = v13;
    v67[5] = v97[2];
    WdLogEvent5_WdError(v67);
    memset(v108, 0, 0x2CuLL);
    v88 = -1071774894;
    v61 = v108;
    goto LABEL_74;
  }
  v30 = (unsigned int)(v97[3] - 1);
  if ( (unsigned int)v30 > 3 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v30, v28, v24);
    LODWORD(v17) = -1073741811;
    v68[3] = -1073741811LL;
    v68[4] = v13;
    v68[5] = v97[3];
    WdLogEvent5_WdError(v68);
    memset(v109, 0, 0x2CuLL);
    v88 = -1071774907;
    v61 = v109;
    goto LABEL_74;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v19 + 2552),
          v13,
          (*(_DWORD *)(*((_QWORD *)v23 + 6) + 4LL) >> 6) & 0xF) )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    LODWORD(v17) = -1071775744;
    v69[3] = -1071775744LL;
    v69[4] = v13;
    v69[5] = (unsigned int)v97[1];
    v69[6] = v89;
    v69[7] = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v69);
    memset(v110, 0, 0x2CuLL);
    v88 = -1071775744;
    v61 = v110;
    goto LABEL_74;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v19 + 2552),
                        (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v13 + 82) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v19 + 2552),
         (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    LODWORD(v17) = -1071774910;
    v70[3] = -1071774910LL;
    v70[4] = v13;
    v70[5] = (unsigned int)v97[1];
    v70[6] = v89;
    v70[7] = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v70);
    memset(v111, 0, 0x2CuLL);
    v88 = -1071774910;
    v61 = v111;
    goto LABEL_74;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v19 + 2552),
          (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF) )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    LODWORD(v17) = -1071774972;
    v64[3] = -1071774972LL;
    v64[4] = v13;
    v64[5] = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
    v64[6] = (unsigned int)v97[1];
    v64[7] = v89;
    WdLogEvent5_WdDmmEvent(v64);
    memset(v112, 0, 0x2CuLL);
    v88 = -1071774972;
    v61 = v112;
    goto LABEL_74;
  }
  if ( *((struct DXGDEVICE **)v89 + 1) != v13 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
    LODWORD(v17) = -1073741811;
    v71[3] = -1073741811LL;
    v71[4] = v13;
    v71[5] = (unsigned int)v97[1];
    v71[6] = v89;
    v71[7] = *((_QWORD *)v89 + 1);
    WdLogEvent5_WdError(v71);
    memset(v113, 0, 0x2CuLL);
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v19,
      (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v113,
      v72,
      -1071775467);
    v73 = 2055LL;
LABEL_82:
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      v73,
      (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v89 + 1),
      (unsigned __int64)v13);
    goto LABEL_66;
  }
  v34 = *((_QWORD *)v89 + 6);
  if ( *((_DWORD *)v13 + 82) == 1 )
  {
    v35 = (*(_DWORD *)(v34 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2552), v35, 0);
    if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v89 + 6)
      || (unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v13, v35, v89) )
    {
      v37 = DXGDEVICE::PinPrimaryAllocations(v13, v35);
      v17 = v37;
      if ( v37 < 0 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v76[3] = v17;
        v76[4] = v13;
        v76[5] = (unsigned int)v97[1];
        v76[6] = v89;
        v76[7] = v35;
        WdLogEvent5_WdDmmEvent(v76);
      }
      Current = v100;
      goto LABEL_28;
    }
    v74 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    LODWORD(v17) = -1073741811;
    v74[3] = -1073741811LL;
    v74[4] = v13;
    v74[5] = (unsigned int)v97[1];
    v74[6] = v89;
    v74[7] = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v74);
    memset(v114, 0, 0x2CuLL);
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v19,
      (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v114,
      v75,
      -1071774928);
    v73 = 2056LL;
    goto LABEL_82;
  }
  if ( (*(_DWORD *)(v34 + 4) & 0x10) == 0 )
  {
LABEL_28:
    v38 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v38 + 24) = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v38 + 32) = v19;
    WdLogEvent5_WdDmmEvent(v38);
    if ( (int)v17 >= 0 )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v40, v39) + 303928) )
        v98[4] |= 1u;
      v41 = DXGDEVICE::SetDisplayMode(
              v13,
              v89,
              v97[2],
              (enum _D3DDDI_ROTATION)v97[3],
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v98[4],
              &v101,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v117);
      LODWORD(v17) = v41;
      if ( v41 == -1071774891 )
      {
        v82 = (_DWORD *)(v94 + 16);
        if ( v94 + 16 >= MmUserProbeAddress )
          v82 = (_DWORD *)MmUserProbeAddress;
        *v82 = v101;
      }
      else if ( v41 >= 0 )
      {
        v42 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(ADAPTER_DISPLAY **)(v19 + 2552),
                (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF);
        v46 = v42;
        if ( v42 < 0 )
        {
          v83 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
          v83[3] = v19;
          v83[4] = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
          v83[5] = v46;
          WdLogEvent5_WdError(v83);
        }
        v104[0] = 7LL;
        v104[1] = 0LL;
        if ( (int)DxgkStatusChangeNotify((int *)v104, v43, v45) < 0 )
        {
          v84 = WdLogNewEntry5_WdAssertion(v48, v47);
          *(_QWORD *)(v84 + 24) = 6321LL;
          WdLogEvent5_WdAssertion(v84);
        }
        v102 = *(_QWORD *)(v19 + 276);
        v8 = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v17 == -1071774920 )
    {
      v85 = *(void **)(v19 + 192);
      ObfReferenceObject(v85);
      v86 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v86 + 24) = v85;
      WdLogEvent5_WdDmmEvent(v86);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v116);
      DpiPollDisplayChildren(v85, 4LL, v117);
      ObfDereferenceObject(v85);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v89);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v99);
    if ( v95[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    if ( (int)v17 >= 0 && (*(int (__fastcall **)(__int64, _QWORD))(*((_QWORD *)Current + 12) + 408LL))(v102, v8) < 0 )
    {
      v87 = WdLogNewEntry5_WdAssertion(v50, v49);
      *(_QWORD *)(v87 + 24) = 6354LL;
      WdLogEvent5_WdAssertion(v87);
    }
LABEL_48:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v49);
    v53 = v93 == 0;
LABEL_49:
    if ( !v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v51, &EventProfilerExit, v52, v91);
    return (unsigned int)v17;
  }
  v77 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v77[3] = -1071775482LL;
  v77[4] = v13;
  v77[5] = (unsigned int)v97[1];
  v77[6] = v89;
  v77[7] = (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v77);
  memset(v115, 0, 0x2CuLL);
  DmmCacheDisplayModeChangeRequest(
    (DXGADAPTER *)v19,
    (*(_DWORD *)(*((_QWORD *)v89 + 6) + 4LL) >> 6) & 0xF,
    (__int64)v115,
    v78,
    -1071775482);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v89);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v99);
  if ( v95[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v95);
  if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v79);
  if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v80, &EventProfilerExit, v81, v91);
  return 3223191814LL;
}
