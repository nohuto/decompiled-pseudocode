/*
 * XREFs of ??_GDeviceRemovalEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8C44
 * Callers:
 *     ??1?$unique_ptr@UDeviceRemovalEventArgs@WGIController@@U?$default_delete@UDeviceRemovalEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x1800A88F0 (--1-$unique_ptr@UDeviceRemovalEventArgs@WGIController@@U-$default_delete@UDeviceRemovalEventArgs.c)
 *     ?NotifyDeviceRemovalCallback@WGIController@@CAJPEAX@Z @ 0x1800AA970 (-NotifyDeviceRemovalCallback@WGIController@@CAJPEAX@Z.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800B030C (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 *     ?NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800B04B0 (-NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

WGIController::DeviceRemovalEventArgs *__fastcall WGIController::DeviceRemovalEventArgs::`scalar deleting destructor'(
        WGIController::DeviceRemovalEventArgs *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
