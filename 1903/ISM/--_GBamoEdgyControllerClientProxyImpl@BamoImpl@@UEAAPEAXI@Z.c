/*
 * XREFs of ??_GBamoEdgyControllerClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18006E940
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoEdgyControllerClientProxyImpl *__fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
