/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x14088642C
 * Callers:
 *     AlpcpLogClosePort @ 0x1408864C0 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x140886538 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1408865B8 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140886630 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1408866A4 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x14088671C (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x140886794 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140886808 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140886904 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
