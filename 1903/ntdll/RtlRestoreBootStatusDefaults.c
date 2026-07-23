/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800EADE0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800EAAE0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800EB25C @ 0x1800EB25C (sub_1800EB25C.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  char v2; // cl
  int *p_Buffer; // rax
  __int64 v4; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  int Buffer; // [rsp+70h] [rbp-90h] BYREF
  _NT_PRODUCT_TYPE NtProductType[43]; // [rsp+74h] [rbp-8Ch] BYREF

  memset(NtProductType, 0, 0xA4uLL);
  Buffer = 168;
  RtlGetNtProductType(NtProductType);
  v2 = 0;
  *(_WORD *)((char *)&NtProductType[1] + 1) = 286;
  p_Buffer = &Buffer;
  BYTE1(NtProductType[11]) = 1;
  v4 = 168LL;
  HIBYTE(NtProductType[1]) = 0;
  do
  {
    v2 -= *(_BYTE *)p_Buffer;
    p_Buffer = (int *)((char *)p_Buffer + 1);
    --v4;
  }
  while ( v4 );
  ByteOffset.QuadPart = 0LL;
  BYTE2(NtProductType[11]) = v2;
  sub_1800EB25C(0LL, &Buffer, 0LL, 168LL);
  return ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 0xA8u, &ByteOffset, 0LL);
}
