/*
 * XREFs of PopDiagTraceCoolingExtensionAdd @ 0x1408AD4A4
 * Callers:
 *     PopAssociateThermalRequest @ 0x14075F420 (PopAssociateThermalRequest.c)
 *     PopCoolingExtensionPnpNotification @ 0x1408A32A0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopDiagTraceCoolingExtension @ 0x14071FC9C (PopDiagTraceCoolingExtension.c)
 */

void __fastcall PopDiagTraceCoolingExtensionAdd(__int64 a1)
{
  PopDiagTraceCoolingExtension(a1, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
}
