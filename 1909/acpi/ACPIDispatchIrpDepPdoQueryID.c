/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x1C002B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C000BAF0 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000EE90 (ACPIDevicePowerFlushQueue.c)
 *     AMLIIsNamedChildPresent @ 0x1C0015950 (AMLIIsNamedChildPresent.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C002B800 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildFlushQueue @ 0x1C0096E18 (ACPIBuildFlushQueue.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C00ACC34 (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00ACCA4 (AcpiArblibInitializeArbiter.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // r12
  _UNKNOWN **v8; // rax
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int *v14; // rsi
  __int64 v15; // rbx
  int v16; // r14d
  PVOID *v17; // rdi
  const char *v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) == 0 )
  {
LABEL_2:
    v8 = &AcpiBusFilterIrpDispatch;
    if ( (*(_BYTE *)(DeviceExtension + 8) & 0x40) == 0 )
      v8 = &AcpiPdoIrpDispatch;
    *(_QWORD *)(DeviceExtension + 24) = v8;
    v9 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v9 & 0x1000000000LL) != 0 )
    {
      v10 = (char *)&AcpiProcessorIrpDispatch;
    }
    else if ( (v9 & 0x8000000) != 0 )
    {
      v10 = (char *)&AcpiThermalZoneIrpDispatch;
    }
    else if ( (*(_QWORD *)(DeviceExtension + 952) & 0x10000000000LL) != 0 )
    {
      v10 = (char *)&AcpiPepIrpDispatch;
    }
    else
    {
      if ( (v9 & 0x200000000000LL) == 0
        || !*(_QWORD *)(DeviceExtension + 560)
        || (v18 = AcpiInternalDeviceTable, v19 = 0, !AcpiInternalDeviceTable) )
      {
LABEL_7:
        if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000040000LL) == 0x8000000040000LL )
          FixedButtonDeviceObject = a1;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
        AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension, v11, v12);
        return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 24LL)
                                                             + 152LL))(
                 a1,
                 a2);
      }
      v20 = 0LL;
      while ( !strstr(*(const char **)(DeviceExtension + 560), v18) )
      {
        v20 = ++v19;
        v18 = (&AcpiInternalDeviceTable)[2 * v19];
        if ( !v18 )
          goto LABEL_7;
      }
      v10 = (&AcpiInternalDeviceTable)[2 * v20 + 1];
    }
    *(_QWORD *)(DeviceExtension + 24) = v10;
    goto LABEL_7;
  }
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 712), 1397900127) )
  {
    *(_BYTE *)(DeviceExtension + 184) = 0;
    goto LABEL_2;
  }
  *(_BYTE *)(DeviceExtension + 184) = 1;
  v14 = (unsigned int *)&AcpiArbiterResourceTypes;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = AcpiArblibInitializeArbiter(DeviceExtension, *v14, DeviceExtension + 192 + 8 * v15);
    if ( v16 < 0 )
      break;
    v15 = (unsigned int)(v15 + 1);
    ++v14;
    if ( (unsigned int)v15 >= 3 )
      goto LABEL_2;
  }
  if ( (_DWORD)v15 )
  {
    v17 = (PVOID *)(DeviceExtension + 8 * v15 + 192);
    do
    {
      AcpiArblibFreeArbiterInstance(*--v17);
      LODWORD(v15) = v15 - 1;
    }
    while ( (_DWORD)v15 );
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return (unsigned int)v16;
}
