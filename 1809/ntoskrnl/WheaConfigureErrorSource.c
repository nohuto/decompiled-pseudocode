/*
 * XREFs of WheaConfigureErrorSource @ 0x140574910
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     WheapInitializeDeferredErrorSources @ 0x14031FC44 (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // r14d
  PRTL_BALANCED_NODE v6; // rsi
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_BALANCED_NODE *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (*v12)(); // rax
  char v13; // cl
  signed __int32 v15[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (int)a1;
  if ( a1 > 0xD )
    return (unsigned int)-1073741811;
  v4 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 48 * (int)a1);
  v5 = -1073741823;
  v6 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL, 0);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (unsigned __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead,
      v6,
      (ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  }
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapSourceConfiguration + 48 * v2, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapSourceConfiguration + 6 * v2,
      v7,
      (ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  if ( !*((_BYTE *)v4 + 8) )
  {
    *((_DWORD *)v4 + 3) = *(_DWORD *)a2;
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 )
      *((_QWORD *)v4 + 2) = v9;
    v10 = *(_QWORD *)(a2 + 16);
    if ( v10 )
      *((_QWORD *)v4 + 3) = v10;
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 )
      *((_QWORD *)v4 + 4) = v11;
    v12 = *(__int64 (**)())(a2 + 32);
    if ( !v12 )
    {
      if ( (unsigned int)(v2 - 12) > 1 )
        goto LABEL_19;
      v12 = WheapGenericErrSrcRecover;
    }
    *((_QWORD *)v4 + 5) = v12;
LABEL_19:
    _InterlockedOr(v15, 0);
    *((_BYTE *)v4 + 8) = 1;
    if ( WheapInitializationComplete )
      v5 = WheapInitializeDeferredErrorSources(v2);
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 6 * v2);
  KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
         0LL,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  return v5;
}
