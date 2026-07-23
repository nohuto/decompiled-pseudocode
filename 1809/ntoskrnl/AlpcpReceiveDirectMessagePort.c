/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x14069CC38
 * Callers:
 *     AlpcpReceiveMessage @ 0x1406332D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14069CE44 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x14084CBC0 (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, int a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // rbp
  ULONG_PTR v8; // rdi
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // rsi
  int v11; // eax
  unsigned int v12; // r8d
  int v13; // edx
  ULONG_PTR v14; // rbx
  ULONG_PTR v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v7 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, v15);
  if ( (int)result >= 0 )
  {
    v8 = v15[0];
    if ( v7 != *(_QWORD *)(v15[0] + 16) )
    {
      v9 = -1073740030;
LABEL_8:
      AlpcpUnlockMessage(v15[0]);
      return v9;
    }
    if ( (*(_DWORD *)(v15[0] + 40) & 7) != 4 )
    {
      v9 = -1073741811;
      goto LABEL_8;
    }
    v10 = (volatile signed __int64 *)(v7 + 352);
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    v11 = *(_DWORD *)(v7 + 416);
    if ( (v11 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      return 3221227264LL;
    }
    else if ( (v11 & 0x10) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      return 3221225537LL;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v7 + 200, 0LL);
      --*(_DWORD *)(v7 + 460);
      *(_DWORD *)(v8 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v8 + 16) = 0LL;
      **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
      *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v8 + 8);
      v12 = (*(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
      if ( !*(_QWORD *)(v8 + 144) )
        v12 = *(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0;
      v13 = v12 | 0x10000000;
      if ( !*(_QWORD *)(v8 + 152) )
        v13 = v12;
      if ( (v13 & a5) != 0 )
      {
        *(_WORD *)(v8 + 244) |= 0x2000u;
        AlpcpInsertMessagePendingQueue(v7, v8);
      }
      else
      {
        *(_WORD *)(v8 + 244) &= ~0x2000u;
        --*(_WORD *)(v8 - 30);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 200));
      KeAbPostRelease(v7 + 200);
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      v14 = v15[0];
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(v15[0]);
      *a4 = v14;
      return 0LL;
    }
  }
  return result;
}
