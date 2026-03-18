/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x1406C1074
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF070 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14064514C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x140886E78 (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, __int64 a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 v6; // r14
  __int64 result; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // r12
  volatile signed __int64 *v10; // rsi
  int v11; // eax
  volatile signed __int64 *v12; // rbp
  volatile signed __int64 *v13; // r15
  unsigned int v14; // edx
  int v15; // ecx
  ULONG_PTR v16; // rbx
  volatile signed __int64 *v17; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-38h] BYREF

  if ( !(_DWORD)a2 )
    return 3221225485LL;
  v6 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, (__int64)a4, BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v8 = BugCheckParameter2[0];
    v9 = *(_QWORD *)(BugCheckParameter2[0] + 64);
    if ( (*(_BYTE *)(BugCheckParameter2[0] + 40) & 7) != 4 && v6 != v9 )
    {
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      return 3221225485LL;
    }
    v10 = (volatile signed __int64 *)(v6 + 352);
    ExAcquirePushLockSharedEx(v6 + 352, 0LL);
    v11 = *(_DWORD *)(v6 + 416);
    if ( (v11 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221227264LL;
    }
    else
    {
      if ( (v11 & 0x10) == 0 )
      {
        v12 = (volatile signed __int64 *)(v6 + 136);
        if ( v6 == v9 )
        {
          ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
          v13 = (volatile signed __int64 *)(v6 + 200);
          **(_QWORD **)(v8 + 88) = *(_QWORD *)(v8 + 80);
          *(_QWORD *)(*(_QWORD *)(v8 + 80) + 8LL) = *(_QWORD *)(v8 + 88);
          --*(_DWORD *)(v6 + 464);
        }
        else
        {
          v13 = (volatile signed __int64 *)(v6 + 200);
          ExAcquirePushLockExclusiveEx(v6 + 200, 0LL);
          --*(_DWORD *)(v6 + 460);
          *(_DWORD *)(v8 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(v8 + 16) = 0LL;
          **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
          *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v8 + 8);
        }
        if ( v6 != v9 )
        {
          v14 = (*(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(v8 + 144) )
            v14 = *(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0;
          v15 = v14 | 0x10000000;
          if ( !*(_QWORD *)(v8 + 152) )
            v15 = v14;
          if ( (v15 & a5) != 0 )
          {
            *(_WORD *)(v8 + 244) |= 0x2000u;
            AlpcpInsertMessagePendingQueue(v6, v8);
LABEL_16:
            if ( v6 == v9 )
            {
              if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
                goto LABEL_18;
              v17 = (volatile signed __int64 *)(v6 + 136);
            }
            else
            {
              v12 = v13;
              if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
              {
LABEL_18:
                KeAbPostRelease((ULONG_PTR)v12);
                if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
                KeAbPostRelease(v6 + 352);
                v16 = BugCheckParameter2[0];
                if ( AlpcpLogEnabled )
                  AlpcpLogReceiveMessage(BugCheckParameter2[0]);
                *a4 = v16;
                return 0LL;
              }
              v17 = v13;
            }
            ExfTryToWakePushLock(v17);
            goto LABEL_18;
          }
          *(_WORD *)(v8 + 244) &= ~0x2000u;
        }
        --*(_WORD *)(v8 - 30);
        goto LABEL_16;
      }
      AlpcpUnlockMessage(v8);
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221225537LL;
    }
  }
  return result;
}
