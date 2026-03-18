/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x140886880
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x140886770 (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1408869F8 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // r15
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rsi

  v2 = (signed __int64 *)(a2 + 352);
  ExAcquirePushLockSharedEx(a2 + 352, 0LL);
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v6 = 0LL;
    goto LABEL_14;
  }
  v5 = (volatile signed __int64 *)(a2 + 136);
  ExAcquirePushLockExclusiveEx(a2 + 136, 0LL);
  v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v6 )
    goto LABEL_3;
  v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v6 )
  {
    ExAcquirePushLockExclusiveEx(a2 + 176, 0LL);
    v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v6 )
    {
      v5 = (volatile signed __int64 *)(a2 + 200);
      ExAcquirePushLockExclusiveEx(a2 + 200, 0LL);
      v6 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_3:
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
    }
  }
LABEL_14:
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
