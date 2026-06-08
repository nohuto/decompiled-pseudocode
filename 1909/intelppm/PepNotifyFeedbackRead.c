/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C000F764
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x1C000F570 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x1C000F5F0 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x1C000F670 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000F6F0 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  v2 = PoFxProcessorNotification(a1, 10LL, a2);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x24u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
