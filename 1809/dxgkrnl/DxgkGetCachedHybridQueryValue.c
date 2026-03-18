/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C00E59D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002195C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C003DC1C (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, const GUID *a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  const GUID *v9; // r8
  __int64 v11; // rax
  DXGGLOBAL *Global; // rax
  unsigned int HighPart; // ebx
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rcx
  struct DXGADAPTER *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rbx
  __int64 v23; // r8
  _BYTE v24[16]; // [rsp+20h] [rbp-68h] BYREF
  struct _LUID v25[2]; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]
  char v28; // [rsp+50h] [rbp-38h]
  _BYTE v29[8]; // [rsp+58h] [rbp-30h] BYREF
  struct DXGADAPTER *v30; // [rsp+60h] [rbp-28h]
  char v31; // [rsp+68h] [rbp-20h]
  int GpuPreferenceDListState; // [rsp+98h] [rbp+10h]
  unsigned __int64 v33; // [rsp+A0h] [rbp+18h] BYREF

  v3 = (_DWORD *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2090);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2090);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v6 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v25[0].LowPart = *v6;
    GpuPreferenceDListState = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v24, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    if ( v25[1].HighPart )
    {
      GpuPreferenceDListState = *((_DWORD *)Current + 104);
LABEL_8:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = GpuPreferenceDListState;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v8, &EventProfilerExit, v9, v26);
      }
      return 0LL;
    }
    Global = DXGGLOBAL::GetGlobal(v7);
    HighPart = v25[0].HighPart;
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v25[0].HighPart, &v33);
    v16 = v14;
    if ( v14 )
    {
      v30 = v14;
      v31 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      DXGADAPTER::ReleaseReference(v16);
      if ( *((_QWORD *)v16 + 316) )
      {
        if ( *((_DWORD *)v16 + 44) == 1 )
        {
          v22 = *((_QWORD *)v16 + 316);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v22 + 56, 0LL);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, *((unsigned int *)v16 + 52), v23);
          ExReleasePushLockSharedEx(v22 + 56, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v31 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
        goto LABEL_8;
      }
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = (int)v25[1].LowPart;
      *(_QWORD *)(v19 + 32) = HighPart;
      WdLogEvent5_WdError(v19);
      if ( v31 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v17 + 24) = (int)v25[1].LowPart;
      *(_QWORD *)(v17 + 32) = HighPart;
      WdLogEvent5_WdError(v17);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v26);
  return 3221225485LL;
}
