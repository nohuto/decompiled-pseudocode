/*
 * XREFs of AlpcpUnlockCommunicationInfoExclusive @ 0x140885428
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1405E4570 (AlpcpImpersonateMessage.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpUnlockCommunicationInfoExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  return KeAbPostRelease(v1);
}
