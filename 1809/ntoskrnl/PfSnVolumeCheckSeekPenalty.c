/*
 * XREFs of PfSnVolumeCheckSeekPenalty @ 0x14065DEA0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401B8370 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwResetEvent @ 0x1401BB110 (ZwResetEvent.c)
 */

__int64 __fastcall PfSnVolumeCheckSeekPenalty(HANDLE *a1, void *a2)
{
  unsigned int v4; // edi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp+17h] BYREF
  int v9; // [rsp+68h] [rbp+1Fh]
  __int64 OutputBuffer; // [rsp+70h] [rbp+27h] BYREF
  int v11; // [rsp+78h] [rbp+2Fh]

  InputBuffer = 7LL;
  v4 = 1;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v9 = 0;
  OutputBuffer = 0LL;
  v11 = 0;
  ZwResetEvent(a2, 0LL);
  Status = ZwDeviceIoControlFile(*a1, a2, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, &InputBuffer, 0xCu, &OutputBuffer, 0xCu);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(a2, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    return (_BYTE)v11 != 0;
  return v4;
}
