/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0011E50 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004D150 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004D790 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C000D830 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000EE90 (ACPIDevicePowerFlushQueue.c)
 *     ACPIExtListTestElement @ 0x1C0011DE0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C00123A0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0012504 (ACPIExtListStartEnum.c)
 *     ACPIDockIsDockDevice @ 0x1C0017620 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C002B4BC (ACPIInitRemoveDeviceExtension.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C002BD9C (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002BE40 (ACPIDockFindCorrespondingDock.c)
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
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]
  int v21; // [rsp+54h] [rbp-14h]

  v21 = 0;
  v18 = 0LL;
  CorrespondingDock = ACPIDockFindCorrespondingDock();
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v17[1] = 0LL;
  v17[0] = a1 + 752;
  v17[2] = &AcpiDeviceTreeLock;
  v19 = 768LL;
  v20 = 1;
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
      v9 = *(_QWORD *)(a1 + 712);
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
  ACPIInitRemoveDeviceExtension(a1);
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
