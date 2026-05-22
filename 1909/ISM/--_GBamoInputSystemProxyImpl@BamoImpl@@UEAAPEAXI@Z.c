/*
 * XREFs of ??_GBamoInputSystemProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18005ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x18005A5B0 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSystemProxyImpl *__fastcall BamoImpl::BamoInputSystemProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSystemProxyImpl *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
