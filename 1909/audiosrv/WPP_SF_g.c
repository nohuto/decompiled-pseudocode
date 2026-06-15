/*
 * XREFs of WPP_SF_g @ 0x1800C8480
 * Callers:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004E950 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x1800C54F0 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800C95B0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800CE680 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800CF0F4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18010F01C (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_g(__int64 a1, unsigned __int16 a2, __int64 a3, double a4)
{
  double v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
