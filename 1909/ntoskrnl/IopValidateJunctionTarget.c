/*
 * XREFs of IopValidateJunctionTarget @ 0x140854DCC
 * Callers:
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037A20 (IopVerifierExAllocatePoolWithQuota.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     FsRtlValidateReparsePointBuffer @ 0x14011F930 (FsRtlValidateReparsePointBuffer.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToDosName @ 0x14064BE70 (IoVolumeDeviceToDosName.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     IoVolumeDeviceToGuidPath @ 0x1406902F0 (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IopValidateJunctionTarget(
        int a1,
        _OWORD *a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  SIZE_T v6; // rbx
  void *v9; // r15
  char *PoolWithTag; // rsi
  ULONG v11; // r12d
  _REPARSE_DATA_BUFFER *PoolWithQuota; // rax
  const void *v13; // rdx
  size_t v14; // r8
  _REPARSE_DATA_BUFFER *v15; // r14
  int appended; // ebx
  _DWORD *v17; // r12
  char v18; // r13
  ULONG v19; // r12d
  int v20; // r8d
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  unsigned int v23; // eax
  _OWORD *v24; // rax
  _OWORD *v25; // r12
  unsigned int Length; // ecx
  char v28; // [rsp+40h] [rbp-138h]
  UNICODE_STRING v29; // [rsp+50h] [rbp-128h] BYREF
  __int64 v30; // [rsp+60h] [rbp-118h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-108h] BYREF
  PVOID Object; // [rsp+80h] [rbp-F8h] BYREF
  _REPARSE_DATA_BUFFER *v33; // [rsp+88h] [rbp-F0h]
  UNICODE_STRING String2; // [rsp+90h] [rbp-E8h] BYREF
  UNICODE_STRING Destination; // [rsp+A0h] [rbp-D8h] BYREF
  int v36; // [rsp+B0h] [rbp-C8h]
  _OWORD *v37; // [rsp+B8h] [rbp-C0h]
  HANDLE FileHandle; // [rsp+C0h] [rbp-B8h] BYREF
  UNICODE_STRING String1; // [rsp+C8h] [rbp-B0h] BYREF
  UNICODE_STRING v40; // [rsp+D8h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+E8h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-70h] BYREF

  v6 = a3;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 1572886LL;
  Source.Buffer = L"\\??\\Global\\";
  *(_QWORD *)&v40.Length = 2359330LL;
  v40.Buffer = L"\\??\\Global\\Volume";
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 1441812LL;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v33 = 0LL;
  v9 = 0LL;
  v37 = 0LL;
  FileHandle = 0LL;
  Object = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a1 == 590860 )
  {
    v11 = v6 - 32;
    v36 = v6 - 32;
    PoolWithQuota = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota(NonPagedPoolNx, (unsigned int)(v6 - 32));
    v13 = a2 + 2;
    v14 = (unsigned int)(v6 - 32);
  }
  else
  {
    v11 = v6;
    v36 = v6;
    PoolWithQuota = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota(NonPagedPoolNx, v6);
    v14 = v6;
    v13 = a2;
  }
  v15 = PoolWithQuota;
  v33 = PoolWithQuota;
  memmove(PoolWithQuota, v13, v14);
  appended = FsRtlValidateReparsePointBuffer(v11, v15);
  if ( appended >= 0 )
  {
    String2.Buffer = v15->MountPointReparseBuffer.PathBuffer;
    String2.Length = v15->SymbolicLinkReparseBuffer.SubstituteNameLength & 0xFFFE;
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = IopReferenceFileObject(FileHandle, 0, 0, &Object, 0LL);
      if ( appended >= 0 )
      {
        v17 = (_DWORD *)*((_QWORD *)Object + 1);
        if ( (v17[13] & 0x10) != 0 )
        {
LABEL_8:
          appended = -1073741811;
          goto LABEL_45;
        }
        v18 = 0;
        v28 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v40, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(v17, &DestinationString), appended < 0) )
        {
          v18 = 1;
          v28 = 1;
        }
        if ( v18 )
          appended = IoVolumeDeviceToGuidPath(*((PDEVICE_OBJECT *)Object + 1), (__int64)&DestinationString);
        if ( appended >= 0 )
        {
          v19 = String2.Length + 8;
          while ( 1 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x65546F49u);
            *(_QWORD *)&v29.Length = PoolWithTag;
            if ( !PoolWithTag )
            {
              appended = -1073741670;
              goto LABEL_45;
            }
            appended = IopQueryXxxInformation(
                         (struct _FILE_OBJECT *)Object,
                         9,
                         v19,
                         0,
                         (struct _IRP *)PoolWithTag,
                         &v30,
                         1);
            if ( appended != -2147483643 )
              break;
            v19 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            *(_QWORD *)&v29.Length = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_45;
          if ( !*(_DWORD *)PoolWithTag || *((_WORD *)PoolWithTag + 2) != 92 )
            goto LABEL_8;
          v20 = DestinationString.Length + *(_DWORD *)PoolWithTag + 14;
          if ( !v18 )
            v20 = DestinationString.Length + *(_DWORD *)PoolWithTag + 22;
          v21 = v20 - 2;
          if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92 )
            v21 = v20;
          if ( v21 >= 0xFFFD )
            goto LABEL_8;
          v22 = a3 + v21 - String2.Length;
          v23 = a4;
          if ( v22 > a4 )
            v23 = a3 + v21 - String2.Length;
          v24 = IopVerifierExAllocatePoolWithQuota(NonPagedPoolNx, v23);
          v9 = v24;
          v37 = v24;
          if ( a1 == 590860 )
          {
            *v24 = *a2;
            v24[1] = a2[1];
            v25 = v24 + 2;
            LODWORD(v30) = v22 - 32;
          }
          else
          {
            v25 = v24;
            LODWORD(v30) = v22;
          }
          Destination.Buffer = (wchar_t *)(v25 + 1);
          Destination.Length = 0;
          Destination.MaximumLength = v21;
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( appended >= 0 )
          {
            v29 = DestinationString;
            if ( v28 )
            {
              v29.Length = DestinationString.Length - 8;
              v29.Buffer += 4;
            }
            if ( v29.Buffer[((unsigned __int64)v29.Length >> 1) - 1] == 92 )
              v29.Length -= 2;
            if ( !v29.Length || v29.Length > DestinationString.Length )
              goto LABEL_8;
            appended = RtlAppendUnicodeStringToString(&Destination, &v29);
            if ( appended >= 0 )
            {
              v29.Buffer = (wchar_t *)(PoolWithTag + 4);
              v29.Length = *(_WORD *)PoolWithTag;
              v29.MaximumLength = v29.Length;
              appended = RtlAppendUnicodeStringToString(&Destination, &v29);
              if ( appended >= 0 )
              {
                *(_DWORD *)v25 = -1610612733;
                *(_DWORD *)((char *)v25 + 6) = 0;
                *((_WORD *)v25 + 2) = v30 - 8;
                Length = Destination.Length;
                *((_WORD *)v25 + 5) = Destination.Length;
                *((_WORD *)v25 + ((unsigned __int64)Length >> 1) + 8) = 0;
                LOWORD(Length) = Length + 2;
                *((_WORD *)v25 + 6) = Length;
                memmove(
                  (char *)v25 + (unsigned __int16)Length + 16,
                  &v15->GenericReparseBuffer + v15->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                  v15->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v25 + 7) = v15->SymbolicLinkReparseBuffer.PrintNameLength;
                *a5 = v9;
                *a6 = v22;
                v9 = 0LL;
              }
            }
          }
        }
        else
        {
          DestinationString.Buffer = 0LL;
        }
      }
    }
  }
LABEL_45:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}
