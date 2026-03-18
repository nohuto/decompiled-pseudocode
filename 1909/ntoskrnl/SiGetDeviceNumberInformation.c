/*
 * XREFs of SiGetDeviceNumberInformation @ 0x1409326A0
 * Callers:
 *     SiDisambiguateSystemDevice @ 0x1409328D8 (SiDisambiguateSystemDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401C0D30 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     SiOpenDevice @ 0x1405B2410 (SiOpenDevice.c)
 */

__int64 __fastcall SiGetDeviceNumberInformation(const WCHAR *a1, _DWORD *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  __int64 OutputBuffer; // [rsp+68h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp-10h]

  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  OutputBuffer = 0LL;
  v10 = 0;
  v5 = SiOpenDevice(a1, &FileHandle);
  if ( v5 >= 0 )
  {
    v5 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x2D1080u, 0LL, 0, &OutputBuffer, 0xCu);
    if ( v5 >= 0 )
    {
      if ( (_DWORD)OutputBuffer == 7 )
      {
        *a2 = HIDWORD(OutputBuffer);
        *a3 = v10;
      }
      else
      {
        v5 = -1073741637;
      }
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
