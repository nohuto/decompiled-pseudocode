/*
 * XREFs of BapdRegisterEtwProvider @ 0x140178BD4
 * Callers:
 *     BapdWriteEtwEvents @ 0x140178808 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x1405702A0 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x1409D2958 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14070D050 (EtwSetInformation.c)
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
