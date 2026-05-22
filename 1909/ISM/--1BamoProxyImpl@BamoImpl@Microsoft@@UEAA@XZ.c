/*
 * XREFs of ??1BamoProxyImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x18005A704
 * Callers:
 *     ??_GBamoPenEventsDispatcherProxy@@MEAAPEAXI@Z @ 0x18002E1D0 (--_GBamoPenEventsDispatcherProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoSystemButtonEventControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18002E210 (--_EBamoSystemButtonEventControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_ESystemButtonEventController@@UEAAPEAXI@Z @ 0x18002F840 (--_ESystemButtonEventController@@UEAAPEAXI@Z.c)
 *     ??_GBamoPenEventsClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180031330 (--_GBamoPenEventsClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EPenEventsClientCustomProxy@@UEAAPEAXI@Z @ 0x180031470 (--_EPenEventsClientCustomProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::~BamoProxyImpl(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  void (__fastcall ***v1)(_QWORD); // rcx

  v1 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v1 )
    (**v1)(v1);
}
