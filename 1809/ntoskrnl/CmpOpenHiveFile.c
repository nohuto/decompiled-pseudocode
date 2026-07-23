/*
 * XREFs of CmpOpenHiveFile @ 0x1405B5330
 * Callers:
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1401B8A10 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetVolumeClusterSize @ 0x1405A5094 (CmpGetVolumeClusterSize.c)
 *     CmpCreateEvent @ 0x1405B587C (CmpCreateEvent.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B5B70 (CmpQueryFileSecurityDescriptor.c)
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 *     PsReferenceImpersonationToken @ 0x1406A5B00 (PsReferenceImpersonationToken.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406CAD24 (CmpGetVolumeLogFileSizeCap.c)
 *     SeTokenImpersonationLevel @ 0x1406FA890 (SeTokenImpersonationLevel.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F79DC (CmpOpenFileWithExtremePrejudice.c)
 *     PsRevertToSelf @ 0x14088A590 (PsRevertToSelf.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        UNICODE_STRING *Source,
        unsigned int a2,
        HANDLE *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        int *a7,
        void *a8,
        __int64 a9)
{
  char v10; // di
  __int64 v11; // r15
  PACCESS_TOKEN v12; // r12
  __int64 result; // rax
  NTSTATUS Status; // ebx
  const WCHAR *v15; // r14
  __int64 v16; // rsi
  unsigned __int16 v17; // si
  PVOID v18; // r14
  HANDLE v19; // r15
  int v20; // esi
  ACCESS_MASK v21; // r13d
  ULONG ShareAccess; // r14d
  ULONG CreateOptions; // r15d
  SECURITY_IMPERSONATION_LEVEL v24; // eax
  ULONG v25; // esi
  int Information; // esi
  HANDLE v27; // rcx
  int *v28; // rdi
  NTSTATUS VolumeClusterSize; // eax
  ULONG CreateDisposition; // [rsp+38h] [rbp-C8h]
  char v31; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+74h] [rbp-8Ch] BYREF
  int InputBuffer; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v38; // [rsp+7Ch] [rbp-84h]
  PACCESS_TOKEN Token; // [rsp+80h] [rbp-80h]
  PETHREAD Thread; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h]
  HANDLE Event; // [rsp+98h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-50h] BYREF
  void *v45; // [rsp+C0h] [rbp-40h]
  int *v46; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  HANDLE *v48; // [rsp+D8h] [rbp-28h]
  int *v49; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *v50; // [rsp+E8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD FileInformation[2]; // [rsp+120h] [rbp+20h] BYREF
  int v53; // [rsp+140h] [rbp+40h]
  char v54[8]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v55; // [rsp+150h] [rbp+50h]

  v10 = a5;
  Token = a6;
  v46 = a7;
  v45 = a8;
  v47 = a9;
  v50 = Source;
  v11 = a2;
  v12 = 0LL;
  v49 = a4;
  v48 = a3;
  v38 = a2;
  ImpersonationLevel = SecurityImpersonation;
  CopyOnOpen[0] = 0;
  Thread = 0LL;
  EffectiveOnly = 0;
  *a3 = 0LL;
  v31 = 0;
  FileAttributes = 6;
  if ( a2 >= 6 )
    return 3221225485LL;
  result = CmpCreateEvent(NotificationEvent);
  Status = result;
  if ( (int)result >= 0 )
  {
    v15 = (const WCHAR *)CmFileNameExtensions[v11];
    if ( v15 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      v17 = Source->Length + 2 * (v16 + 1);
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x62774D43u);
      if ( !Destination.Buffer )
      {
        v18 = Object;
        Status = -1073741670;
        v19 = Event;
LABEL_62:
        ZwClose(v19);
        ObfDereferenceObject(v18);
        return (unsigned int)Status;
      }
      Destination.Length = 0;
      Destination.MaximumLength = v17;
      RtlAppendUnicodeStringToString(&Destination, Source);
      RtlAppendUnicodeToString(&Destination, v15);
    }
    else
    {
      Destination = *Source;
    }
    v20 = 3;
    if ( (a5 & 0x20) != 0 )
    {
      v21 = 1;
      ShareAccess = ((a5 >> 7) & 1) == 0;
    }
    else
    {
      ShareAccess = 0;
      v21 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
      if ( (_DWORD)v11 )
        v21 = (a5 & 8) == 0 ? 3 : 0;
    }
    if ( (_DWORD)v11 )
    {
      if ( (a5 & 0x20) != 0 )
        v20 = 1;
      else
        v20 = (a5 & 0x10) == 0 ? 3 : 0;
      CreateOptions = 32780;
    }
    else
    {
      FileAttributes = 128;
      CreateOptions = 49188;
      if ( (a5 & 0x21) != 1 )
        v20 = 1;
    }
    if ( Token )
    {
      Thread = KeGetCurrentThread();
      v12 = PsReferenceImpersonationToken(Thread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v24 = (unsigned int)SeTokenImpersonationLevel(Token);
      if ( PsImpersonateClient(Thread, Token, 0, 0, v24) < 0 )
        goto LABEL_56;
      v10 = a5 | 0x40;
      v31 = 1;
    }
    CreateDisposition = v20;
    v25 = FileAttributes;
    ObjectAttributes.Attributes = 16 * (v10 & 0x40 | 0x24);
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.SecurityDescriptor = v45;
    ObjectAttributes.Length = 48;
    Status = ZwCreateFile(
               &FileHandle,
               v21,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               FileAttributes,
               ShareAccess,
               CreateDisposition,
               CreateOptions,
               0LL,
               0);
    if ( Status == -1073741790 )
      Status = CmpOpenFileWithExtremePrejudice(&FileHandle, &ObjectAttributes, &IoStatusBlock, v25, CreateOptions);
    if ( v31 )
    {
      if ( v12 )
      {
        if ( PsImpersonateClient(Thread, v12, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel) < 0 )
          KeBugCheckEx(0x51u, 0x26uLL, (ULONG_PTR)v12, 0LL, 0LL);
      }
      else
      {
        PsRevertToSelf();
      }
    }
    if ( Status >= 0 )
    {
      Information = IoStatusBlock.Information;
      if ( (v10 & 0x28) == 0 )
      {
        v53 = 0;
        FileInformation[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        FileInformation[1] = FileInformation[0];
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      v18 = Object;
      v19 = Event;
      if ( (v10 & 0x22) == 2 )
      {
        Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
          goto LABEL_41;
      }
      InputBuffer = 0;
      if ( ZwFsControlFile(FileHandle, v19, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
        KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
      if ( !v38 )
      {
        if ( Information != 2
          && ZwQueryInformationFile(FileHandle, &IoStatusBlock, v54, 0x18u, FileStandardInformation) >= 0
          && !v55 )
        {
          Information = 2;
        }
        v28 = v46;
        if ( v46 )
        {
          VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle, v46);
          v27 = FileHandle;
          Status = VolumeClusterSize;
          if ( VolumeClusterSize < 0 )
            goto LABEL_42;
          v28[1] = CmpGetVolumeLogFileSizeCap(FileHandle);
        }
        if ( v47 )
        {
          Status = CmpQueryFileSecurityDescriptor(FileHandle);
          if ( Status < 0 )
          {
LABEL_41:
            v27 = FileHandle;
LABEL_42:
            ZwClose(v27);
            goto LABEL_57;
          }
        }
      }
      Status = 0;
      *v48 = FileHandle;
      *v49 = Information;
LABEL_57:
      if ( Destination.Buffer && Destination.Buffer != v50->Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      if ( v12 )
        ObfDereferenceObject(v12);
      goto LABEL_62;
    }
LABEL_56:
    v18 = Object;
    v19 = Event;
    goto LABEL_57;
  }
  return result;
}
