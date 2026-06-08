/*
 * XREFs of PepNotifyPerfSetState @ 0x1C000F920
 * Callers:
 *     PepPerfStateControlHandler @ 0x1C000FA70 (PepPerfStateControlHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyPerfSetState(__int64 a1, char a2, char a3, char a4)
{
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  char v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+49h] [rbp+11h]
  char v9; // [rsp+4Ah] [rbp+12h]

  v7 = a3;
  v9 = a2;
  v8 = a4;
  v4 = PoFxProcessorNotification(a1, 43LL, &v7);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x26u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v6);
  }
  return (unsigned int)v4;
}
