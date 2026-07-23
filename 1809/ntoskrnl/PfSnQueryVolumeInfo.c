/*
 * XREFs of PfSnQueryVolumeInfo @ 0x14065F4D8
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     PfpOpenHandleCreate @ 0x140661528 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 */

__int64 __fastcall PfSnQueryVolumeInfo(__int64 a1, const WCHAR *a2, _OWORD *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v9; // rdi
  NTSTATUS v10; // ebx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  HANDLE FileHandle[4]; // [rsp+40h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-11h] BYREF
  __int64 FsInformation; // [rsp+80h] [rbp-1h] BYREF
  int v18; // [rsp+88h] [rbp+7h]

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileHandle, 0, sizeof(FileHandle));
  v9 = 0x200000000LL;
  FileHandle[3] = (HANDLE)0x200000000LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = PfpOpenHandleCreate((unsigned int)FileHandle, a1, (unsigned int)&DestinationString, 0, 1048960, 0, 0, 0LL);
  if ( v10 < 0
    || (v10 = NtQueryVolumeInformationFile(
                FileHandle[0],
                &IoStatusBlock,
                &FsInformation,
                0x18u,
                FileFsVolumeInformation),
        (v10 & 0xC0000000) == 0xC0000000) )
  {
    v9 = (__int64)FileHandle[3];
  }
  else
  {
    v11 = *(_OWORD *)FileHandle;
    *a4 = FsInformation;
    v12 = *(_OWORD *)&FileHandle[2];
    *a5 = v18;
    *a3 = v11;
    a3[1] = v12;
    memset(FileHandle, 0, sizeof(FileHandle));
    v10 = 0;
    FileHandle[3] = (HANDLE)0x200000000LL;
  }
  if ( (v9 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, a1);
  return (unsigned int)v10;
}
