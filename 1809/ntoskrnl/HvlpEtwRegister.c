/*
 * XREFs of HvlpEtwRegister @ 0x1402783B8
 * Callers:
 *     HvlPhase2Initialize @ 0x140193304 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070BDB0 (EtwSetInformation.c)
 */

NTSTATUS HvlpEtwRegister()
{
  EtwRegister(&HvlGlobalSystemEventsGuid, 0LL, 0LL, &HvlGlobalSystemEventsHandle);
  return EtwSetInformation(
           HvlGlobalSystemEventsHandle,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
