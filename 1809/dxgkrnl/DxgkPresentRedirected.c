/*
 * XREFs of DxgkPresentRedirected @ 0x1C0227800
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0qpqqqpp @ 0x1C0021C90 (McTemplateK0qpqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C0021D4C (McTemplateK0qqxxqq.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00546BC (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DC06C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C012DF60 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall DxgkPresentRedirected(ULONG64 a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const GUID *v8; // r8
  _OWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v12; // r13
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  PERESOURCE *Global; // rax
  int DriverVersion; // ebx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rbx
  bool v26; // zf
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // esi
  __int64 v38; // rcx
  const GUID *v39; // r8
  struct DXGDEVICE *v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  const GUID *v47; // r8
  ULONG64 v48; // rbx
  struct DXGDEVICE *v49; // [rsp+50h] [rbp-5B8h] BYREF
  int v50; // [rsp+58h] [rbp-5B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-5A8h]
  ULONG64 v52; // [rsp+68h] [rbp-5A0h]
  int *v53; // [rsp+70h] [rbp-598h]
  char v54; // [rsp+78h] [rbp-590h]
  int v55; // [rsp+80h] [rbp-588h] BYREF
  struct DXGDEVICE *v56; // [rsp+88h] [rbp-580h] BYREF
  char v57[8]; // [rsp+98h] [rbp-570h] BYREF
  char v58; // [rsp+A0h] [rbp-568h]
  char v59[8]; // [rsp+A8h] [rbp-560h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-558h]
  char v61; // [rsp+B8h] [rbp-550h]
  ULONG64 v62; // [rsp+C0h] [rbp-548h]
  struct VIDSCH_SUBMIT_DATA_BASE *v63[2]; // [rsp+C8h] [rbp-540h] BYREF
  int v64; // [rsp+D8h] [rbp-530h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v65; // [rsp+E0h] [rbp-528h]
  _QWORD v66[5]; // [rsp+E8h] [rbp-520h] BYREF
  struct _KTHREAD **v67[12]; // [rsp+110h] [rbp-4F8h] BYREF
  _BYTE v68[1120]; // [rsp+170h] [rbp-498h] BYREF

  v55 = -1073741823;
  Current = DXGPROCESS::GetCurrent();
  v56 = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    *(_QWORD *)(v4 + 32) = PsGetCurrentProcess(v6, v5);
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v9 = v68;
    v10 = 8LL;
    do
    {
      *v9 = *(_OWORD *)a1;
      v9[1] = *(_OWORD *)(a1 + 16);
      v9[2] = *(_OWORD *)(a1 + 32);
      v9[3] = *(_OWORD *)(a1 + 48);
      v9[4] = *(_OWORD *)(a1 + 64);
      v9[5] = *(_OWORD *)(a1 + 80);
      v9[6] = *(_OWORD *)(a1 + 96);
      v9 += 8;
      *(v9 - 1) = *(_OWORD *)(a1 + 112);
      a1 += 128LL;
      --v10;
    }
    while ( v10 );
    *v9 = *(_OWORD *)a1;
    v9[1] = *(_OWORD *)(a1 + 16);
    v9[2] = *(_OWORD *)(a1 + 32);
    v9[3] = *(_OWORD *)(a1 + 48);
    v9[4] = *(_OWORD *)(a1 + 64);
    v9[5] = *(_OWORD *)(a1 + 80);
    a1 = (ULONG64)v68;
  }
  v62 = a1;
  v51 = 0LL;
  v50 = 2147;
  v53 = &v55;
  v54 = 1;
  v52 = a1 & -(__int64)(bTracingEnabled != 0);
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v8, 2147);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2147);
  v12 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 16) != 9 || *(_DWORD *)(a1 + 1096) )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_41;
  }
  v14 = *(unsigned int *)a1;
  v56 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v49,
    *(_DWORD *)(a1 + 4),
    (struct _KTHREAD **)Current,
    &v56);
  v16 = v56;
  if ( !v56 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)(a1 + 4);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( !v49 || _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v18 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v15);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57);
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v18);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v21 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  if ( DriverVersion < 2000 )
  {
    if ( (unsigned int)v21 >= *((_DWORD *)Current + 62) )
      goto LABEL_34;
    v22 = *((_QWORD *)Current + 29);
    v27 = *(_DWORD *)(v22 + 16 * v21 + 8);
    v24 = ((unsigned int)v14 >> 25) & 0x60;
    if ( (((unsigned int)v14 >> 25) & 0x60) != (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
      || (v27 & 0x2000) != 0
      || (v27 & 0x1F) == 0 )
    {
      goto LABEL_34;
    }
    v25 = 2LL * (unsigned int)v21;
    v26 = (v27 & 0x1F) == 8;
  }
  else
  {
    if ( (unsigned int)v21 >= *((_DWORD *)Current + 62) )
      goto LABEL_34;
    v22 = *((_QWORD *)Current + 29);
    v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
    v24 = ((unsigned int)v14 >> 25) & 0x60;
    if ( (((unsigned int)v14 >> 25) & 0x60) != (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
      || (v23 & 0x2000) != 0
      || (v23 & 0x1F) == 0 )
    {
      goto LABEL_34;
    }
    v25 = 2LL * (unsigned int)v21;
    v26 = (v23 & 0x1F) == 11;
  }
  if ( !v26 )
  {
    v28 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v28 + 24) = 316LL;
    WdLogEvent5_WdError(v28);
LABEL_34:
    v29 = 0LL;
    goto LABEL_35;
  }
  v29 = *(_QWORD *)(v22 + 8 * v25);
LABEL_35:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v29 )
  {
    v31 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v31 + 24) = v14;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( !v49 || _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_41;
LABEL_40:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
LABEL_41:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v52,
          v33,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v52,
        v33,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v32, &EventProfilerExit, v33, v50);
    return 3221225485LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v16 + 8);
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
  v60 = v18;
  v61 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
  if ( *(_DWORD *)(v18 + 176) != 1 )
  {
    v36 = WdLogNewEntry5_WdError(v34);
    *(_QWORD *)(v36 + 24) = v18;
    v37 = -1073741823;
    *(_QWORD *)(v36 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v36);
    if ( v61 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v56);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
LABEL_62:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v52,
          v39,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v52,
        v39,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v38, &EventProfilerExit, v39, v50);
    return (unsigned int)v37;
  }
  v40 = v56;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v56, 2, v35, 0);
  v55 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v67);
  if ( v55 < 0 )
  {
    v42 = WdLogNewEntry5_WdError(v41);
    *(_QWORD *)(v42 + 24) = v55;
    WdLogEvent5_WdError(v42);
    v37 = v55;
LABEL_76:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
    if ( v61 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v56);
    if ( v58 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
    if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    goto LABEL_62;
  }
  v37 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v59,
          v67,
          (struct DXGADAPTER *)v18,
          v12,
          0LL,
          0);
  v55 = v37;
  if ( v37 < 0 )
    goto LABEL_76;
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v64, v12);
  v63[0] = 0LL;
  v63[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v18 + 2528);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v63);
  v44 = v63[0];
  if ( v63[0] )
  {
    *(_DWORD *)v63[0] = *(_DWORD *)v63[0] & 0xFFFCFEDF | 0x10120;
    v48 = v62;
    *((_QWORD *)v44 + 59) = *(_QWORD *)(v62 + 8);
    memset(v66, 0, 0x20uLL);
    v66[0] = v48;
    LODWORD(v66[1]) = v14;
    v66[2] = v18;
    v66[3] = v40;
    v37 = SubmitPresentHistoryToken(
            v12,
            (struct COREDEVICEACCESS *)v67,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v59,
            0LL,
            1,
            0LL,
            0LL,
            v44,
            0LL,
            (struct _PRESENT_REDIRECTED_PARAMS *)v66);
    v55 = v37;
    v64 = v37;
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v63);
    if ( v37 < 0 )
      DxgkCancelSwapChainBinding(v65);
    goto LABEL_76;
  }
  v45 = WdLogNewEntry5_WdLowResource(v43);
  *(_QWORD *)(v45 + 24) = 1015LL;
  WdLogEvent5_WdLowResource(v45);
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v63);
  if ( v64 < 0 )
    DxgkCancelSwapChainBinding(v65);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
  if ( v61 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v56);
  if ( v58 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
  if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v54 )
  {
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v52,
        v47,
        *(_DWORD *)v52,
        *(_DWORD *)(v52 + 56),
        *(_QWORD *)(v52 + 80),
        *(_QWORD *)(v52 + 88),
        *(_DWORD *)(v52 + 1096),
        *v53);
  }
  else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqpp(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      v52,
      v47,
      *(_DWORD *)v52,
      *(_QWORD *)(v52 + 8),
      *(_DWORD *)(v52 + 16),
      *(_DWORD *)(v52 + 88),
      *v53,
      *(_DWORD *)(v52 + 20),
      *(_DWORD *)(v52 + 24));
  }
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v46, &EventProfilerExit, v47, v50);
  return 3221225495LL;
}
