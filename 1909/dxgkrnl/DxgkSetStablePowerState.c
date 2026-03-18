/*
 * XREFs of DxgkSetStablePowerState @ 0x1C0260B60
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F4E24 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F62E8 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, const GUID *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int PairingAdapters; // r14d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  ADAPTER_RENDER **v28; // r14
  __int64 v29; // r8
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  ADAPTER_RENDER *v38; // rbx
  struct DXGADAPTER *v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  ADAPTER_RENDER *v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  int v57; // [rsp+40h] [rbp-108h] BYREF
  __int64 v58; // [rsp+48h] [rbp-100h]
  char v59; // [rsp+50h] [rbp-F8h]
  unsigned int v60[2]; // [rsp+58h] [rbp-F0h]
  struct DXGADAPTER *v61; // [rsp+60h] [rbp-E8h] BYREF
  DXGADAPTER *v62; // [rsp+68h] [rbp-E0h] BYREF
  struct DXGADAPTER *v63; // [rsp+78h] [rbp-D0h] BYREF
  unsigned __int64 v64; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v65[144]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (_QWORD *)a1;
  v57 = -1;
  v58 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v59 = 1;
    v57 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2124);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v57, 2124LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = 3647LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v11);
    if ( v59 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v57);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v60 = *v3;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v62, v60[0], (struct _KTHREAD **)Current, &v63, 1);
  v18 = v63;
  if ( !v63 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = Current;
    *(_QWORD *)(v19 + 32) = v60[0];
    WdLogEvent5_WdError(v19);
    goto LABEL_15;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v63, 0LL, &v61, &v64, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 160, 0LL);
    *((_QWORD *)Current + 21) = KeGetCurrentThread();
    v28 = (ADAPTER_RENDER **)v61;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v61, 0LL);
    v30 = COREADAPTERACCESS::AcquireShared((__int64)v65, 0xFFFFFFFFLL, v29);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v28);
    if ( v30 >= 0 )
    {
      v38 = v28[320];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v38 + 56, 0LL);
      *((_QWORD *)v38 + 8) = KeGetCurrentThread();
      v39 = v61;
      v40 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v61 + 52));
      if ( !v40 )
      {
        v41 = (__int64)v28[320] + 56;
        *(_QWORD *)(v41 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v41, 0LL);
        KeLeaveCriticalRegion();
        v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
        *(_QWORD *)(v45 + 24) = v39;
        *(_QWORD *)(v45 + 32) = Current;
        WdLogEvent5_WdWarning(v45);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
        *((_QWORD *)Current + 21) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
        KeLeaveCriticalRegion();
LABEL_15:
        if ( v62 )
          DXGADAPTER::ReleaseReferenceNoTracking(v62);
        goto LABEL_7;
      }
      v46 = v28[320];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v46 + 1480, 0LL);
      *((_QWORD *)v46 + 186) = KeGetCurrentThread();
      v50 = *(_DWORD *)(v40 + 28);
      if ( v60[1] )
      {
        if ( !v50 )
        {
          ADAPTER_RENDER::AddStablePowerReference(v28[320]);
          v50 = *(_DWORD *)(v40 + 28);
        }
        *(_DWORD *)(v40 + 28) = v50 + 1;
      }
      else if ( v50 )
      {
        v52 = v50 - 1;
        *(_DWORD *)(v40 + 28) = v52;
        if ( !v52 )
          ADAPTER_RENDER::ReleaseStablePowerReference(v28[320]);
      }
      else
      {
        v51 = WdLogNewEntry5_WdWarning(v48, v47, v49);
        *(_QWORD *)(v51 + 24) = Current;
        *(_QWORD *)(v51 + 32) = v61;
        WdLogEvent5_WdWarning(v51);
      }
      *((_QWORD *)v46 + 186) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v46 + 1480, 0LL);
      KeLeaveCriticalRegion();
      v53 = (__int64)v28[320] + 56;
      *(_QWORD *)(v53 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v53, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
      *((_QWORD *)Current + 21) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
      KeLeaveCriticalRegion();
      if ( v62 )
        DXGADAPTER::ReleaseReferenceNoTracking(v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v54);
      if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v55, &EventProfilerExit, v56, v57);
      return 0LL;
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v34 + 24) = v28;
      WdLogEvent5_WdWarning(v34);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
      *((_QWORD *)Current + 21) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
      KeLeaveCriticalRegion();
      if ( v62 )
        DXGADAPTER::ReleaseReferenceNoTracking(v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v35);
      if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v36, &EventProfilerExit, v37, v57);
      return (unsigned int)v30;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v18;
    WdLogEvent5_WdWarning(v24);
    if ( v62 )
      DXGADAPTER::ReleaseReferenceNoTracking(v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v25);
    if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v57);
    return (unsigned int)PairingAdapters;
  }
}
