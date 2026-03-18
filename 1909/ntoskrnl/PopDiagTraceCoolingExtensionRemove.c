/*
 * XREFs of PopDiagTraceCoolingExtensionRemove @ 0x1408AD57C
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1408A32A0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopDiagTraceCoolingExtension @ 0x14071FC9C (PopDiagTraceCoolingExtension.c)
 */

void __fastcall PopDiagTraceCoolingExtensionRemove(__int64 a1)
{
  PopDiagTraceCoolingExtension(a1, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
}
