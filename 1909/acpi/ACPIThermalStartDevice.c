/*
 * XREFs of ACPIThermalStartDevice @ 0x1C0091630
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C00075FC (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0007D20 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0007E58 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000CC54 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbx
  char *v5; // rbp
  __int64 v6; // rcx
  const char *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int SensorDevice; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v14; // rax
  PVOID PoolWithTag; // rax
  _QWORD *v16; // rdi
  struct _DEVICE_OBJECT *v17; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  char *v21; // rax
  unsigned __int16 v22; // r9
  void *v23; // rcx
  IRP *v24; // rcx
  void *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+50h] [rbp-98h] BYREF
  __int128 v28; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v29[48]; // [rsp+70h] [rbp-78h] BYREF

  memset(v29, 0, sizeof(v29));
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = byte_1C006FE7D;
  v6 = *(_QWORD *)(DeviceExtension + 200);
  *(_DWORD *)(v6 + 92) = -1;
  *(_DWORD *)(v6 + 96) = 100;
  v7 = byte_1C006FE7D;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = byte_1C006FE7D;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(DeviceExtension + 560);
    if ( (v9 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(DeviceExtension + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_dce3ffa2f9ac319c4b032626ac70bc0b_Traceguids,
      (char)Irp,
      DeviceExtension,
      v7,
      v8);
  v10 = *(_QWORD *)(DeviceExtension + 200);
  KeClearEvent((PRKEVENT)(v10 + 280));
  *(_QWORD *)(v10 + 112) = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 712), 1347245151);
  v27 = 0LL;
  memset(v29, 0, sizeof(v29));
  v11 = *(_QWORD *)(DeviceExtension + 712);
  v28 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v11, (unsigned int)&v28, 0, 0, (__int64)v29, (__int64)&v27) >= 0 )
  {
    v19 = (_QWORD *)v27;
    if ( *(_WORD *)(v27 + 2) == 3 && *(_DWORD *)(v27 + 24) )
      *(_DWORD *)(v10 + 128) = **(unsigned __int8 **)(v27 + 32);
    AMLIFreeDataBuffs(v19);
  }
  else
  {
    *(_DWORD *)(v10 + 128) = 0;
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v20 = *(_QWORD *)(DeviceExtension + 8);
    v21 = byte_1C006FE7D;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v5 = *(char **)(DeviceExtension + 560);
      if ( (v20 & 0x400000000000LL) != 0 )
        v21 = *(char **)(DeviceExtension + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 21;
LABEL_27:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        v22,
        (__int64)&WPP_dce3ffa2f9ac319c4b032626ac70bc0b_Traceguids,
        SensorDevice,
        DeviceExtension,
        (__int64)v5,
        (__int64)v21);
    }
LABEL_16:
    if ( SensorDevice >= 0 )
      goto LABEL_17;
    goto LABEL_29;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 720));
  *(_QWORD *)(v10 + 200) = AttachedDeviceReference;
  v14 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  *(_QWORD *)(v10 + 192) = v14;
  if ( v14
    && (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 720),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 720)),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x54706341u),
        (v16 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    *(_DWORD *)v16 = 1;
    v16[1] = &ACPIThermalGuidList;
    v16[2] = ACPIThermalQueryWmiRegInfo;
    v16[3] = ACPIThermalQueryWmiDataBlock;
    v17 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 720);
    *(_QWORD *)(DeviceExtension + 224) = v16;
    SensorDevice = IoWMIRegistrationControl(v17, 1u);
    if ( SensorDevice >= 0 )
    {
      SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension);
      if ( SensorDevice >= 0 )
      {
        ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
        *(_DWORD *)(DeviceExtension + 320) = 2;
        SensorDevice = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1u, 0LL, 0LL, 0);
        if ( SensorDevice == 259 )
          SensorDevice = 0;
        ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
        goto LABEL_16;
      }
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 720), 2u);
      v26 = *(_QWORD *)(DeviceExtension + 8);
      v21 = byte_1C006FE7D;
      if ( (v26 & 0x200000000000LL) != 0 )
      {
        v5 = *(char **)(DeviceExtension + 560);
        if ( (v26 & 0x400000000000LL) != 0 )
          v21 = *(char **)(DeviceExtension + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 22;
        goto LABEL_27;
      }
      goto LABEL_16;
    }
  }
  else
  {
    SensorDevice = -1073741670;
  }
LABEL_29:
  v23 = *(void **)(v10 + 200);
  if ( v23 )
  {
    ObfDereferenceObject(v23);
    *(_QWORD *)(v10 + 200) = 0LL;
  }
  v24 = *(IRP **)(v10 + 192);
  if ( v24 )
  {
    IoFreeIrp(v24);
    *(_QWORD *)(v10 + 192) = 0LL;
  }
  v25 = *(void **)(DeviceExtension + 224);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0x54706341u);
    *(_QWORD *)(DeviceExtension + 224) = 0LL;
  }
  KeSetEvent((PRKEVENT)(v10 + 280), 0, 0);
LABEL_17:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
