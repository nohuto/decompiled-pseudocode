/*
 * XREFs of IopValidateJunctionTarget @ 0x14081C8BC
 * Callers:
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     FsRtlValidateReparsePointBuffer @ 0x14011CC20 (FsRtlValidateReparsePointBuffer.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A5540 (IoVolumeDeviceToGuidPath.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
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
  char *PoolWithTag; // r14
  ULONG v11; // r12d
  _REPARSE_DATA_BUFFER *PoolWithQuota_0; // rax
  const void *v13; // rdx
  size_t v14; // r8
  _REPARSE_DATA_BUFFER *v15; // rsi
  int appended; // ebx
  PDEVICE_OBJECT *v17; // r12
  _DWORD *v18; // r13
  char v19; // r13
  ULONG v20; // r12d
  int v21; // r8d
  unsigned int v22; // ebx
  unsigned int v23; // r13d
  unsigned int v24; // eax
  _OWORD *v25; // rax
  _OWORD *v26; // r12
  unsigned int Length; // ecx
  char v29; // [rsp+40h] [rbp-128h]
  UNICODE_STRING v30; // [rsp+50h] [rbp-118h] BYREF
  __int64 v31; // [rsp+60h] [rbp-108h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-F8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-E8h] BYREF
  _REPARSE_DATA_BUFFER *v34; // [rsp+90h] [rbp-D8h]
  PVOID Object; // [rsp+98h] [rbp-D0h] BYREF
  int v36; // [rsp+A0h] [rbp-C8h]
  _OWORD *v37; // [rsp+A8h] [rbp-C0h]
  HANDLE FileHandle; // [rsp+B0h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+B8h] [rbp-B0h] BYREF
  UNICODE_STRING v40; // [rsp+C8h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+D8h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-50h] BYREF

  v6 = a3;
  *(_DWORD *)&Source.Length = 1572886;
  Source.Buffer = L"\\??\\Global\\";
  *(_DWORD *)&v40.Length = 2359330;
  v40.Buffer = L"\\??\\Global\\Volume";
  *(_DWORD *)&String1.Length = 1441812;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v34 = 0LL;
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
    PoolWithQuota_0 = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota_0(
                                                NonPagedPoolNx,
                                                (unsigned int)(v6 - 32));
    v13 = a2 + 2;
    v14 = (unsigned int)(v6 - 32);
  }
  else
  {
    v11 = v6;
    v36 = v6;
    PoolWithQuota_0 = (_REPARSE_DATA_BUFFER *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v6);
    v14 = v6;
    v13 = a2;
  }
  v15 = PoolWithQuota_0;
  v34 = PoolWithQuota_0;
  memmove(PoolWithQuota_0, v13, v14);
  if ( v15->ReparseTag != -1610612733 )
    goto LABEL_5;
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
        v17 = (PDEVICE_OBJECT *)Object;
        v18 = (_DWORD *)*((_QWORD *)Object + 1);
        if ( (v18[13] & 0x10) != 0 )
        {
LABEL_5:
          appended = -1073741811;
          goto LABEL_47;
        }
        v29 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v40, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(v18, &DestinationString), appended < 0) )
        {
          v19 = 1;
          v29 = 1;
        }
        else
        {
          v19 = 0;
        }
        if ( v19 )
          appended = IoVolumeDeviceToGuidPath(v17[1], (__int64)&DestinationString);
        if ( appended >= 0 )
        {
          v20 = String2.Length + 8;
          while ( 1 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x65546F49u);
            *(_QWORD *)&v30.Length = PoolWithTag;
            if ( !PoolWithTag )
            {
              appended = -1073741670;
              goto LABEL_47;
            }
            appended = IopQueryXxxInformation(
                         (struct _FILE_OBJECT *)Object,
                         9,
                         v20,
                         0,
                         (struct _IRP *)PoolWithTag,
                         &v31,
                         1);
            if ( appended != -2147483643 )
              break;
            v20 = *(_DWORD *)PoolWithTag + 8;
            ExFreePoolWithTag(PoolWithTag, 0);
            *(_QWORD *)&v30.Length = 0LL;
          }
          if ( appended < 0 )
            goto LABEL_47;
          if ( !*(_DWORD *)PoolWithTag || *((_WORD *)PoolWithTag + 2) != 92 )
            goto LABEL_5;
          v21 = DestinationString.Length + 22 + *(_DWORD *)PoolWithTag - 8;
          if ( !v19 )
            v21 = DestinationString.Length + 22 + *(_DWORD *)PoolWithTag;
          v22 = v21 - 2;
          if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92 )
            v22 = v21;
          if ( v22 >= 0xFFFD )
            goto LABEL_5;
          v23 = a3 + v22 - String2.Length;
          v24 = a4;
          if ( v23 > a4 )
            v24 = a3 + v22 - String2.Length;
          v25 = IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v24);
          v9 = v25;
          v37 = v25;
          if ( a1 == 590860 )
          {
            *v25 = *a2;
            v25[1] = a2[1];
            v26 = v25 + 2;
            LODWORD(v31) = v23 - 32;
          }
          else
          {
            v26 = v25;
            LODWORD(v31) = v23;
          }
          String1.Buffer = (wchar_t *)(v26 + 1);
          String1.Length = 0;
          String1.MaximumLength = v22;
          appended = RtlAppendUnicodeStringToString(&String1, &Source);
          if ( appended >= 0 )
          {
            v30 = DestinationString;
            if ( v29 )
            {
              v30.Length = DestinationString.Length - 8;
              v30.Buffer += 4;
            }
            if ( v30.Buffer[((unsigned __int64)v30.Length >> 1) - 1] == 92 )
              v30.Length -= 2;
            if ( !v30.Length || v30.Length > DestinationString.Length )
              goto LABEL_5;
            appended = RtlAppendUnicodeStringToString(&String1, &v30);
            if ( appended >= 0 )
            {
              v30.Buffer = (wchar_t *)(PoolWithTag + 4);
              v30.Length = *(_WORD *)PoolWithTag;
              v30.MaximumLength = v30.Length;
              appended = RtlAppendUnicodeStringToString(&String1, &v30);
              if ( appended >= 0 )
              {
                *(_DWORD *)v26 = -1610612733;
                *(_DWORD *)((char *)v26 + 6) = 0;
                *((_WORD *)v26 + 2) = v31 - 8;
                Length = String1.Length;
                *((_WORD *)v26 + 5) = String1.Length;
                *((_WORD *)v26 + ((unsigned __int64)Length >> 1) + 8) = 0;
                LOWORD(Length) = Length + 2;
                *((_WORD *)v26 + 6) = Length;
                memmove(
                  (char *)v26 + (unsigned __int16)Length + 16,
                  &v15->GenericReparseBuffer + v15->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                  v15->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v26 + 7) = v15->SymbolicLinkReparseBuffer.PrintNameLength;
                *a5 = v9;
                *a6 = v23;
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
LABEL_47:
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
