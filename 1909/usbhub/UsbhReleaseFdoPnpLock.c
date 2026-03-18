/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C001DDAC
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C001D380 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C001DCF0 (Usbh_FDO_WaitPnpAdd.c)
 *     UsbhEtwRundown @ 0x1C002C4EC (UsbhEtwRundown.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0045438 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0045510 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C004DD00 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C0050B4C (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C0051120 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0052200 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C00522A0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0052440 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C00525A4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
