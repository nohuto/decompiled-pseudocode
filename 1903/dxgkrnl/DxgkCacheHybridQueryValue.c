/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C0140C60
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

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, const GUID *a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v9; // r8
  ULONG64 v10; // rax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  DWORD v15; // eax
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
  struct DXGADAPTER *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdi
  __int64 v38; // r8
  DWORD GpuPreferenceDListState; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE v44[16]; // [rsp+20h] [rbp-68h] BYREF
  struct _LUID v45[2]; // [rsp+30h] [rbp-58h]
  int v46; // [rsp+48h] [rbp-40h] BYREF
  __int64 v47; // [rsp+50h] [rbp-38h]
  char v48; // [rsp+58h] [rbp-30h]
  _BYTE v49[8]; // [rsp+60h] [rbp-28h] BYREF
  struct DXGADAPTER *v50; // [rsp+68h] [rbp-20h]
  char v51; // [rsp+70h] [rbp-18h]
  unsigned __int64 v52; // [rsp+98h] [rbp+10h] BYREF

  v3 = (_DWORD *)a1;
  v46 = -1;
  v47 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2091);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 2091LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v10 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_OWORD *)&v45[0].LowPart = *(_OWORD *)v10;
    v11 = *(_DWORD *)(v10 + 16);
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v44, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
    if ( v11 )
    {
      v14 = v11 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v13, v12);
          *(_QWORD *)(v25 + 24) = 3530LL;
          WdLogEvent5_WdAssertion(v25);
          goto LABEL_11;
        }
        v15 = *((_DWORD *)Current + 98);
        if ( !v15 )
        {
          *((_DWORD *)Current + 98) = v45[0].LowPart;
LABEL_11:
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_DWORD *)MmUserProbeAddress;
          *v3 = v45[0].LowPart;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v16);
          if ( v48 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v17, &EventProfilerExit, v18, v46);
          }
          return 0LL;
        }
      }
      else
      {
        v15 = *((_DWORD *)Current + 99);
        if ( !v15 )
        {
          *((_DWORD *)Current + 99) = v45[0].LowPart;
          goto LABEL_11;
        }
      }
      v45[0].LowPart = v15;
      goto LABEL_11;
    }
    Global = DXGGLOBAL::GetGlobal(v13, v12);
    v27 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v45[0].HighPart, &v52);
    v31 = v27;
    if ( v27 )
    {
      v50 = v27;
      v51 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
      DXGADAPTER::ReleaseReferenceNoTracking(v31);
      if ( *((_QWORD *)v31 + 320) )
      {
        if ( *((_DWORD *)v31 + 44) == 1 )
        {
          v36 = *((_QWORD *)v31 + 320);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v36 + 56, 0LL);
          *(_QWORD *)(v36 + 64) = KeGetCurrentThread();
          v37 = *((unsigned int *)v31 + 52);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, (unsigned int)v37, v38);
          if ( GpuPreferenceDListState )
          {
            v45[0].LowPart = GpuPreferenceDListState;
          }
          else
          {
            v42 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v37);
            if ( v42 )
            {
              *(_DWORD *)(v42 + 72) = v45[0].LowPart;
            }
            else
            {
              v43 = WdLogNewEntry5_WdWarning(0LL, v40, v41);
              *(_QWORD *)(v43 + 24) = v37;
              WdLogEvent5_WdWarning(v43);
            }
          }
          *(_QWORD *)(v36 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v36 + 56, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v51 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
        goto LABEL_11;
      }
      v35 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = (int)v45[1].LowPart;
      *(_QWORD *)(v35 + 32) = (unsigned int)v45[0].HighPart;
      WdLogEvent5_WdError(v35);
      if ( v51 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v29, v28, v30);
      *(_QWORD *)(v22 + 24) = (int)v45[1].LowPart;
      *(_QWORD *)(v22 + 32) = (unsigned int)v45[0].HighPart;
      WdLogEvent5_WdError(v22);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v21);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v46);
  return 3221225485LL;
}
