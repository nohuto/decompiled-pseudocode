/*
 * XREFs of ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E000
 * Callers:
 *     ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C013B650 (-GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C013B8C0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C013BB40 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C013C100 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D3F0 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C01342A8 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E03C (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDevice(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  return CTouchProcessor::GetPreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
}
