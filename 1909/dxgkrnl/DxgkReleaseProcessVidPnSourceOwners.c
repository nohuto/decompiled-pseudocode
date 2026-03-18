/*
 * XREFs of DxgkReleaseProcessVidPnSourceOwners @ 0x1C02603B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018DF4 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C013F68C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013F72C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014B524 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkReleaseProcessVidPnSourceOwners(__int64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  DXGPROCESS *Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v14; // [rsp+20h] [rbp-79h] BYREF
  __int64 v15; // [rsp+28h] [rbp-71h]
  char v16; // [rsp+30h] [rbp-69h]
  _BYTE v17[8]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h]
  __int64 v19; // [rsp+50h] [rbp-49h]
  int v20; // [rsp+58h] [rbp-41h]
  __int16 v21; // [rsp+5Ch] [rbp-3Dh]
  char v22; // [rsp+5Eh] [rbp-3Bh]
  _QWORD v23[10]; // [rsp+90h] [rbp-9h] BYREF

  memset(v23, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v23[1]);
  v14 = -1;
  v15 = 0LL;
  v23[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v23[3]) = 42;
  LOBYTE(v23[6]) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 2033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2033);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2033LL);
  v19 = 0LL;
  v21 = 0;
  LOBYTE(v4) = 1;
  v18 = a1;
  v20 = 512;
  v22 = 0;
  if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v17, v4) >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v17, v5);
    DXGPROCESS::ReleaseVidPnSourceOwners(Process, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v23);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v17, v10);
    v8 = 0;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = a1;
    v8 = -1073741811;
  }
  if ( (_BYTE)v21 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v17, v7);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14, v7);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v14);
  return v8;
}
