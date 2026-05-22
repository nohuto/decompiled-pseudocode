/*
 * XREFs of ??1?$unique_ptr@UInputReportEventArgs@WGIController@@U?$default_delete@UInputReportEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x18006F2E0
 * Callers:
 *     _WGIController::NotifyInputReport_::_1_::dtor$0 @ 0x1801318B0 (_WGIController--NotifyInputReport_--_1_--dtor$0.c)
 *     _WGIController::NotifyInputReportCallback_::_1_::dtor$0 @ 0x1801318F9 (_WGIController--NotifyInputReportCallback_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unique_ptr<WGIController::InputReportEventArgs>::~unique_ptr<WGIController::InputReportEventArgs>(
        __int64 **a1,
        const struct std::nothrow_t *a2)
{
  __int64 *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (void *)v2[1];
    if ( v3 )
      operator delete(v3, a2);
    v4 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
}
