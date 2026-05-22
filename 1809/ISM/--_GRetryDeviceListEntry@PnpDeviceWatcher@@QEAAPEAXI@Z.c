/*
 * XREFs of ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800713A4
 * Callers:
 *     ??1PnpDeviceWatcher@@QEAA@XZ @ 0x180070324 (--1PnpDeviceWatcher@@QEAA@XZ.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800719F4 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

PnpDeviceWatcher::RetryDeviceListEntry *__fastcall PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(
        PnpDeviceWatcher::RetryDeviceListEntry *this)
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
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
