/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x140869614
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D74D0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogDfxCallback @ 0x14086E2E0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x14086E650 (PopDripsWatchdogPs4Callback.c)
 *     PopDripsCallbackTakeAction @ 0x140879568 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1408797A8 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     PopFxReleaseDevice @ 0x1402D9204 (PopFxReleaseDevice.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
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
    PopFxReleaseDevice((__int64)(v2 - 107));
  }
  ExReleasePushLockEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PpDevNodeUnlockTree(0);
}
