/*
 * XREFs of ExpWriteSiloTimeZoneMarker @ 0x140584AE4
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1408CDC34 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall ExpWriteSiloTimeZoneMarker(unsigned __int8 a1)
{
  int ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1;
  return RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, &ValueData, 4u);
}
