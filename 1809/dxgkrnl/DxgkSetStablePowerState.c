/*
 * XREFs of DxgkSetStablePowerState @ 0x1C022BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C5E20 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C705C (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int PairingAdapters; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  ADAPTER_RENDER **v18; // r14
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  ADAPTER_RENDER *v26; // rbx
  struct DXGADAPTER *v27; // r12
  __int64 v28; // rbx
  ADAPTER_RENDER *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  const GUID *v44; // r8
  int v45; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-A0h]
  char v47; // [rsp+40h] [rbp-98h]
  DXGADAPTER *v48; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v50[120]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v51; // [rsp+E8h] [rbp+10h]
  struct DXGADAPTER *v52; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGADAPTER *v53; // [rsp+F8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v47 = 1;
    v45 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2124);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2124);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 3602LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_30;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v51 = *v3;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v48, *v3, (struct _KTHREAD **)Current, &v53, 1);
  v8 = v53;
  if ( !v53 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = Current;
    *(_QWORD *)(v9 + 32) = (unsigned int)v51;
    WdLogEvent5_WdError(v9);
    if ( !v48 )
      goto LABEL_30;
    goto LABEL_29;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v53, 0, &v52, &v49, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 168, 0LL);
    *((_QWORD *)Current + 22) = KeGetCurrentThread();
    v18 = (ADAPTER_RENDER **)v52;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v52, 0LL);
    v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    if ( v19 >= 0 )
    {
      v26 = v18[316];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v26 + 56, 0LL);
      *((_QWORD *)v26 + 8) = KeGetCurrentThread();
      v27 = v52;
      v28 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v52 + 52));
      v29 = v18[316];
      if ( !v28 )
      {
        *((_QWORD *)v29 + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v29 + 56, 0LL);
        KeLeaveCriticalRegion();
        v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v33 + 24) = v27;
        *(_QWORD *)(v33 + 32) = Current;
        WdLogEvent5_WdWarning(v33);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
        *((_QWORD *)Current + 22) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
        KeLeaveCriticalRegion();
        if ( !v48 )
        {
LABEL_30:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
          if ( v47 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v34, &EventProfilerExit, v35, v45);
          }
          return 3221225485LL;
        }
LABEL_29:
        DXGADAPTER::ReleaseReference(v48);
        goto LABEL_30;
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v29 + 1480, 0LL);
      *((_QWORD *)v29 + 186) = KeGetCurrentThread();
      v39 = *(_DWORD *)(v28 + 28);
      if ( HIDWORD(v51) )
      {
        if ( !v39 )
        {
          ADAPTER_RENDER::AddStablePowerReference(v18[316]);
          v39 = *(_DWORD *)(v28 + 28);
        }
        *(_DWORD *)(v28 + 28) = v39 + 1;
      }
      else if ( v39 )
      {
        v41 = v39 - 1;
        *(_DWORD *)(v28 + 28) = v41;
        if ( !v41 )
          ADAPTER_RENDER::ReleaseStablePowerReference(v18[316]);
      }
      else
      {
        v40 = WdLogNewEntry5_WdWarning(v37, v36, v38);
        *(_QWORD *)(v40 + 24) = Current;
        *(_QWORD *)(v40 + 32) = v52;
        WdLogEvent5_WdWarning(v40);
      }
      *((_QWORD *)v29 + 186) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v29 + 1480, 0LL);
      KeLeaveCriticalRegion();
      v42 = (__int64)v18[316] + 56;
      *(_QWORD *)(v42 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v42, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( v48 )
        DXGADAPTER::ReleaseReference(v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v43, &EventProfilerExit, v44, v45);
      return 0LL;
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = v18;
      WdLogEvent5_WdWarning(v23);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( v48 )
        DXGADAPTER::ReleaseReference(v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v45);
      return (unsigned int)v19;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = v8;
    WdLogEvent5_WdWarning(v14);
    if ( v48 )
      DXGADAPTER::ReleaseReference(v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v45);
    return (unsigned int)PairingAdapters;
  }
}
