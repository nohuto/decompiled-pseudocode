/*
 * XREFs of ??_GBamoInputSystemProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18005AF10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x18005A810 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
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
