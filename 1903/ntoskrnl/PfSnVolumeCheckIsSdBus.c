/*
 * XREFs of PfSnVolumeCheckIsSdBus @ 0x1408A1D08
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x1401C01B0 (ZwDeviceIoControlFile.c)
 *     ZwResetEvent @ 0x1401C2F10 (ZwResetEvent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PfSnVolumeCheckIsSdBus(HANDLE *a1, void *a2)
{
  unsigned int v4; // edi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  int InputBuffer; // [rsp+60h] [rbp-48h] BYREF
  __int64 v9; // [rsp+64h] [rbp-44h]
  _BYTE OutputBuffer[32]; // [rsp+70h] [rbp-38h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v4 = 0;
  InputBuffer = 1;
  v9 = 0LL;
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
