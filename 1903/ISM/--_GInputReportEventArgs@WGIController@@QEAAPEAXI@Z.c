/*
 * XREFs of ??_GInputReportEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8E1C
 * Callers:
 *     ??1?$unique_ptr@UInputReportEventArgs@WGIController@@U?$default_delete@UInputReportEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x1800A8AA0 (--1-$unique_ptr@UInputReportEventArgs@WGIController@@U-$default_delete@UInputReportEventArgs@WGI.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800AABA8 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?NotifyInputReportCallback@WGIController@@CAJPEAX@Z @ 0x1800AAD30 (-NotifyInputReportCallback@WGIController@@CAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

WGIController::InputReportEventArgs *__fastcall WGIController::InputReportEventArgs::`scalar deleting destructor'(
        WGIController::InputReportEventArgs *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    operator delete(v3, a2);
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
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
