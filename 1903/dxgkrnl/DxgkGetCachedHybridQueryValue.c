/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C013EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024458 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C00445D4 (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, const GUID *a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r14
  ULONG64 v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGADAPTER *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r8
  _BYTE v38[16]; // [rsp+20h] [rbp-78h] BYREF
  struct _LUID v39[2]; // [rsp+30h] [rbp-68h]
  int v40; // [rsp+48h] [rbp-50h] BYREF
  __int64 v41; // [rsp+50h] [rbp-48h]
  char v42; // [rsp+58h] [rbp-40h]
  _BYTE v43[8]; // [rsp+60h] [rbp-38h] BYREF
  struct DXGADAPTER *v44; // [rsp+68h] [rbp-30h]
  char v45; // [rsp+70h] [rbp-28h]
  int GpuPreferenceDListState; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v47; // [rsp+B0h] [rbp+18h] BYREF

  v3 = (_DWORD *)a1;
  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2090);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 2090LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v10 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_OWORD *)&v39[0].LowPart = *(_OWORD *)v10;
    v11 = *(_DWORD *)(v10 + 16);
    GpuPreferenceDListState = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v38, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    if ( v11 )
    {
      v14 = v11 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v13, v12);
          *(_QWORD *)(v25 + 24) = 3380LL;
          WdLogEvent5_WdAssertion(v25);
          goto LABEL_11;
        }
        v15 = *((_DWORD *)Current + 98);
      }
      else
      {
        v15 = *((_DWORD *)Current + 99);
      }
      GpuPreferenceDListState = v15;
LABEL_11:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = GpuPreferenceDListState;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v16);
      if ( v42 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v17, &EventProfilerExit, v18, v40);
      }
      return 0LL;
    }
    Global = DXGGLOBAL::GetGlobal(v13, v12);
    v27 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v39[0].HighPart, &v47);
    v31 = v27;
    if ( v27 )
    {
      v44 = v27;
      v45 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
      DXGADAPTER::ReleaseReferenceNoTracking(v31);
      if ( *((_QWORD *)v31 + 320) )
      {
        if ( *((_DWORD *)v31 + 44) == 1 )
        {
          v36 = *((_QWORD *)v31 + 320);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v36 + 56, 0LL);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, *((unsigned int *)v31 + 52), v37);
          ExReleasePushLockSharedEx(v36 + 56, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v45 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
        goto LABEL_11;
      }
      v35 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = (int)v39[1].LowPart;
      *(_QWORD *)(v35 + 32) = (unsigned int)v39[0].HighPart;
      WdLogEvent5_WdError(v35);
      if ( v45 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v29, v28, v30);
      *(_QWORD *)(v22 + 24) = (int)v39[1].LowPart;
      *(_QWORD *)(v22 + 32) = (unsigned int)v39[0].HighPart;
      WdLogEvent5_WdError(v22);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v21);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v40);
  return 3221225485LL;
}
