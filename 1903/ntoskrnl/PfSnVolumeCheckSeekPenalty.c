/*
 * XREFs of PfSnVolumeCheckSeekPenalty @ 0x140626660
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x1401C01B0 (ZwDeviceIoControlFile.c)
 *     ZwResetEvent @ 0x1401C2F10 (ZwResetEvent.c)
 */

__int64 __fastcall PfSnVolumeCheckSeekPenalty(HANDLE *a1, void *a2)
{
  unsigned int v4; // edi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  _DWORD InputBuffer[4]; // [rsp+60h] [rbp+17h] BYREF
  __int64 OutputBuffer; // [rsp+70h] [rbp+27h] BYREF
  int v10; // [rsp+78h] [rbp+2Fh]

  InputBuffer[0] = 7;
  InputBuffer[2] = 0;
  InputBuffer[1] = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v4 = 1;
  OutputBuffer = 0LL;
  v10 = 0;
  ZwResetEvent(a2, 0LL);
  Status = ZwDeviceIoControlFile(*a1, a2, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, InputBuffer, 0xCu, &OutputBuffer, 0xCu);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(a2, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    return (_BYTE)v10 != 0;
  return v4;
}
