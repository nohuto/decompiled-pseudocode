/*
 * XREFs of ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C0182CB8
 * Callers:
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017EB80 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01826B8 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C018F8F0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::PalmRejectTimerProc(DelayZonePalmRejection *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 8, 10, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids);
  *((_BYTE *)this + 8) = 0;
  DelayZonePalmRejection::DispatchBufferedInputFrames(this);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    v4 = *((unsigned int *)this + 1);
    v5 = 0uLL;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v3, v4, v2, 1LL, &v5);
  }
}
