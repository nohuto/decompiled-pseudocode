/*
 * XREFs of HvlpEtwRegister @ 0x1402782B8
 * Callers:
 *     HvlPhase2Initialize @ 0x1401932E4 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070BDD0 (EtwSetInformation.c)
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
