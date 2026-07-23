/*
 * XREFs of PopResizeHiberFile @ 0x1406E0F88
 * Callers:
 *     PopAdjustHiberFile @ 0x1406E0EB0 (PopAdjustHiberFile.c)
 *     PopEnlargeHiberFile @ 0x1406E0EF4 (PopEnlargeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     PopValidateHiberFileSize @ 0x1406E10D4 (PopValidateHiberFileSize.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14071F120 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x14071F818 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x14071FDF0 (PopSetHiberFileMcb.c)
 */

__int64 __fastcall PopResizeHiberFile(signed __int64 a1, _QWORD *a2)
{
  int v4; // ecx
  signed __int64 v5; // rax
  NTSTATUS Status; // ecx
  signed __int64 FileInformation; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v9; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-18h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v13; // [rsp+88h] [rbp+28h] BYREF

  if ( !FileObject )
    goto LABEL_17;
  if ( qword_1404188D0 == a1 )
  {
LABEL_15:
    Status = 0;
    goto LABEL_16;
  }
  v4 = PopValidateHiberFileSize(a1, &NumberOfBytes);
  v5 = NumberOfBytes;
  if ( v4 >= 0 )
    v5 = a1;
  v13 = v5;
  if ( v5 <= 0 )
  {
LABEL_17:
    Status = -1073741823;
    goto LABEL_16;
  }
  FileInformation = v5;
  Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v9 = v13;
    Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &v9, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(
                 (_DWORD)PopHiberInfo,
                 (_DWORD)FileObject,
                 (unsigned int)&v13,
                 (unsigned int)&P,
                 (__int64)&NumberOfBytes);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
        if ( Status >= 0 )
        {
          qword_1404188D0 = v13;
          FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)FileObject);
          goto LABEL_15;
        }
      }
    }
  }
LABEL_16:
  *a2 = qword_1404188D0;
  return (unsigned int)Status;
}
