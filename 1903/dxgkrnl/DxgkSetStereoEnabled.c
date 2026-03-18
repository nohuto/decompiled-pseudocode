/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C0246980
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, const GUID *a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned int updated; // ebx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+78h] [rbp+18h] BYREF
  BOOL v21; // [rsp+80h] [rbp+20h] BYREF

  v17 = -1;
  v3 = a1;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2089;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2089);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2089LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v20 = 0;
    v13 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 12) + 224LL))(&v20, 0LL, 0LL);
    if ( !v20 || v13 )
    {
      updated = -1073741637;
    }
    else
    {
      v21 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v21, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    updated = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v12);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v17);
  return updated;
}
