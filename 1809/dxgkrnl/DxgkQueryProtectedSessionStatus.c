/*
 * XREFs of DxgkQueryProtectedSessionStatus @ 0x1C022E510
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
 */

__int64 __fastcall DxgkQueryProtectedSessionStatus(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  __int64 *v8; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v23; // ebx
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  _BYTE v27[16]; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]
  char v30; // [rsp+40h] [rbp-28h]
  __int64 v31; // [rsp+78h] [rbp+10h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 454LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2150;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2150);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2150);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v28);
    }
    return 3221225485LL;
  }
  v8 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v31 = *v8;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v27, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v10 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 >= *((_DWORD *)Current + 62) )
    goto LABEL_17;
  v11 = *((_QWORD *)Current + 29);
  v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
  if ( (unsigned int)v31 >> 30 != ((v12 >> 5) & 3) || (v12 & 0x2000) != 0 || (v12 & 0x1F) == 0 )
    goto LABEL_17;
  v13 = v12 & 0x1F;
  if ( (_BYTE)v13 != 14 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = 316LL;
    WdLogEvent5_WdError(v14);
LABEL_17:
    v15 = 0LL;
    goto LABEL_18;
  }
  v15 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
LABEL_18:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = (unsigned int)v31;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    goto LABEL_20;
  }
  v23 = *(_DWORD *)(v15 + 140);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
  v24 = (_DWORD *)(a1 + 4);
  if ( a1 + 4 >= MmUserProbeAddress )
    v24 = (_DWORD *)MmUserProbeAddress;
  *v24 = v23;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v28);
  return 0LL;
}
