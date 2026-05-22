/*
 * XREFs of ??_EBamoSimpleHapticsControllerProxy@@MEAAPEAXI@Z @ 0x18005AE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

BamoSimpleHapticsControllerProxy *__fastcall BamoSimpleHapticsControllerProxy::`vector deleting destructor'(
        BamoSimpleHapticsControllerProxy *this,
        char a2)
{
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v5 )
    (**v5)(v5);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
