/*
 * XREFs of HvlpEtwRegister @ 0x14028C3A4
 * Callers:
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     EtwSetInformation @ 0x140739780 (EtwSetInformation.c)
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
