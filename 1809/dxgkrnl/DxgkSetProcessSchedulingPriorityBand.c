/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1C022B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C012FD70 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C015CB1C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0228440 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C022A63C (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, const GUID *a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  const GUID *v18; // r8
  unsigned int *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  void *v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  struct DXGPROCESS *Process; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+28h] [rbp-A0h]
  char v40; // [rsp+30h] [rbp-98h]
  unsigned int v41; // [rsp+38h] [rbp-90h]
  __int64 v42; // [rsp+40h] [rbp-88h] BYREF
  void *v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+50h] [rbp-78h]
  _BYTE v45[80]; // [rsp+60h] [rbp-68h] BYREF

  v3 = (unsigned int *)a1;
  v38 = -1;
  v39 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 2140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2140);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2140);
  if ( !CheckTokenForResourceManagerAccess(v4) )
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent();
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v38);
    }
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v6) + 332) )
  {
    v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    LODWORD(v16) = -1073741823;
    *(_QWORD *)(v15 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_12;
  }
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v19 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v19 = (unsigned int *)MmUserProbeAddress;
  v41 = *v19;
  v20 = v41;
  if ( v41 < 0x18 )
  {
    v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v41, v14);
    *(_QWORD *)(v21 + 24) = 4071LL;
    WdLogEvent5_WdWarning(v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v38);
    return 3221225485LL;
  }
  if ( v41 > 0x18 )
    v20 = 24;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(&v42, v3, v20);
  v24 = v43;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v45, v43, 0x2000);
  v25 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v45, 0);
  v16 = v25;
  if ( v25 < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = v24;
    *(_QWORD *)(v29 + 32) = v16;
    goto LABEL_29;
  }
  if ( (unsigned int)v44 <= 1 && !HIDWORD(v42) )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v45);
    v34 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, v44);
    v16 = v34;
    if ( v34 >= 0 )
      goto LABEL_30;
    v29 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v29 + 24) = v16;
LABEL_29:
    WdLogEvent5_WdWarning(v29);
LABEL_30:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v45);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v38);
    return (unsigned int)v16;
  }
  v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
  *(_QWORD *)(v30 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v30);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v45);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v38);
  return 3221225485LL;
}
