/*
 * XREFs of IopLiveDumpValidateDumpFileHandle @ 0x14085A574
 * Callers:
 *     IopLiveDumpValidateParameters @ 0x14085A5D0 (IopLiveDumpValidateParameters.c)
 * Callees:
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall IopLiveDumpValidateDumpFileHandle(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v2.Pointer = 0LL;
  v2.Information = 0LL;
  if ( !a1 )
    return -1073741811;
  result = ZwQueryInformationFile(a1, &v2, &v3, 4u, FileModeInformation);
  if ( result >= 0 )
  {
    result = v2.Status;
    if ( v2.Status >= 0 )
    {
      if ( (v3 & 0x30) != 0 )
        return 0;
      return -1073741811;
    }
  }
  return result;
}
