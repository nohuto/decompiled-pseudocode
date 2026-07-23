/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x14060F8D0
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x14060F4A0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExpCaptureWnfStateName @ 0x140610868 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406108E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *v8; // rbp
  int v9; // r13d
  char v10; // r8
  PRTL_BALANCED_NODE v11; // rbx
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // rbx
  __int64 *v14; // rbx
  int v15; // eax
  __int64 *v16; // rcx
  __int64 **v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  int v24[2]; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( (int)ExpCaptureWnfStateName(a2, &v22, 0LL) < 0 )
    return 3221225485LL;
  v11 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, v10);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, v11, (ULONG_PTR)(a1 + 10));
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  v12 = KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v12, (ULONG_PTR)(a1 + 13));
  if ( v13 )
    BYTE2(v13[1].Left) |= 1u;
  v14 = (__int64 *)a1[14];
  if ( v14 != a1 + 14 )
  {
    while ( *(v14 - 11) != a3 || v22 != *(v14 - 6) )
    {
      v14 = (__int64 *)*v14;
      if ( v14 == a1 + 14 )
        goto LABEL_27;
    }
    v9 = 1;
    if ( a4 == *((_DWORD *)v14 + 6) && *((int *)v14 + 4) > 1 )
    {
      v15 = *((_DWORD *)v14 + 5);
      if ( v15 )
      {
        *((_DWORD *)v14 + 4) = 1;
        if ( a5 == -1073741267 && (v15 & 1) == 0 )
          *((_DWORD *)v14 + 5) = v15 | 1;
      }
      else
      {
        if ( a5 )
        {
          *((_DWORD *)v14 + 4) = 3;
          v18 = 3;
        }
        else
        {
          *((_DWORD *)v14 + 4) = 0;
          v16 = (__int64 *)*v14;
          if ( *(__int64 **)(*v14 + 8) != v14 || (v17 = (__int64 **)v14[1], *v17 != v14) )
            __fastfail(3u);
          *v17 = v16;
          v16[1] = (__int64)v17;
          v18 = *((_DWORD *)v14 + 4);
        }
        if ( v18 == 3 )
          goto LABEL_27;
      }
      if ( (*((_BYTE *)v14 + 20) & 1) == 0 && (v14[3] & 1) != 0 )
      {
        v19 = *(v14 - 7);
        if ( v19 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 164), 0xFFFFFFFF) == 1
            && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(v14 - 7) + 8)) )
          {
            v8 = (struct _EX_RUNDOWN_REF *)*(v14 - 7);
          }
        }
      }
      *((_DWORD *)v14 + 6) = 0;
    }
  }
LABEL_27:
  if ( (_InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  if ( !v9 && (a4 & 1) != 0 )
  {
    v21 = a1[1];
    *(_QWORD *)v24 = 0LL;
    ExpWnfResolveScopeInstance((int)v24, v21, 0, (v22 >> 6) & 0xF, 0LL);
    if ( (int)ExpWnfLookupNameInstance(*(_QWORD *)v24, v22, &v23) >= 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 164), 0xFFFFFFFF) == 1 )
        v8 = (struct _EX_RUNDOWN_REF *)v23;
      else
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v23 + 8));
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  }
  if ( v8 )
  {
    ExpWnfNotifyNameSubscribers(v8, 8LL, 1LL);
    ExReleaseRundownProtection_0(v8 + 1);
  }
  return 0LL;
}
