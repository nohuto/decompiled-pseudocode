/*
 * XREFs of SmpNtSerializeBoot @ 0x140009F00
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140001350 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadDataFromRegistry @ 0x140009F38 (SmpLoadDataFromRegistry.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000BBB0 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140002180 (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x14000A740 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
