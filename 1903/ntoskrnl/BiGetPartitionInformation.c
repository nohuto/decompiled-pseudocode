/*
 * XREFs of BiGetPartitionInformation @ 0x14073EAAC
 * Callers:
 *     BiCreatePartitionDevice @ 0x14073E7CC (BiCreatePartitionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401C01B0 (ZwDeviceIoControlFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall BiGetPartitionInformation(HANDLE FileHandle, int a2, _OWORD *a3)
{
  NTSTATUS v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD OutputBuffer[9]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[4]; // [rsp+F0h] [rbp-10h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  memset(v17, 0, sizeof(v17));
  v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
  if ( v6 < 0 )
  {
    if ( !a2 )
    {
      v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x74004u, 0LL, 0, v17, 0x20u);
      if ( v6 < 0 )
        return (unsigned int)v6;
      LODWORD(OutputBuffer[0]) = 0;
      *((_QWORD *)&OutputBuffer[0] + 1) = v17[0];
      *(_QWORD *)&OutputBuffer[1] = v17[1];
      DWORD2(OutputBuffer[1]) = HIDWORD(v17[2]);
      BYTE12(OutputBuffer[1]) = BYTE3(v17[3]);
      LOWORD(OutputBuffer[2]) = v17[3];
      BYTE2(OutputBuffer[2]) = BYTE2(v17[3]);
      DWORD1(OutputBuffer[2]) = v17[2];
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v7 = OutputBuffer[1];
  *a3 = OutputBuffer[0];
  v8 = OutputBuffer[2];
  a3[1] = v7;
  v9 = OutputBuffer[3];
  a3[2] = v8;
  v10 = OutputBuffer[4];
  a3[3] = v9;
  v11 = OutputBuffer[5];
  a3[4] = v10;
  v12 = OutputBuffer[6];
  a3[5] = v11;
  v13 = OutputBuffer[8];
  a3[6] = v12;
  a3[7] = OutputBuffer[7];
  a3[8] = v13;
  return (unsigned int)v6;
}
