/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C0130CE0
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

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, const GUID *a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  const GUID *v9; // r8
  __int64 v11; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // r8
  DWORD GpuPreferenceDListState; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _LUID v29[2]; // [rsp+20h] [rbp-68h]
  _BYTE v30[16]; // [rsp+30h] [rbp-58h] BYREF
  int v31; // [rsp+40h] [rbp-48h] BYREF
  __int64 v32; // [rsp+48h] [rbp-40h]
  char v33; // [rsp+50h] [rbp-38h]
  _BYTE v34[8]; // [rsp+58h] [rbp-30h] BYREF
  struct DXGADAPTER *v35; // [rsp+60h] [rbp-28h]
  char v36; // [rsp+68h] [rbp-20h]
  unsigned __int64 v37; // [rsp+98h] [rbp+10h] BYREF

  v3 = (_DWORD *)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2091);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2091);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v6 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v29[0].LowPart = *v6;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v30, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    if ( v29[1].HighPart )
    {
      if ( *((_DWORD *)Current + 104) )
        v29[0].LowPart = *((_DWORD *)Current + 104);
      else
        *((_DWORD *)Current + 104) = v29[0].LowPart;
LABEL_9:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = v29[0].LowPart;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v8, &EventProfilerExit, v9, v31);
      }
      return 0LL;
    }
    Global = DXGGLOBAL::GetGlobal(v7);
    v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v29[0].HighPart, &v37);
    v15 = v13;
    if ( v13 )
    {
      v35 = v13;
      v36 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
      DXGADAPTER::ReleaseReference(v15);
      if ( *((_QWORD *)v15 + 316) )
      {
        if ( *((_DWORD *)v15 + 44) == 1 )
        {
          v21 = *((_QWORD *)v15 + 316);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v21 + 56, 0LL);
          *(_QWORD *)(v21 + 64) = KeGetCurrentThread();
          v22 = *((unsigned int *)v15 + 52);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, (unsigned int)v22, v23);
          if ( GpuPreferenceDListState )
          {
            v29[0].LowPart = GpuPreferenceDListState;
          }
          else
          {
            v27 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v22);
            if ( v27 )
            {
              *(_DWORD *)(v27 + 72) = v29[0].LowPart;
            }
            else
            {
              v28 = WdLogNewEntry5_WdWarning(0LL, v25, v26);
              *(_QWORD *)(v28 + 24) = v22;
              WdLogEvent5_WdWarning(v28);
            }
          }
          *(_QWORD *)(v21 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v21 + 56, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v36 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
        goto LABEL_9;
      }
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = (int)v29[1].LowPart;
      *(_QWORD *)(v18 + 32) = (unsigned int)v29[0].HighPart;
      WdLogEvent5_WdError(v18);
      if ( v36 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v16 + 24) = (int)v29[1].LowPart;
      *(_QWORD *)(v16 + 32) = (unsigned int)v29[0].HighPart;
      WdLogEvent5_WdError(v16);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v31);
  return 3221225485LL;
}
