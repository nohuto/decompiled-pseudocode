/*
 * XREFs of IoCreateDevice @ 0x140653B90
 * Callers:
 *     RawMountVolume @ 0x1405A3988 (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x1406DA138 (PiSwGetChildPdo.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     VRegSetup @ 0x14075BFF0 (VRegSetup.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     ViDdiDriverEntry @ 0x140928B20 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140943F44 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x1409D4DD0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x1409D5020 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x1409DF0C0 (PiDaDriverEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopInsertRemoveDevice @ 0x1400DA918 (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x1400DAE50 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140653AA4 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PoVolumeDevice @ 0x14070E0EC (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14070F548 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoCreateDevice(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  char v7; // di
  unsigned __int64 v10; // rsi
  ULONG v11; // r8d
  ULONG v12; // ecx
  struct _DEVICE_OBJECT *v13; // rbx
  __int16 v14; // r15
  void *DefaultDeviceSecurityDescriptor; // rdx
  int v16; // ecx
  int v17; // eax
  NTSTATUS Vpb; // edi
  __int64 v19; // rdi
  struct _DEVOBJ_EXTENSION *v20; // rcx
  ULONG v21; // ecx
  USHORT v22; // ax
  __int64 v23; // rdx
  int v24; // eax
  ULONG Characteristics; // eax
  int inserted; // eax
  PVOID v27; // rdx
  __int64 v29; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h]
  ULONG v32; // [rsp+64h] [rbp-9Ch]
  ULONG v33; // [rsp+68h] [rbp-98h]
  PVOID v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+A0h] [rbp-60h]
  void *v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v45[40]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = DeviceCharacteristics;
  v10 = DeviceType;
  v32 = DeviceExtensionSize;
  v34 = 0LL;
  v11 = DeviceCharacteristics & 0x80;
  P = 0LL;
  v33 = v11;
  v12 = 8 - (DeviceExtensionSize & 7);
  v13 = 0LL;
  Object = 0LL;
  v14 = 0;
  if ( (DeviceExtensionSize & 7) == 0 )
    v12 = DeviceExtensionSize & 7;
  v31 = DeviceExtensionSize + v12;
  while ( 1 )
  {
    if ( v11 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      v13 = (struct _DEVICE_OBJECT *)Object;
      DeviceName = &DestinationString;
    }
    DefaultDeviceSecurityDescriptor = IopCreateDefaultDeviceSecurityDescriptor(
                                        v10,
                                        v7,
                                        v11,
                                        v45,
                                        (ACL **)&v34,
                                        (ACL **)&P,
                                        0LL);
    if ( (_DWORD)v10 == 3 )
    {
      v14 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v14 = 512;
    }
    v37 = 48;
    v38 = 0LL;
    v39 = DeviceName;
    v41 = DefaultDeviceSecurityDescriptor;
    v16 = IopCaseInsensitive != 0 ? 576 : 512;
    v42 = 0LL;
    v40 = v16;
    if ( Exclusive )
    {
      v16 |= 0x20u;
      v40 = v16;
    }
    if ( DeviceName )
      v40 = v16 | 0x10;
    if ( v31 >= 0xFFFFFE48 )
    {
      Vpb = -1073741811;
      goto LABEL_35;
    }
    v17 = ObCreateObjectEx(0, (_DWORD *)IoDeviceObjectType, (int)&v37, 0, v29, v31 + 440, 0, 0, &Object, 0LL);
    v13 = (struct _DEVICE_OBJECT *)Object;
    Vpb = v17;
    if ( v17 < 0 )
      goto LABEL_35;
    v19 = v31;
    memset(Object, 0, v31 + 440);
    v20 = (struct _DEVOBJ_EXTENSION *)((char *)&v13[1] + v19);
    v20->DeviceObject = v13;
    v13->DeviceObjectExtension = v20;
    *(_DWORD *)&v20->Type = 13;
    v20->InterruptContext = 0LL;
    v20->PowerFlags = 0;
    v20->Dope = 0LL;
    v21 = v32;
    v22 = v32 + 336;
    v13->Type = 3;
    v13->Size = v22;
    v13->DeviceType = v10;
    v13->Characteristics = DeviceCharacteristics;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v23 = 0x1080000084LL;
      if ( _bittest64(&v23, v10) )
        break;
    }
LABEL_18:
    v24 = 128;
    v13->AlignmentRequirement = 0;
    v13->SectorSize = v14;
    v13->Flags = 128;
    if ( Exclusive )
    {
      v24 = 136;
      v13->Flags = 136;
    }
    if ( DeviceName )
      v13->Flags = v24 | 0x40;
    if ( v21 )
      v13->DeviceExtension = &v13[1];
    else
      v13->DeviceExtension = 0LL;
    v13->StackSize = 1;
    if ( (_DWORD)v10 == 3 || (unsigned int)v10 > 7 && ((unsigned int)v10 <= 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32) )
    {
      v13->Queue.ListEntry.Blink = &v13->Queue.ListEntry;
      v13->Queue.ListEntry.Flink = &v13->Queue.ListEntry;
    }
    else
    {
      KeInitializeDeviceQueue(&v13->DeviceQueue);
    }
    Characteristics = v13->Characteristics;
    if ( (Characteristics & 1) == 0 && (Characteristics & 0x40000) == 0 )
      v13->DeviceObjectExtension->ExtensionFlags |= 0x800u;
    inserted = ObInsertObjectEx(v13, 0LL, 3LL, 1, 0, &Object, (unsigned __int64 *)&Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v13 = (struct _DEVICE_OBJECT *)Object;
      v27 = Object;
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v27, 1);
      if ( v13->Vpb )
        PoVolumeDevice(v13);
      ObCloseHandle(Handle, 0);
      goto LABEL_35;
    }
    if ( inserted != -1073741771 || (DeviceCharacteristics & 0x80u) == 0 )
    {
      v13 = 0LL;
LABEL_35:
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      *DeviceObject = v13;
      return Vpb;
    }
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0);
      v34 = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v13 = (struct _DEVICE_OBJECT *)Object;
    v7 = DeviceCharacteristics;
    v11 = v33;
  }
  Vpb = IopCreateVpb(v13);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent(&v13->DeviceLock, SynchronizationEvent, 1u);
    v21 = v32;
    goto LABEL_18;
  }
  ObfDereferenceObject(v13);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *DeviceObject = 0LL;
  return Vpb;
}
