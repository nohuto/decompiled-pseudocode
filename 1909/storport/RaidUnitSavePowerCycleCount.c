/*
 * XREFs of RaidUnitSavePowerCycleCount @ 0x1C00123A8
 * Callers:
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C00122B0 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidDeleteUnit @ 0x1C001242C (RaidDeleteUnit.c)
 * Callees:
 *     PortRegistryWriteDeviceKey @ 0x1C006B9F8 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall RaidUnitSavePowerCycleCount(__int64 a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v4; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v4.Length = 0LL;
  v4.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&v4, L"Storport");
  RtlInitUnicodeString(&DestinationString, L"PowerCycleCount");
  return PortRegistryWriteDeviceKey(
           *(_QWORD *)(a1 + 8),
           (unsigned int)&v4,
           (unsigned int)&DestinationString,
           4,
           a1 + 2960,
           4);
}
