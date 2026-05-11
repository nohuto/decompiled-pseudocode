/*
 * XREFs of USBDeviceStart @ 0x1C0028000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000F7E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     RegistryReadPnPKeyValue @ 0x1C0027410 (RegistryReadPnPKeyValue.c)
 *     USBHwGetDescriptor @ 0x1C0028FB4 (USBHwGetDescriptor.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C0029090 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x1C00291CC (USBHwSelectAudioConfiguration.c)
 *     USBHwGetDeviceIDString @ 0x1C002A464 (USBHwGetDeviceIDString.c)
 *     USBHwLogStartFailure @ 0x1C002A740 (USBHwLogStartFailure.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002AA10 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBDeviceStart(__int64 a1)
{
  __int16 *v2; // rsi
  char *v3; // rdi
  __int64 v4; // r15
  NTSTATUS Status; // ebx
  PIRP Irp; // r13
  PVOID PoolWithTag; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v9; // rax
  PVOID v10; // r13
  PVOID v11; // rax
  void *v12; // r12
  PVOID v13; // rax
  NTSTATUS AudioConfigurationDescriptor; // eax
  __int16 v15; // ax
  PUSB_INTERFACE_DESCRIPTOR v16; // rax
  __int64 v17; // r8
  __int64 AudioSpecificInterface; // rax
  unsigned int v19; // eax
  bool v20; // r12
  int v21; // eax
  __int64 v22; // r8
  int v23; // edi
  __int64 v24; // r13
  _QWORD *v25; // r12
  PVOID v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // edx
  _WORD *v30; // rcx
  PVOID v32; // [rsp+48h] [rbp-49h]
  PVOID Item; // [rsp+50h] [rbp-41h] BYREF
  int v34; // [rsp+58h] [rbp-39h] BYREF
  __int64 v35; // [rsp+60h] [rbp-31h]
  struct _KEVENT Event; // [rsp+68h] [rbp-29h] BYREF
  char v37[64]; // [rsp+80h] [rbp-11h] BYREF

  v35 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  v32 = 0LL;
  v3 = 0LL;
  Item = 0LL;
  v4 = *(_QWORD *)(v35 + 72);
  Status = -1073741670;
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
  if ( !Irp )
    goto LABEL_11;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x41627845u);
  if ( PoolWithTag )
  {
    Irp->IoStatus.Status = -1073741637;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBD_SyncCompletionRoutine;
    CurrentStackLocation[-1].Context = &Event;
    CurrentStackLocation[-1].Control = -32;
    v9 = Irp->Tail.Overlay.CurrentStackLocation;
    v9[-1].Parameters.CreatePipe.Parameters = 0LL;
    *(_WORD *)&v9[-1].MajorFunction = 2075;
    v9[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)PoolWithTag;
    v9[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID;
    v9[-1].Parameters.Create.Options = 65608;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), Irp);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = Irp->IoStatus.Status;
    }
    if ( Status < 0 )
    {
      ExFreePool(PoolWithTag);
      PoolWithTag = 0LL;
    }
  }
  IoFreeIrp(Irp);
  if ( Status < 0 )
    goto LABEL_11;
  if ( !PoolWithTag )
  {
    Status = -1073741438;
LABEL_11:
    v10 = 0LL;
    goto LABEL_12;
  }
  v10 = PoolWithTag;
  v32 = PoolWithTag;
LABEL_12:
  if ( Status < 0 )
  {
    strcpy(v37, "Could not acquire Bus Interface");
    USBHwLogStartFailure(a1, (unsigned int)Status, v37, 32LL);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v10, ExFreePool);
    if ( Status < 0 )
    {
      ExFreePool(v10);
      v10 = 0LL;
      v32 = 0LL;
    }
    else
    {
      *(_QWORD *)(v4 + 56) = v10;
    }
  }
  if ( Status < 0 )
    goto LABEL_86;
  v34 = 18;
  Status = -1073741670;
  v11 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x12uLL, 0x41627845u);
  v12 = v11;
  if ( v11 )
  {
    Status = USBHwGetDescriptor(a1, 1, 0, 0, (__int64)&v34, (__int64)v11);
    if ( Status < 0 )
      ExFreePool(v12);
    else
      v2 = (__int16 *)v12;
  }
  if ( Status < 0 )
  {
    strcpy(v37, "Could not acquire Device Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)Status, v37, 36LL);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v2, ExFreePool);
    if ( Status < 0 )
      ExFreePool(v2);
    else
      *(_QWORD *)(v4 + 32) = v2;
  }
  if ( Status < 0 )
    goto LABEL_86;
  v13 = ExAllocatePoolWithTag((POOL_TYPE)512, 9uLL, 0x41627845u);
  if ( v13 )
  {
    AudioConfigurationDescriptor = USBHwGetAudioConfigurationDescriptor(a1, &Item, v13);
    v3 = (char *)Item;
    Status = AudioConfigurationDescriptor;
  }
  else
  {
    Status = -1073741670;
  }
  if ( Status < 0 )
  {
    strcpy(v37, "Could not acquire Configuration Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)Status, v37, 43LL);
    goto LABEL_51;
  }
  Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v3, ExFreePool);
  if ( Status < 0 )
  {
    ExFreePool(v3);
    goto LABEL_51;
  }
  *(_QWORD *)(v4 + 40) = v3;
  v15 = v2[4];
  if ( v15 == 2321 )
  {
    v15 = 2321;
    if ( v2[5] == 9490 && *((_WORD *)v3 + 1) > 0x22u )
    {
      v3[34] = 0;
      v15 = v2[4];
    }
  }
  if ( v15 == 2235 )
  {
    v15 = 2235;
    if ( v2[5] == 9986 && *((_WORD *)v3 + 1) > 0x36u )
    {
      v3[54] = 1;
      v15 = v2[4];
    }
  }
  if ( v15 == 2706 )
  {
    if ( v2[5] != 4128 || *((_WORD *)v3 + 1) <= 0x2Au )
      goto LABEL_51;
    *(_WORD *)(v3 + 41) = 161;
    v15 = v2[4];
  }
  if ( v15 == 2675 && v2[5] == 6 && *((_WORD *)v3 + 1) > 0x2Au )
    *(_WORD *)(v3 + 41) = 161;
LABEL_51:
  if ( Status < 0 )
    goto LABEL_86;
  v16 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v3, v3, -1, -1, 1, 1, -1);
  if ( v16 )
  {
    *(_QWORD *)(v4 + 48) = v16;
    AudioSpecificInterface = USBParseGetAudioSpecificInterface(v3, v16, v17, 8LL);
    if ( AudioSpecificInterface )
    {
      v19 = *(unsigned __int16 *)(AudioSpecificInterface + 3);
      *(_DWORD *)(v4 + 8) = v19;
      if ( v19 >= 0x200 )
        Status = -1073741735;
      goto LABEL_61;
    }
LABEL_60:
    Status = -1073741438;
    goto LABEL_61;
  }
  v20 = 0;
  if ( !USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v3, v3, -1, -1, 1, 2, -1) )
    v20 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v3, v3, -1, -1, 1, 3, -1) != 0LL;
  *(_BYTE *)(v4 + 5) = v20;
  if ( !v20 )
  {
    strcpy(v37, "Could not find Control interface in Configuration Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)Status, v37, 61LL);
    goto LABEL_60;
  }
LABEL_61:
  if ( Status < 0 )
    goto LABEL_86;
  v21 = USBHwSelectAudioConfiguration(a1);
  Status = v21;
  if ( v21 < 0 )
  {
    strcpy(v37, "Could not Select a device configuration");
    USBHwLogStartFailure(a1, (unsigned int)v21, v37, 40LL);
    goto LABEL_86;
  }
  v23 = 10;
  v24 = v35;
  v25 = (_QWORD *)(v35 + 24);
  if ( !*((_BYTE *)v2 + 15) )
  {
    *(_DWORD *)(v35 + 32) = 10;
    *v25 = Default_Product_String;
LABEL_70:
    if ( Status < 0 )
    {
      v10 = v32;
LABEL_86:
      if ( v10 )
        (*((void (__fastcall **)(_QWORD))v10 + 3))(*((_QWORD *)v10 + 1));
      return (unsigned int)Status;
    }
    goto LABEL_71;
  }
  Status = USBHwGetDeviceIDString(a1, v35 + 24, v35 + 32);
  if ( Status == -1073741822 )
  {
    *(_DWORD *)(v24 + 32) = 10;
    *v25 = Default_Product_String;
    Status = 0;
    goto LABEL_71;
  }
  if ( Status < 0 )
  {
    strcpy(v37, "Could not acquire a device name string");
    USBHwLogStartFailure(a1, (unsigned int)Status, v37, 39LL);
    goto LABEL_70;
  }
LABEL_71:
  Item = 0LL;
  *(_BYTE *)(v4 + 212) = 0;
  if ( (int)RegistryReadPnPKeyValue(*(struct _DEVICE_OBJECT **)(a1 + 32), L"CapturePacketsPerUrb", v22, &Item) >= 0 )
  {
    v26 = Item;
    v27 = *(_DWORD *)Item;
    if ( *(_DWORD *)Item >= 3u )
    {
      if ( v27 > 0xA )
        v27 = 10;
      v23 = v27;
    }
    else
    {
      v23 = 3;
    }
    *(_BYTE *)(v4 + 212) = 1;
    ExFreePool(v26);
  }
  *(_DWORD *)(v4 + 208) = v23;
  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  *(_BYTE *)(v4 + 4) = (*(__int64 (__fastcall **)(_QWORD))(v28 + 64))(*(_QWORD *)(v28 + 8));
  v29 = 0;
  v30 = &unk_1C00141A2;
  *(_QWORD *)(v4 + 200) = v4 + 192;
  *(_QWORD *)(v4 + 192) = v4 + 192;
  *(_DWORD *)(v24 + 40) = (unsigned __int16)v2[4];
  *(_DWORD *)(v24 + 44) = (unsigned __int16)v2[5];
  *(_DWORD *)(v24 + 48) = (unsigned __int16)v2[6];
  *(_QWORD *)(v24 + 56) = &KSCOMPONENTID_USBAUDIO;
  while ( v2[4] != *(v30 - 1) || v2[5] != *v30 )
  {
    ++v29;
    v30 += 2;
    if ( v29 >= 0x18 )
      return (unsigned int)Status;
  }
  *(_BYTE *)(v4 + 6) = 1;
  return (unsigned int)Status;
}
