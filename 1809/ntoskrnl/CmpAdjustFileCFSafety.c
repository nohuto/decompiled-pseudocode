/*
 * XREFs of CmpAdjustFileCFSafety @ 0x1401B33B4
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14000EDFC (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x1405B0A08 (CmpCmdHiveClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlIsCloudFilesPlaceholder @ 0x1402F4D90 (RtlIsCloudFilesPlaceholder.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     FsRtlSetKernelEaFile @ 0x1406C9170 (FsRtlSetKernelEaFile.c)
 */

__int64 __fastcall CmpAdjustFileCFSafety(HANDLE FileHandle, char a2)
{
  NTSTATUS v4; // ebx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  ULONG FileInformation[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v9[5]; // [rsp+50h] [rbp-30h] BYREF

  memset(v9, 0, sizeof(v9));
  LODWORD(v9[0]) = 0;
  WORD2(v9[0]) = 5632;
  strcpy((char *)&v9[1], "$Kernel.CFDoNotConvert");
  if ( a2 )
  {
    HIWORD(v9[0]) = 3;
    strcpy((char *)&v9[3] + 7, "CM");
  }
  else
  {
    HIWORD(v9[0]) = 0;
  }
  v4 = ObReferenceObjectByHandle(FileHandle, 0x102u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v4 = FsRtlSetKernelEaFile((PFILE_OBJECT)Object);
    if ( v4 >= 0 )
    {
      if ( a2 )
      {
        v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 8u, FileAttributeTagInformation);
        if ( v4 < 0 )
        {
LABEL_10:
          HIWORD(v9[0]) = 0;
          FsRtlSetKernelEaFile((PFILE_OBJECT)Object);
          goto LABEL_11;
        }
        if ( RtlIsCloudFilesPlaceholder(FileInformation[0], FileInformation[1]) )
        {
          v4 = -1073741436;
          goto LABEL_10;
        }
      }
      v4 = 0;
    }
  }
LABEL_11:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v4;
}
