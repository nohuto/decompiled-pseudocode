/*
 * XREFs of SmpNtSerializeBoot @ 0x140008D24
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140001350 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadDataFromRegistry @ 0x140008D5C (SmpLoadDataFromRegistry.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000B740 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x1400021B0 (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x1400095B4 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
