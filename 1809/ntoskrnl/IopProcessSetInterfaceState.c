/*
 * XREFs of IopProcessSetInterfaceState @ 0x140710B98
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x1406FE96C (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140710B20 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401B9A50 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401BA7D0 (ZwOpenSymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14059BDB0 (_CmGetDeviceInterfaceClassGuid.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E6D84 (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406FA9D0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDeferSetInterfaceState @ 0x140710A30 (PiDeferSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14071106C (IopBuildGlobalSymbolicLinkString.c)
 *     PnpSetDeviceClassChange @ 0x140711428 (PnpSetDeviceClassChange.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1407114F8 (PiRemoveDeferredSetInterfaceState.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(UNICODE_STRING *a1, unsigned __int8 a2, char a3)
{
  PVOID v5; // r15
  unsigned int *v6; // rsi
  struct _DEVICE_OBJECT *v7; // r13
  wchar_t *v8; // rdi
  __int16 v9; // kr00_2
  int v10; // eax
  __int64 v11; // rcx
  int DeviceInterfaceClassGuid; // ebx
  const WCHAR *PoolWithTag; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v15; // rax
  __int64 v16; // r9
  __int64 DeviceNode; // r8
  int v18; // eax
  struct _KTHREAD *v19; // rax
  ULONG_PTR v20; // rdi
  GUID *v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v24; // rcx
  char NumberOfBytes; // [rsp+68h] [rbp-A0h]
  __int16 NumberOfBytes_1; // [rsp+69h] [rbp-9Fh]
  ULONG NumberOfBytes_4; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+80h] [rbp-88h] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v33[8]; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING Name; // [rsp+E8h] [rbp-20h] BYREF
  GUID v37; // [rsp+F8h] [rbp-10h] BYREF

  NumberOfBytes_1 = a2;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  SourceString = 0LL;
  UnicodeString.Buffer = 0LL;
  v5 = 0LL;
  BugCheckParameter2 = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  NumberOfBytes = 0;
  v9 = a2;
  if ( !a1 || !a1->Buffer || !a1->Length )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_38;
  }
  v10 = PnpUnicodeStringToWstr((__int16 **)&v29, 0LL, &a1->Length);
  v8 = v29;
  DeviceInterfaceClassGuid = v10;
  if ( v10 < 0 )
    goto LABEL_44;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v11, (__int64)v29, &v37);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, &UnicodeString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  PoolWithTag = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
  SourceString = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_44;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v8,
                     3u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v30,
                     (__int64)PoolWithTag,
                     400,
                     (__int64)v33,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_64;
  if ( ObjectProperty < 0 )
    goto LABEL_44;
  if ( v30 != 18 )
    goto LABEL_64;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  v15 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x49706E50u);
  v7 = v15;
  if ( !v15 )
  {
    if ( !(_BYTE)NumberOfBytes_1 )
    {
      DeviceNode = 0LL;
      goto LABEL_14;
    }
LABEL_64:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_44;
  }
  DeviceNode = (__int64)v15->DeviceObjectExtension->DeviceNode;
LABEL_14:
  if ( (_BYTE)NumberOfBytes_1 )
  {
    v18 = *(_DWORD *)(DeviceNode + 300);
    if ( v18 <= 769 || v18 > 781 && v18 != 784 )
      goto LABEL_64;
  }
  if ( a3 && DeviceNode && (v7->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( (_BYTE)NumberOfBytes_1 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_44;
  }
  if ( !(_BYTE)NumberOfBytes_1 )
  {
    DeviceInterfaceClassGuid = PiDmGetObject(3LL, (__int64)v8, (__int64 *)&BugCheckParameter2, v16);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v20 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v24 = *(void **)(v20 + 40);
      if ( !v24 )
      {
        DeviceInterfaceClassGuid = -1073741772;
        goto LABEL_37;
      }
      ZwClose(v24);
      *(_QWORD *)(v20 + 40) = 0LL;
      HIBYTE(NumberOfBytes_1) = 1;
LABEL_57:
      NumberOfBytes = 1;
LABEL_37:
      ExReleasePushLockEx(v20, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v9 = NumberOfBytes_1;
      v6 = (unsigned int *)BugCheckParameter2;
      v8 = v29;
LABEL_38:
      if ( HIBYTE(v9) )
      {
        v21 = &GUID_DEVICE_INTERFACE_ARRIVAL;
        if ( !(_BYTE)v9 )
          v21 = &GUID_DEVICE_INTERFACE_REMOVAL;
        PnpSetDeviceClassChange(v21, &v37, a1);
        PnpObjectRaisePropertyChangeEvent(
          *(__int64 *)&PiPnpRtlCtx,
          (__int64)v8,
          3LL,
          0LL,
          0LL,
          (__int64)&DEVPKEY_DeviceInterface_Enabled);
      }
      if ( NumberOfBytes )
        PiDmRemoveCacheReferenceForObject(3, (__int64)v8, 0LL);
      goto LABEL_44;
    }
LABEL_60:
    v6 = (unsigned int *)BugCheckParameter2;
    goto LABEL_44;
  }
  NumberOfBytes_4 = 512;
  while ( 1 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    v5 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x20207050u);
    if ( !v5 )
      break;
    DeviceInterfaceClassGuid = IoGetDeviceProperty(
                                 v7,
                                 DevicePropertyPhysicalDeviceObjectName,
                                 NumberOfBytes_4,
                                 v5,
                                 &NumberOfBytes_4);
    if ( DeviceInterfaceClassGuid != -1073741789 )
      goto LABEL_28;
  }
  DeviceInterfaceClassGuid = -1073741670;
LABEL_28:
  if ( DeviceInterfaceClassGuid >= 0 && NumberOfBytes_4 )
  {
    RtlInitUnicodeString(&Name, (PCWSTR)v5);
    DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3u, v8, (volatile signed __int32 **)&BugCheckParameter2);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      v20 = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      if ( (*(_DWORD *)(v20 + 32) & 1) != 0 )
      {
        if ( !*(_QWORD *)(v20 + 40) )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &UnicodeString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v20 + 40), 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                         (PHANDLE)(v20 + 40),
                                         0xF0001u,
                                         &ObjectAttributes,
                                         &Name);
          if ( DeviceInterfaceClassGuid >= 0 )
            HIBYTE(NumberOfBytes_1) = 1;
          goto LABEL_37;
        }
        DeviceInterfaceClassGuid = 0x40000000;
      }
      else
      {
        DeviceInterfaceClassGuid = -1073741772;
      }
      goto LABEL_57;
    }
    goto LABEL_60;
  }
LABEL_44:
  RtlFreeAnsiString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v8, (__int64)a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v6 )
    PiDmObjectRelease(v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
