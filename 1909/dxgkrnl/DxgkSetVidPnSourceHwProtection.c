/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C0205DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 v43; // r8
  unsigned int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rcx
  const GUID *v47; // r8
  int v48; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-E0h]
  char v50; // [rsp+40h] [rbp-D8h]
  DXGADAPTER *v51; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v52[4]; // [rsp+58h] [rbp-C0h]
  struct DXGADAPTER *v53; // [rsp+68h] [rbp-B0h] BYREF
  _QWORD v54[18]; // [rsp+70h] [rbp-A8h] BYREF

  v3 = a1;
  v48 = -1;
  v49 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v50 = 1;
    v48 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2130);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 2130LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = 10067LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v11);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v48);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v52 = *(_QWORD *)v3;
  v15 = *(_DWORD *)(v3 + 8);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v51, v52[0], Current, &v53, 1);
  v19 = v53;
  if ( !v53 )
  {
    v20 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = Current;
    *(_QWORD *)(v20 + 32) = v52[0];
    WdLogEvent5_WdError(v20);
    goto LABEL_15;
  }
  if ( !*((_QWORD *)v53 + 319) )
  {
    v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v21 + 24) = v19;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_15;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v53, 0LL);
  v23 = COREADAPTERACCESS::AcquireExclusive(v54, (unsigned int)(v22 + 1));
  v27 = v23;
  if ( v23 >= 0 )
  {
    v32 = v52[1];
    if ( v52[1] >= *(_DWORD *)(*((_QWORD *)v19 + 319) + 80LL) )
    {
      v33 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v33 + 24) = v32;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
LABEL_15:
      if ( v51 )
        DXGADAPTER::ReleaseReferenceNoTracking(v51);
      goto LABEL_7;
    }
    if ( *((_BYTE *)DXGPROCESS::GetCurrent(v25, v24) + 298) )
    {
      *(_BYTE *)(3968 * v32 + *(_QWORD *)(*((_QWORD *)v19 + 319) + 112LL) + 1112) = v15 != 0;
      v41 = *((_QWORD *)v19 + 319);
      if ( v15 )
      {
        *(_BYTE *)(v41 + 380) = 1;
      }
      else
      {
        *(_BYTE *)(v41 + 380) = 0;
        v42 = 0;
        v43 = *((_QWORD *)v19 + 319);
        v44 = *(_DWORD *)(v43 + 80);
        if ( v44 )
        {
          while ( !*(_BYTE *)(3968LL * v42 + *(_QWORD *)(v43 + 112) + 1112) )
          {
            if ( ++v42 >= v44 )
              goto LABEL_42;
          }
          *(_BYTE *)(v43 + 380) = 1;
        }
      }
LABEL_42:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      if ( v51 )
        DXGADAPTER::ReleaseReferenceNoTracking(v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v45);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v46, &EventProfilerExit, v47, v48);
      return 0LL;
    }
    else
    {
      v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v37 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v37);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      if ( v51 )
        DXGADAPTER::ReleaseReferenceNoTracking(v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v38);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v48);
      return 3221225506LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v25, v24, v26);
    *(_QWORD *)(v28 + 24) = v27;
    WdLogEvent5_WdError(v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
    if ( v51 )
      DXGADAPTER::ReleaseReferenceNoTracking(v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v29);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, v48);
    return (unsigned int)v27;
  }
}
