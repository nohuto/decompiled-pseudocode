/*
 * XREFs of DxgkSetProcessSchedulingPriorityClass @ 0x1C013BD20
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018978 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C013C27C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C013C5F8 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityClass(
        __int64 a1,
        enum _D3DKMT_SCHEDULINGPRIORITYCLASS a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  DXGPROCESS *Process; // rax
  __int64 v8; // rcx
  const GUID *v9; // r8
  int v11; // [rsp+20h] [rbp-29h] BYREF
  __int64 v12; // [rsp+28h] [rbp-21h]
  char v13; // [rsp+30h] [rbp-19h]
  _BYTE v14[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v15; // [rsp+48h] [rbp-1h]
  __int64 v16; // [rsp+50h] [rbp+7h]
  int v17; // [rsp+58h] [rbp+Fh]
  __int16 v18; // [rsp+5Ch] [rbp+13h]
  bool v19; // [rsp+5Eh] [rbp+15h]

  v11 = -1;
  v12 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2031);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2031LL);
  v16 = 0LL;
  v18 = 0;
  v15 = a1;
  v17 = 512;
  v19 = 0;
  v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v14, 0);
  if ( v6 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v14, v5);
    v6 = DXGPROCESS::SetProcessSchedulingPriorityClass(Process, a2, v19);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v14);
  }
  if ( (_BYTE)v18 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11, v5);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v11);
  return (unsigned int)v6;
}
