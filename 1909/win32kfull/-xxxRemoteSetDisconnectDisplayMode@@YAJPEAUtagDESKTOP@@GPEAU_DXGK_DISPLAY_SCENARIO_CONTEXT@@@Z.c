/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010E800
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  char v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  SetProtocolType(0xFFFFLL);
  v8 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL, a1, 0, 0LL, &v10, 0LL, a3);
  if ( v8 < 0 )
  {
    v8 = v10 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
  }
  else if ( !a2 )
  {
    RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_D(v7, v6, 9, 14, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids, v8);
  }
  return (unsigned int)v8;
}
