/*
 * XREFs of QueryExternalTranslatorInterface @ 0x1C009C220
 * Callers:
 *     AcpiCheckExternalConnection @ 0x1C009A520 (AcpiCheckExternalConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     RegisterExternalTranslatorInterface @ 0x1C009C4F0 (RegisterExternalTranslatorInterface.c)
 */

__int64 QueryExternalTranslatorInterface()
{
  _DWORD *PoolWithTag; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT *v3; // rsi
  __int64 v4; // rcx
  PIRP v5; // rax
  NTSTATUS Driver; // eax
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  void *FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF

  PoolWithTag = 0LL;
  ObjectAttributes.Length = 48;
  DestinationString.Buffer = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  AttachedDeviceReference = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ResourceHubDeviceName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  if ( Status == -1073741772 )
  {
    if ( !LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) )
    {
LABEL_28:
      if ( DestinationString.Buffer )
        ExFreePoolWithTag(DestinationString.Buffer, 0x58706341u);
      return (unsigned int)Status;
    }
    Driver = ZwLoadDriver((PUNICODE_STRING)&ResourceHubDriver);
    if ( Driver < 0 )
    {
      OpenOptions[0] = Driver;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0xEu,
        (__int64)&WPP_05a11f23d0943a3100389a2588cd23f4_Traceguids,
        *(_QWORD *)OpenOptions);
    }
    Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  }
  if ( Status < 0 )
    goto LABEL_28;
  Status = ObReferenceObjectByHandle(FileHandle, 0x100003u, 0LL, 0, &Object, 0LL);
  v3 = (PDEVICE_OBJECT *)Object;
  ZwClose(FileHandle);
  if ( Status < 0 )
    goto LABEL_14;
  AttachedDeviceReference = IoGetAttachedDeviceReference(v3[1]);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x58706341u);
  if ( PoolWithTag
    && (DestinationString.MaximumLength = 42,
        (DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x2AuLL, 0x58706341u)) != 0LL) )
  {
    RtlCopyUnicodeString(&DestinationString, &ResourceHubDeviceName);
    memset(PoolWithTag, 0, 0x78uLL);
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_WORD *)PoolWithTag + 16) = 80;
    *PoolWithTag = 65656;
    v4 = *(_QWORD *)(RootDeviceExtension + 720);
    *((_QWORD *)PoolWithTag + 11) = AcpiExternalInterfaceUnload;
    *((_QWORD *)PoolWithTag + 13) = AcpiAllocateGsivForSecondaryInterrupt;
    *((_QWORD *)PoolWithTag + 12) = &AcpiGetFullyQualifiedBiosName;
    *((_QWORD *)PoolWithTag + 10) = v4;
    *((_QWORD *)PoolWithTag + 14) = AcpiUpdateInterruptProperties;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v5 = IoBuildDeviceIoControlRequest(
           0x2AC028u,
           AttachedDeviceReference,
           PoolWithTag,
           0x78u,
           PoolWithTag,
           0x78u,
           0,
           &Event,
           &IoStatusBlock);
    if ( !v5 )
    {
LABEL_20:
      Status = -1073741811;
      goto LABEL_14;
    }
    v5->IoStatus.Status = -1073741637;
    Status = IofCallDriver(AttachedDeviceReference, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      if ( *((_WORD *)PoolWithTag + 1) && *(_WORD *)PoolWithTag >= 0x78u && *((_QWORD *)PoolWithTag + 7) )
      {
        RegisterExternalTranslatorInterface(PoolWithTag, v3, &DestinationString);
        goto LABEL_14;
      }
      goto LABEL_20;
    }
  }
  else
  {
    Status = -1073741670;
  }
LABEL_14:
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( Status < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x58706341u);
    goto LABEL_28;
  }
  return (unsigned int)Status;
}
