/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C0138B30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0138F24 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(__int64 a1, __int64 a2, const GUID *a3)
{
  char v3; // bl
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  char v16; // [rsp+30h] [rbp-10h]
  char v17; // [rsp+50h] [rbp+10h] BYREF

  v14 = -1;
  v3 = a1;
  v15 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 2197;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2197);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 2197);
  if ( v3 )
  {
    v17 = 0;
    Global = DXGGLOBAL::GetGlobal(v4);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_b738754624db98fc5a522f2870f1bafc_::_lambda_invoker_cdecl_,
      (__int64)&v17,
      1);
    v17 = 0;
    v6 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v17, 1);
    v8 = v6;
    if ( v6 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v13 + 24) = v8;
      WdLogEvent5_WdError(v13);
    }
    else
    {
      v9 = DXGGLOBAL::GetGlobal(v7);
      DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)v9 + 77), 0);
    }
    if ( v17 )
      DxgkReleaseSessionModeChangeLock(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v14);
  }
}
