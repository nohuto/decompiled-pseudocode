/*
 * XREFs of ??_GBamoActivationListenerInputObjectProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18005A890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoActivationListenerInputObjectProxyImpl *__fastcall BamoImpl::BamoActivationListenerInputObjectProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoActivationListenerInputObjectProxyImpl *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
