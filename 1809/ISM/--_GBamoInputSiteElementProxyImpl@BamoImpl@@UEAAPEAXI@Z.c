/*
 * XREFs of ??_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18001EE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x18001ED50 (--1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoInputSiteElementProxyImpl *__fastcall BamoImpl::BamoInputSiteElementProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2)
{
  BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
