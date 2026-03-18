/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004BFA0 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInitRemoveDeviceExtension @ 0x1C00101D4 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C00170BC (ACPIDockFindCorrespondingDock.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C001952C (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIExtListTestElement @ 0x1C001A4B4 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C00C (ACPIDevicePowerFlushQueue.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C002DFE8 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(ULONG_PTR a1)
{
  __int64 CorrespondingDock; // rax
  char *i; // rax
  char *v4; // rdi
  KIRQL v5; // si
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD v17[6]; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+50h] [rbp-18h]

  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v17[1] = 0LL;
  v17[0] = a1 + 752;
  v17[2] = &AcpiDeviceTreeLock;
  v17[5] = 768LL;
  v18 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v17); ; i = ACPIExtListEnumNext((__int64)v17) )
  {
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v17, 1) )
      break;
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0LL);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(a1 + 8) & 0x20LL;
  v7 = *(_QWORD *)(a1 + 8) & 0x40LL;
  if ( v7 || v6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x8000000000100uLL);
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x40uLL);
      *(_QWORD *)(a1 + 24) = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x20uLL);
      *(_QWORD *)(a1 + 24) = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x80uLL);
  if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 744);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x20000000000uLL);
      v9 = *(__int64 **)(a1 + 712);
      if ( v9 )
      {
        if ( ACPIDockIsDockDevice(v9) )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 736), SingleBusRelations);
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 400);
  if ( v10 )
  {
    v14 = (_QWORD *)(v10 + 40);
    v15 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  ACPIInitRemoveDeviceExtension((_QWORD *)a1);
  if ( *(_QWORD *)(a1 + 712) )
  {
    v11 = *(_QWORD *)(a1 + 712);
    if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 736);
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 48) & 0x4000000) != 0 )
        {
          ACPIInitDereferenceDeviceExtensionLocked(a1);
          v11 = *(_QWORD *)(a1 + 712);
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)v11 + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
