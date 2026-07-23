/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1408D3CF8
 * Callers:
 *     PopBootStatRestoreDefaults @ 0x1408B47B8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14012E090 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401C01D0 (ZwWriteFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpRecordBootStatusData @ 0x140741E68 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  char v2; // cl
  _BYTE *v3; // rax
  __int64 v4; // rdx
  NTSTATUS v5; // edx
  _OWORD *v6; // rcx
  _OWORD *v7; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD Buffer[11]; // [rsp+70h] [rbp-90h] BYREF

  ByteOffset.QuadPart = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset((char *)Buffer + 4, 0, 0xA4uLL);
  LODWORD(Buffer[0]) = 168;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)Buffer + 1);
  v2 = 0;
  *(_WORD *)((char *)Buffer + 9) = 286;
  v3 = Buffer;
  BYTE1(Buffer[3]) = 1;
  v4 = 168LL;
  BYTE11(Buffer[0]) = 0;
  do
  {
    v2 -= *v3++;
    --v4;
  }
  while ( v4 );
  BYTE2(Buffer[3]) = v2;
  RtlpRecordBootStatusData(0, (__int64)Buffer, 0LL, 168LL);
  v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xA8u, &ByteOffset, 0LL);
  if ( !v5 )
  {
    if ( BootStatFileHandleAcquired )
    {
      if ( BootStatFileHandle == FileHandle )
      {
        v6 = BootStatDataCache;
        if ( BootStatDataCache )
        {
          *(_OWORD *)BootStatDataCache = Buffer[0];
          v6[1] = Buffer[1];
          v6[2] = Buffer[2];
          v6[3] = Buffer[3];
          v6[4] = Buffer[4];
          v6[5] = Buffer[5];
          v6[6] = Buffer[6];
          v7 = v6 + 8;
          *(v7 - 1) = Buffer[7];
          *v7 = Buffer[8];
          v7[1] = Buffer[9];
          *((_QWORD *)v7 + 4) = *(_QWORD *)&Buffer[10];
        }
      }
    }
  }
  return v5;
}
