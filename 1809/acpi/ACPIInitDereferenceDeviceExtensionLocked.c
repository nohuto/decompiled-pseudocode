/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C001952C
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0015A94 (ACPIBuildDevicePowerNodes.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017D68 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002DD7C (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C005D540 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
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
