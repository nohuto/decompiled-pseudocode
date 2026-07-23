/*
 * XREFs of BiGetPartitionInformation @ 0x140715A44
 * Callers:
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
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
  __int128 OutputBuffer; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h]
  __int128 v18; // [rsp+80h] [rbp-80h]
  __int128 v19; // [rsp+90h] [rbp-70h]
  __int128 v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+B0h] [rbp-50h]
  __int128 v22; // [rsp+C0h] [rbp-40h]
  __int128 v23; // [rsp+D0h] [rbp-30h]
  __int128 v24; // [rsp+E0h] [rbp-20h]
  _QWORD v25[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+104h] [rbp+4h]
  __int16 v28; // [rsp+108h] [rbp+8h]
  char v29; // [rsp+10Ah] [rbp+Ah]
  char v30; // [rsp+10Bh] [rbp+Bh]

  v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, &OutputBuffer, 0x90u);
  if ( v6 < 0 )
  {
    if ( !a2 )
    {
      v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x74004u, 0LL, 0, v25, 0x20u);
      if ( v6 < 0 )
        return (unsigned int)v6;
      LODWORD(OutputBuffer) = 0;
      *((_QWORD *)&OutputBuffer + 1) = v25[0];
      *(_QWORD *)&v17 = v25[1];
      DWORD2(v17) = v27;
      BYTE12(v17) = v30;
      LOWORD(v18) = v28;
      BYTE2(v18) = v29;
      DWORD1(v18) = v26;
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v7 = v17;
  *a3 = OutputBuffer;
  v8 = v18;
  a3[1] = v7;
  v9 = v19;
  a3[2] = v8;
  v10 = v20;
  a3[3] = v9;
  v11 = v21;
  a3[4] = v10;
  v12 = v22;
  a3[5] = v11;
  v13 = v24;
  a3[6] = v12;
  a3[7] = v23;
  a3[8] = v13;
  return (unsigned int)v6;
}
