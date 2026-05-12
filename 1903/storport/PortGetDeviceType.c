/*
 * XREFs of PortGetDeviceType @ 0x1C006BC7C
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001AF2C (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C001B018 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001B160 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001BA78 (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006B340 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006C448 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
