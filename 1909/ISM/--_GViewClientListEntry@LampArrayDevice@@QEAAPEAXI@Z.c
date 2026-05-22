/*
 * XREFs of ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800AE35C
 * Callers:
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800AE1D0 (--1LampArrayDevice@@UEAA@XZ.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800AE3A8 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800AF73C (-RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

LampArrayDevice::ViewClientListEntry *__fastcall LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(
        LampArrayDevice::ViewClientListEntry *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
