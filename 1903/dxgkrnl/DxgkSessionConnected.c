/*
 * XREFs of DxgkSessionConnected @ 0x1C013D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetHdrPowerPolicyCalloutPending@DXGGLOBAL@@QEAA_NXZ @ 0x1C002455C (-GetHdrPowerPolicyCalloutPending@DXGGLOBAL@@QEAA_NXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C013DBC0 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C013DC18 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0246830 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DxgkSessionConnected(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGGLOBAL *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  _BYTE v26[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v27; // [rsp+34h] [rbp-35h]
  int v28; // [rsp+40h] [rbp-29h] BYREF
  __int64 v29; // [rsp+48h] [rbp-21h]
  char v30; // [rsp+50h] [rbp-19h]
  _QWORD v31[10]; // [rsp+60h] [rbp-9h] BYREF

  v28 = -1;
  v3 = a1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2196;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2196);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2196LL);
  v27 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 4u, v3, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v26[0] = 0;
    v5 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v26, 1);
    v9 = v5;
    if ( v5 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v7, v6);
      DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 74), 1u);
      *((_DWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 76031) = 1;
      v17 = DXGGLOBAL::GetGlobal(v16, v15);
      if ( DXGGLOBAL::GetHdrPowerPolicyCalloutPending(v17) )
      {
        memset(v31, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v31[1]);
        v31[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v31[3]) = 63;
        LOBYTE(v31[6]) = -1;
        v18 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v31, 0x200000000uLL);
        v22 = v18;
        if ( v18 < 0 )
        {
          v23 = WdLogNewEntry5_WdError(v20, v19, v21);
          *(_QWORD *)(v23 + 24) = v22;
          WdLogEvent5_WdError(v23);
        }
        *((_DWORD *)DXGGLOBAL::GetGlobal(v20, v19) + 76030) = 0;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v10 + 24) = v9;
      WdLogEvent5_WdError(v10);
    }
    if ( v26[0] )
      DxgkReleaseSessionModeChangeLock(v11, v4);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v4);
  if ( v30 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v28);
  }
}
