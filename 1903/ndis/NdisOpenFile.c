/*
 * XREFs of NdisOpenFile @ 0x1C0081470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C002B140 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __stdcall NdisOpenFile(
        PNDIS_STATUS Status,
        PNDIS_HANDLE FileHandle,
        PUINT FileLength,
        PNDIS_STRING FileName,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  int v9; // edx
  int v10; // edx
  wchar_t *PoolWithTag; // rax
  NTSTATUS v12; // edi
  NTSTATUS v13; // eax
  int v14; // edx
  ULONG v15; // r14d
  PVOID v16; // rax
  int v17; // edx
  void *v18; // rsi
  NTSTATUS v19; // r15d
  int v20; // edx
  _QWORD *v21; // rax
  _BYTE *v22; // rdi
  HANDLE FileHandlea; // [rsp+60h] [rbp-71h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-69h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  __int64 FileInformation; // [rsp+B8h] [rbp-19h] BYREF
  SIZE_T NumberOfBytes; // [rsp+C0h] [rbp-11h]
  __int64 v29; // [rsp+C8h] [rbp-9h]

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  FileInformation = 0LL;
  NumberOfBytes = 0LL;
  v29 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      14,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids);
  }
  if ( (int)RtlUShortAdd(0x3Cu, FileName->MaximumLength, &Destination.MaximumLength) < 0 )
  {
    *Status = -2147483643;
    goto LABEL_33;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x6E66444Eu);
  Destination.Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    *Status = -1073741670;
    goto LABEL_33;
  }
  Destination.Length = 58;
  *(_OWORD *)PoolWithTag = *(_OWORD *)L"\\SystemRoot\\system32\\drivers\\";
  *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)L"oot\\system32\\drivers\\";
  *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)L"em32\\drivers\\";
  *((_QWORD *)PoolWithTag + 6) = *(_QWORD *)L"vers\\";
  *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)L"\\";
  RtlAppendUnicodeStringToString(&Destination, FileName);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
      &Destination.Length);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwCreateFile(&FileHandlea, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        1,
        16,
        (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
        v12);
    }
    *Status = -1073676261;
    goto LABEL_33;
  }
  v13 = ZwQueryInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        1,
        17,
        (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
        v13);
    }
LABEL_16:
    ZwClose(FileHandlea);
    *Status = -1073676260;
    goto LABEL_33;
  }
  v15 = NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        1,
        18,
        (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
        NumberOfBytes);
    }
    goto LABEL_16;
  }
  v16 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6966444Eu);
  v18 = v16;
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        1,
        19,
        (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids);
    }
    goto LABEL_16;
  }
  v19 = ZwReadFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, v16, v15, 0LL, 0LL);
  ZwClose(FileHandlea);
  if ( v19 >= 0 && IoStatusBlock.Information == v15 )
  {
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6466444Eu);
    v22 = v21;
    if ( v21 )
    {
      *v21 = v18;
      KeInitializeSpinLock(v21 + 1);
      v22[16] = 0;
      *FileHandle = v22;
      *FileLength = v15;
      *Status = 0;
    }
    else
    {
      *Status = -1073741670;
      ExFreePoolWithTag(v18, 0);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        1,
        20,
        (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
        v19);
    }
    *Status = -1073676260;
    ExFreePoolWithTag(v18, 0);
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1,
      21,
      (struct _GUID *)&WPP_34c34292621439c17f3df840409c7e2a_Traceguids,
      *Status);
  }
}
