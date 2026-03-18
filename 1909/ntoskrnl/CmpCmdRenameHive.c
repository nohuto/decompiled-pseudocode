/*
 * XREFs of CmpCmdRenameHive @ 0x1408339C0
 * Callers:
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 * Callees:
 *     ZwQueryObject @ 0x1401C0E50 (ZwQueryObject.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpCmdRenameHive(HANDLE FileHandle, PVOID ObjectInformation, const void **a3, ULONG a4, char a5)
{
  NTSTATUS result; // eax
  char *PoolWithTag; // rax
  void *v9; // rdi
  NTSTATUS v10; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  ULONG v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !ObjectInformation
    || (result = ZwQueryObject(FileHandle, ObjectNameInformation, ObjectInformation, a4, &v12), result >= 0) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3 + 24LL, 0x20204D43u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *PoolWithTag = a5;
      *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a3;
      memmove(PoolWithTag + 20, a3[1], *(unsigned __int16 *)a3);
      v10 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v9, *(unsigned __int16 *)a3 + 24, FileRenameInformation);
      ExFreePoolWithTag(v9, 0);
      return v10;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
