/*
 * XREFs of DxgkSessionReconnected @ 0x1C01567D0
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
 *     OutputDuplRemoteSessionReconnected @ 0x1C02766B4 (OutputDuplRemoteSessionReconnected.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2, const GUID *a3)
{
  unsigned __int8 v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGGLOBAL *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  _BYTE v30[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v31; // [rsp+34h] [rbp-35h]
  int v32; // [rsp+40h] [rbp-29h] BYREF
  __int64 v33; // [rsp+48h] [rbp-21h]
  char v34; // [rsp+50h] [rbp-19h]
  _QWORD v35[10]; // [rsp+60h] [rbp-9h] BYREF

  v32 = -1;
  v33 = 0LL;
  v4 = a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2199);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2199LL);
  v31 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 6u, v4, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness(v6, v5);
  if ( v4 )
  {
    v30[0] = 0;
    v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v30, 1);
    v12 = v8;
    if ( v8 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v10, v9);
      LOBYTE(v16) = 1;
      DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 74), v16);
      *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 76031) = 1;
      v21 = DXGGLOBAL::GetGlobal(v20, v19);
      if ( DXGGLOBAL::GetHdrPowerPolicyCalloutPending(v21) )
      {
        memset(v35, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v35[1]);
        v35[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v35[3]) = 63;
        LOBYTE(v35[6]) = -1;
        v22 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v35, 0x200000000uLL);
        v26 = v22;
        if ( v22 < 0 )
        {
          v27 = WdLogNewEntry5_WdError(v24, v23, v25);
          *(_QWORD *)(v27 + 24) = v26;
          WdLogEvent5_WdError(v27);
        }
        *((_DWORD *)DXGGLOBAL::GetGlobal(v24, v23) + 76030) = 0;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v12;
      WdLogEvent5_WdError(v13);
    }
    if ( v30[0] )
      DxgkReleaseSessionModeChangeLock(v14, v7);
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v7);
  if ( v34 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v28, &EventProfilerExit, v29, v32);
  }
}
