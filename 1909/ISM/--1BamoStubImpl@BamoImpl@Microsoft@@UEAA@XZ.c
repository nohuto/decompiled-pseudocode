/*
 * XREFs of ??1BamoStubImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x1800650C0
 * Callers:
 *     ??_EBamoPenEventsDispatcherStub@@MEAAPEAXI@Z @ 0x1800313F0 (--_EBamoPenEventsDispatcherStub@@MEAAPEAXI@Z.c)
 *     ??_GBamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180031430 (--_GBamoPenEventsDispatcherStubImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::~BamoStubImpl(Microsoft::BamoImpl::BamoStubImpl *this)
{
  void (__fastcall ***v1)(_QWORD); // rcx

  v1 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v1 )
    (**v1)(v1);
}
