/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x140745214
 * Callers:
 *     PoClearTransitionMarker @ 0x140744FC0 (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401B8250 (ZwReadFile.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     RtlpRecordBootStatusData @ 0x140718B10 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlInitializeBootStatusDataBlackBox(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-E8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE Buffer[176]; // [rsp+70h] [rbp-C8h] BYREF

  memset(Buffer, 0, 0xA8uLL);
  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xA8u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlpRecordBootStatusData(0, (__int64)Buffer, 0LL, 168LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
