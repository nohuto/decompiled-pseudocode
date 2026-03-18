/*
 * XREFs of ACPIBuildPdo @ 0x1C0010D74
 * Callers:
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A3C0 (ACPIDetectDockDevices.c)
 * Callees:
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C0011090 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     ACPIAddInitializationDependencies @ 0x1C0011158 (ACPIAddInitializationDependencies.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 *     ACPIIsDebuggingDevice @ 0x1C0095DA4 (ACPIIsDebuggingDevice.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C00A9608 (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00A9678 (AcpiArblibInitializeArbiter.c)
 */

NTSTATUS __fastcall ACPIBuildPdo(struct _DRIVER_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3, char a4)
{
  __int64 v4; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // r15
  NTSTATUS result; // eax
  KIRQL v10; // r14
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rdi
  char *v16; // rax
  int v17; // esi
  unsigned int *v18; // r14
  unsigned int v19; // edi
  PVOID *v20; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(_QWORD *)(a2 + 712);
  DeviceObject = 0LL;
  AttachedDeviceReference = 0LL;
  result = IoCreateDevice(a1, 0, 0LL, 0x32u, 0x180u, 0, &DeviceObject);
  if ( result < 0 )
    return result;
  if ( a4 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x100000) != 0 )
    {
      a4 = 0;
    }
    else
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(a3);
      if ( !AttachedDeviceReference )
      {
        v17 = -1073741810;
        goto LABEL_45;
      }
    }
  }
  if ( (*(_QWORD *)(a2 + 8) & 0x2000000000LL) != 0 )
  {
    if ( !(unsigned __int8)AMLIIsNamedChildPresent(v4, 1397900127LL) )
    {
      *(_BYTE *)(a2 + 184) = 0;
      goto LABEL_4;
    }
    *(_BYTE *)(a2 + 184) = 1;
    v18 = (unsigned int *)&AcpiArbiterResourceTypes;
    v19 = 0;
    while ( 1 )
    {
      v17 = AcpiArblibInitializeArbiter(a2, *v18, a2 + 192 + 8LL * v19);
      if ( v17 < 0 )
        break;
      ++v19;
      ++v18;
      if ( v19 >= 3 )
        goto LABEL_4;
    }
    if ( v19 )
    {
      v20 = (PVOID *)(a2 + 8LL * v19 + 192);
      do
      {
        AcpiArblibFreeArbiterInstance(*--v20);
        --v19;
      }
      while ( v19 );
    }
LABEL_45:
    IoDeleteDevice(DeviceObject);
    return v17;
  }
LABEL_4:
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = (void *)a2;
  v11 = DeviceObject;
  *(_QWORD *)(a2 + 720) = DeviceObject;
  *(_QWORD *)(a2 + 736) = v11;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 684));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x20uLL);
  LODWORD(v11) = *(_DWORD *)(a2 + 320);
  *(_QWORD *)(a2 + 8) |= 0x800uLL;
  *(_QWORD *)(a2 + 952) |= 0x800uLL;
  *(_QWORD *)(a2 + 24) = &AcpiPdoIrpDispatch;
  *(_DWORD *)(a2 + 324) = (_DWORD)v11;
  *(_DWORD *)(a2 + 320) = 0;
  if ( a4 )
  {
    *(_QWORD *)(a2 + 728) = AttachedDeviceReference;
    _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40uLL);
    *(_QWORD *)(a2 + 24) = &AcpiBusFilterIrpDispatch;
    DeviceObject->StackSize = AttachedDeviceReference->StackSize + 1;
    DeviceObject->AlignmentRequirement = AttachedDeviceReference->AlignmentRequirement;
    if ( (AttachedDeviceReference->Flags & 0x2000) != 0 )
      DeviceObject->Flags |= 0x2000u;
  }
  v12 = *(_QWORD *)(a2 + 8);
  if ( (v12 & 0x1000000000LL) != 0 )
  {
    v16 = (char *)&AcpiProcessorIrpDispatch;
  }
  else if ( (v12 & 0x8000000) != 0 )
  {
    v16 = (char *)&AcpiThermalZoneIrpDispatch;
  }
  else if ( (*(_QWORD *)(a2 + 952) & 0x10000000000LL) != 0 )
  {
    v16 = (char *)&AcpiPepIrpDispatch;
  }
  else
  {
    if ( (v12 & 0x200000000000LL) == 0 )
      goto LABEL_17;
    if ( !*(_QWORD *)(a2 + 560) )
      goto LABEL_17;
    v13 = AcpiInternalDeviceTable;
    v14 = 0;
    if ( !AcpiInternalDeviceTable )
      goto LABEL_17;
    v15 = 0LL;
    while ( !strstr(*(const char **)(a2 + 560), v13) )
    {
      v15 = ++v14;
      v13 = (&AcpiInternalDeviceTable)[2 * v14];
      if ( !v13 )
        goto LABEL_17;
    }
    v16 = (&AcpiInternalDeviceTable)[2 * v15 + 1];
  }
  *(_QWORD *)(a2 + 24) = v16;
LABEL_17:
  if ( (*(_QWORD *)(a2 + 8) & 0x8000000040000LL) == 0x8000000040000LL )
    FixedButtonDeviceObject = (__int64)DeviceObject;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
  ACPIAddInitializationDependencies(a2);
  if ( (*(_BYTE *)(a2 + 952) & 0x40) != 0 )
    *(_QWORD *)(a2 + 24) = &AcpiDepPdoIrpDispatch;
  AcpiEvaluateBiosMethodsOnPciRootBus(a2);
  if ( (*(_QWORD *)(a2 + 8) & 0x8000000000000LL) == 0 && (int)ACPIIsDebuggingDevice(DeviceObject) >= 0 )
    DeviceObject->Flags |= 0x2000000u;
  DeviceObject->Flags &= ~0x80u;
  if ( (*(_QWORD *)(a2 + 8) & 0x10000000000000LL) != 0 )
    DeviceObject->Flags |= 8u;
  return 0;
}
