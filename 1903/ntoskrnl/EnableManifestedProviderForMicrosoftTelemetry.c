/*
 * XREFs of EnableManifestedProviderForMicrosoftTelemetry @ 0x14028C4C8
 * Callers:
 *     PopDiagInitialize @ 0x140A06004 (PopDiagInitialize.c)
 * Callees:
 *     EtwSetInformation @ 0x140737550 (EtwSetInformation.c)
 */

NTSTATUS __fastcall EnableManifestedProviderForMicrosoftTelemetry(REGHANDLE a1)
{
  return EtwSetInformation(
           a1,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
