/*
 * XREFs of IoCheckQuerySetVolumeInformation @ 0x140705D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckQuerySetVolumeInformation(
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        BOOLEAN SetOperation)
{
  __int64 *v3; // r9
  char v4; // cl

  if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
    return -1073741821;
  v3 = IopSetFsOperationLength;
  if ( !SetOperation )
    v3 = IopQueryFsOperationLength;
  v4 = *((_BYTE *)v3 + (int)FsInformationClass);
  if ( v4 )
    return Length < v4 ? 0xC0000004 : 0;
  else
    return -1073741821;
}
