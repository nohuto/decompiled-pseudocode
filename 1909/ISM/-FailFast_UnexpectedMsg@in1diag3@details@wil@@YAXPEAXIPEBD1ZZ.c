/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180066D8C
 * Callers:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002F574 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1800326F4 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 *     _anonymous_namespace_::GetPoseSubKey @ 0x1800D8270 (_anonymous_namespace_--GetPoseSubKey.c)
 *     ?GetInputReportByteLength@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEBAKXZ @ 0x1800EC5A0 (-GetInputReportByteLength@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@U.c)
 *     ?GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAAEAIW4SPATIAL_TRACKING_STATE@@@Z @ 0x180157B68 (-GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Win.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180055840 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        unsigned int a3,
        const char *a4,
        const char *a5,
        ...)
{
  wil::details::ReportFailure_HrMsg((__int64)this, a2);
}
