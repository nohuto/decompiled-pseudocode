/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133D00
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0133450 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  SetProtocolType(0xFFFFLL);
  v7 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL, a1, 0, 0LL, &v10, 0LL, a3);
  if ( v7 < 0 )
  {
    v7 = v10 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
  }
  else if ( !a2 )
  {
    RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v7;
    WPP_RECORDER_SF_D(v6, 4u, 9u, 0xEu, (__int64)&WPP_2f4edc7644973dcb8f37e7bb2394e69d_Traceguids, v9);
  }
  return (unsigned int)v7;
}
