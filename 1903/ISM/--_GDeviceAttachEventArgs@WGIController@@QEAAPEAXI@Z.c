/*
 * XREFs of ??_GDeviceAttachEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8D1C
 * Callers:
 *     ??1?$unique_ptr@UDeviceAttachEventArgs@WGIController@@U?$default_delete@UDeviceAttachEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x1800A8A44 (--1-$unique_ptr@UDeviceAttachEventArgs@WGIController@@U-$default_delete@UDeviceAttachEventArgs@W.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z @ 0x1800AA710 (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z.c)
 *     ?NotifyDeviceAttachCallback@WGIController@@CAJPEAX@Z @ 0x1800AA8A0 (-NotifyDeviceAttachCallback@WGIController@@CAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

WGIController::DeviceAttachEventArgs *__fastcall WGIController::DeviceAttachEventArgs::`scalar deleting destructor'(
        WGIController::DeviceAttachEventArgs *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)0x158);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
