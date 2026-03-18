/*
 * XREFs of DxgkDestroyProtectedSession @ 0x1C0262220
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
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C02612A8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

__int64 __fastcall DxgkDestroyProtectedSession(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rbx
  struct DXGGLOBAL *Global; // rax
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  _BYTE v33[16]; // [rsp+20h] [rbp-38h] BYREF
  int v34; // [rsp+30h] [rbp-28h] BYREF
  __int64 v35; // [rsp+38h] [rbp-20h]
  char v36; // [rsp+40h] [rbp-18h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 2149;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v3, &EventProfilerEnter, v4, 2149);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2149LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v11);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v13);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v34);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v17 = *a1;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v8);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v33, Global);
  v19 = (char *)Current + 184;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v20 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *((_DWORD *)Current + 56) )
    goto LABEL_21;
  v21 = *((_QWORD *)Current + 26);
  v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
  if ( (((unsigned int)v17 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
    || (v22 & 0x2000) != 0
    || (v22 & 0x1F) == 0 )
  {
    goto LABEL_21;
  }
  v23 = v22 & 0x1F;
  if ( (_BYTE)v23 != 14 )
  {
    v24 = WdLogNewEntry5_WdError(((unsigned int)v17 >> 25) & 0x60, v23, 2LL * (unsigned int)v20);
    *(_QWORD *)(v24 + 24) = 267LL;
    WdLogEvent5_WdError(v24);
LABEL_21:
    v25 = 0LL;
    goto LABEL_22;
  }
  v25 = *(void **)(v21 + 16LL * (unsigned int)v20);
LABEL_22:
  ExReleasePushLockSharedEx(v19, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25 )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = v17;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
    goto LABEL_9;
  }
  DXGPROTECTEDSESSION::DestroyProtectedSession(v25, v17);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v30);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return 0LL;
}
