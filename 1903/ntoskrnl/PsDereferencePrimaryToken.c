/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406E4910
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
