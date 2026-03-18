/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x1C000CF7C
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000CAD0 (ACPICMButtonStartWorker.c)
 *     ACPIProcessorStartDevice @ 0x1C000CDE0 (ACPIProcessorStartDevice.c)
 *     ACPIButtonStartDevice @ 0x1C008E900 (ACPIButtonStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
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

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  v7 = 0;
  v8 = v5;
  if ( v5 < 0 )
  {
    v10 = &unk_1C006E28A;
    v11 = &unk_1C006E28A;
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
    v12 = 13;
    goto LABEL_14;
  }
  v8 = IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
  if ( v8 < 0 )
  {
    v10 = &unk_1C006E28A;
    v11 = &unk_1C006E28A;
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
    v12 = 14;
LABEL_14:
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
  return (unsigned int)v8;
}
