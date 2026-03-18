/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C00EA1E8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C01FC5A0 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C01FC6E0 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C01FC730 (xxxRemoteShadowStop.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C021BA50 (NtUserRemoteStopScreenUpdates.c)
 * Callees:
 *     RemoteDisableScreen @ 0x1C00EA398 (RemoteDisableScreen.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteStopScreenUpdates()
{
  __int16 v0; // bx
  unsigned __int16 v1; // dx
  unsigned int v2; // ebx
  int v4; // [rsp+38h] [rbp-79h] BYREF
  __int64 v5; // [rsp+3Ch] [rbp-75h]
  __int64 v6; // [rsp+44h] [rbp-6Dh]
  __int64 v7; // [rsp+4Ch] [rbp-65h]
  int v8; // [rsp+54h] [rbp-5Dh]
  int v9; // [rsp+58h] [rbp-59h]
  __int64 v10; // [rsp+5Ch] [rbp-55h]
  __int64 v11; // [rsp+64h] [rbp-4Dh]
  __int64 v12; // [rsp+6Ch] [rbp-45h]
  int v13; // [rsp+74h] [rbp-3Dh]
  int v14; // [rsp+78h] [rbp-39h]
  __int64 v15; // [rsp+7Ch] [rbp-35h]
  __int64 v16; // [rsp+84h] [rbp-2Dh]
  __int64 v17; // [rsp+8Ch] [rbp-25h]
  int v18; // [rsp+94h] [rbp-1Dh]
  int v19; // [rsp+98h] [rbp-19h]
  __int64 v20; // [rsp+9Ch] [rbp-15h]
  __int64 v21; // [rsp+A4h] [rbp-Dh]
  __int64 v22; // [rsp+ACh] [rbp-5h]
  int v23; // [rsp+B4h] [rbp+3h]
  int v24; // [rsp+B8h] [rbp+7h]
  __int64 v25; // [rsp+BCh] [rbp+Bh]
  __int64 v26; // [rsp+C4h] [rbp+13h]
  __int64 v27; // [rsp+CCh] [rbp+1Bh]
  int v28; // [rsp+D4h] [rbp+23h]
  int v29; // [rsp+D8h] [rbp+27h]
  __int64 v30; // [rsp+DCh] [rbp+2Bh]
  __int64 v31; // [rsp+E4h] [rbp+33h]
  __int64 v32; // [rsp+ECh] [rbp+3Bh]
  int v33; // [rsp+F4h] [rbp+43h]

  if ( !gbFreezeScreenUpdates )
  {
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskDisconnect )
    {
      v0 = gwMKButtonState & ~gwMKCurrentButton;
      v1 = (v0 ^ gwMKButtonState) & 1 | 2;
      if ( (((unsigned __int8)v0 ^ gwMKButtonState) & 2) == 0 )
        v1 = (v0 ^ gwMKButtonState) & 1;
      if ( v1 )
        ReleaseMouseButton(v1);
      v4 = -2136735560;
      v9 = -2119892808;
      v14 = -2136866659;
      gwMKButtonState &= ~gwMKCurrentButton;
      v5 = 0LL;
      v2 = 0;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0;
      v19 = -2120023907;
      v24 = -2136997718;
      v29 = -2120154954;
      do
        xxxProcessKeyEvent(&v4 + 8 * (int)v2++, 0LL, 1LL, 0LL, 0LL);
      while ( v2 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
