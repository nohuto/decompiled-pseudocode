/*
 * XREFs of AlpcpLockPortExclusive @ 0x14088588C
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E0800 (AlpcpReceiveMessagePort.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall AlpcpLockPortExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
}
