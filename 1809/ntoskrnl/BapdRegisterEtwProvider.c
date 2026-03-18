/*
 * XREFs of BapdRegisterEtwProvider @ 0x140178AB4
 * Callers:
 *     BapdWriteEtwEvents @ 0x1401786E8 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x14056F2A0 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x1409D1958 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070BDD0 (EtwSetInformation.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  return result;
}
