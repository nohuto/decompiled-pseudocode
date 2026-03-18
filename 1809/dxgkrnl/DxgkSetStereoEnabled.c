/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C0212D10
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, const GUID *a3)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int updated; // ebx
  int v8; // eax
  __int64 v9; // rcx
  const GUID *v10; // r8
  int v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  char v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+78h] [rbp+18h] BYREF
  BOOL v16; // [rsp+80h] [rbp+20h] BYREF

  v12 = -1;
  v3 = a1;
  v13 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v14 = 1;
    v12 = 2089;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2089);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 2089);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v15 = 0;
    v8 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(&v15, 0LL, 0LL);
    if ( !v15 || v8 )
    {
      updated = -1073741637;
    }
    else
    {
      v16 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v16, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    updated = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v12);
  return updated;
}
