/*
 * XREFs of IoCreateDevice @ 0x14069F670
 * Callers:
 *     RawMountVolume @ 0x140691310 (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x14071F1B0 (PiSwGetChildPdo.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140782B24 (IopCreateRootEnumeratedDeviceObject.c)
 *     VRegSetup @ 0x1407842A0 (VRegSetup.c)
 *     ViDdiDriverEntry @ 0x140966040 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A189B0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A18C20 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x140A218D0 (PiDaDriverEntry.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     IopInsertRemoveDevice @ 0x1400F1280 (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x14015B2C0 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14069FAE0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14069FCF8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     PoVolumeDevice @ 0x14073B654 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14073CB44 (IopCreateVpb.c)
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
  ULONG v7; // edi
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  struct _DEVICE_OBJECT *v12; // rbx
  ULONG v13; // ecx
  __int16 v14; // r12
  __int64 DefaultDeviceSecurityDescriptor; // rdx
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
  PVOID v28; // rcx
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h]
  ULONG v32; // [rsp+64h] [rbp-9Ch]
  ULONG v33; // [rsp+68h] [rbp-98h]
  PVOID v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v38[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  PUNICODE_STRING v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v45[40]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = DeviceCharacteristics;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = (unsigned __int8)DeviceCharacteristics & 0x80;
  v11 = DeviceType;
  v32 = DeviceExtensionSize;
  v38[1] = 0;
  v12 = 0LL;
  v41 = 0LL;
  Object = 0LL;
  v13 = 8 - (DeviceExtensionSize & 7);
  v34 = 0LL;
  P = 0LL;
  v14 = 0;
  v33 = DeviceCharacteristics & 0x80;
  if ( (DeviceExtensionSize & 7) == 0 )
    v13 = DeviceExtensionSize & 7;
  v31 = DeviceExtensionSize + v13;
  while ( 1 )
  {
    if ( (_DWORD)v10 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      v12 = (struct _DEVICE_OBJECT *)Object;
      DeviceName = &DestinationString;
    }
    DefaultDeviceSecurityDescriptor = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v11, v7, v10, v45);
    if ( (_DWORD)v11 == 3 )
    {
      v14 = 2048;
    }
    else if ( (_DWORD)v11 == 7 || (_DWORD)v11 == 8 || (_DWORD)v11 == 36 )
    {
      v14 = 512;
    }
    v38[0] = 48;
    v39 = 0LL;
    v40 = DeviceName;
    v42 = DefaultDeviceSecurityDescriptor;
    v16 = IopCaseInsensitive != 0 ? 576 : 512;
    v43 = 0LL;
    LODWORD(v41) = v16;
    if ( Exclusive )
    {
      v16 |= 0x20u;
      LODWORD(v41) = v16;
    }
    if ( DeviceName )
      LODWORD(v41) = v16 | 0x10;
    if ( v31 >= 0xFFFFFE48 )
    {
      Vpb = -1073741811;
      goto LABEL_35;
    }
    v17 = ObCreateObjectEx(0, (_DWORD *)IoDeviceObjectType, (int)v38, 0, (__int64)&v34, v31 + 440, 0, 0, &Object, 0LL);
    v12 = (struct _DEVICE_OBJECT *)Object;
    Vpb = v17;
    if ( v17 < 0 )
      goto LABEL_35;
    v19 = v31;
    memset(Object, 0, v31 + 440);
    v20 = (struct _DEVOBJ_EXTENSION *)((char *)&v12[1] + v19);
    v20->DeviceObject = v12;
    v12->DeviceObjectExtension = v20;
    *(_DWORD *)&v20->Type = 13;
    v20->InterruptContext = 0LL;
    v20->PowerFlags = 0;
    v20->Dope = 0LL;
    v21 = v32;
    v22 = v32 + 336;
    v12->Type = 3;
    v12->Size = v22;
    v12->DeviceType = v11;
    v12->Characteristics = DeviceCharacteristics;
    if ( (unsigned int)v11 <= 0x24 )
    {
      v23 = 0x1080000084LL;
      if ( _bittest64(&v23, v11) )
        break;
    }
LABEL_18:
    v24 = 128;
    v12->AlignmentRequirement = 0;
    v12->SectorSize = v14;
    v12->Flags = 128;
    if ( Exclusive )
    {
      v24 = 136;
      v12->Flags = 136;
    }
    if ( DeviceName )
      v12->Flags = v24 | 0x40;
    if ( v21 )
      v12->DeviceExtension = &v12[1];
    else
      v12->DeviceExtension = 0LL;
    v12->StackSize = 1;
    if ( (_DWORD)v11 == 3 || (unsigned int)v11 > 7 && ((unsigned int)v11 <= 9 || (_DWORD)v11 == 20 || (_DWORD)v11 == 32) )
    {
      v12->Queue.ListEntry.Blink = &v12->Queue.ListEntry;
      v12->Queue.ListEntry.Flink = &v12->Queue.ListEntry;
    }
    else
    {
      KeInitializeDeviceQueue(&v12->DeviceQueue);
    }
    Characteristics = v12->Characteristics;
    if ( (Characteristics & 1) == 0 && (Characteristics & 0x40000) == 0 )
      v12->DeviceObjectExtension->ExtensionFlags |= 0x800u;
    inserted = ObInsertObjectEx(v12, 0LL, 3u, 1, 0, (__int64)&Object, &Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v12 = (struct _DEVICE_OBJECT *)Object;
      v27 = Object;
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v27, 1);
      if ( v12->Vpb )
        PoVolumeDevice(v12);
      ObCloseHandle(Handle, 0);
      goto LABEL_35;
    }
    if ( inserted != -1073741771 || (DeviceCharacteristics & 0x80u) == 0 )
    {
      v12 = 0LL;
LABEL_35:
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      v28 = P;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( Vpb >= 0 )
      {
        LOBYTE(v28) = 1;
        EtwTiLogDeviceObjectLoadUnload(v28, &v12->DriverObject->DriverName, DeviceName);
      }
      *DeviceObject = v12;
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
    v12 = (struct _DEVICE_OBJECT *)Object;
    v7 = DeviceCharacteristics;
    v10 = v33;
  }
  Vpb = IopCreateVpb(v12);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent(&v12->DeviceLock, SynchronizationEvent, 1u);
    v21 = v32;
    goto LABEL_18;
  }
  ObfDereferenceObject(v12);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *DeviceObject = 0LL;
  return Vpb;
}
