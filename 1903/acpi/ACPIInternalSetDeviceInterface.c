/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x1C00075FC
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0007290 (ACPICMButtonStartWorker.c)
 *     ACPIProcessorStartDevice @ 0x1C0007460 (ACPIProcessorStartDevice.c)
 *     ACPIButtonStartDevice @ 0x1C00911D0 (ACPIButtonStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIInternalSetDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, GUID *InterfaceClassGuid)
{
  _QWORD *DeviceExtension; // rsi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  char v7; // bl
  NTSTATUS v8; // edi
  void *v10; // rcx
  void *v11; // r8
  int v12; // r9d
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-18h] BYREF

  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  v7 = 0;
  v8 = v5;
  if ( v5 < 0 )
  {
    v10 = &unk_1C006FE7D;
    v11 = &unk_1C006FE7D;
    if ( DeviceExtension )
    {
      v6 = DeviceExtension[1];
      v7 = (char)DeviceExtension;
      if ( (v6 & 0x200000000000LL) != 0 )
      {
        v10 = (void *)DeviceExtension[70];
        if ( (v6 & 0x400000000000LL) != 0 )
          v11 = (void *)DeviceExtension[71];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 13;
LABEL_16:
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        v12,
        (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
        v8,
        v7,
        (__int64)v10,
        (__int64)v11);
    }
  }
  else
  {
    v8 = IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
    if ( v8 < 0 )
    {
      v10 = &unk_1C006FE7D;
      v11 = &unk_1C006FE7D;
      if ( DeviceExtension )
      {
        v6 = DeviceExtension[1];
        v7 = (char)DeviceExtension;
        if ( (v6 & 0x200000000000LL) != 0 )
        {
          v10 = (void *)DeviceExtension[70];
          if ( (v6 & 0x400000000000LL) != 0 )
            v11 = (void *)DeviceExtension[71];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 14;
        goto LABEL_16;
      }
    }
  }
  return (unsigned int)v8;
}
