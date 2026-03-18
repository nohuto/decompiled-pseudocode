/*
 * XREFs of DxgkSetDisplayMode @ 0x1C011E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013164 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0020FE4 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002100C (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0021020 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF180 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00D4500 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00D45D0 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C0134064 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiPollDisplayChildren @ 0x1C02632B4 (DpiPollDisplayChildren.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1, _QWORD *a2, int *a3)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r12
  ULONG64 v8; // rax
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rcx
  struct DXGALLOCATION *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned int v37; // r12d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  const GUID *v50; // r8
  __int64 v51; // rbx
  __int64 v52; // rcx
  bool v53; // zf
  __int64 v54; // rcx
  const GUID *v55; // r8
  __int64 v57; // rbx
  __int64 v58; // rcx
  const GUID *v59; // r8
  bool v60; // zf
  _QWORD *v61; // rbx
  __int64 v62; // rax
  _QWORD *v63; // rax
  _BYTE *v64; // r8
  __int64 v65; // rdx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _BYTE *v70; // r8
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _BYTE *v73; // r8
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  unsigned __int64 v77; // rdx
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rcx
  const GUID *v82; // r8
  _DWORD *v83; // rdx
  _QWORD *v84; // rax
  __int64 v85; // rax
  void *v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  struct DXGALLOCATION *v92; // [rsp+40h] [rbp-3B8h] BYREF
  struct DXGDEVICE *v93; // [rsp+48h] [rbp-3B0h] BYREF
  int v94; // [rsp+50h] [rbp-3A8h] BYREF
  __int64 v95; // [rsp+58h] [rbp-3A0h]
  char v96; // [rsp+60h] [rbp-398h]
  int *v97; // [rsp+68h] [rbp-390h]
  _QWORD v98[2]; // [rsp+70h] [rbp-388h] BYREF
  _BYTE v99[16]; // [rsp+80h] [rbp-378h] BYREF
  _BYTE v100[24]; // [rsp+90h] [rbp-368h] BYREF
  unsigned int v101; // [rsp+A8h] [rbp-350h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v102[4]; // [rsp+B0h] [rbp-348h]
  _BYTE v103[12]; // [rsp+C0h] [rbp-338h]
  struct _KTHREAD **v104; // [rsp+D0h] [rbp-328h]
  struct DXGDEVICE *v105; // [rsp+D8h] [rbp-320h] BYREF
  ULONG64 v106; // [rsp+E0h] [rbp-318h]
  _QWORD *v107; // [rsp+E8h] [rbp-310h]
  _BYTE v108[96]; // [rsp+F0h] [rbp-308h] BYREF
  int v109; // [rsp+150h] [rbp-2A8h] BYREF
  __int64 v110; // [rsp+158h] [rbp-2A0h]
  _BYTE v111[48]; // [rsp+160h] [rbp-298h] BYREF
  _BYTE v112[48]; // [rsp+190h] [rbp-268h] BYREF
  _BYTE v113[48]; // [rsp+1C0h] [rbp-238h] BYREF
  _BYTE v114[48]; // [rsp+1F0h] [rbp-208h] BYREF
  _BYTE v115[48]; // [rsp+220h] [rbp-1D8h] BYREF
  _BYTE v116[48]; // [rsp+250h] [rbp-1A8h] BYREF
  _BYTE v117[48]; // [rsp+280h] [rbp-178h] BYREF
  _BYTE v118[48]; // [rsp+2B0h] [rbp-148h] BYREF
  _BYTE v119[48]; // [rsp+2E0h] [rbp-118h] BYREF
  _BYTE v120[48]; // [rsp+310h] [rbp-E8h] BYREF
  _BYTE v121[48]; // [rsp+340h] [rbp-B8h] BYREF
  _QWORD v122[10]; // [rsp+370h] [rbp-88h] BYREF

  v97 = a3;
  v107 = a2;
  v106 = a1;
  memset(v122, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v122[1]);
  v122[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v122[3]) = 49;
  LOBYTE(v122[6]) = -1;
  v94 = -1;
  v95 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v96 = 1;
    v94 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 2018);
  }
  else
  {
    v96 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v94, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v104 = Current;
  if ( !Current )
  {
    v57 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    *(_QWORD *)(v57 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v57);
    goto LABEL_51;
  }
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  *(_OWORD *)v102 = *(_OWORD *)v8;
  *(_QWORD *)v103 = *(_QWORD *)(v8 + 16);
  *(_DWORD *)&v103[8] = *(_DWORD *)(v8 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v93, v102[0], Current, &v105);
  v10 = v105;
  if ( !v105 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v61[3] = -1073741811LL;
    v61[4] = PsGetCurrentProcess();
    v61[5] = (unsigned int)v102[0];
    WdLogEvent5_WdError(v61);
    if ( v93 )
    {
LABEL_53:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v93 + 2), v93);
    }
LABEL_51:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    v60 = v96 == 0;
    goto LABEL_95;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98, v105);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v100, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v100, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v99);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v108, (__int64)v10, 1, v11, 0);
  LODWORD(v13) = COREDEVICEACCESS::AcquireExclusive((__int64)v108, 2LL);
  if ( (int)v13 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v100);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( !v93 )
      goto LABEL_46;
    v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_44;
  }
  v14 = *((_QWORD *)v10 + 216);
  if ( !v14 )
  {
    v62 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v62 + 24) = v10;
    *(_QWORD *)(v62 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v100);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( !v93 )
      goto LABEL_51;
    goto LABEL_53;
  }
  ++*(_DWORD *)(*(_QWORD *)(v14 + 2520) + 240LL);
  v15 = (unsigned int)v102[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v92, v102[1]);
  v17 = v92;
  if ( !v92 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v63[3] = -1073741811LL;
    v63[4] = v10;
    v63[5] = v15;
    WdLogEvent5_WdError(v63);
    memset(v111, 0, 0x2CuLL);
    v64 = v111;
    v65 = 0xFFFFFFFFLL;
LABEL_67:
    DmmCacheDisplayModeChangeRequest(v14, v65, v64);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v92);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v100);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( v93 && _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v93 + 2), v93);
    goto LABEL_94;
  }
  v18 = *((_QWORD *)v10 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v92 + 1) + 16LL) + 16LL) != *(_QWORD *)(v18 + 16) )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v67[3] = v10;
    v67[4] = v92;
    v67[5] = -1073741811LL;
    WdLogEvent5_WdError(v67);
    memset(v112, 0, 0x2CuLL);
    v65 = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    v64 = v112;
    goto LABEL_67;
  }
  v19 = *((_QWORD *)v92 + 6);
  if ( (*(_DWORD *)(v19 + 4) & 1) == 0 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v66[3] = -1073741811LL;
    v66[4] = v10;
    v66[5] = v15;
    v66[6] = v92;
    v66[7] = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v66);
    memset(v113, 0, 0x2CuLL);
    v65 = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    v64 = v113;
    goto LABEL_67;
  }
  if ( v14 != *((_QWORD *)v10 + 216) )
  {
    v68 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v68 + 24) = 5637LL;
    WdLogEvent5_WdAssertion(v68);
    v17 = v92;
  }
  v20 = v102[2];
  v21 = (unsigned int)(v102[2] - 1);
  if ( (unsigned int)v21 > 2 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v69[3] = -1073741811LL;
    v69[4] = v10;
    v69[5] = v20;
    WdLogEvent5_WdError(v69);
    memset(v114, 0, 0x2CuLL);
    v70 = v114;
LABEL_76:
    DmmCacheDisplayModeChangeRequest(v14, (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF, v70);
LABEL_89:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v92);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v100);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( v93 && _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v93 + 2), v93);
LABEL_94:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    v60 = v96 == 0;
LABEL_95:
    if ( !v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v58, &EventProfilerExit, v59, v94);
    return 3221225485LL;
  }
  v22 = v102[3];
  v23 = (unsigned int)(v102[3] - 1);
  if ( (unsigned int)v23 > 3 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v71[3] = -1073741811LL;
    v71[4] = v10;
    v71[5] = v22;
    WdLogEvent5_WdError(v71);
    memset(v115, 0, 0x2CuLL);
    v70 = v115;
    goto LABEL_76;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v14 + 2520),
          v10,
          (*(_DWORD *)(*((_QWORD *)v17 + 6) + 4LL) >> 6) & 0xF) )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v25, v24, v26, v27);
    LODWORD(v13) = -1071775744;
    v72[3] = -1071775744LL;
    v72[4] = v10;
    v72[5] = v15;
    v72[6] = v92;
    v72[7] = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v72);
    memset(v116, 0, 0x2CuLL);
    v73 = v116;
LABEL_79:
    DmmCacheDisplayModeChangeRequest(v14, (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF, v73);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v92);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v100);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( v93 && _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v93 + 2), v93);
    goto LABEL_46;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v14 + 2520),
                        (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v10 + 82) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v14 + 2520),
         (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29, v28, v30, v31);
    LODWORD(v13) = -1071774910;
    v75[3] = -1071774910LL;
    v75[4] = v10;
    v75[5] = v15;
    v75[6] = v92;
    v75[7] = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v75);
    memset(v117, 0, 0x2CuLL);
    v73 = v117;
    goto LABEL_79;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v14 + 2520),
          (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF) )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33, v32, v34, v35);
    LODWORD(v13) = -1071774972;
    v74[3] = -1071774972LL;
    v74[4] = v10;
    v74[5] = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    v74[6] = v15;
    v74[7] = v92;
    WdLogEvent5_WdDmmEvent(v74);
    memset(v118, 0, 0x2CuLL);
    v73 = v118;
    goto LABEL_79;
  }
  if ( *((struct DXGDEVICE **)v92 + 1) != v10 )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v76[3] = -1073741811LL;
    v76[4] = v10;
    v76[5] = v15;
    v76[6] = v92;
    v76[7] = *((_QWORD *)v92 + 1);
    WdLogEvent5_WdError(v76);
    memset(v119, 0, 0x2CuLL);
    DmmCacheDisplayModeChangeRequest(v14, (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF, v119);
    v77 = 2055LL;
LABEL_88:
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      v77,
      (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v92 + 1),
      (unsigned __int64)v10);
    goto LABEL_89;
  }
  v36 = *((_QWORD *)v92 + 6);
  if ( *((_DWORD *)v10 + 82) == 1 )
  {
    v37 = (*(_DWORD *)(v36 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v14 + 2520), v37, 0);
    if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v92 + 6)
      || (unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v10, v37, v92) )
    {
      v43 = DXGDEVICE::PinPrimaryAllocations(v10, v37);
      v13 = v43;
      if ( v43 < 0 )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36, v32, v34, v35);
        v79[3] = v13;
        v79[4] = v10;
        v79[5] = v15;
        v79[6] = v92;
        v79[7] = v37;
        WdLogEvent5_WdDmmEvent(v79);
      }
      SLODWORD(v22) = v102[3];
      goto LABEL_28;
    }
    v78 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v40, v39, v41, v42);
    v78[3] = -1073741811LL;
    v78[4] = v10;
    v78[5] = v15;
    v78[6] = v92;
    v78[7] = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v78);
    memset(v120, 0, 0x2CuLL);
    DmmCacheDisplayModeChangeRequest(v14, (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF, v120);
    v77 = 2056LL;
    goto LABEL_88;
  }
  if ( (*(_DWORD *)(v36 + 4) & 0x10) == 0 )
  {
LABEL_28:
    v44 = WdLogNewEntry5_WdDmmEvent(v36, v32, v34, v35);
    *(_QWORD *)(v44 + 24) = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v44 + 32) = v14;
    WdLogEvent5_WdDmmEvent(v44);
    if ( (int)v13 >= 0 )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v45) + 20264) )
        v103[4] |= 1u;
      v46 = DXGDEVICE::SetDisplayMode(
              v10,
              v92,
              v102[2],
              (enum _D3DDDI_ROTATION)v22,
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v103[4],
              &v101,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v122);
      LODWORD(v13) = v46;
      if ( v46 == -1071774891 )
      {
        v83 = (_DWORD *)(v106 + 16);
        if ( v106 + 16 >= MmUserProbeAddress )
          v83 = (_DWORD *)MmUserProbeAddress;
        *v83 = v101;
      }
      else if ( v46 >= 0 )
      {
        v47 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v14 + 2520),
                (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF);
        v51 = v47;
        if ( v47 < 0 )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdError(v49);
          v84[3] = v14;
          v84[4] = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
          v84[5] = v51;
          WdLogEvent5_WdError(v84);
        }
        v109 = 7;
        v110 = 0LL;
        if ( (int)DxgkStatusChangeNotify(&v109, v48, v50) < 0 )
        {
          v85 = WdLogNewEntry5_WdAssertion(v52);
          *(_QWORD *)(v85 + 24) = 5840LL;
          WdLogEvent5_WdAssertion(v85);
        }
        *v107 = *(_QWORD *)(v14 + 276);
        *v97 = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v13 == -1071774920 )
    {
      v86 = *(void **)(v14 + 192);
      ObfReferenceObject(v86);
      v91 = WdLogNewEntry5_WdDmmEvent(v88, v87, v89, v90);
      *(_QWORD *)(v91 + 24) = v86;
      WdLogEvent5_WdDmmEvent(v91);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v108);
      DpiPollDisplayChildren(v86, 4LL, v122);
      ObfDereferenceObject(v86);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v92);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v100);
    if ( v98[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
    if ( !v93 )
      goto LABEL_46;
    v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_44:
    if ( v53 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v93 + 2), v93);
LABEL_46:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    if ( v96 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v54, &EventProfilerExit, v55, v94);
    }
    return (unsigned int)v13;
  }
  v80 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36, v32, v34, v35);
  v80[3] = -1071775482LL;
  v80[4] = v10;
  v80[5] = v15;
  v80[6] = v92;
  v80[7] = (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v80);
  memset(v121, 0, 0x2CuLL);
  DmmCacheDisplayModeChangeRequest(v14, (*(_DWORD *)(*((_QWORD *)v92 + 6) + 4LL) >> 6) & 0xF, v121);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v92);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v99);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v100);
  if ( v98[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v98);
  if ( v93 && _InterlockedExchangeAdd64((volatile signed __int64 *)v93 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v93 + 2), v93);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
  if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v81, &EventProfilerExit, v82, v94);
  return 3223191814LL;
}
