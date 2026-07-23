/*
 * XREFs of SmKmStoreFileCreateForIoType @ 0x1408AED3C
 * Callers:
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IoSetThreadHardErrorMode @ 0x1400EEDD0 (IoSetThreadHardErrorMode.c)
 *     ZwSetSecurityObject @ 0x1401BB6F0 (ZwSetSecurityObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IoCreateFile @ 0x14060B8B0 (IoCreateFile.c)
 *     SmKmFileInfoCleanup @ 0x1408ADBA4 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1408ADEFC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileDelete @ 0x1408AEFB8 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AF2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 */

__int64 __fastcall SmKmStoreFileCreateForIoType(_OWORD *a1, const WCHAR *a2, int *a3, int a4, int a5)
{
  BOOL v8; // edi
  int v9; // r14d
  BOOLEAN v10; // r12
  int IsVolumeIoPossible; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  HANDLE FileHandle[8]; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+110h] [rbp+10h] BYREF
  int v22; // [rsp+198h] [rbp+98h] BYREF

  v22 = a4;
  v8 = 0;
  memset(FileHandle, 0, sizeof(FileHandle));
  if ( a3 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v22 = 0;
    a3 = &v22;
  }
  v10 = IoSetThreadHardErrorMode(0);
  RtlInitUnicodeString(&DestinationString, a2);
  IsVolumeIoPossible = SmKmStoreFileMakeSecurityDescriptor(SecurityDescriptor);
  if ( IsVolumeIoPossible >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    while ( 1 )
    {
      IsVolumeIoPossible = IoCreateFile(
                             FileHandle,
                             0x140003u,
                             &ObjectAttributes,
                             &IoStatusBlock,
                             0LL,
                             0x2000u,
                             0,
                             0,
                             0x800Au,
                             0LL,
                             0,
                             CreateFileTypeNone,
                             0LL,
                             *a3 != 0 ? 264 : 266);
      if ( IsVolumeIoPossible < 0 )
        break;
      IsVolumeIoPossible = ObReferenceObjectByHandle(FileHandle[0], 0x10003u, 0LL, 0, &Object, 0LL);
      FileHandle[1] = Object;
      if ( IsVolumeIoPossible < 0 )
        break;
      v8 = !*a3 || (IoStatusBlock.Information & 0xFFFFFFFFFFFFFFFDuLL) == 0;
      IsVolumeIoPossible = ZwSetSecurityObject(FileHandle[0], 4u, SecurityDescriptor);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( *a3 )
        goto LABEL_23;
      IsVolumeIoPossible = SmKmIsVolumeIoPossible((__int64)FileHandle, &a5);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( a5 )
      {
LABEL_23:
        v13 = *(_OWORD *)&FileHandle[2];
        *a1 = *(_OWORD *)FileHandle;
        v14 = *(_OWORD *)&FileHandle[4];
        a1[1] = v13;
        v15 = *(_OWORD *)&FileHandle[6];
        a1[2] = v14;
        a1[3] = v15;
        memset(FileHandle, 0, sizeof(FileHandle));
        IsVolumeIoPossible = 0;
        goto LABEL_22;
      }
      if ( v9 )
      {
        IsVolumeIoPossible = -1073741637;
        break;
      }
      *a3 = 1;
      if ( v8 )
        SmKmStoreFileDelete(FileHandle);
      SmKmFileInfoCleanup((__int64)FileHandle);
      memset(FileHandle, 0, sizeof(FileHandle));
      v8 = 0;
    }
    if ( v8 )
      SmKmStoreFileDelete(FileHandle);
  }
LABEL_22:
  SmKmFileInfoCleanup((__int64)FileHandle);
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)IsVolumeIoPossible;
}
