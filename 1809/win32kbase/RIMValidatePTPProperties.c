/*
 * XREFs of RIMValidatePTPProperties @ 0x1C01309B8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidatePTPProperties(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v4; // esi
  unsigned int v5; // edi

  v4 = a1;
  v5 = -1073741668;
  if ( a2[6] != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( v4 == 3 && (a2[77] & 0x200) != 0 && a2[178] <= 6u )
    return 0;
  else
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xAu, (__int64)&WPP_73f007a49fbc3e0c9d7274cb4a467b6e_Traceguids);
  return v5;
}
