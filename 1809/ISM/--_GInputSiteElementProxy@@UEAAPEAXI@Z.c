/*
 * XREFs of ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x18001ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x18001ED50 (--1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x1800213A4 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

InputSiteElementProxy *__fastcall InputSiteElementProxy::`scalar deleting destructor'(
        InputSiteElementProxy *this,
        char a2)
{
  InputSite *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  v4 = (InputSite *)*((_QWORD *)this + 15);
  if ( v4 )
    InputSite::RemoveAllObjectsForElement(v4, this);
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl((InputSiteElementProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
