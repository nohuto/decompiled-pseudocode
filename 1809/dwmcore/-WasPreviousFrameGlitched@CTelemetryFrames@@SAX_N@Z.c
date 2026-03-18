/*
 * XREFs of ?WasPreviousFrameGlitched@CTelemetryFrames@@SAX_N@Z @ 0x18008377C
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTelemetryFrames::WasPreviousFrameGlitched(char a1)
{
  if ( a1 )
  {
    ++dword_1803080C8;
    if ( byte_180308210 )
      ++dword_1803080A4;
    if ( byte_180308211 )
      ++dword_1803080A0;
    if ( ++dword_180307F08 > CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold )
      anonymous_namespace_::FireFatFramesAlarm();
  }
  else
  {
    dword_180307F08 = 0;
  }
}
