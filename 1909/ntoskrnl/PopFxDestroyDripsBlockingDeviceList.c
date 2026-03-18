/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x1408A52D4
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F204C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogDfxCallback @ 0x1408AA5C0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x1408AA980 (PopDripsWatchdogPs4Callback.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA018 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PopFxReleaseDevice @ 0x1402F4628 (PopFxReleaseDevice.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14085E16C (IoLockUnlockPnpDeviceTree.c)
 */

void __fastcall PopFxDestroyDripsBlockingDeviceList(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = (void *)v2[3];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4D584650u);
      v2[3] = 0LL;
      *((_DWORD *)v2 + 8) = 0;
    }
    PopFxReleaseDevice((__int64)(v2 - 108));
  }
  ExReleasePushLockEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  IoLockUnlockPnpDeviceTree(0);
}
