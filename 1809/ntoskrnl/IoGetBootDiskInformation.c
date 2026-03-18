/*
 * XREFs of IoGetBootDiskInformation @ 0x14081C460
 * Callers:
 *     <none>
 * Callees:
 *     IopGetBootDiskInformation @ 0x1409F4A94 (IopGetBootDiskInformation.c)
 */

NTSTATUS __stdcall IoGetBootDiskInformation(PBOOTDISK_INFORMATION BootDiskInformation, ULONG Size)
{
  if ( (unsigned int)InitializationPhase < 2 )
    return IopGetBootDiskInformation(BootDiskInformation, Size);
  else
    return -1073741431;
}
