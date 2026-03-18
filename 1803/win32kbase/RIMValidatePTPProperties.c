/*
 * XREFs of RIMValidatePTPProperties @ 0x1C010929C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(__int64 a1, _DWORD *a2)
{
  int v3; // esi
  unsigned int v4; // edi

  v3 = a1;
  v4 = -1073741668;
  if ( a2[6] != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( v3 == 3 && (a2[69] & 0x200) != 0 && a2[170] <= 6u )
    return 0;
  else
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xAu,
      (__int64)&WPP_bf1690b7586b3793459393cbdec69d42_Traceguids);
  return v4;
}
