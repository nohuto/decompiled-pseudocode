/*
 * XREFs of ??_EBamoPenEventsDispatcherPrincipal@@MEAAPEAXI@Z @ 0x180031370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180065098 (--1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

BamoPenEventsDispatcherPrincipal *__fastcall BamoPenEventsDispatcherPrincipal::`vector deleting destructor'(
        BamoPenEventsDispatcherPrincipal *this,
        char a2)
{
  Microsoft::BamoImpl::BamoPrincipalImpl::~BamoPrincipalImpl((BamoPenEventsDispatcherPrincipal *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
