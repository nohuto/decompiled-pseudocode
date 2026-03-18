/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C013D7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C013DC18 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  struct DXGGLOBAL *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v16; // rax
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  char v19; // [rsp+40h] [rbp-10h]
  char v20; // [rsp+60h] [rbp+10h] BYREF
  __int64 v21; // [rsp+68h] [rbp+18h]

  v17 = -1;
  v3 = a1;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2197;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2197);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2197LL);
  v21 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 5u, v3, 0, 0LL);
  if ( v3 )
  {
    v20 = 0;
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64)lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_,
      (__int64)&v20,
      1);
    v20 = 0;
    v7 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v20, 1);
    v11 = v7;
    if ( v7 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v16 + 24) = v11;
      WdLogEvent5_WdError(v16);
    }
    else
    {
      v12 = DXGGLOBAL::GetGlobal(v9, v8);
      DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)v12 + 74), 0);
    }
    if ( v20 )
      DxgkReleaseSessionModeChangeLock(v13, v4);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v4);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v17);
  }
}
