/*
 * XREFs of UsbhFreeID @ 0x1C0020F94
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhGetProductIdString @ 0x1C001D030 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00207C4 (UsbhGetSerialNumber.c)
 *     UsbhQueryParentHubConfig @ 0x1C00209A8 (UsbhQueryParentHubConfig.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0029424 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0056860 (UsbhBuildUnknownIds.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C005A08C (UsbhRemoveAndDeletePdo.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
