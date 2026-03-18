/*
 * XREFs of IopProcessSetInterfaceState @ 0x140733D08
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x14071A224 (IopDoDeferredSetInterfaceState.c)
 *     IoSetDeviceInterfaceState @ 0x140733C90 (IoSetDeviceInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401C23D0 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401C3150 (ZwOpenSymbolicLinkObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDF10 (PnpUnicodeStringToWstrFree.c)
 *     PiDmGetObject @ 0x1405BEF20 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF910 (PnpUnicodeStringToWstr.c)
 *     IoGetDeviceProperty @ 0x1405BFB40 (IoGetDeviceProperty.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140629894 (_CmGetDeviceInterfaceClassGuid.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406FB944 (PiDmAddCacheReferenceForObject.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140708884 (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407171D8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDeferSetInterfaceState @ 0x140733B9C (PiDeferSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407341F8 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpSetDeviceClassChange @ 0x140734580 (PnpSetDeviceClassChange.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140734650 (PiRemoveDeferredSetInterfaceState.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(UNICODE_STRING *a1, char a2, char a3)
{
  PVOID v5; // r15
  unsigned int *v6; // rsi
  unsigned int *v7; // r8
  struct _DEVICE_OBJECT *v8; // r13
  __int16 *v9; // rdi
  char v10; // al
  int v11; // eax
  __int64 v12; // rcx
  int DeviceInterfaceClassGuid; // ebx
  const WCHAR *PoolWithTag; // rax
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v16; // rax
  __int64 DeviceNode; // r8
  int v18; // eax
  struct _KTHREAD *v19; // rax
  ULONG_PTR v20; // rdi
  GUID *v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v24; // rcx
  char NumberOfBytes; // [rsp+68h] [rbp-A0h]
  char NumberOfBytes_1; // [rsp+69h] [rbp-9Fh]
  char NumberOfBytes_2; // [rsp+6Ah] [rbp-9Eh]
  ULONG NumberOfBytes_4; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-98h] BYREF
  __int16 *v30; // [rsp+78h] [rbp-90h] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v34[8]; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING Name; // [rsp+B8h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  GUID v38; // [rsp+F8h] [rbp-10h] BYREF

  NumberOfBytes_2 = a2;
  *(_QWORD *)&Name.Length = 0LL;
  SourceString = 0LL;
  Name.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v38.Data1 = 0LL;
  v5 = 0LL;
  *(_QWORD *)v38.Data4 = 0LL;
  v6 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v30 = 0LL;
  NumberOfBytes_1 = 0;
  v8 = 0LL;
  NumberOfBytes = 0;
  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v10 = 0;
  DestinationString.Buffer = 0LL;
  if ( !a1 || !a1->Buffer || !a1->Length )
  {
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_38;
  }
  v11 = PnpUnicodeStringToWstr(&v30, 0LL, &a1->Length);
  v9 = v30;
  DeviceInterfaceClassGuid = v11;
  if ( v11 < 0 )
    goto LABEL_44;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(v12, (__int64)v30, &v38);
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
                     (__int64)v9,
                     3LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v31,
                     (__int64)PoolWithTag,
                     400,
                     (__int64)v34,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_64;
  if ( ObjectProperty < 0 )
    goto LABEL_44;
  if ( v31 != 18 )
    goto LABEL_64;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_44;
  v16 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x49706E50u);
  v8 = v16;
  if ( !v16 )
  {
    if ( !NumberOfBytes_2 )
    {
      DeviceNode = 0LL;
      goto LABEL_14;
    }
LABEL_64:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_44;
  }
  DeviceNode = (__int64)v16->DeviceObjectExtension->DeviceNode;
LABEL_14:
  if ( NumberOfBytes_2 )
  {
    v18 = *(_DWORD *)(DeviceNode + 300);
    if ( v18 <= 769 || v18 > 781 && v18 != 784 )
      goto LABEL_64;
  }
  if ( a3 && DeviceNode && (v8->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( NumberOfBytes_2 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
    goto LABEL_44;
  }
  if ( !NumberOfBytes_2 )
  {
    DeviceInterfaceClassGuid = PiDmGetObject(3LL, (__int64)v9, (__int64 *)&BugCheckParameter2);
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
      NumberOfBytes_1 = 1;
LABEL_57:
      NumberOfBytes = 1;
LABEL_37:
      ExReleasePushLockEx(v20, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v10 = NumberOfBytes_1;
      v6 = (unsigned int *)BugCheckParameter2;
      v9 = v30;
LABEL_38:
      if ( v10 )
      {
        v21 = &GUID_DEVICE_INTERFACE_ARRIVAL;
        if ( !NumberOfBytes_2 )
          v21 = &GUID_DEVICE_INTERFACE_REMOVAL;
        PnpSetDeviceClassChange(v21, &v38, a1);
        PnpObjectRaisePropertyChangeEvent(
          *(__int64 *)&PiPnpRtlCtx,
          (__int64)v9,
          3LL,
          0LL,
          0LL,
          (__int64)&DEVPKEY_DeviceInterface_Enabled);
      }
      if ( NumberOfBytes )
        PiDmRemoveCacheReferenceForObject(3, (__int64)v9, v7);
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
                                 v8,
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
    DeviceInterfaceClassGuid = PiDmAddCacheReferenceForObject(3u, v9, (volatile signed __int32 **)&BugCheckParameter2);
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
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          ObjectAttributes.ObjectName = &UnicodeString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject((PHANDLE)(v20 + 40), 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                         (PHANDLE)(v20 + 40),
                                         0xF0001u,
                                         &ObjectAttributes,
                                         &Name);
          if ( DeviceInterfaceClassGuid >= 0 )
            NumberOfBytes_1 = 1;
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
  PnpUnicodeStringToWstrFree(v9, (__int64)a1);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v6 )
    PiDmObjectRelease(v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
