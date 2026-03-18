/*
 * XREFs of AlpcpLockPortExclusive @ 0x1408860B8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall AlpcpLockPortExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
}
