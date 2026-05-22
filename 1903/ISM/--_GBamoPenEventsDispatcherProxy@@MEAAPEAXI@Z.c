/*
 * XREFs of ??_GBamoPenEventsDispatcherProxy@@MEAAPEAXI@Z @ 0x18002E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18005A964 (--1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoPenEventsDispatcherProxy *__fastcall BamoPenEventsDispatcherProxy::`scalar deleting destructor'(
        BamoPenEventsDispatcherProxy *this,
        char a2)
{
  Microsoft::BamoImpl::BamoProxyImpl::~BamoProxyImpl((BamoPenEventsDispatcherProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
