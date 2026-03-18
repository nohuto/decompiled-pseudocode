/*
 * XREFs of ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C014FE10
 * Callers:
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CBD0 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0006714 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C014F7FC (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0156D4C (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void DelayZonePalmRejection::PalmRejectTimerProcStatic(void)
{
  struct DelayZonePalmRejection *Instance; // rbx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v5, 1, 0);
  Instance = DelayZonePalmRejection::GetInstance();
  WPP_RECORDER_SF_(
    *((_QWORD *)Instance + 14),
    4u,
    0xDu,
    0xAu,
    (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids);
  *((_BYTE *)Instance + 8) = 0;
  DelayZonePalmRejection::DispatchBufferedInputFrames(Instance);
  v2 = *((_QWORD *)Instance + 17);
  if ( v2 )
  {
    v3 = *((unsigned int *)Instance + 1);
    v4 = 0uLL;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v2, v3, v1, 1LL, &v4);
  }
  if ( v5 && !v6 && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
}
