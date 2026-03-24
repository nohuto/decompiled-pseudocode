/*
 * XREFs of ExpWriteSiloTimeZoneMarker @ 0x140583AE4
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1408CC974 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406C2260 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall ExpWriteSiloTimeZoneMarker(unsigned __int8 a1)
{
  int ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1;
  return RtlWriteRegistryValue(2u, L"TimeZoneInformation", L"SiloTimeZoneMarker", 4u, &ValueData, 4u);
}
