/*
 * XREFs of LdrpResReadFile @ 0x1800E5768
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800385D8 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x180039618 (LdrpResCompareResourceNames.c)
 *     LdrpResSearchResourceHandle @ 0x1800E581C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0360 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x1800A03A0 (NtReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800E5F20 (LdrpResSetFilePointer.c)
 */

__int64 __fastcall LdrpResReadFile(char *Handle, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int File; // edx
  int v8; // ecx
  int v9; // [rsp+58h] [rbp-10h]

  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = LdrpResSetFilePointer();
    if ( (int)result < 0 )
      return result;
    File = NtReadFile();
    if ( File == 259 )
      File = NtWaitForSingleObject(Handle, 0, 0LL);
    v8 = 0;
    if ( (File & 0xC0000000) != 0x80000000 )
      v8 = File;
    if ( v8 >= 0 && a4 != v9 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
