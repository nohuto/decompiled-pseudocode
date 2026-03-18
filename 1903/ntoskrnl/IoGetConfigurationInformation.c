/*
 * XREFs of IoGetConfigurationInformation @ 0x14073B230
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     IopCreateArcNamesDisk @ 0x1409F509C (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140A3F040 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&unk_1409AD820;
}
