/*
 * XREFs of ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x180070904
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800703F8 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x180072360 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x18007254C (--1ConsumerControlManager@@EEAA@XZ.c)
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x180072B94 (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x180072C58 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

ConsumerControlManager::ConsumerControlNexusDeviceListEntry *__fastcall ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry *this)
{
  volatile signed __int32 *v2; // rbx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v2 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
      *((_DWORD *)v2 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
    }
  }
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
