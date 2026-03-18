/*
 * XREFs of DxgkSessionConnected @ 0x1C0138D00
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetHdrPowerPolicyCalloutPending@DXGGLOBAL@@QEAA_NXZ @ 0x1C0021A50 (-GetHdrPowerPolicyCalloutPending@DXGGLOBAL@@QEAA_NXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C0138ECC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0138F24 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0212BC0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DxgkSessionConnected(__int64 a1, __int64 a2, const GUID *a3)
{
  char v3; // bl
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  DXGGLOBAL *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  _BYTE v19[8]; // [rsp+20h] [rbp-29h] BYREF
  int v20; // [rsp+28h] [rbp-21h] BYREF
  __int64 v21; // [rsp+30h] [rbp-19h]
  char v22; // [rsp+38h] [rbp-11h]
  _QWORD v23[10]; // [rsp+40h] [rbp-9h] BYREF

  v20 = -1;
  v3 = a1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2196;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2196);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2196);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v19[0] = 0;
    v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v19, 1);
    v6 = v4;
    if ( v4 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v5);
      DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 77), 1u);
      *((_DWORD *)DXGGLOBAL::GetGlobal(v10) + 5113) = 1;
      v12 = DXGGLOBAL::GetGlobal(v11);
      if ( DXGGLOBAL::GetHdrPowerPolicyCalloutPending(v12) )
      {
        memset(v23, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v23[1]);
        v23[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v23[3]) = 63;
        LOBYTE(v23[6]) = -1;
        v13 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v23, 0x200000000uLL);
        v15 = v13;
        if ( v13 < 0 )
        {
          v16 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v16 + 24) = v15;
          WdLogEvent5_WdError(v16);
        }
        *((_DWORD *)DXGGLOBAL::GetGlobal(v14) + 5112) = 0;
      }
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v7 + 24) = v6;
      WdLogEvent5_WdError(v7);
    }
    if ( v19[0] )
      DxgkReleaseSessionModeChangeLock(v8);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v20);
  }
}
