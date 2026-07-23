/*
 * XREFs of LdrpResReadFile @ 0x1800E2AD8
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x180057680 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x180058680 (LdrpResCompareResourceNames.c)
 *     LdrpResSearchResourceHandle @ 0x1800E2B8C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x18009CF50 (NtReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800E328C (LdrpResSetFilePointer.c)
 */

__int64 __fastcall LdrpResReadFile(char *Handle, __int64 a2, void *a3, ULONG a4)
{
  __int64 result; // rax
  NTSTATUS v8; // edx
  int v9; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = LdrpResSetFilePointer();
    if ( (int)result < 0 )
      return result;
    v8 = NtReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, a3, a4, 0LL, 0LL);
    if ( v8 == 259 )
      v8 = NtWaitForSingleObject(Handle, 0, 0LL);
    v9 = 0;
    if ( (v8 & 0xC0000000) != 0x80000000 )
      v9 = v8;
    if ( v9 >= 0 && a4 != LODWORD(IoStatusBlock.Information) )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
