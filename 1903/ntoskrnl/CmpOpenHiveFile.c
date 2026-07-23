/*
 * XREFs of CmpOpenHiveFile @ 0x140636BDC
 * Callers:
 *     CmpInitHiveFromFile @ 0x1406365F8 (CmpInitHiveFromFile.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmLoadKey @ 0x1406E94C4 (CmLoadKey.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x1401C07F0 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
 *     CmpCreateEvent @ 0x140637170 (CmpCreateEvent.c)
 *     CmpGetVolumeClusterSize @ 0x140663B30 (CmpGetVolumeClusterSize.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1406987C4 (CmpQueryFileSecurityDescriptor.c)
 *     PsReferenceImpersonationToken @ 0x1406CB2F0 (PsReferenceImpersonationToken.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406E80BC (CmpGetVolumeLogFileSizeCap.c)
 *     SeTokenImpersonationLevel @ 0x140713F30 (SeTokenImpersonationLevel.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F528 (CmpOpenFileWithExtremePrejudice.c)
 *     PsRevertToSelf @ 0x1408C7270 (PsRevertToSelf.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        UNICODE_STRING *Source,
        unsigned int a2,
        HANDLE *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9)
{
  __int64 v11; // r15
  char v12; // di
  PACCESS_TOKEN v13; // r12
  __int64 result; // rax
  NTSTATUS Status; // ebx
  const WCHAR *v16; // r14
  __int64 v17; // rsi
  unsigned __int16 v18; // si
  PVOID v19; // r14
  HANDLE v20; // r15
  int v21; // esi
  ACCESS_MASK v22; // r13d
  ULONG ShareAccess; // r14d
  ULONG CreateOptions; // r15d
  SECURITY_IMPERSONATION_LEVEL v25; // eax
  ULONG v26; // esi
  int Information; // esi
  HANDLE v28; // rcx
  __int64 v29; // rdi
  int VolumeClusterSize; // eax
  ULONG CreateDisposition; // [rsp+38h] [rbp-C8h]
  char v32; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+74h] [rbp-8Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Destination; // [rsp+88h] [rbp-78h] BYREF
  int InputBuffer; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v41; // [rsp+9Ch] [rbp-64h]
  PACCESS_TOKEN Token; // [rsp+A0h] [rbp-60h]
  PETHREAD Thread; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h]
  HANDLE Event; // [rsp+B8h] [rbp-48h]
  void *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  HANDLE *v49; // [rsp+D8h] [rbp-28h]
  int *v50; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *v51; // [rsp+E8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+120h] [rbp+20h] BYREF
  __int64 v54; // [rsp+128h] [rbp+28h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  _BYTE FileInformation[40]; // [rsp+138h] [rbp+38h] BYREF

  Token = a6;
  v11 = a2;
  v47 = a7;
  v46 = a8;
  v51 = Source;
  v48 = a9;
  v50 = a4;
  v49 = a3;
  v41 = a2;
  memset(FileInformation, 0, sizeof(FileInformation));
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v12 = a5;
  CopyOnOpen[0] = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v13 = 0LL;
  Destination.Buffer = 0LL;
  Thread = 0LL;
  ImpersonationLevel = SecurityImpersonation;
  EffectiveOnly = 0;
  *a3 = 0LL;
  v32 = 0;
  FileAttributes = 6;
  if ( (unsigned int)v11 >= 6 )
    return 3221225485LL;
  result = CmpCreateEvent(NotificationEvent);
  Status = result;
  if ( (int)result >= 0 )
  {
    v16 = (const WCHAR *)CmFileNameExtensions[v11];
    if ( v16 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v16[v17] );
      v18 = Source->Length + 2 * (v17 + 1);
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x62774D43u);
      if ( !Destination.Buffer )
      {
        v19 = Object;
        Status = -1073741670;
        v20 = Event;
LABEL_62:
        ZwClose(v20);
        ObfDereferenceObject(v19);
        return (unsigned int)Status;
      }
      Destination.Length = 0;
      Destination.MaximumLength = v18;
      RtlAppendUnicodeStringToString(&Destination, Source);
      RtlAppendUnicodeToString(&Destination, v16);
    }
    else
    {
      Destination = *Source;
    }
    v21 = 3;
    if ( (a5 & 0x20) != 0 )
    {
      v22 = 1;
      ShareAccess = ((a5 >> 7) & 1) == 0;
    }
    else
    {
      ShareAccess = 0;
      v22 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
      if ( (_DWORD)v11 )
        v22 = (a5 & 8) == 0 ? 3 : 0;
    }
    if ( (_DWORD)v11 )
    {
      if ( (a5 & 0x20) != 0 )
        v21 = 1;
      else
        v21 = (a5 & 0x10) == 0 ? 3 : 0;
      CreateOptions = 32780;
    }
    else
    {
      FileAttributes = 128;
      CreateOptions = 49188;
      if ( (a5 & 0x21) != 1 )
        v21 = 1;
    }
    if ( Token )
    {
      Thread = KeGetCurrentThread();
      v13 = PsReferenceImpersonationToken(Thread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v25 = (unsigned int)SeTokenImpersonationLevel(Token);
      if ( PsImpersonateClient(Thread, Token, 0, 0, v25) < 0 )
        goto LABEL_56;
      v12 = a5 | 0x40;
      v32 = 1;
    }
    CreateDisposition = v21;
    v26 = FileAttributes;
    ObjectAttributes.Attributes = 16 * (v12 & 0x40 | 0x24);
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.SecurityDescriptor = v46;
    ObjectAttributes.Length = 48;
    Status = ZwCreateFile(
               &FileHandle,
               v22,
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
      Status = CmpOpenFileWithExtremePrejudice(&FileHandle, &ObjectAttributes, &IoStatusBlock, v26, CreateOptions);
    if ( v32 )
    {
      if ( v13 )
      {
        if ( PsImpersonateClient(Thread, v13, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel) < 0 )
          KeBugCheckEx(0x51u, 0x26uLL, (ULONG_PTR)v13, 0LL, 0LL);
      }
      else
      {
        PsRevertToSelf();
      }
    }
    if ( Status >= 0 )
    {
      Information = IoStatusBlock.Information;
      if ( (v12 & 0x28) == 0 )
      {
        *(_DWORD *)&FileInformation[32] = 0;
        *(__m128i *)FileInformation = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        *(_OWORD *)&FileInformation[16] = *(_OWORD *)FileInformation;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      v19 = Object;
      v20 = Event;
      if ( (v12 & 0x22) == 2 )
      {
        Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
          goto LABEL_41;
      }
      InputBuffer = 0;
      if ( ZwFsControlFile(FileHandle, v20, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
        KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
      if ( !v41 )
      {
        if ( Information != 2
          && ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v53, 0x18u, FileStandardInformation) >= 0
          && !v54 )
        {
          Information = 2;
        }
        v29 = v47;
        if ( v47 )
        {
          VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle);
          v28 = FileHandle;
          Status = VolumeClusterSize;
          if ( VolumeClusterSize < 0 )
            goto LABEL_42;
          *(_DWORD *)(v29 + 4) = CmpGetVolumeLogFileSizeCap(FileHandle);
        }
        if ( v48 )
        {
          Status = CmpQueryFileSecurityDescriptor(FileHandle);
          if ( Status < 0 )
          {
LABEL_41:
            v28 = FileHandle;
LABEL_42:
            ZwClose(v28);
            goto LABEL_57;
          }
        }
      }
      Status = 0;
      *v49 = FileHandle;
      *v50 = Information;
LABEL_57:
      if ( Destination.Buffer && Destination.Buffer != v51->Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      if ( v13 )
        ObfDereferenceObject(v13);
      goto LABEL_62;
    }
LABEL_56:
    v19 = Object;
    v20 = Event;
    goto LABEL_57;
  }
  return result;
}
