/*
 * XREFs of ??_EBamoPenEventsDispatcherStub@@MEAAPEAXI@Z @ 0x180031710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoStubImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180065320 (--1BamoStubImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoPenEventsDispatcherStub *__fastcall BamoPenEventsDispatcherStub::`vector deleting destructor'(
        BamoPenEventsDispatcherStub *this,
        char a2)
{
  Microsoft::BamoImpl::BamoStubImpl::~BamoStubImpl((BamoPenEventsDispatcherStub *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
