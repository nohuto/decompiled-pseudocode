/*
 * XREFs of ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00EE850
 * Callers:
 *     DxgkCloseAdapterInternal @ 0x1C012F7C8 (DxgkCloseAdapterInternal.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCloseAdapter(const struct _D3DKMT_CLOSEADAPTER *a1, char a2, const GUID *a3)
{
  const struct _D3DKMT_CLOSEADAPTER *v4; // rbx
  unsigned int hAdapter; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v4 = a1;
  v13 = -1;
  v14 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v15 = 1;
    v13 = 2002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2002);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2002);
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_CLOSEADAPTER *)MmUserProbeAddress;
    hAdapter = v4->hAdapter;
  }
  else
  {
    hAdapter = v4->hAdapter;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v8 = DXGADAPTER::DestroyHandle(Current, hAdapter);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v7);
    v8 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v13);
  return v8;
}
