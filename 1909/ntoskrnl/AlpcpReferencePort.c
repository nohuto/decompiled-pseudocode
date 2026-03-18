/*
 * XREFs of AlpcpReferencePort @ 0x140884B78
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpReferencePort(void *a1)
{
  return ObfReferenceObject(a1);
}
