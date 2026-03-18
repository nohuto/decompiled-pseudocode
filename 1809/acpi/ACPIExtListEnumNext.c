/*
 * XREFs of ACPIExtListEnumNext @ 0x1C001ACB0
 * Callers:
 *     ACPIDockFindCorrespondingDock @ 0x1C00170BC (ACPIDockFindCorrespondingDock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017EA8 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001A318 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDockDevices @ 0x1C001A3C0 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001A6A0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A9C8 (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AB70 (ACPIGpeBuildWakeMasks.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002E01C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDetectEjectDevices @ 0x1C004D880 (ACPIDetectEjectDevices.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
 */

char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  char *v7; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  KIRQL v9; // bp
  KIRQL v10; // al
  char *v11; // rcx
  char *result; // rax
  bool v13; // zf
  __int64 v14; // r8
  _QWORD *v15; // rdx

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v2;
    v5 = *(_QWORD **)(v4 + v3);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
    {
      v5 = *(_QWORD **)(a1 + 8);
      v6 = (_QWORD *)*v5;
    }
    v7 = (char *)v5 - v4;
    *(_QWORD *)(a1 + 8) = v6;
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), v2);
    BugCheckParameter4 = *(_QWORD *)(a1 + 32);
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter4 + 684), 0xFFFFFFFF) == 1 )
    {
      if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x200000000000000LL) != 0 && *(_DWORD *)(BugCheckParameter4 + 196) )
        KeBugCheckEx(0xA3u, 2uLL, 0x9034BuLL, 0LL, BugCheckParameter4);
      ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLock(&AcpiPowerLock, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v11 = &v7[*(_QWORD *)(a1 + 40)];
    *(_BYTE *)(a1 + 24) = v10;
    result = 0LL;
    v13 = v11 == *(char **)a1;
    *(_QWORD *)(a1 + 32) = v7;
    if ( !v13 )
      return v7;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 40);
    v15 = *(_QWORD **)(v14 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v15 == v15 )
      v15 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(a1 + 32) = (char *)v15 - v14;
    *(_QWORD *)(a1 + 8) = *v15;
    result = 0LL;
    if ( v15 != *(_QWORD **)a1 )
      return (char *)v15 - v14;
  }
  return result;
}
