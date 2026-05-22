/*
 * XREFs of ??_EBamoSystemButtonEventControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18002E530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18005A964 (--1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::BamoSystemButtonEventControllerProxyImpl *__fastcall BamoImpl::BamoSystemButtonEventControllerProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoSystemButtonEventControllerProxyImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BamoProxyImpl::~BamoProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
