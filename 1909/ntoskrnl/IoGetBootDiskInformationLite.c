/*
 * XREFs of IoGetBootDiskInformationLite @ 0x140757A80
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootDiskInformationLite @ 0x1409F9CD4 (IopGetBootDiskInformationLite.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformationLite(PBOOTDISK_INFORMATION_LITE *BootDiskInformation)
{
  if ( (unsigned int)InitializationPhase >= 2 )
    return -1073741431;
  else
    return IopGetBootDiskInformationLite(BootDiskInformation);
}
