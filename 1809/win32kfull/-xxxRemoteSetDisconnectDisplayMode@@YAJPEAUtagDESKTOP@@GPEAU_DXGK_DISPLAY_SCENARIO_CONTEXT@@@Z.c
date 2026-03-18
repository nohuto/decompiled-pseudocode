/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9CEC
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // ebx
  char v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0;
  SetProtocolType(0xFFFFLL);
  v6 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL, a1, 0, 0LL, &v8, 0LL, a3);
  if ( v6 < 0 )
  {
    v6 = v8 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
  }
  else if ( !a2 )
  {
    RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  return (unsigned int)v6;
}
