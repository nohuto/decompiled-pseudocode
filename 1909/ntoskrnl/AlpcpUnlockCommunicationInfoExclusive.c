/*
 * XREFs of AlpcpUnlockCommunicationInfoExclusive @ 0x140884BC4
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1405E4D40 (AlpcpImpersonateMessage.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpUnlockCommunicationInfoExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  return KeAbPostRelease(v1);
}
