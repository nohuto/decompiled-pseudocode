/*
 * XREFs of HvlpEtwRegister @ 0x14028C644
 * Callers:
 *     HvlPhase2Initialize @ 0x14019D5EC (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     EtwSetInformation @ 0x140737550 (EtwSetInformation.c)
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
