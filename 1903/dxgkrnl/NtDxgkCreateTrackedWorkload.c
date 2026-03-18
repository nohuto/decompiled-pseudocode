/*
 * XREFs of NtDxgkCreateTrackedWorkload @ 0x1C0297C10
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const GUID *v9; // r8
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+30h] [rbp-18h]

  v11 = -1;
  v12 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2206);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2206LL);
  v6 = WdLogNewEntry5_WdError(v4, v3, v5);
  *(_QWORD *)(v6 + 24) = -1073741637LL;
  WdLogEvent5_WdError(v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11, v7);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v11);
  return 3221225659LL;
}
