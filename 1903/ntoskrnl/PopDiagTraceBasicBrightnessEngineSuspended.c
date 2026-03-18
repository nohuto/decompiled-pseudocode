/*
 * XREFs of PopDiagTraceBasicBrightnessEngineSuspended @ 0x1408AD41C
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceBasicBrightnessEngineSuspended()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
}
