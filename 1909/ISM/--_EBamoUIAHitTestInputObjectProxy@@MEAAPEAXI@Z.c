/*
 * XREFs of ??_EBamoUIAHitTestInputObjectProxy@@MEAAPEAXI@Z @ 0x18005AA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

BamoUIAHitTestInputObjectProxy *__fastcall BamoUIAHitTestInputObjectProxy::`vector deleting destructor'(
        BamoUIAHitTestInputObjectProxy *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
