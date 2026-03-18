/*
 * XREFs of ACPIRootIrpRemoveDevice @ 0x1C005CC10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017D68 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C0026274 (ACPIInitializeKernelTableHandler.c)
 */

__int64 __fastcall ACPIRootIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rdi
  unsigned __int8 MinorFunction; // bp
  char v6; // al
  __int64 v7; // rdx
  const char *v8; // rcx
  char v9; // r10
  const char *v10; // r8
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  KIRQL v14; // al
  struct _DEVICE_OBJECT *v15; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  *(_DWORD *)(DeviceExtension + 320) = 4;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), Irp);
  v7 = *(_QWORD *)(DeviceExtension + 8);
  v8 = (const char *)&unk_1C006E28A;
  v9 = v6;
  v10 = (const char *)&unk_1C006E28A;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(const char **)(DeviceExtension + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 568);
  }
  v11 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v11 = 26LL;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x17u,
    (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
    (char)Irp,
    ACPIDispatchPnpTableNames[v11],
    v9,
    DeviceExtension,
    v8,
    v10);
  if ( IoWMIRegistrationControl(DeviceObject, 2u) < 0 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xBu,
      (__int64)&WPP_2bd5b8f060d2313f062dd09aad0687a8_Traceguids);
  ACPIInitializeKernelTableHandler(0, (__int64)DeviceObject->DriverObject);
  v12 = *(void **)(DeviceExtension + 624);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *(void **)(DeviceExtension + 632);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = 0LL;
  v15 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 728);
  *(_QWORD *)(DeviceExtension + 728) = 0LL;
  *(_QWORD *)(DeviceExtension + 736) = 0LL;
  *(_QWORD *)(DeviceExtension + 720) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 8uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  IoDetachDevice(v15);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
