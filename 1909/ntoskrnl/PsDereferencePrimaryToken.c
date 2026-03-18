/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406E5560
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCopyRequestData @ 0x140885590 (AlpcpCopyRequestData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
