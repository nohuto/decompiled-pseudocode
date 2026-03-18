/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C00E02D8
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00BC560 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(__int64 a1)
{
  char v1; // r14
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessSessionId; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v17; // r9d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-28h] BYREF
  char v31; // [rsp+28h] [rbp-20h]

  v1 = a1;
  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 77);
  if ( !v3 )
    goto LABEL_42;
  v31 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v2);
  v30 = v3 + 80;
  if ( v3 == -80 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v19 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v30 + 8) == CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v20 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( v31 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v21[5] = &v30;
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  v6 = v30;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v6 + 8) == KeGetCurrentThread() )
  {
    v22 = *(_DWORD *)(v6 + 24);
    if ( v22 <= 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v23 + 24) = 409LL;
      WdLogEvent5_WdAssertion(v23);
      v22 = *(_DWORD *)(v6 + 24);
    }
    v9 = v22 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *(_DWORD *)(v6 + 28);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v7, &EventBlockThread, v8, v17);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v6);
      ExAcquirePushLockExclusiveEx(v6 + 16, 0LL);
    }
    if ( *(_QWORD *)(v6 + 8) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v24 + 24) = 433LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( *(_DWORD *)(v6 + 24) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v25 + 24) = 434LL;
      WdLogEvent5_WdAssertion(v25);
    }
    *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
    v9 = 1;
  }
  *(_DWORD *)(v6 + 24) = v9;
  v31 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v3 + 72) )
  {
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v30);
LABEL_42:
    v11 = 0LL;
    goto LABEL_23;
  }
  _mm_lfence();
  v10 = v30;
  v11 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8 * CurrentProcessSessionId);
  v31 = 0;
  if ( *(struct _KTHREAD **)(v30 + 8) != KeGetCurrentThread() )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7);
    v26[3] = 275LL;
    v26[4] = 4LL;
    v26[5] = v10;
    v26[6] = 0LL;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  v12 = *(_DWORD *)(v10 + 24);
  if ( v12 <= 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v27 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v27);
    v12 = *(_DWORD *)(v10 + 24);
  }
  v13 = v12 - 1;
  *(_DWORD *)(v10 + 24) = v13;
  if ( !v13 )
  {
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_23:
  if ( v11 )
  {
    if ( v1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 18528));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 18528, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v18 = *(_DWORD *)(v11 + 18544);
          if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v14, &EventBlockThread, v15, v18);
        }
        ExAcquirePushLockSharedEx(v11 + 18528, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v28 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v29);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
}
