/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x14084B768
 * Callers:
 *     AlpcpLogClosePort @ 0x14084B7FC (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x14084B860 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14084B8C0 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14084B924 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x14084B980 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x14084B9E4 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x14084BA48 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x14084BAA4 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x14084BBA0 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
