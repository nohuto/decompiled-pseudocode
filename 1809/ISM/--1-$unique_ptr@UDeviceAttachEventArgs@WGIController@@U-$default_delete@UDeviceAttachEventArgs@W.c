/*
 * XREFs of ??1?$unique_ptr@UDeviceAttachEventArgs@WGIController@@U?$default_delete@UDeviceAttachEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x18006F388
 * Callers:
 *     _WGIController::NotifyDeviceAttach_::_1_::dtor$0 @ 0x180131868 (_WGIController--NotifyDeviceAttach_--_1_--dtor$0.c)
 *     _WGIController::NotifyDeviceAttachCallback_::_1_::dtor$0 @ 0x18013187A (_WGIController--NotifyDeviceAttachCallback_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unique_ptr<WGIController::DeviceAttachEventArgs>::~unique_ptr<WGIController::DeviceAttachEventArgs>(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[1];
    if ( v2 )
    {
      v1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
