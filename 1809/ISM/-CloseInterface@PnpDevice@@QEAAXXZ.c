/*
 * XREFs of ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x180073290
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ??1PnpDevice@@UEAA@XZ @ 0x18007319C (--1PnpDevice@@UEAA@XZ.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x18007715C (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpDevice::CloseInterface(PnpDevice *this)
{
  void *v1; // rbx

  v1 = (void *)_InterlockedExchange64((volatile __int64 *)this + 5, -1LL);
  if ( v1 != (void *)-1LL )
  {
    CancelIoEx(v1, 0LL);
    CloseHandle(v1);
  }
}
