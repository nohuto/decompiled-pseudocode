/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C012F428
 * Callers:
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C012F3F4 (DxgkOpenAdapterFromLuidInternal.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C012F410 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00121E4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00DCB84 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00E2D78 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, const GUID *a3)
{
  struct _D3DKMT_OPENADAPTERFROMLUID *v5; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v19; // rax
  VIDSCH_EXPORT **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  unsigned int v26; // r14d
  _DWORD *p_hAdapter; // r8
  __int64 v28; // rcx
  const GUID *v29; // r8
  LUID AdapterLuid; // [rsp+20h] [rbp-48h]
  unsigned int hAdapter; // [rsp+28h] [rbp-40h] BYREF
  int v32; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33; // [rsp+38h] [rbp-30h]
  char v34; // [rsp+40h] [rbp-28h]
  _BYTE v35[8]; // [rsp+48h] [rbp-20h] BYREF
  struct DXGADAPTER *v36; // [rsp+50h] [rbp-18h]
  char v37; // [rsp+58h] [rbp-10h]
  unsigned __int64 v38; // [rsp+80h] [rbp+18h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2082);
  if ( a2 )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v5->AdapterLuid;
    hAdapter = v5->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v32);
    }
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal(v6);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v38);
  v14 = v10;
  if ( !v10 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v15[3] = AdapterLuid.LowPart;
    v15[4] = AdapterLuid.HighPart;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_14;
  }
  if ( (*((_DWORD *)v10 + 600) & 4) != 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v19 + 24) = v14;
    WdLogEvent5_WdWarning(v19);
    DXGADAPTER::ReleaseReference(v14);
    goto LABEL_25;
  }
  v36 = v10;
  v37 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
  if ( *((_DWORD *)v14 + 44) == 1 && !*((_BYTE *)v14 + 2429) )
  {
    v20 = (VIDSCH_EXPORT **)*((_QWORD *)v14 + 316);
    if ( v20 )
    {
      if ( ADAPTER_RENDER::IsProcessGpuAccessBlocked(v20, Current) )
      {
        v23 = WdLogNewEntry5_WdEvent(v22, v21);
        *(_QWORD *)(v23 + 24) = v14;
        *(_QWORD *)(v23 + 32) = Current;
        WdLogEvent5_WdEvent(v23);
        DXGADAPTER::ReleaseReference(v14);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
LABEL_25:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v24, &EventProfilerExit, v25, v32);
        return 3221225506LL;
      }
    }
  }
  v26 = DXGADAPTER::CreateHandle(v14, Current, &hAdapter);
  DXGADAPTER::ReleaseReference(v14);
  if ( a2 )
  {
    p_hAdapter = &a1->hAdapter;
    if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
      p_hAdapter = (_DWORD *)MmUserProbeAddress;
    *p_hAdapter = hAdapter;
  }
  else
  {
    a1->hAdapter = hAdapter;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v32);
  return v26;
}
