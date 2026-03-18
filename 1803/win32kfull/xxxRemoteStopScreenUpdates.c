/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C00BB5A8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00BB750 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0137320 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C01D77E0 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C01D7900 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C01D7950 (xxxRemoteShadowStop.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C01F42A0 (NtUserRemoteStopScreenUpdates.c)
 * Callees:
 *     RemoteDisableScreen @ 0x1C00BB240 (RemoteDisableScreen.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteStopScreenUpdates()
{
  __int16 v0; // bx
  unsigned __int16 v1; // dx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v5; // [rsp+38h] [rbp-79h] BYREF
  __int64 v6; // [rsp+3Ch] [rbp-75h]
  __int64 v7; // [rsp+44h] [rbp-6Dh]
  __int64 v8; // [rsp+4Ch] [rbp-65h]
  int v9; // [rsp+54h] [rbp-5Dh]
  int v10; // [rsp+58h] [rbp-59h]
  __int64 v11; // [rsp+5Ch] [rbp-55h]
  __int64 v12; // [rsp+64h] [rbp-4Dh]
  __int64 v13; // [rsp+6Ch] [rbp-45h]
  int v14; // [rsp+74h] [rbp-3Dh]
  int v15; // [rsp+78h] [rbp-39h]
  __int64 v16; // [rsp+7Ch] [rbp-35h]
  __int64 v17; // [rsp+84h] [rbp-2Dh]
  __int64 v18; // [rsp+8Ch] [rbp-25h]
  int v19; // [rsp+94h] [rbp-1Dh]
  int v20; // [rsp+98h] [rbp-19h]
  __int64 v21; // [rsp+9Ch] [rbp-15h]
  __int64 v22; // [rsp+A4h] [rbp-Dh]
  __int64 v23; // [rsp+ACh] [rbp-5h]
  int v24; // [rsp+B4h] [rbp+3h]
  int v25; // [rsp+B8h] [rbp+7h]
  __int64 v26; // [rsp+BCh] [rbp+Bh]
  __int64 v27; // [rsp+C4h] [rbp+13h]
  __int64 v28; // [rsp+CCh] [rbp+1Bh]
  int v29; // [rsp+D4h] [rbp+23h]
  int v30; // [rsp+D8h] [rbp+27h]
  __int64 v31; // [rsp+DCh] [rbp+2Bh]
  __int64 v32; // [rsp+E4h] [rbp+33h]
  __int64 v33; // [rsp+ECh] [rbp+3Bh]
  int v34; // [rsp+F4h] [rbp+43h]

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
      v5 = -2136735560;
      v10 = -2119892808;
      v15 = -2136866659;
      gwMKButtonState &= ~gwMKCurrentButton;
      v6 = 0LL;
      v2 = 0;
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0;
      v20 = -2120023907;
      v25 = -2136997718;
      v30 = -2120154954;
      do
        xxxProcessKeyEvent(&v5 + 8 * (int)v2++, 0LL, 1LL, 0LL, 0LL);
      while ( v2 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput, v3);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
