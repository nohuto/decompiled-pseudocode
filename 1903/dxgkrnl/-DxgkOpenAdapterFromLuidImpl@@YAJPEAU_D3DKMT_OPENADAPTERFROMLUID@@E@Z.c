/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01301C8
 * Callers:
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C013018C (DxgkOpenAdapterFromLuidInternal.c)
 *     DxgkOpenAdapterFromLuid @ 0x1C01301B0 (DxgkOpenAdapterFromLuid.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00E9944 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FAAFC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, const GUID *a3)
{
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct _D3DKMT_OPENADAPTERFROMLUID *v7; // rax
  DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rbx
  VIDSCH_EXPORT **v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // esi
  ULONG64 v22; // rdx
  _DWORD *p_hAdapter; // r8
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v39; // rax
  LUID AdapterLuid; // [rsp+20h] [rbp-58h]
  unsigned int hAdapter; // [rsp+28h] [rbp-50h] BYREF
  int v42; // [rsp+30h] [rbp-48h] BYREF
  __int64 v43; // [rsp+38h] [rbp-40h]
  char v44; // [rsp+40h] [rbp-38h]
  _BYTE v45[8]; // [rsp+48h] [rbp-30h] BYREF
  struct DXGADAPTER *v46; // [rsp+50h] [rbp-28h]
  char v47; // [rsp+58h] [rbp-20h]
  unsigned __int64 v48; // [rsp+90h] [rbp+18h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2082LL);
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v7->AdapterLuid;
    hAdapter = v7->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v12 = Current;
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v10, v9, v11);
    LODWORD(v29) = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_32;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v27 = (*(__int64 (__fastcall **)(LUID))(*((_QWORD *)v12 + 12) + 448LL))(AdapterLuid);
      v29 = v27;
      if ( v27 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v28);
        v32[3] = v29;
LABEL_31:
        WdLogEvent5_WdWarning(v32);
LABEL_32:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v31);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v33, &EventProfilerExit, v34, v42);
        return (unsigned int)v29;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal(v10, v9);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v48);
  v18 = v14;
  if ( !v14 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v32[3] = AdapterLuid.LowPart;
    v32[4] = AdapterLuid.HighPart;
    LODWORD(v29) = -1073741811;
    v32[5] = -1073741811LL;
    goto LABEL_31;
  }
  if ( (*((_DWORD *)v14 + 606) & 4) != 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v35 + 24) = v18;
    WdLogEvent5_WdWarning(v35);
    DXGADAPTER::ReleaseReferenceNoTracking(v18);
  }
  else
  {
    v46 = v14;
    v47 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
    if ( *((_DWORD *)v18 + 44) != 1
      || *((_BYTE *)v18 + 2465)
      || (v19 = (VIDSCH_EXPORT **)*((_QWORD *)v18 + 320)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v19, v12) )
    {
      v21 = DXGADAPTER::CreateHandle(v18, v12, &hAdapter);
      DXGADAPTER::ReleaseReferenceNoTracking(v18);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        v22 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = hAdapter;
      }
      else
      {
        a1->hAdapter = hAdapter;
      }
      if ( v47 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v22);
      if ( v44 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v24, &EventProfilerExit, v25, v42);
      }
      return v21;
    }
    v39 = WdLogNewEntry5_WdEvent(v20);
    *(_QWORD *)(v39 + 24) = v18;
    *(_QWORD *)(v39 + 32) = v12;
    WdLogEvent5_WdEvent(v39);
    DXGADAPTER::ReleaseReferenceNoTracking(v18);
    if ( v47 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v36);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v42);
  return 3221225506LL;
}
