/*
 * XREFs of ??1?$unique_ptr@UGameInputDeviceInfo@@U?$default_delete@UGameInputDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800A890C
 * Callers:
 *     _WGIController::NotifyDeviceAttach_::_1_::dtor$0 @ 0x1800AA74D (_WGIController--NotifyDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<GameInputDeviceInfo>::~unique_ptr<GameInputDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x158);
}
