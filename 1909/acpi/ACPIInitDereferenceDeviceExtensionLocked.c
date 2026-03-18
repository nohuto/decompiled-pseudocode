/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C000D830
 * Callers:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000CD74 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002BB30 (ACPIInitResetDeviceExtension.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002C91C (ACPIBuildDevicePowerNodes.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F340 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(ULONG_PTR BugCheckParameter4)
{
  if ( _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter4 + 684)) )
    return 0;
  if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x200000000000000LL) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 196) )
      KeBugCheckEx(0xA3u, 2uLL, 0x9034BuLL, 0LL, BugCheckParameter4);
  }
  ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
  return 1;
}
