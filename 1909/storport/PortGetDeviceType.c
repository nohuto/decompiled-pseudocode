/*
 * XREFs of PortGetDeviceType @ 0x1C006CB7C
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C0018EA4 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetDeviceId @ 0x1C001B43C (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C001B528 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001B670 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006C240 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006EAE0 (RaUnitQueryDeviceTextIrp.c)
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
