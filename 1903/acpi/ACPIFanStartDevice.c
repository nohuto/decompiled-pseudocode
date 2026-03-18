/*
 * XREFs of ACPIFanStartDevice @ 0x1C0091220
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0001D50 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C00075FC (ACPIInternalSetDeviceInterface.c)
 *     ACPIFanLoop @ 0x1C0007938 (ACPIFanLoop.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0007D20 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000CC54 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIFanStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // rbx
  struct _KEVENT *v7; // rdi
  int v8; // edi
  char *IrpText; // rax
  const char *v10; // r8
  const char *v11; // r10
  __int64 v13; // rcx
  char *v14; // r8
  char *v15; // rdx
  unsigned __int16 v16; // r9
  __int64 v17; // rcx

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = DeviceExtension;
  v7 = (struct _KEVENT *)(DeviceExtension + 296);
  if ( !*(_DWORD *)(DeviceExtension + 192) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
    KeInitializeEvent(v7, NotificationEvent, 1u);
  }
  *(_DWORD *)(v6 + 192) = 0x10000000;
  *(_QWORD *)(v6 + 224) = v6 + 216;
  *(_QWORD *)(v6 + 216) = v6 + 216;
  *(_QWORD *)(v6 + 232) = AMLIGetNamedChild(*(__int64 **)(v6 + 712), 1414743647);
  KeClearEvent(v7);
  v8 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_FAN);
  if ( v8 < 0 )
  {
    v13 = *(_QWORD *)(v6 + 8);
    v14 = byte_1C006FE7D;
    v15 = byte_1C006FE7D;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v14 = *(char **)(v6 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v15 = *(char **)(v6 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 10;
LABEL_14:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        v16,
        (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
        v8,
        v6,
        (__int64)v14,
        (__int64)v15);
    }
  }
  else
  {
    v8 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_THERMAL_COOLING);
    if ( v8 >= 0 )
    {
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v6 + 720), (__int64)ACPIFanEvent, *(_QWORD *)(v6 + 720));
      *(_DWORD *)(v6 + 320) = 2;
      ACPIDeviceInternalDeviceRequest((_QWORD *)v6, 4u, (__int64)ACPIFanPowerCallback, 0LL, 0);
      ACPIThermalAcquireCoolingInterfaces(v6);
      v8 = 0;
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v6 + 8), MinorFunction);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0xCu,
          (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
          (char)Irp,
          IrpText,
          0,
          v6,
          v10,
          v11);
      }
      ACPIFanLoop(v6, 0x10000000, 0x20000000);
      return (unsigned int)v8;
    }
    v17 = *(_QWORD *)(v6 + 8);
    v14 = byte_1C006FE7D;
    v15 = byte_1C006FE7D;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v14 = *(char **)(v6 + 560);
      if ( (v17 & 0x400000000000LL) != 0 )
        v15 = *(char **)(v6 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 11;
      goto LABEL_14;
    }
  }
  return (unsigned int)v8;
}
