/*
 * XREFs of ??_GBamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180031430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoStubImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1800650C0 (--1BamoStubImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::BamoPenEventsDispatcherStubImpl *__fastcall BamoImpl::BamoPenEventsDispatcherStubImpl::`scalar deleting destructor'(
        BamoImpl::BamoPenEventsDispatcherStubImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BamoStubImpl::~BamoStubImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
