/*
 * XREFs of SmKmStoreFileCreateForIoType @ 0x1408EAA54
 * Callers:
 *     SmKmStoreFileCreate @ 0x1408EA5A4 (SmKmStoreFileCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     ZwSetSecurityObject @ 0x1401C34F0 (ZwSetSecurityObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IoCreateFile @ 0x140615D70 (IoCreateFile.c)
 *     SmKmFileInfoCleanup @ 0x1408E9864 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1408E9BD0 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileDelete @ 0x1408EAD04 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408EB02C (SmKmStoreFileMakeSecurityDescriptor.c)
 */

__int64 __fastcall SmKmStoreFileCreateForIoType(_OWORD *a1, const WCHAR *a2, int *a3, int a4, int a5)
{
  BOOL v8; // edi
  int v9; // r15d
  BOOLEAN v10; // r12
  int IsVolumeIoPossible; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle[8]; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+110h] [rbp+10h] BYREF
  int v22; // [rsp+198h] [rbp+98h] BYREF

  v22 = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, 0x28uLL);
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
