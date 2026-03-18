/*
 * XREFs of DxgkQueryProtectedSessionStatus @ 0x1C0262D30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0043198 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionStatus(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 *v17; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // ebx
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  _BYTE v34[16]; // [rsp+20h] [rbp-48h] BYREF
  int v35; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+38h] [rbp-30h]
  char v37; // [rsp+40h] [rbp-28h]
  __int64 v38; // [rsp+78h] [rbp+10h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 454LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 2150;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v3, &EventProfilerEnter, v4, 2150);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2150LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v13);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v35);
    }
    return 3221225485LL;
  }
  v17 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = (__int64 *)MmUserProbeAddress;
  v38 = *v17;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v34, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v19 = ((unsigned int)v38 >> 6) & 0xFFFFFF;
  v20 = (unsigned int)v38 >> 30;
  if ( (unsigned int)v19 >= *((_DWORD *)Current + 56) )
    goto LABEL_21;
  v21 = *((_QWORD *)Current + 26);
  v22 = *(_DWORD *)(v21 + 16 * v19 + 8);
  if ( (_DWORD)v20 != ((v22 >> 5) & 3) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
    goto LABEL_21;
  v23 = v22 & 0x1F;
  if ( (_BYTE)v23 != 14 )
  {
    v24 = WdLogNewEntry5_WdError(v23, v20, v21);
    *(_QWORD *)(v24 + 24) = 267LL;
    WdLogEvent5_WdError(v24);
LABEL_21:
    v25 = 0LL;
    goto LABEL_22;
  }
  v25 = *(_QWORD *)(v21 + 16LL * (unsigned int)v19);
LABEL_22:
  ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25 )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = (unsigned int)v38;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
    goto LABEL_9;
  }
  v30 = *(_DWORD *)(v25 + 140);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
  v31 = (_DWORD *)(a1 + 4);
  if ( a1 + 4 >= MmUserProbeAddress )
    v31 = (_DWORD *)MmUserProbeAddress;
  *v31 = v30;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, (__int64)v31);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v35);
  return 0LL;
}
