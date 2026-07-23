/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x1406CAD9C
 * Callers:
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x14061A6F0 (AlpcpDisconnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400D3920 (AlpcpQueueIoCompletionPort.c)
 */

__int64 __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // r9
  _QWORD *v5; // rdi
  volatile signed __int64 *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r9

  if ( *(_QWORD *)(a1 + 32) )
    return AlpcpQueueIoCompletionPort((_QWORD *)a1, 0, 1, 0);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v3 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v3);
    return KeReleaseSemaphoreEx(*(_QWORD *)(a1 + 248), 1LL, 1, v4, 0);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 232);
    if ( (_QWORD *)*v5 == v5 )
      goto LABEL_20;
    v6 = (volatile signed __int64 *)(a1 + 224);
    ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
    v7 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = v7 - 222;
      *(v7 - 1) = 0LL;
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v7 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( !v8 )
    {
LABEL_20:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      return KeAbPostRelease(a1 + 352);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      return KeReleaseSemaphoreEx((__int64)(v8 + 201), 1LL, 1, v11, 2);
    }
  }
}
