/*
 * XREFs of ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x18001ED50
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x18001ECC0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 *     ??_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18001EE30 (--_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl(
        BamoImpl::BamoInputSiteElementProxyImpl *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD); // rcx

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v9 )
    (**v9)(v9);
}
