/*
 * XREFs of IoGetConfigurationInformation @ 0x1407107C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     IopCreateArcNamesDisk @ 0x1409D77C0 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&unk_14096E790;
}
