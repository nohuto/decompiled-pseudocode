/*
 * XREFs of ??_EBamoDragNDropContextualProcessorStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180065430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoDragNDropContextualProcessorStubImpl *__fastcall BamoImpl::BamoDragNDropContextualProcessorStubImpl::`vector deleting destructor'(
        BamoImpl::BamoDragNDropContextualProcessorStubImpl *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
