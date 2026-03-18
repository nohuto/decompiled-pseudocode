/*
 * XREFs of ACPIThermalStartDevice @ 0x1C00972D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000CF7C (ACPIInternalSetDeviceInterface.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000DA34 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DB28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C000DCE0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001174C (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  char *v4; // rbp
  __int64 DeviceExtension; // rbx
  const char *v6; // rdx
  const char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int SensorDevice; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v16; // rax
  PVOID PoolWithTag; // rax
  _QWORD *v18; // rdi
  struct _DEVICE_OBJECT *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  char *v26; // rax
  unsigned __int16 v27; // r9
  void *v28; // rcx
  IRP *v29; // rcx
  void *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // [rsp+50h] [rbp-98h] BYREF
  __int128 v33; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v34[48]; // [rsp+70h] [rbp-78h] BYREF

  v4 = byte_1C006E28A;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = byte_1C006E28A;
  *(_DWORD *)(*(_QWORD *)(DeviceExtension + 200) + 96LL) = 100;
  v7 = byte_1C006E28A;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(DeviceExtension + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(DeviceExtension + 568);
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x14u,
    (__int64)&WPP_909b6258fcb130ce0aafc52c77f12fe6_Traceguids,
    (char)Irp,
    DeviceExtension,
    v6,
    v7);
  v9 = *(_QWORD *)(DeviceExtension + 200);
  KeClearEvent((PRKEVENT)(v9 + 280));
  *(_QWORD *)(v9 + 112) = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 712), 1347245151);
  v32 = 0LL;
  memset(v34, 0, sizeof(v34));
  v10 = *(__int64 **)(DeviceExtension + 712);
  v33 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v10, (__int64)&v33, 0, 0, (__int64)v34, &v32) >= 0 )
  {
    v24 = v32;
    if ( *(_WORD *)(v32 + 2) == 3 && *(_DWORD *)(v32 + 24) )
    {
      v11 = **(unsigned __int8 **)(v32 + 32);
      *(_DWORD *)(v9 + 128) = v11;
    }
    AMLIFreeDataBuffs(v24, v11, v12, v13);
  }
  else
  {
    *(_DWORD *)(v9 + 128) = 0;
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v25 = *(_QWORD *)(DeviceExtension + 8);
    v26 = byte_1C006E28A;
    if ( (v25 & 0x200000000000LL) != 0 )
    {
      v4 = *(char **)(DeviceExtension + 560);
      if ( (v25 & 0x400000000000LL) != 0 )
        v26 = *(char **)(DeviceExtension + 568);
    }
    v27 = 21;
    goto LABEL_25;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 720));
  *(_QWORD *)(v9 + 200) = AttachedDeviceReference;
  v16 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  *(_QWORD *)(v9 + 192) = v16;
  if ( v16
    && (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 720),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 720)),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x54706341u),
        (v18 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    *(_DWORD *)v18 = 1;
    v18[1] = &ACPIThermalGuidList;
    v18[2] = ACPIThermalQueryWmiRegInfo;
    v18[3] = ACPIThermalQueryWmiDataBlock;
    v19 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 720);
    *(_QWORD *)(DeviceExtension + 224) = v18;
    SensorDevice = IoWMIRegistrationControl(v19, 1u);
    if ( SensorDevice >= 0 )
    {
      SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension, v20, v21, v22);
      if ( SensorDevice >= 0 )
      {
        ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
        *(_DWORD *)(DeviceExtension + 320) = 2;
        SensorDevice = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1u, 0LL, 0LL, 0);
        if ( SensorDevice == 259 )
          SensorDevice = 0;
        ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
LABEL_14:
        if ( SensorDevice >= 0 )
          goto LABEL_15;
        goto LABEL_27;
      }
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 720), 2u);
      v31 = *(_QWORD *)(DeviceExtension + 8);
      v26 = byte_1C006E28A;
      if ( (v31 & 0x200000000000LL) != 0 )
      {
        v4 = *(char **)(DeviceExtension + 560);
        if ( (v31 & 0x400000000000LL) != 0 )
          v26 = *(char **)(DeviceExtension + 568);
      }
      v27 = 22;
LABEL_25:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        v27,
        (__int64)&WPP_909b6258fcb130ce0aafc52c77f12fe6_Traceguids,
        SensorDevice,
        DeviceExtension,
        (__int64)v4,
        (__int64)v26);
      goto LABEL_14;
    }
  }
  else
  {
    SensorDevice = -1073741670;
  }
LABEL_27:
  v28 = *(void **)(v9 + 200);
  if ( v28 )
  {
    ObfDereferenceObject(v28);
    *(_QWORD *)(v9 + 200) = 0LL;
  }
  v29 = *(IRP **)(v9 + 192);
  if ( v29 )
  {
    IoFreeIrp(v29);
    *(_QWORD *)(v9 + 192) = 0LL;
  }
  v30 = *(void **)(DeviceExtension + 224);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0x54706341u);
    *(_QWORD *)(DeviceExtension + 224) = 0LL;
  }
  KeSetEvent((PRKEVENT)(v9 + 280), 0, 0);
LABEL_15:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
