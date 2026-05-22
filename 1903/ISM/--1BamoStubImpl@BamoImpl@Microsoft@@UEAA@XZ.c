/*
 * XREFs of ??1BamoStubImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180065320
 * Callers:
 *     ??_EBamoPenEventsDispatcherStub@@MEAAPEAXI@Z @ 0x180031710 (--_EBamoPenEventsDispatcherStub@@MEAAPEAXI@Z.c)
 *     ??_GBamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180031750 (--_GBamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::~BamoStubImpl(Microsoft::BamoImpl::BamoStubImpl *this)
{
  void (__fastcall ***v1)(_QWORD); // rcx

  v1 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v1 )
    (**v1)(v1);
}
