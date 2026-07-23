/*
 * XREFs of PfSnVolumeCheckIsSdBus @ 0x140866A5C
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401B8370 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwResetEvent @ 0x1401BB110 (ZwResetEvent.c)
 */

__int64 __fastcall PfSnVolumeCheckIsSdBus(HANDLE *a1, void *a2)
{
  unsigned int v4; // edi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  int InputBuffer; // [rsp+60h] [rbp-48h] BYREF
  __int64 v9; // [rsp+64h] [rbp-44h]
  _BYTE OutputBuffer[32]; // [rsp+70h] [rbp-38h] BYREF

  v9 = 0LL;
  InputBuffer = 1;
  v4 = 0;
  ZwResetEvent(a2, 0LL);
  Status = ZwDeviceIoControlFile(*a1, a2, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, &InputBuffer, 0xCu, OutputBuffer, 0x20u);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(a2, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    LOBYTE(v4) = OutputBuffer[24] == 12;
  return v4;
}
