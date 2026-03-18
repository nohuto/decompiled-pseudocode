/*
 * XREFs of ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x1800A5C40
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800A5CA8 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x1800A6AA0 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        const unsigned __int16 *a4)
{
  __int64 v7; // r11
  _BYTE v9[24]; // [rsp+30h] [rbp-38h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v9, 0LL);
  return CAnimationTracking::BeginAnimationScenario(
           (CAnimationTracking *)(v7 + 26240),
           a2,
           a3,
           a4,
           (const struct CAnimationTracking::TelFrameInfo *)v9);
}
