/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x1C013B340
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v8 = -1;
  v9 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v10 = 1;
    v8 = 3013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)Event, &EventProfilerEnter, a3, 3013);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v8, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 2644LL;
    WdLogEvent5_WdAssertion(v7);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerExit, v6, v8);
  }
}
