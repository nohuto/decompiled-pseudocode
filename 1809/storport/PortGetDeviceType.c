/*
 * XREFs of PortGetDeviceType @ 0x1C006B318
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C001C928 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetDeviceId @ 0x1C001D714 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C001D800 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001DAA8 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006A9D0 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006DF9C (RaUnitQueryDeviceTextIrp.c)
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
