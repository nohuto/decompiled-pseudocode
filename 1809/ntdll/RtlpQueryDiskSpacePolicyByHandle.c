/*
 * XREFs of RtlpQueryDiskSpacePolicyByHandle @ 0x1801151BC
 * Callers:
 *     RtlpQueryDiskSpacePolicy @ 0x180115060 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A0C20 (ZwQueryVolumeInformationFile.c)
 */

NTSTATUS __fastcall RtlpQueryDiskSpacePolicyByHandle(void *a1, int *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v4; // rcx
  int v5; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _QWORD FsInformation[3]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+58h] [rbp-20h]
  unsigned int v9; // [rsp+5Ch] [rbp-1Ch]

  result = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, FsInformation, 0x20u, FileFsFullSizeInformation);
  if ( result >= 0 )
  {
    v4 = FsInformation[0] * v8 * (unsigned __int64)v9;
    if ( v4 > 0x200000000LL )
    {
      if ( v4 > 0x800000000LL )
      {
        v5 = 20;
        if ( v4 <= 0x2000000000LL )
          v5 = 15;
        *a2 = v5;
      }
      else
      {
        *a2 = 10;
      }
    }
    else
    {
      *a2 = 5;
    }
    return 0;
  }
  return result;
}
