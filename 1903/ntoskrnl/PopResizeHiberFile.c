/*
 * XREFs of PopResizeHiberFile @ 0x140726EE8
 * Callers:
 *     PopEnlargeHiberFile @ 0x1407271D4 (PopEnlargeHiberFile.c)
 *     PopAdjustHiberFile @ 0x140727268 (PopAdjustHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     PopValidateHiberFileSize @ 0x14072703C (PopValidateHiberFileSize.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14074653C (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140746FB0 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x140747B08 (PopSetHiberFileMcb.c)
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

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !FileObject )
    goto LABEL_17;
  if ( qword_140443410 == a1 )
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
  Status = ZwSetInformationFile(
             *(HANDLE *)&PopHiberInfo,
             &IoStatusBlock,
             &FileInformation,
             8u,
             FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v9 = v13;
    Status = ZwSetInformationFile(*(HANDLE *)&PopHiberInfo, &IoStatusBlock, &v9, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(
                 PopHiberInfo,
                 (_DWORD)FileObject,
                 (unsigned int)&v13,
                 (unsigned int)&P,
                 (__int64)&NumberOfBytes);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
        if ( Status >= 0 )
        {
          qword_140443410 = v13;
          FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)FileObject);
          goto LABEL_15;
        }
      }
    }
  }
LABEL_16:
  *a2 = qword_140443410;
  return (unsigned int)Status;
}
