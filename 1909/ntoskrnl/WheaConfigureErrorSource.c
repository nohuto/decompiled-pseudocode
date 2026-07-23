/*
 * XREFs of WheaConfigureErrorSource @ 0x1405A2F30
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x1403403C0 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     WheapInitializeDeferredErrorSources @ 0x14033F47C (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(signed int a1, __int64 a2)
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
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // cl
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1;
  if ( (unsigned int)a1 > 0x10 )
    return (unsigned int)-1073741811;
  v4 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 64 * (__int64)a1);
  v5 = -1073741823;
  v6 = KeAbPreAcquire((ULONG_PTR)&WheapConfigTableLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&WheapConfigTableLock, v6, (ULONG_PTR)&WheapConfigTableLock);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v7 = KeAbPreAcquire((ULONG_PTR)&WheapSourceConfiguration + 64 * v2, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&WheapSourceConfiguration + 8 * v2,
      v7,
      (ULONG_PTR)&WheapSourceConfiguration + 64 * v2);
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
      if ( (int)v2 <= 11 || (_DWORD)v2 == 14 )
        goto LABEL_19;
      v12 = WheapGenericErrSrcRecover;
    }
    *((_QWORD *)v4 + 5) = v12;
LABEL_19:
    v13 = *(_QWORD *)(a2 + 40);
    if ( v13 )
      *((_QWORD *)v4 + 6) = v13;
    v14 = *(_QWORD *)(a2 + 48);
    if ( v14 )
      *((_QWORD *)v4 + 7) = v14;
    _InterlockedOr(v17, 0);
    *((_BYTE *)v4 + 8) = 1;
    if ( WheapInitializationComplete )
      v5 = WheapInitializeDeferredErrorSources(v2);
  }
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 8 * v2);
  KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 64 * v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapConfigTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&WheapConfigTableLock);
  KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  return v5;
}
