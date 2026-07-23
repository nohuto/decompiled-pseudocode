/*
 * XREFs of IopLiveDumpValidateDumpFileHandle @ 0x1408216F0
 * Callers:
 *     IopLiveDumpValidateParameters @ 0x140821740 (IopLiveDumpValidateParameters.c)
 * Callees:
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall IopLiveDumpValidateDumpFileHandle(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  char FileInformation; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return -1073741811;
  result = ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
  if ( result >= 0 )
  {
    result = IoStatusBlock.Status;
    if ( IoStatusBlock.Status >= 0 )
    {
      if ( (FileInformation & 0x30) != 0 )
        return 0;
      return -1073741811;
    }
  }
  return result;
}
