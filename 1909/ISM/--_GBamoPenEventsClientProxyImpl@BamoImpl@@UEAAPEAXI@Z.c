/*
 * XREFs of ??_GBamoPenEventsClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180031330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18005A704 (--1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::BamoPenEventsClientProxyImpl *__fastcall BamoImpl::BamoPenEventsClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BamoProxyImpl::~BamoProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
