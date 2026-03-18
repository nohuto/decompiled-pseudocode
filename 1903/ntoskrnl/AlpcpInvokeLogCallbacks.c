/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x140886C00
 * Callers:
 *     AlpcpLogClosePort @ 0x140886C94 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x140886D0C (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140886D8C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140886E04 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x140886E78 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140886EF0 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x140886F68 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140886FDC (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408870D8 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
