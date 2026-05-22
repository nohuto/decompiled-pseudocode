/*
 * XREFs of ??1BamoPrincipalImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1800652F8
 * Callers:
 *     ??1BamoPenEventsDispatcherPrincipal@@MEAA@XZ @ 0x1800314C0 (--1BamoPenEventsDispatcherPrincipal@@MEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x1800314D0 (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     ??_EBamoPenEventsDispatcherPrincipal@@MEAAPEAXI@Z @ 0x180031690 (--_EBamoPenEventsDispatcherPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800316D0 (--_GBamoPenEventsDispatcherPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002ACD0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::~BamoPrincipalImpl(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx

  v4 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 2);
  if ( v4 )
    Microsoft::BamoImpl::BamoImplObject::Release(v4, a2, a3, a4);
}
