/*
 * XREFs of DxgkSetProtectedSessionStatusCB @ 0x1C022E860
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C003DF9C (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 */

__int64 __fastcall DxgkSetProtectedSessionStatusCB(__int64 a1, __int64 a2, const GUID *a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  const GUID *v7; // r8
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  if ( KeGetCurrentIrql() >= 2u )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v4[5] = DxgkSetProtectedSessionStatusCB;
    v4[3] = 275LL;
    v4[4] = 20LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  v9 = -1;
  v10 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v11 = 1;
    v9 = 15000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 15000);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 15000);
  if ( *(_QWORD *)a1 )
    v5 = DXGPROTECTEDSESSION::SetSessionStatus(
           *(DXGPROTECTEDSESSION **)a1,
           (enum _DXGK_PROTECTED_SESSION_STATUS)*(_DWORD *)(a1 + 8));
  else
    v5 = -1073741811;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return v5;
}
