/*
 * XREFs of ACPIPepCleanupPlatformNotificationSupport @ 0x1C00B06B8
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004D150 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004D790 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AD9E0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C00096A8 (ACPISetDeviceWorker.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000CD74 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

char __fastcall ACPIPepCleanupPlatformNotificationSupport(ULONG_PTR a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  char result; // al

  if ( *(_BYTE *)(a1 + 240) )
  {
    v2 = *(void **)(a1 + 256);
    if ( v2 )
    {
      PoUnregisterPowerSettingCallback(v2);
      *(_QWORD *)(a1 + 256) = 0LL;
    }
    v3 = *(void **)(a1 + 264);
    if ( v3 )
    {
      PoUnregisterPowerSettingCallback(v3);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
    v4 = *(void **)(a1 + 272);
    if ( v4 )
    {
      PoUnregisterPowerSettingCallback(v4);
      *(_QWORD *)(a1 + 272) = 0LL;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 184));
    KeInitializeEvent((PRKEVENT)(a1 + 280), NotificationEvent, 0);
    *(_DWORD *)(a1 + 252) = 0;
    *(_DWORD *)(a1 + 248) = 1;
    *(_BYTE *)(a1 + 243) = 0;
    *(_BYTE *)(a1 + 245) = 0;
    ACPISetDeviceWorker(a1, 1);
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 184));
    KeWaitForSingleObject((PVOID)(a1 + 280), Executive, 0, 0, 0LL);
    *(_BYTE *)(a1 + 240) = 0;
    return ACPIInitDereferenceDeviceExtensionUnlocked(a1);
  }
  return result;
}
