/*
 * XREFs of PfSnQueryVolumeInfo @ 0x140626F6C
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PfpOpenHandleCreate @ 0x140628C74 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140628DE8 (PfpOpenHandleClose.c)
 *     NtQueryVolumeInformationFile @ 0x14062B1F0 (NtQueryVolumeInformationFile.c)
 */

__int64 __fastcall PfSnQueryVolumeInfo(__int64 a1, const WCHAR *a2, _OWORD *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rdi
  NTSTATUS v9; // ebx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __m256i FileHandle; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  __int64 FsInformation; // [rsp+80h] [rbp-1h] BYREF
  __int64 v17; // [rsp+88h] [rbp+7h]
  __int64 v18; // [rsp+90h] [rbp+Fh]

  memset(&FileHandle, 0, 24);
  FsInformation = 0LL;
  v6 = 0x200000000LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle.m256i_i64[3] = 0x200000000LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v9 = PfpOpenHandleCreate((unsigned int)&FileHandle, a1, (unsigned int)&DestinationString, 0, 1048960, 0, 0, 0LL);
  if ( v9 < 0
    || (v9 = NtQueryVolumeInformationFile(
               (HANDLE)FileHandle.m256i_i64[0],
               &IoStatusBlock,
               &FsInformation,
               0x18u,
               FileFsVolumeInformation),
        (v9 & 0xC0000000) == 0xC0000000) )
  {
    v6 = FileHandle.m256i_i64[3];
  }
  else
  {
    v10 = *(_OWORD *)FileHandle.m256i_i8;
    v11 = *(_OWORD *)&FileHandle.m256i_u64[2];
    FileHandle.m256i_i64[0] = 0LL;
    *a4 = FsInformation;
    v9 = 0;
    *a5 = v17;
    *a3 = v10;
    FileHandle.m256i_i64[3] = 0x200000000LL;
    *(_OWORD *)&FileHandle.m256i_u64[1] = 0LL;
    a3[1] = v11;
  }
  if ( (v6 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&FileHandle, a1);
  return (unsigned int)v9;
}
