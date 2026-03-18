/*
 * XREFs of AlpcpLockCommunicationInfoExclusive @ 0x140885F08
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall AlpcpLockCommunicationInfoExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
}
