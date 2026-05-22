/*
 * XREFs of ??_EBamoDataProviderStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180098AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoDataProviderStubImpl *__fastcall BamoImpl::BamoDataProviderStubImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderStubImpl *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
