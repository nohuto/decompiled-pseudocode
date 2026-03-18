/*
 * XREFs of DxgkGetProcessDeviceRemovalSupport @ 0x1C022ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C012FD70 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0228440 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1C022959C (-GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z.c)
 */

__int64 __fastcall DxgkGetProcessDeviceRemovalSupport(ULONG64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v4; // rax
  struct _LUID v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  const GUID *v12; // r8
  DXGPROCESS *Process; // rax
  _BYTE *v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  unsigned __int8 v18; // [rsp+20h] [rbp-A8h] BYREF
  int v19; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+30h] [rbp-98h]
  char v21; // [rsp+38h] [rbp-90h]
  struct _LUID v22[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+50h] [rbp-78h]
  _BYTE v24[80]; // [rsp+60h] [rbp-68h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v21 = 1;
    v19 = 2156;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2156);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2156);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v22[0].LowPart = *(_OWORD *)v4;
  v23 = *(_QWORD *)(v4 + 16);
  v18 = 1;
  v5 = v22[0];
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v24, *(void **)v22, 4096);
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v24, 0);
  if ( v8 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v24);
    DXGPROCESS::GetDeviceRemovalSupport(Process, &v22[1], (bool *)&v18);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v24);
    v15 = (_BYTE *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v15 = (_BYTE *)MmUserProbeAddress;
    *v15 = v18;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v19);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v9);
    *(struct _LUID *)(v10 + 24) = v5;
    WdLogEvent5_WdWarning(v10);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v19);
    }
    return (unsigned int)v8;
  }
}
