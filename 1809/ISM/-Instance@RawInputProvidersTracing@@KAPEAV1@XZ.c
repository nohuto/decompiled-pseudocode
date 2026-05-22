/*
 * XREFs of ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358
 * Callers:
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x18005F4A0 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x18005F9F4 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18005FB64 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18005FF98 (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800600F8 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x180060188 (-FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x180060220 (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 *     ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800604B8 (-TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180060560 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800615FC (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180061720 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800623E0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180062570 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z @ 0x180062A60 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z.c)
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCControllerDeviceInfo@@@Z @ 0x180062EF0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCControllerDeviceInfo@@@Z.c)
 *     ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x180063340 (-OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180063800 (-NotifyFailure@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_.c)
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x18006991C (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x180069D00 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x1800010A0 (TraceLoggingRegister.c)
 *     atexit @ 0x18012B9E8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

struct RawInputProvidersTracing *RawInputProvidersTracing::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180193650;
    qword_180193650 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180193668 = (TraceLoggingHProvider)&`RawInputProvidersTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    qword_180193658 = (__int64)qword_180193668;
    byte_180193660 = 1;
    TraceLoggingRegister(qword_180193668);
    dword_180193664 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180193650 + 8))(&qword_180193650);
    InitOnceComplete(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 0, &qword_180193650);
  }
  return (struct RawInputProvidersTracing *)Context;
}
