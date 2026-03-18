/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C025F7A0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018978 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C013C150 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C017D308 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D01C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C025E3B0 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  unsigned int *v24; // rax
  size_t v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  const void *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  void *Process; // r14
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int ProcessSchedulingPriorityBand; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int *v48; // rcx
  int v49; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+28h] [rbp-A0h]
  char v51; // [rsp+30h] [rbp-98h]
  unsigned int v52; // [rsp+38h] [rbp-90h]
  unsigned int v53; // [rsp+3Ch] [rbp-8Ch]
  __int64 v54; // [rsp+40h] [rbp-88h] BYREF
  void *v55; // [rsp+48h] [rbp-80h]
  __int64 v56; // [rsp+50h] [rbp-78h]
  _BYTE v57[80]; // [rsp+60h] [rbp-68h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2143;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2143);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2143LL);
  if ( !CheckTokenForResourceManagerAccess(v5, v4) )
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v11, v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v12);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v49);
    }
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 324) )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    LODWORD(v20) = -1073741823;
    *(_QWORD *)(v19 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_12;
  }
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v24 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v24 = (unsigned int *)MmUserProbeAddress;
  v52 = *v24;
  v25 = v52;
  if ( v52 < 0x18 )
  {
    v26 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v16, v52);
    *(_QWORD *)(v26 + 24) = 4452LL;
    WdLogEvent5_WdWarning(v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v27);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v28, &EventProfilerExit, v29, v49);
    return 3221225485LL;
  }
  if ( v52 > 0x18 )
    v25 = 24LL;
  v52 = v25;
  v30 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v30 = (const void *)MmUserProbeAddress;
  memmove(&v54, v30, v25);
  if ( !HIDWORD(v54) )
  {
    Process = v55;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v57, v55, 0x2000);
    v39 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v57, 0LL);
    v20 = v39;
    if ( v39 >= 0 )
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v57, v40);
      ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
      v44 = ProcessSchedulingPriorityBand;
      v53 = ProcessSchedulingPriorityBand;
      if ( ProcessSchedulingPriorityBand != 3 )
      {
        v48 = (unsigned int *)(a1 + 16);
        if ( a1 + 20 > MmUserProbeAddress || a1 + 20 <= (unsigned __int64)v48 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *v48 = ProcessSchedulingPriorityBand;
        goto LABEL_35;
      }
      v43 = WdLogNewEntry5_WdWarning(v46, 3LL, v47);
      v20 = -1073741595LL;
    }
    else
    {
      v43 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    }
    *(_QWORD *)(v43 + 24) = Process;
    *(_QWORD *)(v43 + 32) = v20;
    WdLogEvent5_WdWarning(v43);
LABEL_35:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v57, v44);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v21);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v49);
    return (unsigned int)v20;
  }
  v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
  *(_QWORD *)(v34 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v35);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v49);
  return 3221225485LL;
}
