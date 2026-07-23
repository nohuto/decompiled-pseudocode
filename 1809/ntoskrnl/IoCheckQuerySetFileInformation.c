/*
 * XREFs of IoCheckQuerySetFileInformation @ 0x1406FB8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckQuerySetFileInformation(
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        BOOLEAN SetOperation)
{
  __int64 *v3; // r9
  char v4; // cl

  if ( (unsigned int)FileInformationClass >= FileMaximumInformation )
    return -1073741821;
  v3 = IopSetOperationLength;
  if ( !SetOperation )
    v3 = IopQueryOperationLength;
  v4 = *((_BYTE *)v3 + (int)FileInformationClass);
  if ( v4 )
    return Length < v4 ? 0xC0000004 : 0;
  else
    return -1073741821;
}
