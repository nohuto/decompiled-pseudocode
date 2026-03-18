/*
 * XREFs of DxgkDestroyProtectedSession @ 0x1C022D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C003C940 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C022CA0C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

__int64 __fastcall DxgkDestroyProtectedSession(unsigned int *a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  struct DXGGLOBAL *Global; // rax
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rcx
  const GUID *v24; // r8
  _BYTE v25[16]; // [rsp+20h] [rbp-38h] BYREF
  int v26; // [rsp+30h] [rbp-28h] BYREF
  __int64 v27; // [rsp+38h] [rbp-20h]
  char v28; // [rsp+40h] [rbp-18h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 2149;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2149);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2149);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v26);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v8 = *a1;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v25, Global);
  v10 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v11 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)Current + 62) )
    goto LABEL_17;
  v12 = *((_QWORD *)Current + 29);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_17;
  }
  if ( (v13 & 0x1F) != 0xE )
  {
    v14 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60);
    *(_QWORD *)(v14 + 24) = 316LL;
    WdLogEvent5_WdError(v14);
LABEL_17:
    v15 = 0LL;
    goto LABEL_18;
  }
  v15 = *(void **)(v12 + 16LL * (unsigned int)v11);
LABEL_18:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = v8;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
    goto LABEL_20;
  }
  DXGPROTECTEDSESSION::DestroyProtectedSession(v15, v8);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return 0LL;
}
