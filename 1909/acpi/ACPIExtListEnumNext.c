/*
 * XREFs of ACPIExtListEnumNext @ 0x1C00123A0
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0005C90 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C0011490 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDockDevices @ 0x1C0011CE0 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0011E50 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C00120AC (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0012260 (ACPIGpeBuildWakeMasks.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0012560 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002BDD0 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002BE40 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C004F140 (ACPIDetectEjectDevices.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
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
  bool v11; // zf
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  char *v15; // r8

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
    v11 = &v7[*(_QWORD *)(a1 + 40)] == *(char **)a1;
    *(_QWORD *)(a1 + 32) = v7;
    if ( v11 )
      v7 = 0LL;
    *(_BYTE *)(a1 + 24) = v10;
    return v7;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 40);
    v14 = *(_QWORD **)(v13 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v14 == v14 )
      v14 = *(_QWORD **)(a1 + 8);
    v15 = (char *)v14 - v13;
    *(_QWORD *)(a1 + 32) = (char *)v14 - v13;
    *(_QWORD *)(a1 + 8) = *v14;
    if ( v14 == *(_QWORD **)a1 )
      return 0LL;
    return v15;
  }
}
