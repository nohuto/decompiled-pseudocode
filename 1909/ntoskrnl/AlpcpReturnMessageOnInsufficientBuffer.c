/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D79D0
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF870 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14065B9A8 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpExposeContextAttribute @ 0x1406D7A94 (AlpcpExposeContextAttribute.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x1406D7B08 (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1406EB44C (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2, void *a3)
{
  volatile signed __int64 *v6; // rdi

  memset(a3, 0, 0x20uLL);
  v6 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockSharedEx(a1 + 352, 0LL);
  if ( a2[8] == a1 )
  {
    if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, a2);
    }
LABEL_5:
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    AlpcpExposeContextAttribute(a1, a2, a3, 0LL);
    return 3221225507LL;
  }
  if ( a2[2] )
  {
    AlpcpRemoveMessageFromPendingQueue((__int64)a2);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
  {
LABEL_4:
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_5;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return 3221227264LL;
}
