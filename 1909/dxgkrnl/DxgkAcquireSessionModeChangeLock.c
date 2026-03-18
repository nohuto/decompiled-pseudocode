/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C00FC6B0
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E7630 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00FC1B0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  DXGPUSHLOCK *v21; // rdi
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // [rsp+20h] [rbp-18h] BYREF
  char v40; // [rsp+28h] [rbp-10h]

  v2 = a1;
  v5 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 74);
  if ( !v5 )
    goto LABEL_36;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3);
  v9 = v5 + 80;
  v40 = 0;
  v10 = CurrentProcessSessionId;
  v39 = v5 + 80;
  if ( v5 == -80 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v8, v9);
    *(_QWORD *)(v26 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v39 + 16) == CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(CurrentThread, v9);
    *(_QWORD *)(v27 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( v40 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v9);
    v28[5] = &v39;
    v28[3] = 275LL;
    v28[4] = 4LL;
    v28[6] = 0LL;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  v12 = v39;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v12 + 16) == KeGetCurrentThread() )
  {
    v29 = *(_DWORD *)(v12 + 24);
    if ( v29 <= 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v30 + 24) = 559LL;
      WdLogEvent5_WdAssertion(v30);
      v29 = *(_DWORD *)(v12 + 24);
    }
    v16 = v29 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *(_DWORD *)(v12 + 28);
        if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v14, &EventBlockThread, v15, v25);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 8));
      ExAcquirePushLockExclusiveEx(v12, 0LL);
    }
    if ( *(_QWORD *)(v12 + 16) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v31 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( *(_DWORD *)(v12 + 24) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v32 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v32);
    }
    *(_QWORD *)(v12 + 16) = KeGetCurrentThread();
    v16 = 1;
  }
  *(_DWORD *)(v12 + 24) = v16;
  v40 = 1;
  if ( (unsigned int)v10 >= *(_DWORD *)(v5 + 72) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v39);
LABEL_36:
    v33 = WdLogNewEntry5_WdError(v4, v3, v6);
    *(_QWORD *)(v33 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v35, v34);
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    return 3221225485LL;
  }
  _mm_lfence();
  v17 = v39;
  v18 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8 * v10);
  v40 = 0;
  if ( *(struct _KTHREAD **)(v39 + 16) != KeGetCurrentThread() )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = v17;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  v19 = *(_DWORD *)(v17 + 24);
  if ( v19 <= 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v37 + 24) = 603LL;
    WdLogEvent5_WdAssertion(v37);
    v19 = *(_DWORD *)(v17 + 24);
  }
  v20 = v19 - 1;
  *(_DWORD *)(v17 + 24) = v20;
  if ( !v20 )
  {
    *(_QWORD *)(v17 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( !v18 )
    goto LABEL_36;
  v21 = (DXGPUSHLOCK *)(v18 + 18528);
  if ( v2 )
  {
    DXGPUSHLOCK::AcquireExclusive(v21);
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v38 = *((_DWORD *)v21 + 4);
        if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v22, &EventBlockThread, v23, v38);
      }
      ExAcquirePushLockSharedEx(v21, 0LL);
    }
  }
  return 0LL;
}
