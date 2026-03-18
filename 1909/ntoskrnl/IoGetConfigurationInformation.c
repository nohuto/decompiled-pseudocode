/*
 * XREFs of IoGetConfigurationInformation @ 0x14073D130
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     IopCreateArcNamesDisk @ 0x1409F4FAC (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140A3EE10 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&unk_1409AD820;
}
