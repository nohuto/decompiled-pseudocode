/*
 * XREFs of ??_GBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800313B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180065098 (--1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoImpl::BamoPenEventsDispatcherPrincipalImpl *__fastcall BamoImpl::BamoPenEventsDispatcherPrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoPenEventsDispatcherPrincipalImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BamoPrincipalImpl::~BamoPrincipalImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
