/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C022AF30
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
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C0229884 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, const GUID *a3)
{
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
  size_t v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  const void *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  struct DXGPROCESS *Process; // r14
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  int ProcessSchedulingPriorityBand; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  _DWORD *v40; // rcx
  int v41; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-A0h]
  char v43; // [rsp+30h] [rbp-98h]
  unsigned int v44; // [rsp+38h] [rbp-90h]
  int v45; // [rsp+3Ch] [rbp-8Ch]
  __int64 v46; // [rsp+40h] [rbp-88h] BYREF
  void *v47; // [rsp+48h] [rbp-80h]
  __int64 v48; // [rsp+50h] [rbp-78h]
  _BYTE v49[80]; // [rsp+60h] [rbp-68h] BYREF

  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2143;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2143);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2143);
  if ( !CheckTokenForResourceManagerAccess(v4) )
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = DXGPROCESS::GetCurrent();
    *(_QWORD *)(v8 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v41);
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
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v19 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v19 = (unsigned int *)MmUserProbeAddress;
  v44 = *v19;
  v20 = v44;
  if ( v44 < 0x18 )
  {
    v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v12, v44);
    *(_QWORD *)(v21 + 24) = 4407LL;
    WdLogEvent5_WdWarning(v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v41);
    return 3221225485LL;
  }
  if ( v44 > 0x18 )
    v20 = 24LL;
  v44 = v20;
  v24 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v24 = (const void *)MmUserProbeAddress;
  memmove(&v46, v24, v20);
  if ( !HIDWORD(v46) )
  {
    Process = (struct DXGPROCESS *)v47;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v49, v47, 0x2000);
    v32 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v49, 0);
    v16 = v32;
    if ( v32 >= 0 )
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v49);
      ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
      v45 = ProcessSchedulingPriorityBand;
      if ( ProcessSchedulingPriorityBand != 3 )
      {
        v40 = (_DWORD *)(a1 + 16);
        if ( a1 + 20 > MmUserProbeAddress || a1 + 20 <= (unsigned __int64)v40 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *v40 = ProcessSchedulingPriorityBand;
        goto LABEL_35;
      }
      v36 = WdLogNewEntry5_WdWarning(v38, 3LL, v39);
      v16 = -1073741595LL;
    }
    else
    {
      v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    }
    *(_QWORD *)(v36 + 24) = Process;
    *(_QWORD *)(v36 + 32) = v16;
    WdLogEvent5_WdWarning(v36);
LABEL_35:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v49);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v41);
    return (unsigned int)v16;
  }
  v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
  *(_QWORD *)(v28 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v41);
  return 3221225485LL;
}
