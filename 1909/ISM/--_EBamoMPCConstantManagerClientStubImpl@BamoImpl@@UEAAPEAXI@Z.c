/*
 * XREFs of ??_EBamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180088AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoMPCConstantManagerClientStubImpl *__fastcall BamoImpl::BamoMPCConstantManagerClientStubImpl::`vector deleting destructor'(
        BamoImpl::BamoMPCConstantManagerClientStubImpl *this,
        char a2)
{
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v5 )
    (**v5)(v5);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
