/*
 * XREFs of ??_EPenEventsClientCustomProxy@@UEAAPEAXI@Z @ 0x180031790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18005A964 (--1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

PenEventsClientCustomProxy *__fastcall PenEventsClientCustomProxy::`vector deleting destructor'(
        PenEventsClientCustomProxy *this,
        char a2)
{
  Microsoft::BamoImpl::BamoProxyImpl::~BamoProxyImpl((PenEventsClientCustomProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
