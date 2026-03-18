/*
 * XREFs of DxgkPresentRedirected @ 0x1C025C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C4A4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017530 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0qpqqqqpp @ 0x1C0042EEC (McTemplateK0qpqqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C0042FC4 (McTemplateK0qqxxqq.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B480 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C34B4 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00F6C90 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1, __int64 a2)
{
  ULONG64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v11; // r8
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r15
  PERESOURCE *Global; // rax
  DXGPUSHLOCK *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // r14d
  __int64 v51; // rdx
  __int64 v52; // rcx
  const GUID *v53; // r8
  struct DXGDEVICE *v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  struct _SLIST_ENTRY *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  const GUID *v66; // r8
  __int64 v67; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v68; // [rsp+60h] [rbp-5F8h]
  struct DXGDEVICE *v69; // [rsp+68h] [rbp-5F0h] BYREF
  int v70; // [rsp+70h] [rbp-5E8h] BYREF
  __int64 v71; // [rsp+78h] [rbp-5E0h]
  ULONG64 v72; // [rsp+80h] [rbp-5D8h]
  int *v73; // [rsp+88h] [rbp-5D0h]
  char v74; // [rsp+90h] [rbp-5C8h]
  int v75; // [rsp+98h] [rbp-5C0h] BYREF
  struct DXGDEVICE *v76; // [rsp+A0h] [rbp-5B8h] BYREF
  _BYTE v77[8]; // [rsp+A8h] [rbp-5B0h] BYREF
  char v78; // [rsp+B0h] [rbp-5A8h]
  _BYTE v79[8]; // [rsp+B8h] [rbp-5A0h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-598h]
  char v81; // [rsp+C8h] [rbp-590h]
  int v82; // [rsp+D0h] [rbp-588h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v83; // [rsp+D8h] [rbp-580h]
  DXGADAPTERSTOPRESETLOCKSHARED *v84; // [rsp+E0h] [rbp-578h]
  COREDEVICEACCESS *v85; // [rsp+E8h] [rbp-570h]
  ULONG64 v86; // [rsp+F0h] [rbp-568h]
  struct _SLIST_ENTRY *v87[2]; // [rsp+F8h] [rbp-560h] BYREF
  __int64 v88; // [rsp+108h] [rbp-550h] BYREF
  int v89; // [rsp+110h] [rbp-548h]
  int v90; // [rsp+114h] [rbp-544h]
  __int64 v91; // [rsp+118h] [rbp-540h]
  struct DXGDEVICE *v92; // [rsp+120h] [rbp-538h]
  _BYTE v93[160]; // [rsp+130h] [rbp-528h] BYREF
  _BYTE v94[1120]; // [rsp+1D0h] [rbp-488h] BYREF

  v2 = a1;
  v75 = -1073741823;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9, v8);
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  memset(v94, 0, sizeof(v94));
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v2 >= MmUserProbeAddress )
      v2 = MmUserProbeAddress;
    v12 = v94;
    v13 = 8LL;
    do
    {
      *v12 = *(_OWORD *)v2;
      v12[1] = *(_OWORD *)(v2 + 16);
      v12[2] = *(_OWORD *)(v2 + 32);
      v12[3] = *(_OWORD *)(v2 + 48);
      v12[4] = *(_OWORD *)(v2 + 64);
      v12[5] = *(_OWORD *)(v2 + 80);
      v12[6] = *(_OWORD *)(v2 + 96);
      v12 += 8;
      *(v12 - 1) = *(_OWORD *)(v2 + 112);
      v2 += 128LL;
      --v13;
    }
    while ( v13 );
    *v12 = *(_OWORD *)v2;
    v12[1] = *(_OWORD *)(v2 + 16);
    v12[2] = *(_OWORD *)(v2 + 32);
    v12[3] = *(_OWORD *)(v2 + 48);
    v12[4] = *(_OWORD *)(v2 + 64);
    v12[5] = *(_OWORD *)(v2 + 80);
    v2 = (ULONG64)v94;
  }
  v86 = v2;
  v71 = 0LL;
  v70 = 2147;
  v73 = &v75;
  v74 = 1;
  v72 = v2 & -(__int64)(bTracingEnabled != 0);
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v11, 2147);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v70, 2147LL);
  v68 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v2 + 16);
  if ( *(_DWORD *)(v2 + 16) != 9 || *(_DWORD *)(v2 + 1096) )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v18);
    if ( v74 )
    {
      if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v72,
          v20,
          *(_DWORD *)v72,
          *(_DWORD *)(v72 + 56),
          *(_QWORD *)(v72 + 80),
          *(_QWORD *)(v72 + 88),
          *(_DWORD *)(v72 + 1096),
          *v73);
    }
    else if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v72,
        v20,
        *(_DWORD *)v72,
        *(_QWORD *)(v72 + 8),
        *(_DWORD *)(v72 + 16),
        *(_DWORD *)(v72 + 84),
        *(_DWORD *)(v72 + 88),
        *v73,
        *(_DWORD *)(v72 + 20),
        *(_DWORD *)(v72 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v70);
    return 3221225485LL;
  }
  v21 = *(unsigned int *)v2;
  v76 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v69,
    *(_DWORD *)(v2 + 4),
    (struct _KTHREAD **)Current,
    &v76);
  v25 = v76;
  if ( !v76 )
  {
    v26 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = *(unsigned int *)(v2 + 4);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
    goto LABEL_15;
  }
  v27 = *(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v23, v22);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v77, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v77);
  v29 = (struct DXGPROCESS *)((char *)Current + 184);
  if ( *(int *)(v27 + 2452) < 2000 )
  {
    DXGPUSHLOCK::AcquireShared(v29);
    v43 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 >= *((_DWORD *)Current + 56) )
      goto LABEL_38;
    v31 = *((_QWORD *)Current + 26);
    v44 = *(_DWORD *)(v31 + 16 * v43 + 8);
    v33 = ((unsigned int)v21 >> 25) & 0x60;
    if ( (((unsigned int)v21 >> 25) & 0x60) != (*(_BYTE *)(v31 + 16 * v43 + 8) & 0x60)
      || (v44 & 0x2000) != 0
      || (v44 & 0x1F) == 0 )
    {
      goto LABEL_38;
    }
    v34 = 2LL * (unsigned int)v43;
    v35 = v44 & 0x1F;
    v36 = (_BYTE)v35 == 8;
  }
  else
  {
    DXGPUSHLOCK::AcquireShared(v29);
    v30 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 >= *((_DWORD *)Current + 56) )
      goto LABEL_38;
    v31 = *((_QWORD *)Current + 26);
    v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
    v33 = ((unsigned int)v21 >> 25) & 0x60;
    if ( (((unsigned int)v21 >> 25) & 0x60) != (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60)
      || (v32 & 0x2000) != 0
      || (v32 & 0x1F) == 0 )
    {
      goto LABEL_38;
    }
    v34 = 2LL * (unsigned int)v30;
    v35 = v32 & 0x1F;
    v36 = (_BYTE)v35 == 11;
  }
  if ( !v36 )
  {
    v37 = WdLogNewEntry5_WdError(v33, v35, v31);
    *(_QWORD *)(v37 + 24) = 267LL;
    WdLogEvent5_WdError(v37);
LABEL_38:
    v38 = 0LL;
    goto LABEL_39;
  }
  v38 = *(_QWORD *)(v31 + 8 * v34);
LABEL_39:
  ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v38 )
  {
    v42 = WdLogNewEntry5_WdError(v40, v39, v41);
    *(_QWORD *)(v42 + 24) = v21;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    if ( v78 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v77);
    if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
    goto LABEL_15;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v25 + 8);
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v77);
  v80 = v27;
  v81 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
  if ( *(_DWORD *)(v27 + 176) != 1 )
  {
    v49 = WdLogNewEntry5_WdError(v46, v45, v47);
    *(_QWORD *)(v49 + 24) = v27;
    v50 = -1073741823;
    *(_QWORD *)(v49 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v49);
    if ( v81 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v76);
    if ( v78 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v77);
    if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
LABEL_62:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v51);
    if ( v74 )
    {
      if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v72,
          v53,
          *(_DWORD *)v72,
          *(_DWORD *)(v72 + 56),
          *(_QWORD *)(v72 + 80),
          *(_QWORD *)(v72 + 88),
          *(_DWORD *)(v72 + 1096),
          *v73);
    }
    else if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v72,
        v53,
        *(_DWORD *)v72,
        *(_QWORD *)(v72 + 8),
        *(_DWORD *)(v72 + 16),
        *(_DWORD *)(v72 + 84),
        *(_DWORD *)(v72 + 88),
        *v73,
        *(_DWORD *)(v72 + 20),
        *(_DWORD *)(v72 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v52, &EventProfilerExit, v53, v70);
    return (unsigned int)v50;
  }
  v54 = v76;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v93, (__int64)v76, 2, v48, 0);
  v75 = COREDEVICEACCESS::AcquireShared((__int64)v93, 0xFFFFFFFF, 0LL);
  if ( v75 < 0 )
  {
    v58 = WdLogNewEntry5_WdError(v56, v55, v57);
    *(_QWORD *)(v58 + 24) = v75;
    WdLogEvent5_WdError(v58);
    v50 = v75;
LABEL_76:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
    if ( v81 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v76);
    if ( v78 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v77);
    if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
    goto LABEL_62;
  }
  v50 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v79,
          (struct COREDEVICEACCESS *)v93,
          (struct DXGADAPTER *)v27,
          v68,
          0LL,
          0);
  v75 = v50;
  if ( v50 < 0 )
    goto LABEL_76;
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
    (TOKEN_BINDING_GUARD *)&v82,
    v68,
    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v79,
    (struct COREDEVICEACCESS *)v93);
  v87[0] = 0LL;
  v87[1] = *(struct _SLIST_ENTRY **)(v27 + 2560);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v87);
  v62 = v87[0];
  if ( v87[0] )
  {
    LODWORD(v87[0]->Next) = (__int64)v87[0]->Next & 0xFFFCFEDF | 0x10120;
    v67 = v86;
    *((_QWORD *)&v62[29].Next + 1) = *(_QWORD *)(v86 + 8);
    v90 = 0;
    v88 = v67;
    v89 = v21;
    v91 = v27;
    v92 = v54;
    v50 = SubmitPresentHistoryToken(v68, (__int64)v93, (__int64)v79, 0LL, 1, 0LL, 0LL, v62, 0LL, &v88, 0xFFFFFFFF, 0LL);
    v75 = v50;
    v82 = v50;
    CVidSchSubmitData::~CVidSchSubmitData(v87);
    if ( v50 < 0 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v84);
      COREDEVICEACCESS::Release(v85);
      DxgkCancelSwapChainBinding(v83);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v84);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v85);
    }
    goto LABEL_76;
  }
  v63 = WdLogNewEntry5_WdLowResource(v59, 0LL, v60, v61);
  *(_QWORD *)(v63 + 24) = 1047LL;
  WdLogEvent5_WdLowResource(v63);
  CVidSchSubmitData::~CVidSchSubmitData(v87);
  if ( v82 < 0 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v84);
    COREDEVICEACCESS::Release(v85);
    DxgkCancelSwapChainBinding(v83);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v84);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v85);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v93);
  if ( v81 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v76);
  if ( v78 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v77);
  if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v64);
  if ( v74 )
  {
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v72,
        v66,
        *(_DWORD *)v72,
        *(_DWORD *)(v72 + 56),
        *(_QWORD *)(v72 + 80),
        *(_QWORD *)(v72 + 88),
        *(_DWORD *)(v72 + 1096),
        *v73);
  }
  else if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      v72,
      v66,
      *(_DWORD *)v72,
      *(_QWORD *)(v72 + 8),
      *(_DWORD *)(v72 + 16),
      *(_DWORD *)(v72 + 84),
      *(_DWORD *)(v72 + 88),
      *v73,
      *(_DWORD *)(v72 + 20),
      *(_DWORD *)(v72 + 24));
  }
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v65, &EventProfilerExit, v66, v70);
  return 3221225495LL;
}
