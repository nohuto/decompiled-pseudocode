/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x14086A854
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogDfxCallback @ 0x14086F520 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x14086F890 (PopDripsWatchdogPs4Callback.c)
 *     PopDripsCallbackTakeAction @ 0x14087A7A8 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14087A9E8 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PopFxReleaseDevice @ 0x1402D94F4 (PopFxReleaseDevice.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
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
