/*
 * XREFs of ??_GBamoDropTargetClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800163A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoDropTargetClientProxyImpl *__fastcall BamoImpl::BamoDropTargetClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoDropTargetClientProxyImpl *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
