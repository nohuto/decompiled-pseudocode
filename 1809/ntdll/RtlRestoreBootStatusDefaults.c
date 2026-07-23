/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800EDCE0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800ED9E0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180062D30 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtWriteFile @ 0x1800A0400 (NtWriteFile.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpRecordBootStatusData @ 0x1800EE178 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  char v2; // cl
  _BYTE *v3; // rax
  __int64 v4; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD Buffer[44]; // [rsp+70h] [rbp-90h] BYREF

  memset(Buffer, 0, 0xA8uLL);
  Buffer[0] = 168;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&Buffer[1]);
  v2 = 0;
  *(_WORD *)((char *)&Buffer[2] + 1) = 286;
  v3 = Buffer;
  BYTE1(Buffer[12]) = 1;
  v4 = 168LL;
  HIBYTE(Buffer[2]) = 0;
  do
  {
    v2 -= *v3++;
    --v4;
  }
  while ( v4 );
  ByteOffset.QuadPart = 0LL;
  BYTE2(Buffer[12]) = v2;
  RtlpRecordBootStatusData(0LL, Buffer, 0LL, 168LL);
  return NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xA8u, &ByteOffset, 0LL);
}
