/*
 * XREFs of DxgkProcessLockScreen @ 0x1C0276680
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0274B50 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkProcessLockScreen(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  OUTPUTDUPL_CONTEXT **RemoteOutputDuplMgr; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v17 = -1;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2194;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2194);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2194LL);
  Current = DXGPROCESS::GetCurrent(v4, v3);
  if ( Current )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      RemoteOutputDuplMgr = (OUTPUTDUPL_CONTEXT **)FindRemoteOutputDuplMgr(v12, v11);
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessLockScreenActive(RemoteOutputDuplMgr);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v12, v11);
      DXGGLOBAL::IterateAdaptersWithCallback((__int64)Global, (__int64)ProcessLockScreenAdapterCallback, 0LL, 4);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = 3984LL;
    WdLogEvent5_WdError(v9);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v10);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v17);
  }
}
