/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C01D7440
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // r8
  unsigned int v37; // r9d
  __int64 v38; // rcx
  const GUID *v39; // r8
  int v40; // [rsp+30h] [rbp-98h] BYREF
  __int64 v41; // [rsp+38h] [rbp-90h]
  char v42; // [rsp+40h] [rbp-88h]
  DXGADAPTER *v43; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v44[6]; // [rsp+58h] [rbp-70h]
  _QWORD v45[10]; // [rsp+70h] [rbp-58h] BYREF
  struct DXGADAPTER *v46; // [rsp+D8h] [rbp+10h] BYREF

  v3 = a1;
  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2130);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 9317LL;
    WdLogEvent5_WdError(v6);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v40);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v44 = *(_QWORD *)v3;
  v7 = *(_DWORD *)(v3 + 8);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v43, v44[0], Current, &v46, 1);
  v11 = v46;
  if ( !v46 )
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = Current;
    *(_QWORD *)(v12 + 32) = v44[0];
    WdLogEvent5_WdError(v12);
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v46 + 315) )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v13 + 24) = v11;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    goto LABEL_22;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v46, 0LL);
  v15 = COREADAPTERACCESS::AcquireExclusive(v45, (unsigned int)(v14 + 1));
  v19 = v15;
  if ( v15 >= 0 )
  {
    v24 = v44[1];
    if ( v44[1] >= *(_DWORD *)(*((_QWORD *)v11 + 315) + 80LL) )
    {
      v25 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v25 + 24) = v24;
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
LABEL_22:
      if ( v43 )
        DXGADAPTER::ReleaseReference(v43);
      goto LABEL_24;
    }
    if ( *((_BYTE *)DXGPROCESS::GetCurrent() + 322) )
    {
      *(_BYTE *)(3760 * v24 + *(_QWORD *)(*((_QWORD *)v11 + 315) + 112LL) + 1112) = v7 != 0;
      v34 = *((_QWORD *)v11 + 315);
      if ( v7 )
      {
        *(_BYTE *)(v34 + 276) = 1;
      }
      else
      {
        *(_BYTE *)(v34 + 276) = 0;
        v35 = 0;
        v36 = *((_QWORD *)v11 + 315);
        v37 = *(_DWORD *)(v36 + 80);
        if ( v37 )
        {
          while ( !*(_BYTE *)(3760LL * v35 + *(_QWORD *)(v36 + 112) + 1112) )
          {
            if ( ++v35 >= v37 )
              goto LABEL_42;
          }
          *(_BYTE *)(v36 + 276) = 1;
        }
      }
LABEL_42:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      if ( v43 )
        DXGADAPTER::ReleaseReference(v43);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, v40);
      return 0LL;
    }
    else
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v31 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v31);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      if ( v43 )
        DXGADAPTER::ReleaseReference(v43);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v32, &EventProfilerExit, v33, v40);
      return 3221225506LL;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
    if ( v43 )
      DXGADAPTER::ReleaseReference(v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v40);
    return (unsigned int)v19;
  }
}
