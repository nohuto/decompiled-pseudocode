/*
 * XREFs of ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0
 * Callers:
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x18010DDD4 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4Tr.c)
 *     ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18010E130 (-GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NOD.c)
 *     ?GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@2@Z @ 0x18010E224 (-GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_N.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x18010E308 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 *     ?StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x18010E3F0 (-StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18010E888 (-StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU.c)
 *     ?StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x18010EA00 (-StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18010EE18 (-StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEB.c)
 *     ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x18010EF64 (-NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z.c)
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18010F010 (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180110DE8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x180114280 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1801143B0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x180117220 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 *     _lambda_5c93fa6c61cd305c53357332304ca747_::operator() @ 0x1801176A0 (_lambda_5c93fa6c61cd305c53357332304ca747_--operator().c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180119230 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180119560 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 * Callees:
 *     TraceLoggingRegister @ 0x1800010A0 (TraceLoggingRegister.c)
 *     atexit @ 0x18012B9E8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

struct HolographicDriverClientContinuousTrace *HolographicDriverClientContinuousTrace::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`HolographicDriverClientContinuousTrace::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = &qword_180193DA8;
    qword_180193DA8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180193DC0 = (TraceLoggingHProvider)&`HolographicDriverClientContinuousTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    qword_180193DB0 = (__int64)qword_180193DC0;
    byte_180193DB8 = 1;
    TraceLoggingRegister(qword_180193DC0);
    dword_180193DBC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180193DA8 + 8))(&qword_180193DA8);
    InitOnceComplete(&`HolographicDriverClientContinuousTrace::Instance'::`2'::wrapper, 0, &qword_180193DA8);
  }
  return (struct HolographicDriverClientContinuousTrace *)Context;
}
