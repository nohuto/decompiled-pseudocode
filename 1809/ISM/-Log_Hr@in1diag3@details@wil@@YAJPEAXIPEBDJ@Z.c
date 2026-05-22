/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005EF6C
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18005E1E0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18005EFA8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x18005F4A0 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18005FB64 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?StopActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AA5B0 (-StopActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B4284 (-IgnoreCurrentThread@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4944 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_.c)
 *     ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800ECEA0 (-OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800ECFB0 (-OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x18010A1F0 (-StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x18010A860 (-StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x18010AEC0 (-StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@CloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x18010B4B0 (-StopActivity@CloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x18010E3F0 (-StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x18010EA00 (-StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180119560 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180119B20 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011A400 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800033AC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
  return v4;
}
