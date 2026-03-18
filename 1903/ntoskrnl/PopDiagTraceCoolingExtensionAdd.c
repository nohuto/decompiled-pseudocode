/*
 * XREFs of PopDiagTraceCoolingExtensionAdd @ 0x1408ADC44
 * Callers:
 *     PopAssociateThermalRequest @ 0x14075AB90 (PopAssociateThermalRequest.c)
 *     PopCoolingExtensionPnpNotification @ 0x1408A3A60 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopDiagTraceCoolingExtension @ 0x14071DE0C (PopDiagTraceCoolingExtension.c)
 */

void __fastcall PopDiagTraceCoolingExtensionAdd(__int64 a1)
{
  PopDiagTraceCoolingExtension(a1, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
}
