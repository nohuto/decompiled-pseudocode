/*
 * XREFs of ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x180011D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnZeroReferenceCount(
        Microsoft::BamoImpl::ConnectionIndirector *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  if ( this )
  {
    *(_QWORD *)this = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
    *((_QWORD *)this + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
    {
      v3 = *(void (__fastcall ****)(_QWORD, __int64))(v2 + 16);
      if ( v3 )
        (**v3)(v3, 1LL);
    }
    operator delete(this, (const struct std::nothrow_t *)0x20);
  }
}
