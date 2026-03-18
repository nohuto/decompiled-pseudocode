/*
 * XREFs of UsbhFreeID @ 0x1C001DC1C
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0021554 (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C002A5E4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0058BF0 (UsbhBuildUnknownIds.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C005C464 (UsbhRemoveAndDeletePdo.c)
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
