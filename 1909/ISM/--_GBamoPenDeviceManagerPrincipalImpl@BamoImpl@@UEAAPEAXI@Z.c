/*
 * XREFs of ??_GBamoPenDeviceManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18007D330
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoPenDeviceManagerPrincipalImpl *__fastcall BamoImpl::BamoPenDeviceManagerPrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoPenDeviceManagerPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di
  __int64 v6; // rcx
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  v4 = a2;
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 2);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
